#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_BYISROGUETOURNCOLLECTIONDISPLAYINGCOLLECTION_METHOD_4_57CD3F4096A9984C_OFFSET UNITYSDK_OFFSET(0x187568F0)
#define RPG_GAMECORE_BYISROGUETOURNCOLLECTIONDISPLAYINGCOLLECTION_METHOD_4_61186139D747D63E_OFFSET UNITYSDK_OFFSET(0x18756820)
#define RPG_GAMECORE_BYISROGUETOURNCOLLECTIONDISPLAYINGCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x187568A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsRogueTournCollectionDisplayingCollection_TypeDefinitionIndex = 20979;

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
	};
}
