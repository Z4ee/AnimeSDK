#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SubMissionData; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAB5C740)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAB5C770)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE___C___COLLECTMAINNAVMAPTRACKINGMISSIONICON_B__23_0_OFFSET UNITYSDK_OFFSET(0xAB5C780)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE___C___COLLECTSUBNAVMAPTRACKINGMISSIONICON_B__24_0_OFFSET UNITYSDK_OFFSET(0xAB5C7F0)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int IconCollectorBase___c_TypeDefinitionIndex = 68765;

	class IconCollectorBase___c : public ::System::Object
	{
	public:
		static ::RPG::Client::NavMap::IconCollectorBase___c** StaticGet___9()
		{
			return (::RPG::Client::NavMap::IconCollectorBase___c**)Il2CppClass::FromTypeDefinitionIndex(IconCollectorBase___c_TypeDefinitionIndex)->GetStaticField(0x4EA90);
		}
		static ::System::Comparison_1<::RPG::Client::SubMissionData*>** StaticGet___9__23_0()
		{
			return (::System::Comparison_1<::RPG::Client::SubMissionData*>**)Il2CppClass::FromTypeDefinitionIndex(IconCollectorBase___c_TypeDefinitionIndex)->GetStaticField(0x4EA98);
		}
		static ::System::Comparison_1<::RPG::Client::SubMissionData*>** StaticGet___9__24_0()
		{
			return (::System::Comparison_1<::RPG::Client::SubMissionData*>**)Il2CppClass::FromTypeDefinitionIndex(IconCollectorBase___c_TypeDefinitionIndex)->GetStaticField(0x4EAA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __CollectMainNavMapTrackingMissionIcon_b__23_0(::RPG::Client::SubMissionData* x, ::RPG::Client::SubMissionData* y)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SubMissionData*, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE___C___COLLECTMAINNAVMAPTRACKINGMISSIONICON_B__23_0_OFFSET))(this, x, y);
		}

		::System::Int32 __CollectSubNavMapTrackingMissionIcon_b__24_0(::RPG::Client::SubMissionData* x, ::RPG::Client::SubMissionData* y)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SubMissionData*, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE___C___COLLECTSUBNAVMAPTRACKINGMISSIONICON_B__24_0_OFFSET))(this, x, y);
		}
	};
}
