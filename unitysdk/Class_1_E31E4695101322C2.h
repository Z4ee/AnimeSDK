#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_1862835F8661A21F_1438.h"
#include "unitysdk/System/Object.h"

class Class_2_0A55B5A82A61DAFA;
class Class_2_208CC9941471731A_1194;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E31E4695101322C2_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19076390)
#define CLASS_1_E31E4695101322C2_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x19076290)
#define CLASS_1_E31E4695101322C2_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x19075AF0)
#define CLASS_1_E31E4695101322C2_METHOD_1_2ED472EEE9018398_OFFSET UNITYSDK_OFFSET(0x19076BD0)
#define CLASS_1_E31E4695101322C2_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x19076890)
#define CLASS_1_E31E4695101322C2_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x19076070)
#define CLASS_1_E31E4695101322C2_METHOD_1_538A394A1ECA2F9C_OFFSET UNITYSDK_OFFSET(0x190772F0)
#define CLASS_1_E31E4695101322C2_METHOD_1_5A5DA5976F10CAF1_OFFSET UNITYSDK_OFFSET(0x19076600)
#define CLASS_1_E31E4695101322C2_METHOD_1_82AED606E137C919_OFFSET UNITYSDK_OFFSET(0x19076920)
#define CLASS_1_E31E4695101322C2_METHOD_1_A6E89EFA915ECC17_OFFSET UNITYSDK_OFFSET(0x190773D0)
#define CLASS_1_E31E4695101322C2_METHOD_1_A9505CE1ED08D646_OFFSET UNITYSDK_OFFSET(0x19076450)
#define CLASS_1_E31E4695101322C2_METHOD_1_AA8656BCDBBD4870_OFFSET UNITYSDK_OFFSET(0x19076240)
#define CLASS_1_E31E4695101322C2_METHOD_1_CB12F0B933210FB9_OFFSET UNITYSDK_OFFSET(0x190760E0)
#define CLASS_1_E31E4695101322C2_METHOD_1_E21AC6EE08DC160A_OFFSET UNITYSDK_OFFSET(0x19075B50)
#define CLASS_1_E31E4695101322C2_METHOD_1_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x19076540)
#define CLASS_1_E31E4695101322C2__CTOR_OFFSET UNITYSDK_OFFSET(0x190765B0)

inline static constexpr unsigned int Class_1_E31E4695101322C2_TypeDefinitionIndex = 56100;

class Class_1_E31E4695101322C2 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_7; // 0x10
	::Struct_2_1862835F8661A21F_1438 Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1194*>*>* Field_1_2; // 0x30
	::Il2CppArray<::Class_2_208CC9941471731A_1194*>* Field_1_0; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_6; // 0x40
	::System::Int32 Field_1_5; // 0x48
	::System::Boolean Field_1_4; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E31E4695101322C2__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E31E4695101322C2_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_1_E21AC6EE08DC160A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E31E4695101322C2_METHOD_1_E21AC6EE08DC160A_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E31E4695101322C2_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E31E4695101322C2_FINALIZE_OFFSET))(this);
	}

	::System::Void Method_1_A9505CE1ED08D646(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E31E4695101322C2_METHOD_1_A9505CE1ED08D646_OFFSET))(this, a1);
	}

	::System::Void Method_1_AA8656BCDBBD4870(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_E31E4695101322C2_METHOD_1_AA8656BCDBBD4870_OFFSET))(this, a1);
	}

	::System::Void Method_1_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E31E4695101322C2_METHOD_1_E41B6A823556FEEA_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_1194* Method_1_5A5DA5976F10CAF1(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_1194*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E31E4695101322C2_METHOD_1_5A5DA5976F10CAF1_OFFSET))(this, a1);
	}

	::Class_2_208CC9941471731A_1194* Method_1_82AED606E137C919(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_1194*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E31E4695101322C2_METHOD_1_82AED606E137C919_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E31E4695101322C2_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_2ED472EEE9018398(::Class_2_0A55B5A82A61DAFA* a1, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1194*>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0A55B5A82A61DAFA*, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1194*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E31E4695101322C2_METHOD_1_2ED472EEE9018398_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1194*>* Method_1_538A394A1ECA2F9C(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1194*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E31E4695101322C2_METHOD_1_538A394A1ECA2F9C_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_A6E89EFA915ECC17(::Class_2_0A55B5A82A61DAFA* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Boolean a3)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::Class_2_0A55B5A82A61DAFA*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E31E4695101322C2_METHOD_1_A6E89EFA915ECC17_OFFSET))(this, a1, a2, a3);
	}

	::Il2CppArray<::Class_2_208CC9941471731A_1194*>* Method_1_CB12F0B933210FB9()
	{
		return ((::Il2CppArray<::Class_2_208CC9941471731A_1194*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E31E4695101322C2_METHOD_1_CB12F0B933210FB9_OFFSET))(this);
	}

	::System::Void Method_1_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E31E4695101322C2_METHOD_1_0865E94460F11643_OFFSET))(this);
	}
};
