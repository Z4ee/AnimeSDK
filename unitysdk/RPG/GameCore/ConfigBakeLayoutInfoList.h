#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConfigBakeLayoutInfo; }

#define RPG_GAMECORE_CONFIGBAKELAYOUTINFOLIST_METHOD_2_00736BBB01AACE78_OFFSET UNITYSDK_OFFSET(0x1BC2B6F0)
#define RPG_GAMECORE_CONFIGBAKELAYOUTINFOLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC2B7B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConfigBakeLayoutInfoList_TypeDefinitionIndex = 15799;

	class ConfigBakeLayoutInfoList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ConfigBakeLayoutInfo*>* BakeInfoLayouts; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGBAKELAYOUTINFOLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_00736BBB01AACE78(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConfigBakeLayoutInfoList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConfigBakeLayoutInfoList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGBAKELAYOUTINFOLIST_METHOD_2_00736BBB01AACE78_OFFSET))(a1, a2);
		}
	};
}
