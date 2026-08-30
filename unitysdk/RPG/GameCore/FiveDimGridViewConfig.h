#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMGRIDVIEWCONFIG_METHOD_3_3659548039D2A080_OFFSET UNITYSDK_OFFSET(0x1D8651B0)
#define RPG_GAMECORE_FIVEDIMGRIDVIEWCONFIG_METHOD_3_6E67FEE663289395_OFFSET UNITYSDK_OFFSET(0x1D8651F0)
#define RPG_GAMECORE_FIVEDIMGRIDVIEWCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8651E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimGridViewConfig_TypeDefinitionIndex = 18334;

	class FiveDimGridViewConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsGridView; // 0x10
		::System::UInt32 GridSizeX; // 0x14
		::System::UInt32 GridSizeY; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRIDVIEWCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3659548039D2A080(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimGridViewConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimGridViewConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRIDVIEWCONFIG_METHOD_3_3659548039D2A080_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6E67FEE663289395(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimGridViewConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimGridViewConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRIDVIEWCONFIG_METHOD_3_6E67FEE663289395_OFFSET))(a1, a2);
		}
	};
}
