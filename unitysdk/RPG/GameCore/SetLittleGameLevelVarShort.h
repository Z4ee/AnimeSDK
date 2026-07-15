#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_SETLITTLEGAMELEVELVARSHORT_METHOD_3_8A534834B69B54D5_OFFSET UNITYSDK_OFFSET(0x1C5FE5C0)
#define RPG_GAMECORE_SETLITTLEGAMELEVELVARSHORT_METHOD_3_A6275B8A80C7ABC0_OFFSET UNITYSDK_OFFSET(0x1C5FE580)
#define RPG_GAMECORE_SETLITTLEGAMELEVELVARSHORT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5FE5B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetLittleGameLevelVarShort_TypeDefinitionIndex = 20627;

	class SetLittleGameLevelVarShort : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* Name; // 0x18
		::RPG::GameCore::DynamicFloat* Value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLITTLEGAMELEVELVARSHORT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A6275B8A80C7ABC0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetLittleGameLevelVarShort*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetLittleGameLevelVarShort*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLITTLEGAMELEVELVARSHORT_METHOD_3_A6275B8A80C7ABC0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8A534834B69B54D5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetLittleGameLevelVarShort* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetLittleGameLevelVarShort*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLITTLEGAMELEVELVARSHORT_METHOD_3_8A534834B69B54D5_OFFSET))(a1, a2);
		}
	};
}
