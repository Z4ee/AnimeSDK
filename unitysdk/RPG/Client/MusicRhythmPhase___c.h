#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MusicRhythmGroup; }
namespace RPG::Client { class MusicRhythmTrack; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_MUSICRHYTHMPHASE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC22A640)
#define RPG_CLIENT_MUSICRHYTHMPHASE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC22A680)
#define RPG_CLIENT_MUSICRHYTHMPHASE___C__GETALLGROUPS_B__3_0_OFFSET UNITYSDK_OFFSET(0xC22A6C0)
#define RPG_CLIENT_MUSICRHYTHMPHASE___C__GETALLTRACKS_B__2_0_OFFSET UNITYSDK_OFFSET(0xC22A690)
#define RPG_CLIENT_MUSICRHYTHMPHASE___C__GETFIRSTSHOWGROUP_B__4_0_OFFSET UNITYSDK_OFFSET(0xC22A7B0)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicRhythmPhase___c_TypeDefinitionIndex = 57812;

	class MusicRhythmPhase___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MusicRhythmPhase___c** StaticGet___9()
		{
			return (::RPG::Client::MusicRhythmPhase___c**)Il2CppClass::FromTypeDefinitionIndex(MusicRhythmPhase___c_TypeDefinitionIndex)->GetStaticField(0x667B0);
		}
		static ::System::Comparison_1<::RPG::Client::MusicRhythmTrack*>** StaticGet___9__2_0()
		{
			return (::System::Comparison_1<::RPG::Client::MusicRhythmTrack*>**)Il2CppClass::FromTypeDefinitionIndex(MusicRhythmPhase___c_TypeDefinitionIndex)->GetStaticField(0x667B8);
		}
		static ::System::Comparison_1<::RPG::Client::MusicRhythmGroup*>** StaticGet___9__3_0()
		{
			return (::System::Comparison_1<::RPG::Client::MusicRhythmGroup*>**)Il2CppClass::FromTypeDefinitionIndex(MusicRhythmPhase___c_TypeDefinitionIndex)->GetStaticField(0x667C0);
		}
		static ::System::Comparison_1<::RPG::Client::MusicRhythmGroup*>** StaticGet___9__4_0()
		{
			return (::System::Comparison_1<::RPG::Client::MusicRhythmGroup*>**)Il2CppClass::FromTypeDefinitionIndex(MusicRhythmPhase___c_TypeDefinitionIndex)->GetStaticField(0x667C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMPHASE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMPHASE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetAllTracks_b__2_0(::RPG::Client::MusicRhythmTrack* a1, ::RPG::Client::MusicRhythmTrack* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MusicRhythmTrack*, ::RPG::Client::MusicRhythmTrack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMPHASE___C__GETALLTRACKS_B__2_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 _GetAllGroups_b__3_0(::RPG::Client::MusicRhythmGroup* a1, ::RPG::Client::MusicRhythmGroup* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MusicRhythmGroup*, ::RPG::Client::MusicRhythmGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMPHASE___C__GETALLGROUPS_B__3_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 _GetFirstShowGroup_b__4_0(::RPG::Client::MusicRhythmGroup* a1, ::RPG::Client::MusicRhythmGroup* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MusicRhythmGroup*, ::RPG::Client::MusicRhythmGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMPHASE___C__GETFIRSTSHOWGROUP_B__4_0_OFFSET))(this, a1, a2);
		}
	};
}
