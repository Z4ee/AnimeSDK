#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_54.h"
#include "unitysdk/RPG/Client/RelicSmartSuit/PlanType.h"
#include "unitysdk/System/Object.h"

class Class_1_18C00C8FB77B0B39_2;
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitPlanData; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY_CREATE_1_OFFSET UNITYSDK_OFFSET(0xDE3C040)
#define RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY_CREATE_OFFSET UNITYSDK_OFFSET(0xDE3BDC0)
#define RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xDE3C9C0)
#define RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0xDE3C750)
#define RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xDE3CA70)
#define RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY_GETHASHSETHASHCODE_OFFSET UNITYSDK_OFFSET(0xDE3CAF0)
#define RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY_GET_INNERSETIDS_OFFSET UNITYSDK_OFFSET(0xDE3BDA0)
#define RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY_GET_OUTERSETIDS_OFFSET UNITYSDK_OFFSET(0xDE3BDB0)
#define RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY_GET_PLANTYPE_OFFSET UNITYSDK_OFFSET(0xDE3BD90)
#define RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY_HASHSETEQUALS_OFFSET UNITYSDK_OFFSET(0xDE3C950)
#define RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xDE3C6E0)
#define RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xDE3C8B0)
#define RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY_TOPROTO_OFFSET UNITYSDK_OFFSET(0xDE3C4F0)
#define RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY__CTOR_OFFSET UNITYSDK_OFFSET(0xDE3C030)
#define RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY__GETPLANTYPE_1_OFFSET UNITYSDK_OFFSET(0xDE3C690)
#define RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY__GETPLANTYPE_OFFSET UNITYSDK_OFFSET(0xDE3BFE0)

namespace RPG::Client::RelicSmartSuit
{
	inline static constexpr unsigned int PinDataKey_TypeDefinitionIndex = 74312;

	class PinDataKey : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _OuterSetIDs_k__BackingField; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _InnerSetIDs_k__BackingField; // 0x18
		::RPG::Client::RelicSmartSuit::PlanType _PlanType_k__BackingField; // 0x20

		::System::Void _ctor(::RPG::Client::RelicSmartSuit::PlanType a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::PlanType, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY__CTOR_OFFSET))(this, a1, a2, a3);
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

		static ::RPG::Client::RelicSmartSuit::PinDataKey* Create(::Class_1_18C00C8FB77B0B39_2* a1)
		{
			return ((::RPG::Client::RelicSmartSuit::PinDataKey*(*)(::Class_1_18C00C8FB77B0B39_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::RelicSmartSuit::PinDataKey* Create_1(::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* a1)
		{
			return ((::RPG::Client::RelicSmartSuit::PinDataKey*(*)(::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY_CREATE_1_OFFSET))(a1);
		}

		::Class_1_18C00C8FB77B0B39_2* ToProto()
		{
			return ((::Class_1_18C00C8FB77B0B39_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY_TOPROTO_OFFSET))(this);
		}

		static ::RPG::Client::RelicSmartSuit::PlanType _GetPlanType(::Enum_3_DB663931210BBC27_54 a1)
		{
			return ((::RPG::Client::RelicSmartSuit::PlanType(*)(::Enum_3_DB663931210BBC27_54))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY__GETPLANTYPE_OFFSET))(a1);
		}

		static ::Enum_3_DB663931210BBC27_54 _GetPlanType_1(::RPG::Client::RelicSmartSuit::PlanType a1)
		{
			return ((::Enum_3_DB663931210BBC27_54(*)(::RPG::Client::RelicSmartSuit::PlanType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY__GETPLANTYPE_1_OFFSET))(a1);
		}

		static ::System::Boolean op_Equality(::RPG::Client::RelicSmartSuit::PinDataKey* a1, ::RPG::Client::RelicSmartSuit::PinDataKey* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::RelicSmartSuit::PinDataKey*, ::RPG::Client::RelicSmartSuit::PinDataKey*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::RPG::Client::RelicSmartSuit::PinDataKey* a1, ::RPG::Client::RelicSmartSuit::PinDataKey* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::RelicSmartSuit::PinDataKey*, ::RPG::Client::RelicSmartSuit::PinDataKey*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::RPG::Client::RelicSmartSuit::PinDataKey* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicSmartSuit::PinDataKey*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean HashSetEquals(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY_HASHSETEQUALS_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetHashSetHashCode(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PINDATAKEY_GETHASHSETHASHCODE_OFFSET))(a1);
		}
	};
}
