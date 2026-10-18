#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LittleGameEntityVar; }

#define RPG_GAMECORE_LITTLEGAMEENTITYVARCONFIG_METHOD_3_1643B734A12CD61B_OFFSET UNITYSDK_OFFSET(0x1D7E23A0)
#define RPG_GAMECORE_LITTLEGAMEENTITYVARCONFIG_METHOD_3_17A93C41F3CCE783_OFFSET UNITYSDK_OFFSET(0x1D7E2510)
#define RPG_GAMECORE_LITTLEGAMEENTITYVARCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7E2500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameEntityVarConfig_TypeDefinitionIndex = 18871;

	class LittleGameEntityVarConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsEnableEntityVar; // 0x10
		::Il2CppArray<::RPG::GameCore::LittleGameEntityVar*>* PublicEntityVars; // 0x18
		::Il2CppArray<::RPG::GameCore::LittleGameEntityVar*>* PrivateEntityVars; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEENTITYVARCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1643B734A12CD61B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameEntityVarConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameEntityVarConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEENTITYVARCONFIG_METHOD_3_1643B734A12CD61B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_17A93C41F3CCE783(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameEntityVarConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameEntityVarConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEENTITYVARCONFIG_METHOD_3_17A93C41F3CCE783_OFFSET))(a1, a2);
		}
	};
}
