#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftChipTraitType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_116;
class Class_0_16E4307DCC419505_124;
class Class_0_16E4307DCC419505_167;
class Class_0_16E4307DCC419505_168;
class Class_0_16E4307DCC419505_397;
class Class_1_30C7E5C640F89710;
class Class_1_6241E1C44338E6DB;
class Class_1_F367C0154B7F634C_Class_1_9ABF6EA9968ADBBC;
class Class_1_F367C0154B7F634C_Class_1_9ABF6EA9968ADBBC_1;
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace R3 { template <typename T> class ReadOnlyReactiveProperty_1; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_F367C0154B7F634C_ADD_HANDLEHINTEMPTY_OFFSET UNITYSDK_OFFSET(0xBEC4F20)
#define CLASS_1_F367C0154B7F634C_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBEC5810)
#define CLASS_1_F367C0154B7F634C_METHOD_1_0111299F89085248_OFFSET UNITYSDK_OFFSET(0xBEC5350)
#define CLASS_1_F367C0154B7F634C_METHOD_1_14303FE93F0974B5_OFFSET UNITYSDK_OFFSET(0xBEC5040)
#define CLASS_1_F367C0154B7F634C_METHOD_1_72333791BCE8F4EF_1_OFFSET UNITYSDK_OFFSET(0xBEC52F0)
#define CLASS_1_F367C0154B7F634C_METHOD_1_72333791BCE8F4EF_OFFSET UNITYSDK_OFFSET(0xBEC4FE0)
#define CLASS_1_F367C0154B7F634C_METHOD_1_B213056103887067_1_OFFSET UNITYSDK_OFFSET(0xBEC4E20)
#define CLASS_1_F367C0154B7F634C_METHOD_1_B213056103887067_OFFSET UNITYSDK_OFFSET(0xBEC4D60)
#define CLASS_1_F367C0154B7F634C_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xBEC5970)
#define CLASS_1_F367C0154B7F634C_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBEC5920)
#define CLASS_1_F367C0154B7F634C_METHOD_1_FB0855CD6429CA3E_OFFSET UNITYSDK_OFFSET(0xBEC4EE0)
#define CLASS_1_F367C0154B7F634C_REMOVE_HANDLEHINTEMPTY_OFFSET UNITYSDK_OFFSET(0xBEC4F80)
#define CLASS_1_F367C0154B7F634C__CTOR_OFFSET UNITYSDK_OFFSET(0xBEC56E0)
#define CLASS_1_F367C0154B7F634C__GET_HIDEDETAILCOMMAND_B__11_0_OFFSET UNITYSDK_OFFSET(0xBEC5D70)
#define CLASS_1_F367C0154B7F634C__GET_SHOWDETAILCOMMAND_B__8_0_OFFSET UNITYSDK_OFFSET(0xBEC59C0)
#define CLASS_1_F367C0154B7F634C___LOADATTRIBUTETYPES_B__31_0_OFFSET UNITYSDK_OFFSET(0xBEC5E10)
#define CLASS_1_F367C0154B7F634C___LOADATTRIBUTETYPES_B__31_2_OFFSET UNITYSDK_OFFSET(0xBEC5E40)
#define CLASS_1_F367C0154B7F634C___LOADTRAITS_B__32_1_OFFSET UNITYSDK_OFFSET(0xBEC5EE0)
#define CLASS_1_F367C0154B7F634C___LOADTRAITS_B__32_3_OFFSET UNITYSDK_OFFSET(0xBEC5F80)

inline static constexpr unsigned int Class_1_F367C0154B7F634C_TypeDefinitionIndex = 79556;

class Class_1_F367C0154B7F634C : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_116* AFKPGPDBMKH; // 0x10
	::Class_0_16E4307DCC419505_124* PONKAEHCHGF; // 0x18
	::System::Action* HandleHintEmpty; // 0x20
	::Class_0_16E4307DCC419505_397* EENAJHAKPBO; // 0x28
	::Class_0_16E4307DCC419505_397* JBMMCMDJHCK; // 0x30
	::System::Collections::Generic::IReadOnlyList_1<::Class_1_F367C0154B7F634C_Class_1_9ABF6EA9968ADBBC*>* OCBNPJLLDIH; // 0x38
	::Class_0_16E4307DCC419505_167* KHLEHDEPMGJ; // 0x40
	::Class_1_6241E1C44338E6DB* AMAPILGDNAD; // 0x48
	::Class_0_16E4307DCC419505_168* MPHBMLDHCHI; // 0x50
	::System::Collections::Generic::IReadOnlyList_1<::Class_1_F367C0154B7F634C_Class_1_9ABF6EA9968ADBBC_1*>* CMBEAINJHPM; // 0x58
	::Class_1_30C7E5C640F89710* FGBCFKOFOCB; // 0x60
	::R3::ReactiveProperty_1<::System::Boolean>* AACMNLBJMCI; // 0x68

	::System::Void _ctor(::Class_0_16E4307DCC419505_116* a1, ::Class_0_16E4307DCC419505_167* a2, ::Class_0_16E4307DCC419505_124* a3, ::Class_0_16E4307DCC419505_168* a4, ::Class_1_6241E1C44338E6DB* a5, ::Class_1_30C7E5C640F89710* a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_116*, ::Class_0_16E4307DCC419505_167*, ::Class_0_16E4307DCC419505_124*, ::Class_0_16E4307DCC419505_168*, ::Class_1_6241E1C44338E6DB*, ::Class_1_30C7E5C640F89710*))((::PBYTE)hIl2Cpp + CLASS_1_F367C0154B7F634C__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::Class_0_16E4307DCC419505_397* Method_1_B213056103887067()
	{
		return ((::Class_0_16E4307DCC419505_397*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F367C0154B7F634C_METHOD_1_B213056103887067_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_397* Method_1_B213056103887067_1()
	{
		return ((::Class_0_16E4307DCC419505_397*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F367C0154B7F634C_METHOD_1_B213056103887067_1_OFFSET))(this);
	}

	::R3::ReadOnlyReactiveProperty_1<::System::Boolean>* Method_1_FB0855CD6429CA3E()
	{
		return ((::R3::ReadOnlyReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F367C0154B7F634C_METHOD_1_FB0855CD6429CA3E_OFFSET))(this);
	}

	::System::Void add_HandleHintEmpty(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_F367C0154B7F634C_ADD_HANDLEHINTEMPTY_OFFSET))(this, a1);
	}

	::System::Void remove_HandleHintEmpty(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_F367C0154B7F634C_REMOVE_HANDLEHINTEMPTY_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_F367C0154B7F634C_Class_1_9ABF6EA9968ADBBC_1*>* Method_1_72333791BCE8F4EF()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_F367C0154B7F634C_Class_1_9ABF6EA9968ADBBC_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F367C0154B7F634C_METHOD_1_72333791BCE8F4EF_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_F367C0154B7F634C_Class_1_9ABF6EA9968ADBBC*>* Method_1_72333791BCE8F4EF_1()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_F367C0154B7F634C_Class_1_9ABF6EA9968ADBBC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F367C0154B7F634C_METHOD_1_72333791BCE8F4EF_1_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F367C0154B7F634C_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F367C0154B7F634C_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F367C0154B7F634C_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_F367C0154B7F634C_Class_1_9ABF6EA9968ADBBC_1*>* Method_1_14303FE93F0974B5()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_F367C0154B7F634C_Class_1_9ABF6EA9968ADBBC_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F367C0154B7F634C_METHOD_1_14303FE93F0974B5_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_F367C0154B7F634C_Class_1_9ABF6EA9968ADBBC*>* Method_1_0111299F89085248()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_F367C0154B7F634C_Class_1_9ABF6EA9968ADBBC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F367C0154B7F634C_METHOD_1_0111299F89085248_OFFSET))(this);
	}

	::System::Void _get_ShowDetailCommand_b__8_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F367C0154B7F634C__GET_SHOWDETAILCOMMAND_B__8_0_OFFSET))(this);
	}

	::System::Void _get_HideDetailCommand_b__11_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F367C0154B7F634C__GET_HIDEDETAILCOMMAND_B__11_0_OFFSET))(this);
	}

	::System::Boolean __LoadAttributeTypes_b__31_0(::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_1_F367C0154B7F634C___LOADATTRIBUTETYPES_B__31_0_OFFSET))(this, a1);
	}

	::Class_1_F367C0154B7F634C_Class_1_9ABF6EA9968ADBBC_1* __LoadAttributeTypes_b__31_2(::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32> a1)
	{
		return ((::Class_1_F367C0154B7F634C_Class_1_9ABF6EA9968ADBBC_1*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_1_F367C0154B7F634C___LOADATTRIBUTETYPES_B__31_2_OFFSET))(this, a1);
	}

	::System::Boolean __LoadTraits_b__32_1(::RPG::Client::MechCraft::MechCraftChipTraitType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftChipTraitType))((::PBYTE)hIl2Cpp + CLASS_1_F367C0154B7F634C___LOADTRAITS_B__32_1_OFFSET))(this, a1);
	}

	::Class_1_F367C0154B7F634C_Class_1_9ABF6EA9968ADBBC* __LoadTraits_b__32_3(::RPG::Client::MechCraft::MechCraftChipTraitType a1)
	{
		return ((::Class_1_F367C0154B7F634C_Class_1_9ABF6EA9968ADBBC*(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftChipTraitType))((::PBYTE)hIl2Cpp + CLASS_1_F367C0154B7F634C___LOADTRAITS_B__32_3_OFFSET))(this, a1);
	}
};
