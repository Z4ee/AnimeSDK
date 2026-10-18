#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SubMissionSortedItem; }

#define RPG_GAMECORE_MAINMISSIONSORTEDITEM_METHOD_2_5F270CD0B7706966_OFFSET UNITYSDK_OFFSET(0x1D7CED10)
#define RPG_GAMECORE_MAINMISSIONSORTEDITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7CEDD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MainMissionSortedItem_TypeDefinitionIndex = 19031;

	class MainMissionSortedItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::SubMissionSortedItem*>* SubMissionSortList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONSORTEDITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5F270CD0B7706966(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MainMissionSortedItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MainMissionSortedItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONSORTEDITEM_METHOD_2_5F270CD0B7706966_OFFSET))(a1, a2);
		}
	};
}
