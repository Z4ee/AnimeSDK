#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ENABLESPECIFICMODIFIERSPECIALMARK_METHOD_3_23CCFDA1CCB7EA2F_OFFSET UNITYSDK_OFFSET(0x1BB41E40)
#define RPG_GAMECORE_ENABLESPECIFICMODIFIERSPECIALMARK_METHOD_3_EE1B305C57C43DF8_OFFSET UNITYSDK_OFFSET(0x1BB41E00)
#define RPG_GAMECORE_ENABLESPECIFICMODIFIERSPECIALMARK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB41E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnableSpecificModifierSpecialMark_TypeDefinitionIndex = 22344;

	class EnableSpecificModifierSpecialMark : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::String*>* ModifierName; // 0x18
		::System::Boolean ShowAll; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLESPECIFICMODIFIERSPECIALMARK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EE1B305C57C43DF8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnableSpecificModifierSpecialMark*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnableSpecificModifierSpecialMark*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLESPECIFICMODIFIERSPECIALMARK_METHOD_3_EE1B305C57C43DF8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_23CCFDA1CCB7EA2F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnableSpecificModifierSpecialMark* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnableSpecificModifierSpecialMark*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLESPECIFICMODIFIERSPECIALMARK_METHOD_3_23CCFDA1CCB7EA2F_OFFSET))(a1, a2);
		}
	};
}
