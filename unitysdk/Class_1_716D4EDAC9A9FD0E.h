#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1598;
class Class_0_16E4307DCC419505_1599;
class Class_1_45BB92167AED63A0_18;
class Class_1_97E659ED8D5D259C_23;
class Class_1_B1410BF5E86A477D_1;
class Class_1_D17272E82AE804C2_207;
class Class_1_EA3716A61EF929AB;
class Class_1_FCC22A0BAD3D5A17;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_716D4EDAC9A9FD0E_ADD_ONCHANGED_OFFSET UNITYSDK_OFFSET(0x159FCEC0)
#define CLASS_1_716D4EDAC9A9FD0E_GET_STAGES_OFFSET UNITYSDK_OFFSET(0x159FCBE0)
#define CLASS_1_716D4EDAC9A9FD0E_METHOD_1_47E9CB4A1FF6789C_OFFSET UNITYSDK_OFFSET(0x159FE280)
#define CLASS_1_716D4EDAC9A9FD0E_METHOD_1_6161A7BAB784EB4F_OFFSET UNITYSDK_OFFSET(0x159FDBE0)
#define CLASS_1_716D4EDAC9A9FD0E_METHOD_1_673AE19004469926_OFFSET UNITYSDK_OFFSET(0x159FCD50)
#define CLASS_1_716D4EDAC9A9FD0E_METHOD_1_B549F04EA33A764B_OFFSET UNITYSDK_OFFSET(0x159FE130)
#define CLASS_1_716D4EDAC9A9FD0E_METHOD_1_CFAE4A19CDCB7CB0_OFFSET UNITYSDK_OFFSET(0x159FCBF0)
#define CLASS_1_716D4EDAC9A9FD0E_METHOD_1_D493F3C71800BACE_OFFSET UNITYSDK_OFFSET(0x159FD080)
#define CLASS_1_716D4EDAC9A9FD0E_METHOD_1_F17DE245FAC80893_1_OFFSET UNITYSDK_OFFSET(0x159FD720)
#define CLASS_1_716D4EDAC9A9FD0E_METHOD_1_F17DE245FAC80893_OFFSET UNITYSDK_OFFSET(0x159FD260)
#define CLASS_1_716D4EDAC9A9FD0E_REMOVE_ONCHANGED_OFFSET UNITYSDK_OFFSET(0x159FCF20)
#define CLASS_1_716D4EDAC9A9FD0E__CTOR_OFFSET UNITYSDK_OFFSET(0x159FCF80)

inline static constexpr unsigned int Class_1_716D4EDAC9A9FD0E_TypeDefinitionIndex = 81478;

class Class_1_716D4EDAC9A9FD0E : public ::System::Object
{
public:
	::System::Action* OnChanged; // 0x10
	::System::Collections::Generic::IReadOnlyList_1<::Class_1_FCC22A0BAD3D5A17*>* _Stages_k__BackingField; // 0x18

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_716D4EDAC9A9FD0E__CTOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_FCC22A0BAD3D5A17*>* get_Stages()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_FCC22A0BAD3D5A17*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_716D4EDAC9A9FD0E_GET_STAGES_OFFSET))(this);
	}

	::System::Int32 Method_1_CFAE4A19CDCB7CB0()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_716D4EDAC9A9FD0E_METHOD_1_CFAE4A19CDCB7CB0_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_1598* Method_1_673AE19004469926(::System::Int32 a1)
	{
		return ((::Class_0_16E4307DCC419505_1598*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_716D4EDAC9A9FD0E_METHOD_1_673AE19004469926_OFFSET))(this, a1);
	}

	::System::Void add_OnChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_716D4EDAC9A9FD0E_ADD_ONCHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_716D4EDAC9A9FD0E_REMOVE_ONCHANGED_OFFSET))(this, a1);
	}

	::System::Void Method_1_D493F3C71800BACE(::Class_1_97E659ED8D5D259C_23* a1, ::Class_1_B1410BF5E86A477D_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_97E659ED8D5D259C_23*, ::Class_1_B1410BF5E86A477D_1*))((::PBYTE)hIl2Cpp + CLASS_1_716D4EDAC9A9FD0E_METHOD_1_D493F3C71800BACE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F17DE245FAC80893(::Class_1_97E659ED8D5D259C_23* a1, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_EA3716A61EF929AB*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_97E659ED8D5D259C_23*, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_EA3716A61EF929AB*>*))((::PBYTE)hIl2Cpp + CLASS_1_716D4EDAC9A9FD0E_METHOD_1_F17DE245FAC80893_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F17DE245FAC80893_1(::Class_1_97E659ED8D5D259C_23* a1, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_D17272E82AE804C2_207*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_97E659ED8D5D259C_23*, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_D17272E82AE804C2_207*>*))((::PBYTE)hIl2Cpp + CLASS_1_716D4EDAC9A9FD0E_METHOD_1_F17DE245FAC80893_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6161A7BAB784EB4F(::Class_1_45BB92167AED63A0_18* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_18*))((::PBYTE)hIl2Cpp + CLASS_1_716D4EDAC9A9FD0E_METHOD_1_6161A7BAB784EB4F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_B549F04EA33A764B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_716D4EDAC9A9FD0E_METHOD_1_B549F04EA33A764B_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_1599* Method_1_47E9CB4A1FF6789C(::System::Collections::Generic::IEnumerable_1<::System::Int32>* a1)
	{
		return ((::Class_0_16E4307DCC419505_1599*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_716D4EDAC9A9FD0E_METHOD_1_47E9CB4A1FF6789C_OFFSET))(this, a1);
	}
};
