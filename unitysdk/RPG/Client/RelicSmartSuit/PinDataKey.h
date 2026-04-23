#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_52.h"
#include "unitysdk/RPG/Client/RelicSmartSuit/PlanType.h"
#include "unitysdk/System/Object.h"

class Class_1_18C00C8FB77B0B39;
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitPlanData; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY_CREATE_1_OFFSET UNITYSDK_OFFSET(0xAFA9290)
#define RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY_CREATE_OFFSET UNITYSDK_OFFSET(0xAFA9060)
#define RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xAFA9B00)
#define RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0xAFA9890)
#define RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xAFA9BA0)
#define RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY_GETHASHSETHASHCODE_OFFSET UNITYSDK_OFFSET(0xAFA9C20)
#define RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY_GET_INNERSETIDS_OFFSET UNITYSDK_OFFSET(0xAFA9040)
#define RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY_GET_OUTERSETIDS_OFFSET UNITYSDK_OFFSET(0xAFA9050)
#define RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY_GET_PLANTYPE_OFFSET UNITYSDK_OFFSET(0xAFA9030)
#define RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY_HASHSETEQUALS_OFFSET UNITYSDK_OFFSET(0xAFA9A90)
#define RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xAFA9820)
#define RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xAFA99F0)
#define RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY_TOPROTO_OFFSET UNITYSDK_OFFSET(0xAFA9630)
#define RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY__CTOR_OFFSET UNITYSDK_OFFSET(0xAFA9280)
#define RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY__GETPLANTYPE_1_OFFSET UNITYSDK_OFFSET(0xAFA97D0)
#define RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY__GETPLANTYPE_OFFSET UNITYSDK_OFFSET(0xAFA9230)
#define RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0xAFA9D10)
#define RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xAFA9D20)

namespace RPG::Client::RelicSmartSuit
{
	inline static constexpr unsigned int PinDataKey_TypeDefinitionIndex = 68677;

	class PinDataKey : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _OuterSetIDs_k__BackingField; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _InnerSetIDs_k__BackingField; // 0x18
		::RPG::Client::RelicSmartSuit::PlanType _PlanType_k__BackingField; // 0x20

		::System::Void _ctor(::RPG::Client::RelicSmartSuit::PlanType planType, ::System::Collections::Generic::HashSet_1<::System::UInt32>* innerSetIDs, ::System::Collections::Generic::HashSet_1<::System::UInt32>* outerSetIDs)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::PlanType, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY__CTOR_OFFSET))(this, planType, innerSetIDs, outerSetIDs);
		}

		::RPG::Client::RelicSmartSuit::PlanType get_PlanType()
		{
			return ((::RPG::Client::RelicSmartSuit::PlanType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY_GET_PLANTYPE_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_InnerSetIDs()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY_GET_INNERSETIDS_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_OuterSetIDs()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY_GET_OUTERSETIDS_OFFSET))(this);
		}

		static ::RPG::Client::RelicSmartSuit::PinDataKey* Create(::Class_1_18C00C8FB77B0B39* rspPinKey)
		{
			return ((::RPG::Client::RelicSmartSuit::PinDataKey*(*)(::Class_1_18C00C8FB77B0B39*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY_CREATE_OFFSET))(rspPinKey);
		}

		static ::RPG::Client::RelicSmartSuit::PinDataKey* Create_1(::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* planData)
		{
			return ((::RPG::Client::RelicSmartSuit::PinDataKey*(*)(::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY_CREATE_1_OFFSET))(planData);
		}

		::Class_1_18C00C8FB77B0B39* ToProto()
		{
			return ((::Class_1_18C00C8FB77B0B39*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY_TOPROTO_OFFSET))(this);
		}

		static ::RPG::Client::RelicSmartSuit::PlanType _GetPlanType(::Enum_3_DB663931210BBC27_52 planType)
		{
			return ((::RPG::Client::RelicSmartSuit::PlanType(*)(::Enum_3_DB663931210BBC27_52))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY__GETPLANTYPE_OFFSET))(planType);
		}

		static ::Enum_3_DB663931210BBC27_52 _GetPlanType_1(::RPG::Client::RelicSmartSuit::PlanType planType)
		{
			return ((::Enum_3_DB663931210BBC27_52(*)(::RPG::Client::RelicSmartSuit::PlanType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY__GETPLANTYPE_1_OFFSET))(planType);
		}

		static ::System::Boolean op_Equality(::RPG::Client::RelicSmartSuit::PinDataKey* left, ::RPG::Client::RelicSmartSuit::PinDataKey* right)
		{
			return ((::System::Boolean(*)(::RPG::Client::RelicSmartSuit::PinDataKey*, ::RPG::Client::RelicSmartSuit::PinDataKey*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::RPG::Client::RelicSmartSuit::PinDataKey* left, ::RPG::Client::RelicSmartSuit::PinDataKey* right)
		{
			return ((::System::Boolean(*)(::RPG::Client::RelicSmartSuit::PinDataKey*, ::RPG::Client::RelicSmartSuit::PinDataKey*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY_OP_INEQUALITY_OFFSET))(left, right);
		}

		::System::Boolean Equals(::RPG::Client::RelicSmartSuit::PinDataKey* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicSmartSuit::PinDataKey*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean HashSetEquals(::System::Collections::Generic::HashSet_1<::System::UInt32>* set1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* set2)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY_HASHSETEQUALS_OFFSET))(set1, set2);
		}

		static ::System::Int32 GetHashSetHashCode(::System::Collections::Generic::HashSet_1<::System::UInt32>* set)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY_GETHASHSETHASHCODE_OFFSET))(set);
		}

		::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __iFixBaseProxy_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
		}
	};
}
