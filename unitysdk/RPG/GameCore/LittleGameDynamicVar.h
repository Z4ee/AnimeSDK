#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LittleGameEntityVar; }
namespace RPG::GameCore { class LittleGameEntityVarConfig; }
namespace System { class String; }

#define RPG_GAMECORE_LITTLEGAMEDYNAMICVAR_METHOD_2_25842219CFC5DB29_OFFSET UNITYSDK_OFFSET(0x1D7B2BD0)
#define RPG_GAMECORE_LITTLEGAMEDYNAMICVAR_METHOD_2_54663CE88C76A1E0_OFFSET UNITYSDK_OFFSET(0x1D7B3340)
#define RPG_GAMECORE_LITTLEGAMEDYNAMICVAR_METHOD_2_A2E9AC51006F66F1_OFFSET UNITYSDK_OFFSET(0x1D7B3230)
#define RPG_GAMECORE_LITTLEGAMEDYNAMICVAR_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1D7B34B0)
#define RPG_GAMECORE_LITTLEGAMEDYNAMICVAR_METHOD_2_F6E83A7DA01C2664_OFFSET UNITYSDK_OFFSET(0x1D7B3380)
#define RPG_GAMECORE_LITTLEGAMEDYNAMICVAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B3220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameDynamicVar_TypeDefinitionIndex = 18860;

	class LittleGameDynamicVar : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean IsEntityVar; // 0x10
		::System::String* VarName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEDYNAMICVAR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_25842219CFC5DB29(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameDynamicVar*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameDynamicVar*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEDYNAMICVAR_METHOD_2_25842219CFC5DB29_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_A2E9AC51006F66F1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameDynamicVar* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameDynamicVar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEDYNAMICVAR_METHOD_2_A2E9AC51006F66F1_OFFSET))(a1, a2);
		}

		::System::String* Method_2_54663CE88C76A1E0(::RPG::GameCore::LittleGameEntityVarConfig* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityVarConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEDYNAMICVAR_METHOD_2_54663CE88C76A1E0_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_F0E307B84478A272()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEDYNAMICVAR_METHOD_2_F0E307B84478A272_OFFSET))(this);
		}

		::RPG::GameCore::LittleGameEntityVar* Method_2_F6E83A7DA01C2664(::RPG::GameCore::LittleGameEntityVarConfig* a1)
		{
			return ((::RPG::GameCore::LittleGameEntityVar*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityVarConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEDYNAMICVAR_METHOD_2_F6E83A7DA01C2664_OFFSET))(this, a1);
		}
	};
}
