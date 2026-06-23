#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/NPCRegistryEntry.h"
#include "unitysdk/NPCCrowd/NPCRegistry_EntryWithDist.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define NPCCROWD_NPCREGISTRY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF9C75D0)
#define NPCCROWD_NPCREGISTRY___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF9C7610)
#define NPCCROWD_NPCREGISTRY___C__GETBACKSTAGEENTRIES_B__30_0_OFFSET UNITYSDK_OFFSET(0xF9C7620)
#define NPCCROWD_NPCREGISTRY___C__GETCULLCANDIDATES_B__32_0_OFFSET UNITYSDK_OFFSET(0xF9C76A0)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCRegistry___c_TypeDefinitionIndex = 73035;

	class NPCRegistry___c : public ::System::Object
	{
	public:
		static ::NPCCrowd::NPCRegistry___c** StaticGet___9()
		{
			return (::NPCCrowd::NPCRegistry___c**)Il2CppClass::FromTypeDefinitionIndex(NPCRegistry___c_TypeDefinitionIndex)->GetStaticField(0x48B70);
		}
		static ::System::Comparison_1<::NPCCrowd::NPCRegistryEntry>** StaticGet___9__30_0()
		{
			return (::System::Comparison_1<::NPCCrowd::NPCRegistryEntry>**)Il2CppClass::FromTypeDefinitionIndex(NPCRegistry___c_TypeDefinitionIndex)->GetStaticField(0x48B78);
		}
		static ::System::Comparison_1<::NPCCrowd::NPCRegistry_EntryWithDist>** StaticGet___9__32_0()
		{
			return (::System::Comparison_1<::NPCCrowd::NPCRegistry_EntryWithDist>**)Il2CppClass::FromTypeDefinitionIndex(NPCRegistry___c_TypeDefinitionIndex)->GetStaticField(0x48B80);
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
