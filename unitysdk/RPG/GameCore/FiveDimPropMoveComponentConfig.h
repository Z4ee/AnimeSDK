#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMPROPMOVECOMPONENTCONFIG_METHOD_3_21AB0C0CE7AF0EE4_OFFSET UNITYSDK_OFFSET(0x1BEAB430)
#define RPG_GAMECORE_FIVEDIMPROPMOVECOMPONENTCONFIG_METHOD_3_DB74FBEAC82C1BD7_OFFSET UNITYSDK_OFFSET(0x1BEAB470)
#define RPG_GAMECORE_FIVEDIMPROPMOVECOMPONENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEAB460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPropMoveComponentConfig_TypeDefinitionIndex = 17834;

	class FiveDimPropMoveComponentConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean HasMove; // 0x10
		::System::UInt32 PropMoveConfigID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPROPMOVECOMPONENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_21AB0C0CE7AF0EE4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPropMoveComponentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPropMoveComponentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPROPMOVECOMPONENTCONFIG_METHOD_3_21AB0C0CE7AF0EE4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DB74FBEAC82C1BD7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPropMoveComponentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPropMoveComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPROPMOVECOMPONENTCONFIG_METHOD_3_DB74FBEAC82C1BD7_OFFSET))(a1, a2);
		}
	};
}
