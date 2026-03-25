#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PreloadItem; }

#define RPG_GAMECORE_PRELOADITEMLIST_METHOD_2_BFE1456B38120ACA_OFFSET UNITYSDK_OFFSET(0x175117C0)
#define RPG_GAMECORE_PRELOADITEMLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x17511890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PreloadItemList_TypeDefinitionIndex = 14972;

	class PreloadItemList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PreloadItem*>* PreloadList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRELOADITEMLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_BFE1456B38120ACA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PreloadItemList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PreloadItemList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRELOADITEMLIST_METHOD_2_BFE1456B38120ACA_OFFSET))(a1, a2);
		}
	};
}
