#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEBUFFTEXT_METHOD_3_A73D56702C562A34_OFFSET UNITYSDK_OFFSET(0x1D22E790)
#define RPG_GAMECORE_MARBLEBUFFTEXT_METHOD_3_C10EA56289AD88CA_OFFSET UNITYSDK_OFFSET(0x1D22E730)
#define RPG_GAMECORE_MARBLEBUFFTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D22E780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleBuffText_TypeDefinitionIndex = 16660;

	class MarbleBuffText : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x10
		::System::UInt32 TextId; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBUFFTEXT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C10EA56289AD88CA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleBuffText*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleBuffText*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBUFFTEXT_METHOD_3_C10EA56289AD88CA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A73D56702C562A34(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleBuffText* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleBuffText*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBUFFTEXT_METHOD_3_A73D56702C562A34_OFFSET))(a1, a2);
		}
	};
}
