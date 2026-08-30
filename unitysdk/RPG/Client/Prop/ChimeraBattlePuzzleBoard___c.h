#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x189DA220)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x189DA260)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD___C___ADDSTREAMINGCALLBACK_B__41_0_OFFSET UNITYSDK_OFFSET(0x189DA300)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD___C___REMOVESTREAMINGSOURCE_B__47_0_OFFSET UNITYSDK_OFFSET(0x189DA3B0)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD___C___SPAWNWORK_B__6_0_OFFSET UNITYSDK_OFFSET(0x189DA270)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraBattlePuzzleBoard___c_TypeDefinitionIndex = 77953;

	class ChimeraBattlePuzzleBoard___c : public ::System::Object
	{
	public:
		static ::RPG::Client::Prop::ChimeraBattlePuzzleBoard___c** StaticGet___9()
		{
			return (::RPG::Client::Prop::ChimeraBattlePuzzleBoard___c**)Il2CppClass::FromTypeDefinitionIndex(ChimeraBattlePuzzleBoard___c_TypeDefinitionIndex)->GetStaticField(0x60860);
		}
		static ::System::Action** StaticGet___9__41_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ChimeraBattlePuzzleBoard___c_TypeDefinitionIndex)->GetStaticField(0x60868);
		}
		static ::System::Action** StaticGet___9__6_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ChimeraBattlePuzzleBoard___c_TypeDefinitionIndex)->GetStaticField(0x60870);
		}
		static ::System::Action** StaticGet___9__47_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ChimeraBattlePuzzleBoard___c_TypeDefinitionIndex)->GetStaticField(0x60878);
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
