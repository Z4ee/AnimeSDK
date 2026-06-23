#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_1862835F8661A21F_443.h"
#include "unitysdk/System/Object.h"

class Class_2_0A55B5A82A61DAFA_1;
class Class_2_208CC9941471731A_1125;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_78EA45727928C0F8_FINALIZE_OFFSET UNITYSDK_OFFSET(0x16088B40)
#define CLASS_1_78EA45727928C0F8_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x16088A40)
#define CLASS_1_78EA45727928C0F8_METHOD_1_10CF3B5F2EDB414E_OFFSET UNITYSDK_OFFSET(0x16088DA0)
#define CLASS_1_78EA45727928C0F8_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x160882A0)
#define CLASS_1_78EA45727928C0F8_METHOD_1_19F311AC09A8016C_OFFSET UNITYSDK_OFFSET(0x16089770)
#define CLASS_1_78EA45727928C0F8_METHOD_1_2ED472EEE9018398_OFFSET UNITYSDK_OFFSET(0x16089A80)
#define CLASS_1_78EA45727928C0F8_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x160899F0)
#define CLASS_1_78EA45727928C0F8_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x16088820)
#define CLASS_1_78EA45727928C0F8_METHOD_1_538A394A1ECA2F9C_OFFSET UNITYSDK_OFFSET(0x16089690)
#define CLASS_1_78EA45727928C0F8_METHOD_1_82AED606E137C919_OFFSET UNITYSDK_OFFSET(0x1608A180)
#define CLASS_1_78EA45727928C0F8_METHOD_1_91BB655CAB3185B1_OFFSET UNITYSDK_OFFSET(0x16088890)
#define CLASS_1_78EA45727928C0F8_METHOD_1_AA8656BCDBBD4870_OFFSET UNITYSDK_OFFSET(0x160889F0)
#define CLASS_1_78EA45727928C0F8_METHOD_1_BD6D492CF74B71A3_OFFSET UNITYSDK_OFFSET(0x16088BF0)
#define CLASS_1_78EA45727928C0F8_METHOD_1_E21AC6EE08DC160A_OFFSET UNITYSDK_OFFSET(0x16088300)
#define CLASS_1_78EA45727928C0F8_METHOD_1_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x16088CE0)
#define CLASS_1_78EA45727928C0F8__CTOR_OFFSET UNITYSDK_OFFSET(0x16088D50)

inline static constexpr unsigned int Class_1_78EA45727928C0F8_TypeDefinitionIndex = 74349;

class Class_1_78EA45727928C0F8 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_3; // 0x10
	::Il2CppArray<::Class_2_208CC9941471731A_1125*>* Field_1_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1125*>*>* Field_1_0; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_4; // 0x28
	::Struct_2_1862835F8661A21F_443 Field_1_1; // 0x30
	::System::Int32 Field_1_5; // 0x48
	::System::Boolean Field_1_6; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78EA45727928C0F8__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78EA45727928C0F8_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_1_E21AC6EE08DC160A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78EA45727928C0F8_METHOD_1_E21AC6EE08DC160A_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78EA45727928C0F8_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78EA45727928C0F8_FINALIZE_OFFSET))(this);
	}

	::System::Void Method_1_BD6D492CF74B71A3(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_78EA45727928C0F8_METHOD_1_BD6D492CF74B71A3_OFFSET))(this, a1);
	}

	::System::Void Method_1_AA8656BCDBBD4870(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_78EA45727928C0F8_METHOD_1_AA8656BCDBBD4870_OFFSET))(this, a1);
	}

	::System::Void Method_1_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78EA45727928C0F8_METHOD_1_E41B6A823556FEEA_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_10CF3B5F2EDB414E(::Class_2_0A55B5A82A61DAFA_1* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Boolean a3)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::Class_2_0A55B5A82A61DAFA_1*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_78EA45727928C0F8_METHOD_1_10CF3B5F2EDB414E_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_208CC9941471731A_1125* Method_1_19F311AC09A8016C(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_1125*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_78EA45727928C0F8_METHOD_1_19F311AC09A8016C_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1125*>* Method_1_538A394A1ECA2F9C(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1125*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_78EA45727928C0F8_METHOD_1_538A394A1ECA2F9C_OFFSET))(this, a1);
	}

	::System::Void Method_1_2ED472EEE9018398(::Class_2_0A55B5A82A61DAFA_1* a1, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1125*>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0A55B5A82A61DAFA_1*, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1125*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_78EA45727928C0F8_METHOD_1_2ED472EEE9018398_OFFSET))(this, a1, a2, a3);
	}

	::Il2CppArray<::Class_2_208CC9941471731A_1125*>* Method_1_91BB655CAB3185B1()
	{
		return ((::Il2CppArray<::Class_2_208CC9941471731A_1125*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78EA45727928C0F8_METHOD_1_91BB655CAB3185B1_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_1125* Method_1_82AED606E137C919(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_1125*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_78EA45727928C0F8_METHOD_1_82AED606E137C919_OFFSET))(this, a1);
	}

	::System::Void Method_1_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78EA45727928C0F8_METHOD_1_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78EA45727928C0F8_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}
};
