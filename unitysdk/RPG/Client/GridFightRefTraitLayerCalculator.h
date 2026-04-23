#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_729;
class Class_1_C0277CE3A38B20B6;
namespace RPG::Client { class GridFightGameRefTrait; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR_GETCURRENTACTIVATEDLAYER_OFFSET UNITYSDK_OFFSET(0xA56AF10)
#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR_GETEXPIREDACTIVATEDLAYER_OFFSET UNITYSDK_OFFSET(0xA56AF70)
#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR_GETEXPIREDLAYER_OFFSET UNITYSDK_OFFSET(0xA56B030)
#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR_GETLAYER_OFFSET UNITYSDK_OFFSET(0xA56AFD0)
#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR_GETTRAIT_OFFSET UNITYSDK_OFFSET(0xA56AE30)
#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR_GET_SEASONUID_OFFSET UNITYSDK_OFFSET(0xA569B40)
#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR_GET_TRAITS_OFFSET UNITYSDK_OFFSET(0xA56AE20)
#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR__ADDEXPIREDTRAITLAYER_OFFSET UNITYSDK_OFFSET(0xA56B1D0)
#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR__ADDTRAITLAYER_OFFSET UNITYSDK_OFFSET(0xA56B090)
#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xA569B50)
#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR__GETROLESWITCHROLE_OFFSET UNITYSDK_OFFSET(0xA56A4E0)
#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR__UPDATETRAITLAYER_OFFSET UNITYSDK_OFFSET(0xA56A730)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRefTraitLayerCalculator_TypeDefinitionIndex = 59667;

	class GridFightRefTraitLayerCalculator : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::Class_1_C0277CE3A38B20B6*>** StaticGet__CachedSwitchRules()
		{
			return (::System::Collections::Generic::List_1<::Class_1_C0277CE3A38B20B6*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRefTraitLayerCalculator_TypeDefinitionIndex)->GetStaticField(0x17810);
		}
		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefTrait*>* _traits; // 0x10
		::System::UInt32 _SeasonUID_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 seasonUid, ::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_729*>* roles)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_729*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR__CTOR_OFFSET))(this, seasonUid, roles);
		}

		::System::UInt32 get_SeasonUID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR_GET_SEASONUID_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::GridFightGameRefTrait*>* get_Traits()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::GridFightGameRefTrait*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR_GET_TRAITS_OFFSET))(this);
		}

		::RPG::Client::GridFightGameRefTrait* GetTrait(::System::UInt32 traitID)
		{
			return ((::RPG::Client::GridFightGameRefTrait*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR_GETTRAIT_OFFSET))(this, traitID);
		}

		::System::UInt32 GetCurrentActivatedLayer(::System::UInt32 traitID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR_GETCURRENTACTIVATEDLAYER_OFFSET))(this, traitID);
		}

		::System::UInt32 GetExpiredActivatedLayer(::System::UInt32 traitID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR_GETEXPIREDACTIVATEDLAYER_OFFSET))(this, traitID);
		}

		::System::UInt32 GetLayer(::System::UInt32 traitID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR_GETLAYER_OFFSET))(this, traitID);
		}

		::System::UInt32 GetExpiredLayer(::System::UInt32 traitID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR_GETEXPIREDLAYER_OFFSET))(this, traitID);
		}

		::System::Void _UpdateTraitLayer(::System::UInt32 roleID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* equipIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR__UPDATETRAITLAYER_OFFSET))(this, roleID, equipIDs);
		}

		::System::Void _AddTraitLayer(::System::UInt32 traitID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR__ADDTRAITLAYER_OFFSET))(this, traitID);
		}

		::System::Void _AddExpiredTraitLayer(::System::UInt32 traitID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR__ADDEXPIREDTRAITLAYER_OFFSET))(this, traitID);
		}

		static ::System::Collections::Generic::List_1<::Class_1_C0277CE3A38B20B6*>* _GetRoleSwitchRole()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_C0277CE3A38B20B6*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR__GETROLESWITCHROLE_OFFSET))();
		}
	};
}
