#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERCUSTOMSTRINGLIST_METHOD_3_1452118AC4875011_OFFSET UNITYSDK_OFFSET(0x19E0A7D0)
#define RPG_GAMECORE_TRIGGERCUSTOMSTRINGLIST_METHOD_3_CDE79589D16A93B8_OFFSET UNITYSDK_OFFSET(0x19E0A850)
#define RPG_GAMECORE_TRIGGERCUSTOMSTRINGLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x19E0A820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerCustomStringList_TypeDefinitionIndex = 22486;

	class TriggerCustomStringList : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::String*>* CustomStringList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERCUSTOMSTRINGLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1452118AC4875011(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerCustomStringList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerCustomStringList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERCUSTOMSTRINGLIST_METHOD_3_1452118AC4875011_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CDE79589D16A93B8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerCustomStringList* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerCustomStringList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERCUSTOMSTRINGLIST_METHOD_3_CDE79589D16A93B8_OFFSET))(a1, a2);
		}
	};
}
