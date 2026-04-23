#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimEntityRotateAxis.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMENTITYROTATECONFIG_METHOD_2_88B5B136A0669761_OFFSET UNITYSDK_OFFSET(0x188FF400)
#define RPG_GAMECORE_FIVEDIMENTITYROTATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x188FF5D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEntityRotateConfig_TypeDefinitionIndex = 17815;

	class FiveDimEntityRotateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean IsRotateEntityRoot; // 0x10
		::System::Single Duration; // 0x14
		::System::Single RotateSpeed; // 0x18
		::RPG::GameCore::FiveDimEntityRotateAxis RotateAxis; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTITYROTATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_88B5B136A0669761(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEntityRotateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEntityRotateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTITYROTATECONFIG_METHOD_2_88B5B136A0669761_OFFSET))(a1, a2);
		}
	};
}
