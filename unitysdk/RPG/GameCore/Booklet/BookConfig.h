#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Booklet/BookType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore::Booklet { class ChapterConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_BOOKLET_BOOKCONFIG_METHOD_2_D6D9F72E63B07C8A_OFFSET UNITYSDK_OFFSET(0x16FEB2C0)
#define RPG_GAMECORE_BOOKLET_BOOKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16FEB480)

namespace RPG::GameCore::Booklet
{
	inline static constexpr unsigned int BookConfig_TypeDefinitionIndex = 22790;

	class BookConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::Booklet::BookType Type; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* PrefabPathMap; // 0x18
		::Il2CppArray<::RPG::GameCore::Booklet::ChapterConfig*>* ChapterConfigList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_BOOKCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D6D9F72E63B07C8A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Booklet::BookConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Booklet::BookConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_BOOKCONFIG_METHOD_2_D6D9F72E63B07C8A_OFFSET))(a1, a2);
		}
	};
}
