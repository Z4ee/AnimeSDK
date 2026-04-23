#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::NavMap::FiveDim { class EntityIcon; }
namespace RPG::Client::NavMap::FiveDim { class MissionIcon; }
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAB49660)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAB49690)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE___C__GETTRACKINGENTITYICON_B__65_0_OFFSET UNITYSDK_OFFSET(0xAB497A0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE___C__GETTRACKINGMISSIONICON_B__66_0_OFFSET UNITYSDK_OFFSET(0xAB49810)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE___C__HASCHESTICON_B__67_0_OFFSET UNITYSDK_OFFSET(0xAB498E0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE___C__SORTENTITYICONS_B__59_0_OFFSET UNITYSDK_OFFSET(0xAB496A0)

namespace RPG::Client::NavMap::FiveDim
{
	inline static constexpr unsigned int Face___c_TypeDefinitionIndex = 68892;

	class Face___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::RPG::Client::NavMap::FiveDim::MissionIcon*>** StaticGet___9__66_0()
		{
			return (::System::Predicate_1<::RPG::Client::NavMap::FiveDim::MissionIcon*>**)Il2CppClass::FromTypeDefinitionIndex(Face___c_TypeDefinitionIndex)->GetStaticField(0x4E3C0);
		}
		static ::System::Comparison_1<::RPG::Client::NavMap::FiveDim::EntityIcon*>** StaticGet___9__59_0()
		{
			return (::System::Comparison_1<::RPG::Client::NavMap::FiveDim::EntityIcon*>**)Il2CppClass::FromTypeDefinitionIndex(Face___c_TypeDefinitionIndex)->GetStaticField(0x4E3C8);
		}
		static ::System::Predicate_1<::RPG::Client::NavMap::FiveDim::EntityIcon*>** StaticGet___9__67_0()
		{
			return (::System::Predicate_1<::RPG::Client::NavMap::FiveDim::EntityIcon*>**)Il2CppClass::FromTypeDefinitionIndex(Face___c_TypeDefinitionIndex)->GetStaticField(0x4E3D0);
		}
		static ::System::Predicate_1<::RPG::Client::NavMap::FiveDim::EntityIcon*>** StaticGet___9__65_0()
		{
			return (::System::Predicate_1<::RPG::Client::NavMap::FiveDim::EntityIcon*>**)Il2CppClass::FromTypeDefinitionIndex(Face___c_TypeDefinitionIndex)->GetStaticField(0x4E3D8);
		}
		static ::RPG::Client::NavMap::FiveDim::Face___c** StaticGet___9()
		{
			return (::RPG::Client::NavMap::FiveDim::Face___c**)Il2CppClass::FromTypeDefinitionIndex(Face___c_TypeDefinitionIndex)->GetStaticField(0x4E3E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _SortEntityIcons_b__59_0(::RPG::Client::NavMap::FiveDim::EntityIcon* x, ::RPG::Client::NavMap::FiveDim::EntityIcon* y)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::NavMap::FiveDim::EntityIcon*, ::RPG::Client::NavMap::FiveDim::EntityIcon*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE___C__SORTENTITYICONS_B__59_0_OFFSET))(this, x, y);
		}

		::System::Boolean _GetTrackingEntityIcon_b__65_0(::RPG::Client::NavMap::FiveDim::EntityIcon* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::FiveDim::EntityIcon*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE___C__GETTRACKINGENTITYICON_B__65_0_OFFSET))(this, x);
		}

		::System::Boolean _GetTrackingMissionIcon_b__66_0(::RPG::Client::NavMap::FiveDim::MissionIcon* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::FiveDim::MissionIcon*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE___C__GETTRACKINGMISSIONICON_B__66_0_OFFSET))(this, x);
		}

		::System::Boolean _HasChestIcon_b__67_0(::RPG::Client::NavMap::FiveDim::EntityIcon* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::FiveDim::EntityIcon*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE___C__HASCHESTICON_B__67_0_OFFSET))(this, x);
		}
	};
}
