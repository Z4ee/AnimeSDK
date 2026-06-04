#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1220;
class Class_0_16E4307DCC419505_1221;
class Class_1_45BB92167AED63A0_15;
class Class_1_97E659ED8D5D259C_20;
class Class_1_A16A135FC5A0DDB9;
class Class_1_B1410BF5E86A477D;
class Class_1_D17272E82AE804C2_161;
class Class_1_FCC22A0BAD3D5A17;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_716D4EDAC9A9FD0E_ADD_ONCHANGED_OFFSET UNITYSDK_OFFSET(0x138E2020)
#define CLASS_1_716D4EDAC9A9FD0E_GET_STAGES_OFFSET UNITYSDK_OFFSET(0x138E1DF0)
#define CLASS_1_716D4EDAC9A9FD0E_METHOD_1_1130008A28C3759E_OFFSET UNITYSDK_OFFSET(0x138E2F60)
#define CLASS_1_716D4EDAC9A9FD0E_METHOD_1_673AE19004469926_OFFSET UNITYSDK_OFFSET(0x138E1F10)
#define CLASS_1_716D4EDAC9A9FD0E_METHOD_1_7283533EEFFC0592_OFFSET UNITYSDK_OFFSET(0x138E2E10)
#define CLASS_1_716D4EDAC9A9FD0E_METHOD_1_B2E4ED44D097E972_OFFSET UNITYSDK_OFFSET(0x138E2A60)
#define CLASS_1_716D4EDAC9A9FD0E_METHOD_1_CFAE4A19CDCB7CB0_OFFSET UNITYSDK_OFFSET(0x138E1E00)
#define CLASS_1_716D4EDAC9A9FD0E_METHOD_1_D493F3C71800BACE_OFFSET UNITYSDK_OFFSET(0x138E21E0)
#define CLASS_1_716D4EDAC9A9FD0E_METHOD_1_F17DE245FAC80893_1_OFFSET UNITYSDK_OFFSET(0x138E26E0)
#define CLASS_1_716D4EDAC9A9FD0E_METHOD_1_F17DE245FAC80893_OFFSET UNITYSDK_OFFSET(0x138E2360)
#define CLASS_1_716D4EDAC9A9FD0E_REMOVE_ONCHANGED_OFFSET UNITYSDK_OFFSET(0x138E2080)
#define CLASS_1_716D4EDAC9A9FD0E__CTOR_OFFSET UNITYSDK_OFFSET(0x138E20E0)

inline static constexpr unsigned int Class_1_716D4EDAC9A9FD0E_TypeDefinitionIndex = 74133;

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

	::Class_0_16E4307DCC419505_1220* Method_1_673AE19004469926(::System::Int32 a1)
	{
		return ((::Class_0_16E4307DCC419505_1220*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_716D4EDAC9A9FD0E_METHOD_1_673AE19004469926_OFFSET))(this, a1);
	}

	::System::Void add_OnChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_716D4EDAC9A9FD0E_ADD_ONCHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_716D4EDAC9A9FD0E_REMOVE_ONCHANGED_OFFSET))(this, a1);
	}

	::System::Void Method_1_D493F3C71800BACE(::Class_1_97E659ED8D5D259C_20* a1, ::Class_1_B1410BF5E86A477D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_97E659ED8D5D259C_20*, ::Class_1_B1410BF5E86A477D*))((::PBYTE)hIl2Cpp + CLASS_1_716D4EDAC9A9FD0E_METHOD_1_D493F3C71800BACE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F17DE245FAC80893(::Class_1_97E659ED8D5D259C_20* a1, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_A16A135FC5A0DDB9*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_97E659ED8D5D259C_20*, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_A16A135FC5A0DDB9*>*))((::PBYTE)hIl2Cpp + CLASS_1_716D4EDAC9A9FD0E_METHOD_1_F17DE245FAC80893_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F17DE245FAC80893_1(::Class_1_97E659ED8D5D259C_20* a1, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_D17272E82AE804C2_161*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_97E659ED8D5D259C_20*, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_D17272E82AE804C2_161*>*))((::PBYTE)hIl2Cpp + CLASS_1_716D4EDAC9A9FD0E_METHOD_1_F17DE245FAC80893_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B2E4ED44D097E972(::Class_1_45BB92167AED63A0_15* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_15*))((::PBYTE)hIl2Cpp + CLASS_1_716D4EDAC9A9FD0E_METHOD_1_B2E4ED44D097E972_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_7283533EEFFC0592()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_716D4EDAC9A9FD0E_METHOD_1_7283533EEFFC0592_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_1221* Method_1_1130008A28C3759E(::System::Collections::Generic::IEnumerable_1<::System::Int32>* a1)
	{
		return ((::Class_0_16E4307DCC419505_1221*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_716D4EDAC9A9FD0E_METHOD_1_1130008A28C3759E_OFFSET))(this, a1);
	}
};
