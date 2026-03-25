#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightTraitEffectType.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

class Class_0_16E4307DCC419505_631;
class Class_0_16E4307DCC419505_645;
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTraitConfigBase; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_3_2A6530038D51A41A;

#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_CONTAINSTRAITID_OFFSET UNITYSDK_OFFSET(0x98CD840)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_GETTRAITBYEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x98CDAA0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_GETTRAITBYID_OFFSET UNITYSDK_OFFSET(0x98CD970)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_GET_TRAITCONFIGS_OFFSET UNITYSDK_OFFSET(0x98CDBD0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_GET_TRAITS_OFFSET UNITYSDK_OFFSET(0x98CDDF0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_INITTRAITS_OFFSET UNITYSDK_OFFSET(0x98CCE20)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_SET_TRAITS_OFFSET UNITYSDK_OFFSET(0x98CDE00)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_UPDATETRAITS_OFFSET UNITYSDK_OFFSET(0x98CD170)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x98CCD40)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitComponent_TypeDefinitionIndex = 53117;

	class GridFightTraitComponent : public ::Sofa::Core::ObservableObject
	{
	public:
		::Class_0_16E4307DCC419505_645* _Owner; // 0x18
		::Class_0_16E4307DCC419505_631* _DataContext; // 0x20
		::Class_3_2A6530038D51A41A<::RPG::Client::GridFightTrait*>* _Traits_k__BackingField; // 0x28

		::System::Void _ctor(::Class_0_16E4307DCC419505_645* owner, ::Class_0_16E4307DCC419505_631* dataContext)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_645*, ::Class_0_16E4307DCC419505_631*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT__CTOR_OFFSET))(this, owner, dataContext);
		}

		::System::Void InitTraits(::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>* traits)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_INITTRAITS_OFFSET))(this, traits);
		}

		::System::Void UpdateTraits(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* traitIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_UPDATETRAITS_OFFSET))(this, traitIDs);
		}

		::System::Boolean ContainsTraitID(::System::UInt32 traitID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_CONTAINSTRAITID_OFFSET))(this, traitID);
		}

		::RPG::Client::GridFightTrait* GetTraitByID(::System::UInt32 traitID)
		{
			return ((::RPG::Client::GridFightTrait*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_GETTRAITBYID_OFFSET))(this, traitID);
		}

		::RPG::Client::GridFightTrait* GetTraitByEffectType(::RPG::GameCore::GridFightTraitEffectType effectType)
		{
			return ((::RPG::Client::GridFightTrait*(*)(::PVOID, ::RPG::GameCore::GridFightTraitEffectType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_GETTRAITBYEFFECTTYPE_OFFSET))(this, effectType);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfigBase*>* get_TraitConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfigBase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_GET_TRAITCONFIGS_OFFSET))(this);
		}

		::Class_3_2A6530038D51A41A<::RPG::Client::GridFightTrait*>* get_Traits()
		{
			return ((::Class_3_2A6530038D51A41A<::RPG::Client::GridFightTrait*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_GET_TRAITS_OFFSET))(this);
		}

		::System::Void set_Traits(::Class_3_2A6530038D51A41A<::RPG::Client::GridFightTrait*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_2A6530038D51A41A<::RPG::Client::GridFightTrait*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_SET_TRAITS_OFFSET))(this, value);
		}
	};
}
