#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1314;
class Class_0_16E4307DCC419505_1315;
class Class_1_45BB92167AED63A0_17;
class Class_1_97E659ED8D5D259C_21;
class Class_1_B1410BF5E86A477D_1;
class Class_1_D17272E82AE804C2_175;
class Class_1_E577B5580A99D425;
class Class_1_FCC22A0BAD3D5A17;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_716D4EDAC9A9FD0E_ADD_ONCHANGED_OFFSET UNITYSDK_OFFSET(0x18B8B6F0)
#define CLASS_1_716D4EDAC9A9FD0E_GET_STAGES_OFFSET UNITYSDK_OFFSET(0x18B8B410)
#define CLASS_1_716D4EDAC9A9FD0E_METHOD_1_47E9CB4A1FF6789C_OFFSET UNITYSDK_OFFSET(0x18B8CAB0)
#define CLASS_1_716D4EDAC9A9FD0E_METHOD_1_6161A7BAB784EB4F_OFFSET UNITYSDK_OFFSET(0x18B8C410)
#define CLASS_1_716D4EDAC9A9FD0E_METHOD_1_673AE19004469926_OFFSET UNITYSDK_OFFSET(0x18B8B580)
#define CLASS_1_716D4EDAC9A9FD0E_METHOD_1_B6E07CD385C1C182_OFFSET UNITYSDK_OFFSET(0x18B8C960)
#define CLASS_1_716D4EDAC9A9FD0E_METHOD_1_CFAE4A19CDCB7CB0_OFFSET UNITYSDK_OFFSET(0x18B8B420)
#define CLASS_1_716D4EDAC9A9FD0E_METHOD_1_D493F3C71800BACE_OFFSET UNITYSDK_OFFSET(0x18B8B8B0)
#define CLASS_1_716D4EDAC9A9FD0E_METHOD_1_F17DE245FAC80893_1_OFFSET UNITYSDK_OFFSET(0x18B8BF50)
#define CLASS_1_716D4EDAC9A9FD0E_METHOD_1_F17DE245FAC80893_OFFSET UNITYSDK_OFFSET(0x18B8BA90)
#define CLASS_1_716D4EDAC9A9FD0E_REMOVE_ONCHANGED_OFFSET UNITYSDK_OFFSET(0x18B8B750)
#define CLASS_1_716D4EDAC9A9FD0E__CTOR_OFFSET UNITYSDK_OFFSET(0x18B8B7B0)

inline static constexpr unsigned int Class_1_716D4EDAC9A9FD0E_TypeDefinitionIndex = 76517;

class Class_1_716D4EDAC9A9FD0E : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::Class_1_FCC22A0BAD3D5A17*>* _Stages_k__BackingField; // 0x10
	::System::Action* OnChanged; // 0x18

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

	::Class_0_16E4307DCC419505_1314* Method_1_673AE19004469926(::System::Int32 a1)
	{
		return ((::Class_0_16E4307DCC419505_1314*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_716D4EDAC9A9FD0E_METHOD_1_673AE19004469926_OFFSET))(this, a1);
	}

	::System::Void add_OnChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_716D4EDAC9A9FD0E_ADD_ONCHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_716D4EDAC9A9FD0E_REMOVE_ONCHANGED_OFFSET))(this, a1);
	}

	::System::Void Method_1_D493F3C71800BACE(::Class_1_97E659ED8D5D259C_21* a1, ::Class_1_B1410BF5E86A477D_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_97E659ED8D5D259C_21*, ::Class_1_B1410BF5E86A477D_1*))((::PBYTE)hIl2Cpp + CLASS_1_716D4EDAC9A9FD0E_METHOD_1_D493F3C71800BACE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F17DE245FAC80893(::Class_1_97E659ED8D5D259C_21* a1, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_E577B5580A99D425*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_97E659ED8D5D259C_21*, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_E577B5580A99D425*>*))((::PBYTE)hIl2Cpp + CLASS_1_716D4EDAC9A9FD0E_METHOD_1_F17DE245FAC80893_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F17DE245FAC80893_1(::Class_1_97E659ED8D5D259C_21* a1, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_D17272E82AE804C2_175*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_97E659ED8D5D259C_21*, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_D17272E82AE804C2_175*>*))((::PBYTE)hIl2Cpp + CLASS_1_716D4EDAC9A9FD0E_METHOD_1_F17DE245FAC80893_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6161A7BAB784EB4F(::Class_1_45BB92167AED63A0_17* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_17*))((::PBYTE)hIl2Cpp + CLASS_1_716D4EDAC9A9FD0E_METHOD_1_6161A7BAB784EB4F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_B6E07CD385C1C182()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_716D4EDAC9A9FD0E_METHOD_1_B6E07CD385C1C182_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_1315* Method_1_47E9CB4A1FF6789C(::System::Collections::Generic::IEnumerable_1<::System::Int32>* a1)
	{
		return ((::Class_0_16E4307DCC419505_1315*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_716D4EDAC9A9FD0E_METHOD_1_47E9CB4A1FF6789C_OFFSET))(this, a1);
	}
};
