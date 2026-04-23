#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_36.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_5.h"

namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightEquipTrack; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA492D30)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA492D70)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__UPDATEEQUIPTRACK_B__17_0_OFFSET UNITYSDK_OFFSET(0xA492D80)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C___ADDTRACKTOLASTANDSEND_B__35_0_OFFSET UNITYSDK_OFFSET(0xA492E20)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C___GETMAXPRIORITY_B__30_0_OFFSET UNITYSDK_OFFSET(0xA492DA0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C___GETMINPRIORITY_B__31_0_OFFSET UNITYSDK_OFFSET(0xA492DC0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C___RESETALLTRACKSPRIORITYANDSEND_B__34_0_OFFSET UNITYSDK_OFFSET(0xA492DE0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C___RESETALLTRACKSPRIORITYANDSEND_B__34_1_OFFSET UNITYSDK_OFFSET(0xA492E00)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C___TRYASSIGNBASICEQUIP_B__45_1_OFFSET UNITYSDK_OFFSET(0xA492EA0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C___TRYCRAFTEQUIPFORTRAITEFFECT_B__44_0_OFFSET UNITYSDK_OFFSET(0xA492E40)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipTrackData___c_TypeDefinitionIndex = 60145;

	class GridFightEquipTrackData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightEquipTrackData___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightEquipTrackData___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightEquipTrackData___c_TypeDefinitionIndex)->GetStaticField(0xDB70);
		}
		static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>** StaticGet___9__45_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightEquipTrackData___c_TypeDefinitionIndex)->GetStaticField(0xDB78);
		}
		static ::System::Comparison_1<::System::ValueTuple_5<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::Enum_3_DB663931210BBC27_36, ::System::UInt32>>** StaticGet___9__35_0()
		{
			return (::System::Comparison_1<::System::ValueTuple_5<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::Enum_3_DB663931210BBC27_36, ::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(GridFightEquipTrackData___c_TypeDefinitionIndex)->GetStaticField(0xDB80);
		}
		static ::System::Func_2<::RPG::Client::GridFightEquipTrack*, ::System::Int64>** StaticGet___9__17_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipTrack*, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(GridFightEquipTrackData___c_TypeDefinitionIndex)->GetStaticField(0xDB88);
		}
		static ::System::Comparison_1<::System::ValueTuple_5<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::Enum_3_DB663931210BBC27_36, ::System::UInt32>>** StaticGet___9__34_0()
		{
			return (::System::Comparison_1<::System::ValueTuple_5<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::Enum_3_DB663931210BBC27_36, ::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(GridFightEquipTrackData___c_TypeDefinitionIndex)->GetStaticField(0xDB90);
		}
		static ::System::Comparison_1<::System::ValueTuple_5<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::Enum_3_DB663931210BBC27_36, ::System::UInt32>>** StaticGet___9__34_1()
		{
			return (::System::Comparison_1<::System::ValueTuple_5<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::Enum_3_DB663931210BBC27_36, ::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(GridFightEquipTrackData___c_TypeDefinitionIndex)->GetStaticField(0xDB98);
		}
		static ::System::Func_2<::RPG::Client::GridFightEquipTrack*, ::System::UInt32>** StaticGet___9__31_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipTrack*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightEquipTrackData___c_TypeDefinitionIndex)->GetStaticField(0xDBA0);
		}
		static ::System::Func_2<::RPG::Client::GridFightEquipTrack*, ::System::UInt32>** StaticGet___9__30_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipTrack*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightEquipTrackData___c_TypeDefinitionIndex)->GetStaticField(0xDBA8);
		}
		static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>** StaticGet___9__44_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightEquipTrackData___c_TypeDefinitionIndex)->GetStaticField(0xDBB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__CTOR_OFFSET))(this);
		}

		::System::Int64 _UpdateEquipTrack_b__17_0(::RPG::Client::GridFightEquipTrack* x)
		{
			return ((::System::Int64(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__UPDATEEQUIPTRACK_B__17_0_OFFSET))(this, x);
		}

		::System::UInt32 __GetMaxPriority_b__30_0(::RPG::Client::GridFightEquipTrack* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C___GETMAXPRIORITY_B__30_0_OFFSET))(this, x);
		}

		::System::UInt32 __GetMinPriority_b__31_0(::RPG::Client::GridFightEquipTrack* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C___GETMINPRIORITY_B__31_0_OFFSET))(this, x);
		}

		::System::Int32 __ResetAllTracksPriorityAndSend_b__34_0(::System::ValueTuple_5<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::Enum_3_DB663931210BBC27_36, ::System::UInt32> a, ::System::ValueTuple_5<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::Enum_3_DB663931210BBC27_36, ::System::UInt32> b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_5<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::Enum_3_DB663931210BBC27_36, ::System::UInt32>, ::System::ValueTuple_5<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::Enum_3_DB663931210BBC27_36, ::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C___RESETALLTRACKSPRIORITYANDSEND_B__34_0_OFFSET))(this, a, b);
		}

		::System::Int32 __ResetAllTracksPriorityAndSend_b__34_1(::System::ValueTuple_5<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::Enum_3_DB663931210BBC27_36, ::System::UInt32> a, ::System::ValueTuple_5<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::Enum_3_DB663931210BBC27_36, ::System::UInt32> b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_5<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::Enum_3_DB663931210BBC27_36, ::System::UInt32>, ::System::ValueTuple_5<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::Enum_3_DB663931210BBC27_36, ::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C___RESETALLTRACKSPRIORITYANDSEND_B__34_1_OFFSET))(this, a, b);
		}

		::System::Int32 __AddTrackToLastAndSend_b__35_0(::System::ValueTuple_5<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::Enum_3_DB663931210BBC27_36, ::System::UInt32> a, ::System::ValueTuple_5<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::Enum_3_DB663931210BBC27_36, ::System::UInt32> b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_5<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::Enum_3_DB663931210BBC27_36, ::System::UInt32>, ::System::ValueTuple_5<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::Enum_3_DB663931210BBC27_36, ::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C___ADDTRACKTOLASTANDSEND_B__35_0_OFFSET))(this, a, b);
		}

		::System::Boolean __TryCraftEquipForTraitEffect_b__44_0(::RPG::Client::GridFightEquipItemData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C___TRYCRAFTEQUIPFORTRAITEFFECT_B__44_0_OFFSET))(this, x);
		}

		::System::Boolean __TryAssignBasicEquip_b__45_1(::RPG::Client::GridFightEquipItemData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C___TRYASSIGNBASICEQUIP_B__45_1_OFFSET))(this, x);
		}
	};
}
