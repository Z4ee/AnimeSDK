#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightTraitEffectType.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

class Class_0_16E4307DCC419505_773;
class Class_0_16E4307DCC419505_792;
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTraitConfigBase; }
namespace Sofa::Core { template <typename T> class ObservableList_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_CONTAINSTRAITID_OFFSET UNITYSDK_OFFSET(0xBC15D00)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_GETTRAITBYEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0xBC26310)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_GETTRAITBYID_OFFSET UNITYSDK_OFFSET(0xBC26140)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_GETTRAITCOUNT_OFFSET UNITYSDK_OFFSET(0xBC214B0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_GET_TRAITCONFIGS_OFFSET UNITYSDK_OFFSET(0xBC264E0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_GET_TRAITS_OFFSET UNITYSDK_OFFSET(0xBC26770)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_INITTRAITS_OFFSET UNITYSDK_OFFSET(0xBC25660)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_SET_TRAITS_OFFSET UNITYSDK_OFFSET(0xBC26780)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_UPDATETRAITS_OFFSET UNITYSDK_OFFSET(0xBC259C0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xBC25580)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitComponent_TypeDefinitionIndex = 61173;

	class GridFightTraitComponent : public ::Sofa::Core::ObservableObject
	{
	public:
		::Class_0_16E4307DCC419505_773* _DataContext; // 0x18
		::Sofa::Core::ObservableList_1<::RPG::Client::GridFightTrait*>* _Traits_k__BackingField; // 0x20
		::Class_0_16E4307DCC419505_792* _Owner; // 0x28

		::System::Void _ctor(::Class_0_16E4307DCC419505_792* a1, ::Class_0_16E4307DCC419505_773* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_792*, ::Class_0_16E4307DCC419505_773*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void InitTraits(::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_INITTRAITS_OFFSET))(this, a1);
		}

		::System::Void UpdateTraits(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_UPDATETRAITS_OFFSET))(this, a1);
		}

		::System::Boolean ContainsTraitID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_CONTAINSTRAITID_OFFSET))(this, a1);
		}

		::System::Int32 GetTraitCount(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_GETTRAITCOUNT_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTrait* GetTraitByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightTrait*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_GETTRAITBYID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTrait* GetTraitByEffectType(::RPG::GameCore::GridFightTraitEffectType a1)
		{
			return ((::RPG::Client::GridFightTrait*(*)(::PVOID, ::RPG::GameCore::GridFightTraitEffectType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_GETTRAITBYEFFECTTYPE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfigBase*>* get_TraitConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfigBase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_GET_TRAITCONFIGS_OFFSET))(this);
		}

		::Sofa::Core::ObservableList_1<::RPG::Client::GridFightTrait*>* get_Traits()
		{
			return ((::Sofa::Core::ObservableList_1<::RPG::Client::GridFightTrait*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_GET_TRAITS_OFFSET))(this);
		}

		::System::Void set_Traits(::Sofa::Core::ObservableList_1<::RPG::Client::GridFightTrait*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::ObservableList_1<::RPG::Client::GridFightTrait*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_SET_TRAITS_OFFSET))(this, a1);
		}
	};
}
