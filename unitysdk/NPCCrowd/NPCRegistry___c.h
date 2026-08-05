#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/NPCRegistryEntry.h"
#include "unitysdk/NPCCrowd/NPCRegistry_EntryWithDist.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define NPCCROWD_NPCREGISTRY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17FB69F0)
#define NPCCROWD_NPCREGISTRY___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17FB6A30)
#define NPCCROWD_NPCREGISTRY___C__GETBACKSTAGEENTRIES_B__30_0_OFFSET UNITYSDK_OFFSET(0x17FB6A40)
#define NPCCROWD_NPCREGISTRY___C__GETCULLCANDIDATES_B__32_0_OFFSET UNITYSDK_OFFSET(0x17FB6AC0)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCRegistry___c_TypeDefinitionIndex = 63849;

	class NPCRegistry___c : public ::System::Object
	{
	public:
		static ::NPCCrowd::NPCRegistry___c** StaticGet___9()
		{
			return (::NPCCrowd::NPCRegistry___c**)Il2CppClass::FromTypeDefinitionIndex(NPCRegistry___c_TypeDefinitionIndex)->GetStaticField(0x456B0);
		}
		static ::System::Comparison_1<::NPCCrowd::NPCRegistry_EntryWithDist>** StaticGet___9__32_0()
		{
			return (::System::Comparison_1<::NPCCrowd::NPCRegistry_EntryWithDist>**)Il2CppClass::FromTypeDefinitionIndex(NPCRegistry___c_TypeDefinitionIndex)->GetStaticField(0x456B8);
		}
		static ::System::Comparison_1<::NPCCrowd::NPCRegistryEntry>** StaticGet___9__30_0()
		{
			return (::System::Comparison_1<::NPCCrowd::NPCRegistryEntry>**)Il2CppClass::FromTypeDefinitionIndex(NPCRegistry___c_TypeDefinitionIndex)->GetStaticField(0x456C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCREGISTRY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCREGISTRY___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetBackStageEntries_b__30_0(::NPCCrowd::NPCRegistryEntry a, ::NPCCrowd::NPCRegistryEntry b)
		{
			return ((::System::Int32(*)(::PVOID, ::NPCCrowd::NPCRegistryEntry, ::NPCCrowd::NPCRegistryEntry))((::PBYTE)hIl2Cpp + NPCCROWD_NPCREGISTRY___C__GETBACKSTAGEENTRIES_B__30_0_OFFSET))(this, a, b);
		}

		::System::Int32 _GetCullCandidates_b__32_0(::NPCCrowd::NPCRegistry_EntryWithDist a, ::NPCCrowd::NPCRegistry_EntryWithDist b)
		{
			return ((::System::Int32(*)(::PVOID, ::NPCCrowd::NPCRegistry_EntryWithDist, ::NPCCrowd::NPCRegistry_EntryWithDist))((::PBYTE)hIl2Cpp + NPCCROWD_NPCREGISTRY___C__GETCULLCANDIDATES_B__32_0_OFFSET))(this, a, b);
		}
	};
}
