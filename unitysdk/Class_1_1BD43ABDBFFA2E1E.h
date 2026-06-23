#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_916778923E38503B;
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1BD43ABDBFFA2E1E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1174BEA0)
#define CLASS_1_1BD43ABDBFFA2E1E_METHOD_1_0F3BC0D3A42F4FAB_OFFSET UNITYSDK_OFFSET(0x1174C6F0)
#define CLASS_1_1BD43ABDBFFA2E1E_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x1174D450)
#define CLASS_1_1BD43ABDBFFA2E1E_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1174CA50)
#define CLASS_1_1BD43ABDBFFA2E1E_METHOD_1_298F22FD33AFD41E_OFFSET UNITYSDK_OFFSET(0x1174C430)
#define CLASS_1_1BD43ABDBFFA2E1E_METHOD_1_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x1174CAB0)
#define CLASS_1_1BD43ABDBFFA2E1E_METHOD_1_6F73A40265D5B980_OFFSET UNITYSDK_OFFSET(0x1174CB50)
#define CLASS_1_1BD43ABDBFFA2E1E_METHOD_1_B0D32F4D8D79C00E_OFFSET UNITYSDK_OFFSET(0x1174C240)
#define CLASS_1_1BD43ABDBFFA2E1E_METHOD_1_B4563185A8CBF17C_OFFSET UNITYSDK_OFFSET(0x1174CEF0)
#define CLASS_1_1BD43ABDBFFA2E1E_METHOD_1_B7781A3D4E91A7C2_OFFSET UNITYSDK_OFFSET(0x1174C120)
#define CLASS_1_1BD43ABDBFFA2E1E_METHOD_1_BAE66D5654320160_OFFSET UNITYSDK_OFFSET(0x1174C5E0)
#define CLASS_1_1BD43ABDBFFA2E1E_METHOD_1_EDE142C2A9A7B0CC_OFFSET UNITYSDK_OFFSET(0x1174CDF0)
#define CLASS_1_1BD43ABDBFFA2E1E__CTOR_OFFSET UNITYSDK_OFFSET(0x1174BD40)

inline static constexpr unsigned int Class_1_1BD43ABDBFFA2E1E_TypeDefinitionIndex = 74829;

class Class_1_1BD43ABDBFFA2E1E : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_916778923E38503B*>* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_916778923E38503B*>* Field_1_4; // 0x18
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_3; // 0x20
	::System::Collections::Generic::List_1<::Class_1_916778923E38503B*>* Field_1_2; // 0x28
	::System::Single Field_1_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1BD43ABDBFFA2E1E__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1BD43ABDBFFA2E1E_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_B7781A3D4E91A7C2(::Class_1_916778923E38503B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_916778923E38503B*))((::PBYTE)hIl2Cpp + CLASS_1_1BD43ABDBFFA2E1E_METHOD_1_B7781A3D4E91A7C2_OFFSET))(this, a1);
	}

	::System::Void Method_1_298F22FD33AFD41E(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1BD43ABDBFFA2E1E_METHOD_1_298F22FD33AFD41E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BAE66D5654320160(::Class_1_916778923E38503B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_916778923E38503B*))((::PBYTE)hIl2Cpp + CLASS_1_1BD43ABDBFFA2E1E_METHOD_1_BAE66D5654320160_OFFSET))(this, a1);
	}

	::Class_1_916778923E38503B* Method_1_0F3BC0D3A42F4FAB(::System::String* a1, ::System::Int32 a2, ::System::String* a3, ::MoleMole::Battle::Entity* a4, ::System::Action_1<::System::UInt32>* a5, ::System::Action* a6, ::System::UInt32 a7)
	{
		return ((::Class_1_916778923E38503B*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*, ::MoleMole::Battle::Entity*, ::System::Action_1<::System::UInt32>*, ::System::Action*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1BD43ABDBFFA2E1E_METHOD_1_0F3BC0D3A42F4FAB_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1BD43ABDBFFA2E1E_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1BD43ABDBFFA2E1E_METHOD_1_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::System::Void Method_1_6F73A40265D5B980()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1BD43ABDBFFA2E1E_METHOD_1_6F73A40265D5B980_OFFSET))(this);
	}

	::System::Void Method_1_B4563185A8CBF17C(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1BD43ABDBFFA2E1E_METHOD_1_B4563185A8CBF17C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_EDE142C2A9A7B0CC(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1BD43ABDBFFA2E1E_METHOD_1_EDE142C2A9A7B0CC_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1BD43ABDBFFA2E1E_METHOD_1_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Void Method_1_B0D32F4D8D79C00E(::System::Collections::Generic::List_1<::Class_1_916778923E38503B*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_916778923E38503B*>*))((::PBYTE)hIl2Cpp + CLASS_1_1BD43ABDBFFA2E1E_METHOD_1_B0D32F4D8D79C00E_OFFSET))(this, a1);
	}
};
