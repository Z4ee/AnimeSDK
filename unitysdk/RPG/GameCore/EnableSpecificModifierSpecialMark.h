#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ENABLESPECIFICMODIFIERSPECIALMARK_METHOD_3_8CCDC84FEBC8E88B_OFFSET UNITYSDK_OFFSET(0x1719A490)
#define RPG_GAMECORE_ENABLESPECIFICMODIFIERSPECIALMARK_METHOD_3_95B34571C967CEAD_OFFSET UNITYSDK_OFFSET(0x1719A510)
#define RPG_GAMECORE_ENABLESPECIFICMODIFIERSPECIALMARK__CTOR_OFFSET UNITYSDK_OFFSET(0x1719A4E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnableSpecificModifierSpecialMark_TypeDefinitionIndex = 21396;

	class EnableSpecificModifierSpecialMark : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::String*>* ModifierName; // 0x18
		::System::Boolean ShowAll; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLESPECIFICMODIFIERSPECIALMARK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8CCDC84FEBC8E88B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnableSpecificModifierSpecialMark*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnableSpecificModifierSpecialMark*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLESPECIFICMODIFIERSPECIALMARK_METHOD_3_8CCDC84FEBC8E88B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_95B34571C967CEAD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnableSpecificModifierSpecialMark* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnableSpecificModifierSpecialMark*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLESPECIFICMODIFIERSPECIALMARK_METHOD_3_95B34571C967CEAD_OFFSET))(a1, a2);
		}
	};
}
