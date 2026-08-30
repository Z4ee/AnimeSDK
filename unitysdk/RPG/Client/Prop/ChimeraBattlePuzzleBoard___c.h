#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xDC08610)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD___C__CTOR_OFFSET UNITYSDK_OFFSET(0xDC08650)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD___C___ADDSTREAMINGCALLBACK_B__41_0_OFFSET UNITYSDK_OFFSET(0xDC086F0)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD___C___REMOVESTREAMINGSOURCE_B__47_0_OFFSET UNITYSDK_OFFSET(0xDC087A0)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD___C___SPAWNWORK_B__6_0_OFFSET UNITYSDK_OFFSET(0xDC08660)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraBattlePuzzleBoard___c_TypeDefinitionIndex = 77954;

	class ChimeraBattlePuzzleBoard___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__47_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ChimeraBattlePuzzleBoard___c_TypeDefinitionIndex)->GetStaticField(0x63490);
		}
		static ::RPG::Client::Prop::ChimeraBattlePuzzleBoard___c** StaticGet___9()
		{
			return (::RPG::Client::Prop::ChimeraBattlePuzzleBoard___c**)Il2CppClass::FromTypeDefinitionIndex(ChimeraBattlePuzzleBoard___c_TypeDefinitionIndex)->GetStaticField(0x63498);
		}
		static ::System::Action** StaticGet___9__6_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ChimeraBattlePuzzleBoard___c_TypeDefinitionIndex)->GetStaticField(0x634A0);
		}
		static ::System::Action** StaticGet___9__41_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ChimeraBattlePuzzleBoard___c_TypeDefinitionIndex)->GetStaticField(0x634A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD___C__CTOR_OFFSET))(this);
		}

		::System::Void __SpawnWork_b__6_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD___C___SPAWNWORK_B__6_0_OFFSET))(this);
		}

		::System::Void __AddStreamingCallback_b__41_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD___C___ADDSTREAMINGCALLBACK_B__41_0_OFFSET))(this);
		}

		::System::Void __RemoveStreamingSource_b__47_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD___C___REMOVESTREAMINGSOURCE_B__47_0_OFFSET))(this);
		}
	};
}
