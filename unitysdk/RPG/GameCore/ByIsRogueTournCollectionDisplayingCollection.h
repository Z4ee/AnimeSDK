#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISROGUETOURNCOLLECTIONDISPLAYINGCOLLECTION_METHOD_4_57CD3F4096A9984C_OFFSET UNITYSDK_OFFSET(0x1CDAB250)
#define RPG_GAMECORE_BYISROGUETOURNCOLLECTIONDISPLAYINGCOLLECTION_METHOD_4_7C1DDDDC6DF0F179_OFFSET UNITYSDK_OFFSET(0x1CDAB3F0)
#define RPG_GAMECORE_BYISROGUETOURNCOLLECTIONDISPLAYINGCOLLECTION_METHOD_4_B206CFB2F3AC9816_OFFSET UNITYSDK_OFFSET(0x1CDAB420)
#define RPG_GAMECORE_BYISROGUETOURNCOLLECTIONDISPLAYINGCOLLECTION_METHOD_4_F965EFB2EEB76E25_OFFSET UNITYSDK_OFFSET(0x1CDAB210)
#define RPG_GAMECORE_BYISROGUETOURNCOLLECTIONDISPLAYINGCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDAB240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsRogueTournCollectionDisplayingCollection_TypeDefinitionIndex = 21866;

	class ByIsRogueTournCollectionDisplayingCollection : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* BoothID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROGUETOURNCOLLECTIONDISPLAYINGCOLLECTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F965EFB2EEB76E25(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsRogueTournCollectionDisplayingCollection*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsRogueTournCollectionDisplayingCollection*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROGUETOURNCOLLECTIONDISPLAYINGCOLLECTION_METHOD_4_F965EFB2EEB76E25_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_57CD3F4096A9984C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsRogueTournCollectionDisplayingCollection* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsRogueTournCollectionDisplayingCollection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROGUETOURNCOLLECTIONDISPLAYINGCOLLECTION_METHOD_4_57CD3F4096A9984C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7C1DDDDC6DF0F179(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRogueTournCollectionDisplayingCollection*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRogueTournCollectionDisplayingCollection*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROGUETOURNCOLLECTIONDISPLAYINGCOLLECTION_METHOD_4_7C1DDDDC6DF0F179_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B206CFB2F3AC9816(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRogueTournCollectionDisplayingCollection* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRogueTournCollectionDisplayingCollection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROGUETOURNCOLLECTIONDISPLAYINGCOLLECTION_METHOD_4_B206CFB2F3AC9816_OFFSET))(a1, a2);
		}
	};
}
