#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIELDEFFECTHIGHPRIORITYLIST_METHOD_2_1B13E9CC6CA7C0D0_OFFSET UNITYSDK_OFFSET(0x19719250)
#define RPG_GAMECORE_FIELDEFFECTHIGHPRIORITYLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x19719310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FieldEffectHighPriorityList_TypeDefinitionIndex = 15669;

	class FieldEffectHighPriorityList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* HighPriorityEffectList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIELDEFFECTHIGHPRIORITYLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1B13E9CC6CA7C0D0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FieldEffectHighPriorityList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FieldEffectHighPriorityList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIELDEFFECTHIGHPRIORITYLIST_METHOD_2_1B13E9CC6CA7C0D0_OFFSET))(a1, a2);
		}
	};
}
