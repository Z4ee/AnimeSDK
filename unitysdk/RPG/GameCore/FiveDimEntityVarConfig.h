#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimEntityVar; }

#define RPG_GAMECORE_FIVEDIMENTITYVARCONFIG_METHOD_3_75BABD68D6C16651_OFFSET UNITYSDK_OFFSET(0x171F1320)
#define RPG_GAMECORE_FIVEDIMENTITYVARCONFIG_METHOD_3_896A8708675D3DCF_OFFSET UNITYSDK_OFFSET(0x171F12B0)
#define RPG_GAMECORE_FIVEDIMENTITYVARCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171F1300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEntityVarConfig_TypeDefinitionIndex = 17101;

	class FiveDimEntityVarConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsEnableEntityVar; // 0x10
		::Il2CppArray<::RPG::GameCore::FiveDimEntityVar*>* PublicEntityVars; // 0x18
		::Il2CppArray<::RPG::GameCore::FiveDimEntityVar*>* PrivateEntityVars; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTITYVARCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_896A8708675D3DCF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEntityVarConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEntityVarConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTITYVARCONFIG_METHOD_3_896A8708675D3DCF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_75BABD68D6C16651(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEntityVarConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEntityVarConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTITYVARCONFIG_METHOD_3_75BABD68D6C16651_OFFSET))(a1, a2);
		}
	};
}
