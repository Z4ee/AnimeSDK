#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueTournCollectionData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC80F850)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC80F890)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO___C__GET_UNLOCKEDCOLLECTIONCOUNT_B__28_0_OFFSET UNITYSDK_OFFSET(0xC80F8A0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournCollectionInfo___c_TypeDefinitionIndex = 63207;

	class RogueTournCollectionInfo___c : public ::System::Object
	{
	public:
		static ::RPG::Client::RogueTournCollectionInfo___c** StaticGet___9()
		{
			return (::RPG::Client::RogueTournCollectionInfo___c**)Il2CppClass::FromTypeDefinitionIndex(RogueTournCollectionInfo___c_TypeDefinitionIndex)->GetStaticField(0x38A60);
		}
		static ::System::Func_2<::RPG::Client::RogueTournCollectionData*, ::System::Boolean>** StaticGet___9__28_0()
		{
			return (::System::Func_2<::RPG::Client::RogueTournCollectionData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournCollectionInfo___c_TypeDefinitionIndex)->GetStaticField(0x38A68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_UnlockedCollectionCount_b__28_0(::RPG::Client::RogueTournCollectionData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournCollectionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO___C__GET_UNLOCKEDCOLLECTIONCOUNT_B__28_0_OFFSET))(this, a1);
		}
	};
}
