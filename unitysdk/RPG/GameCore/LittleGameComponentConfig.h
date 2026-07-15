#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMECOMPONENTCONFIG_METHOD_2_8DFA775FEB4C2DC0_OFFSET UNITYSDK_OFFSET(0x1BCBFBA0)
#define RPG_GAMECORE_LITTLEGAMECOMPONENTCONFIG_METHOD_2_EEF854FCE3DA42CE_OFFSET UNITYSDK_OFFSET(0x1BCBFBE0)
#define RPG_GAMECORE_LITTLEGAMECOMPONENTCONFIG_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1BCBFC40)
#define RPG_GAMECORE_LITTLEGAMECOMPONENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCBDCB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameComponentConfig_TypeDefinitionIndex = 18104;

	class LittleGameComponentConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECOMPONENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_8DFA775FEB4C2DC0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameComponentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameComponentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECOMPONENTCONFIG_METHOD_2_8DFA775FEB4C2DC0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_EEF854FCE3DA42CE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameComponentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECOMPONENTCONFIG_METHOD_2_EEF854FCE3DA42CE_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECOMPONENTCONFIG_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
		}
	};
}
