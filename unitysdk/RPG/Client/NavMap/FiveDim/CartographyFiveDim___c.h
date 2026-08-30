#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A3C62CC0DC4BD2F1;
namespace RPG::Client { class SubMissionData; }
namespace RPG::Client::NavMap::FiveDim { class EntityIcon; }
namespace RPG::Client::NavMap::FiveDim { class Face; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A331F40)
#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A331F70)
#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM___C__GETCHESTICONS_B__5_0_OFFSET UNITYSDK_OFFSET(0x1A331F80)
#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM___C__GET_ALLFACES_B__20_0_OFFSET UNITYSDK_OFFSET(0x1A332010)
#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM___C___COLLECTTRACKINGMISSIONICON_B__10_0_OFFSET UNITYSDK_OFFSET(0x1A331FA0)

namespace RPG::Client::NavMap::FiveDim
{
	inline static constexpr unsigned int CartographyFiveDim___c_TypeDefinitionIndex = 74519;

	class CartographyFiveDim___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::SubMissionData*>** StaticGet___9__10_0()
		{
			return (::System::Comparison_1<::RPG::Client::SubMissionData*>**)Il2CppClass::FromTypeDefinitionIndex(CartographyFiveDim___c_TypeDefinitionIndex)->GetStaticField(0x31830);
		}
		static ::System::Func_2<::RPG::Client::NavMap::FiveDim::EntityIcon*, ::System::Boolean>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::RPG::Client::NavMap::FiveDim::EntityIcon*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(CartographyFiveDim___c_TypeDefinitionIndex)->GetStaticField(0x31838);
		}
		static ::System::Func_2<::Class_1_A3C62CC0DC4BD2F1*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::NavMap::FiveDim::Face*>*>** StaticGet___9__20_0()
		{
			return (::System::Func_2<::Class_1_A3C62CC0DC4BD2F1*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::NavMap::FiveDim::Face*>*>**)Il2CppClass::FromTypeDefinitionIndex(CartographyFiveDim___c_TypeDefinitionIndex)->GetStaticField(0x31840);
		}
		static ::RPG::Client::NavMap::FiveDim::CartographyFiveDim___c** StaticGet___9()
		{
			return (::RPG::Client::NavMap::FiveDim::CartographyFiveDim___c**)Il2CppClass::FromTypeDefinitionIndex(CartographyFiveDim___c_TypeDefinitionIndex)->GetStaticField(0x31848);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetChestIcons_b__5_0(::RPG::Client::NavMap::FiveDim::EntityIcon* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::FiveDim::EntityIcon*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM___C__GETCHESTICONS_B__5_0_OFFSET))(this, a1);
		}

		::System::Int32 __CollectTrackingMissionIcon_b__10_0(::RPG::Client::SubMissionData* a1, ::RPG::Client::SubMissionData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SubMissionData*, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM___C___COLLECTTRACKINGMISSIONICON_B__10_0_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::NavMap::FiveDim::Face*>* _get_AllFaces_b__20_0(::Class_1_A3C62CC0DC4BD2F1* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::NavMap::FiveDim::Face*>*(*)(::PVOID, ::Class_1_A3C62CC0DC4BD2F1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM___C__GET_ALLFACES_B__20_0_OFFSET))(this, a1);
		}
	};
}
