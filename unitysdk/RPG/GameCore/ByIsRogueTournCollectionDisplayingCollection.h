#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISROGUETOURNCOLLECTIONDISPLAYINGCOLLECTION_METHOD_4_1316910AFB834FD0_OFFSET UNITYSDK_OFFSET(0x1956BBE0)
#define RPG_GAMECORE_BYISROGUETOURNCOLLECTIONDISPLAYINGCOLLECTION_METHOD_4_57CD3F4096A9984C_OFFSET UNITYSDK_OFFSET(0x1956BA40)
#define RPG_GAMECORE_BYISROGUETOURNCOLLECTIONDISPLAYINGCOLLECTION_METHOD_4_61186139D747D63E_OFFSET UNITYSDK_OFFSET(0x1956B970)
#define RPG_GAMECORE_BYISROGUETOURNCOLLECTIONDISPLAYINGCOLLECTION_METHOD_4_65F4E3D62C0E6E01_OFFSET UNITYSDK_OFFSET(0x1956BC60)
#define RPG_GAMECORE_BYISROGUETOURNCOLLECTIONDISPLAYINGCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1956B9F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsRogueTournCollectionDisplayingCollection_TypeDefinitionIndex = 20891;

	class ByIsRogueTournCollectionDisplayingCollection : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* BoothID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROGUETOURNCOLLECTIONDISPLAYINGCOLLECTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_61186139D747D63E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsRogueTournCollectionDisplayingCollection*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsRogueTournCollectionDisplayingCollection*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROGUETOURNCOLLECTIONDISPLAYINGCOLLECTION_METHOD_4_61186139D747D63E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_57CD3F4096A9984C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsRogueTournCollectionDisplayingCollection* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsRogueTournCollectionDisplayingCollection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROGUETOURNCOLLECTIONDISPLAYINGCOLLECTION_METHOD_4_57CD3F4096A9984C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1316910AFB834FD0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRogueTournCollectionDisplayingCollection*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRogueTournCollectionDisplayingCollection*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROGUETOURNCOLLECTIONDISPLAYINGCOLLECTION_METHOD_4_1316910AFB834FD0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_65F4E3D62C0E6E01(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRogueTournCollectionDisplayingCollection* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRogueTournCollectionDisplayingCollection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROGUETOURNCOLLECTIONDISPLAYINGCOLLECTION_METHOD_4_65F4E3D62C0E6E01_OFFSET))(a1, a2);
		}
	};
}
