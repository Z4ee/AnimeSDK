#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIELDEFFECTHIGHPRIORITYLIST_METHOD_2_CC08BB18D4DB8B8D_OFFSET UNITYSDK_OFFSET(0x188DC7B0)
#define RPG_GAMECORE_FIELDEFFECTHIGHPRIORITYLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x188DC880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FieldEffectHighPriorityList_TypeDefinitionIndex = 15609;

	class FieldEffectHighPriorityList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* HighPriorityEffectList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIELDEFFECTHIGHPRIORITYLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_CC08BB18D4DB8B8D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FieldEffectHighPriorityList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FieldEffectHighPriorityList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIELDEFFECTHIGHPRIORITYLIST_METHOD_2_CC08BB18D4DB8B8D_OFFSET))(a1, a2);
		}
	};
}
