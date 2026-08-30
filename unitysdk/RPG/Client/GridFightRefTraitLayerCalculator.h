#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_866;
class Class_1_50210DAEB46E0CD5;
namespace RPG::Client { class GridFightGameRefTrait; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR_GETCURRENTACTIVATEDLAYER_OFFSET UNITYSDK_OFFSET(0xD2F7160)
#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR_GETEXPIREDACTIVATEDLAYER_OFFSET UNITYSDK_OFFSET(0xD2F71C0)
#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR_GETEXPIREDLAYER_OFFSET UNITYSDK_OFFSET(0xD2F72B0)
#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR_GETLAYER_OFFSET UNITYSDK_OFFSET(0xD2F7220)
#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR_GETTRAIT_OFFSET UNITYSDK_OFFSET(0xD2F7060)
#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR_GET_SEASONUID_OFFSET UNITYSDK_OFFSET(0xD2F55E0)
#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR_GET_TRAITS_OFFSET UNITYSDK_OFFSET(0xD2F7020)
#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR__ADDEXPIREDTRAITLAYER_OFFSET UNITYSDK_OFFSET(0xD2F7510)
#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR__ADDTRAITLAYER_OFFSET UNITYSDK_OFFSET(0xD2F7340)
#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xD2F55F0)
#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR__GETROLESWITCHROLE_OFFSET UNITYSDK_OFFSET(0xD2F6340)
#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR__UPDATETRAITLAYER_OFFSET UNITYSDK_OFFSET(0xD2F6620)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRefTraitLayerCalculator_TypeDefinitionIndex = 64877;

	class GridFightRefTraitLayerCalculator : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::Class_1_50210DAEB46E0CD5*>** StaticGet__CachedSwitchRules()
		{
			return (::System::Collections::Generic::List_1<::Class_1_50210DAEB46E0CD5*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRefTraitLayerCalculator_TypeDefinitionIndex)->GetStaticField(0x440E0);
		}
		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefTrait*>* _traits; // 0x10
		::System::UInt32 _SeasonUID_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 a1, ::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_866*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_866*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_SeasonUID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR_GET_SEASONUID_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::GridFightGameRefTrait*>* get_Traits()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::GridFightGameRefTrait*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR_GET_TRAITS_OFFSET))(this);
		}

		::RPG::Client::GridFightGameRefTrait* GetTrait(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightGameRefTrait*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR_GETTRAIT_OFFSET))(this, a1);
		}

		::System::UInt32 GetCurrentActivatedLayer(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR_GETCURRENTACTIVATEDLAYER_OFFSET))(this, a1);
		}

		::System::UInt32 GetExpiredActivatedLayer(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR_GETEXPIREDACTIVATEDLAYER_OFFSET))(this, a1);
		}

		::System::UInt32 GetLayer(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR_GETLAYER_OFFSET))(this, a1);
		}

		::System::UInt32 GetExpiredLayer(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR_GETEXPIREDLAYER_OFFSET))(this, a1);
		}

		::System::Void _UpdateTraitLayer(::System::UInt32 a1, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR__UPDATETRAITLAYER_OFFSET))(this, a1, a2);
		}

		::System::Void _AddTraitLayer(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR__ADDTRAITLAYER_OFFSET))(this, a1);
		}

		::System::Void _AddExpiredTraitLayer(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR__ADDEXPIREDTRAITLAYER_OFFSET))(this, a1);
		}

		static ::System::Collections::Generic::List_1<::Class_1_50210DAEB46E0CD5*>* _GetRoleSwitchRole()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_50210DAEB46E0CD5*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR__GETROLESWITCHROLE_OFFSET))();
		}
	};
}
