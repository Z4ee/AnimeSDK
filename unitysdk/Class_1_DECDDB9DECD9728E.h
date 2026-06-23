#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_F780BA94AF5E7E37_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_355;
class Class_1_28954966FF17307A;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }

#define CLASS_1_DECDDB9DECD9728E_METHOD_1_24B8E258E6973918_OFFSET UNITYSDK_OFFSET(0x135290F0)
#define CLASS_1_DECDDB9DECD9728E_METHOD_1_46DF29ACE60986D7_OFFSET UNITYSDK_OFFSET(0x13529480)
#define CLASS_1_DECDDB9DECD9728E_METHOD_1_48D53FA531FB20EF_OFFSET UNITYSDK_OFFSET(0x13529000)
#define CLASS_1_DECDDB9DECD9728E_METHOD_1_7844AEDB2B93427E_OFFSET UNITYSDK_OFFSET(0x13528F30)
#define CLASS_1_DECDDB9DECD9728E_METHOD_1_83A08F753CC278DA_OFFSET UNITYSDK_OFFSET(0x135293C0)
#define CLASS_1_DECDDB9DECD9728E_METHOD_1_E253AA4B06F0427B_OFFSET UNITYSDK_OFFSET(0x135291B0)
#define CLASS_1_DECDDB9DECD9728E_METHOD_1_EFB8C64401F2D195_OFFSET UNITYSDK_OFFSET(0x13529690)
#define CLASS_1_DECDDB9DECD9728E__CTOR_OFFSET UNITYSDK_OFFSET(0x13529760)

inline static constexpr unsigned int Class_1_DECDDB9DECD9728E_TypeDefinitionIndex = 45075;

class Class_1_DECDDB9DECD9728E : public ::System::Object
{
public:
	::System::Collections::Generic::LinkedList_1<::Class_1_28954966FF17307A*>* Field_1_2; // 0x10
	::System::Single Field_1_0; // 0x18
	::System::Int32 Field_1_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DECDDB9DECD9728E__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_355* Method_1_7844AEDB2B93427E(::System::Single a1)
	{
		return ((::Class_0_16E4307DCC419505_355*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DECDDB9DECD9728E_METHOD_1_7844AEDB2B93427E_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_355* Method_1_24B8E258E6973918(::System::Func_2<::Struct_2_F780BA94AF5E7E37_1, ::System::Boolean>* a1)
	{
		return ((::Class_0_16E4307DCC419505_355*(*)(::PVOID, ::System::Func_2<::Struct_2_F780BA94AF5E7E37_1, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_DECDDB9DECD9728E_METHOD_1_24B8E258E6973918_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_355* Method_1_48D53FA531FB20EF(::System::Func_2<::Struct_2_F780BA94AF5E7E37_1, ::System::Boolean>* a1)
	{
		return ((::Class_0_16E4307DCC419505_355*(*)(::PVOID, ::System::Func_2<::Struct_2_F780BA94AF5E7E37_1, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_DECDDB9DECD9728E_METHOD_1_48D53FA531FB20EF_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E253AA4B06F0427B(::Class_0_16E4307DCC419505_355* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_355*))((::PBYTE)hIl2Cpp + CLASS_1_DECDDB9DECD9728E_METHOD_1_E253AA4B06F0427B_OFFSET))(this, a1);
	}

	::System::Void Method_1_46DF29ACE60986D7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DECDDB9DECD9728E_METHOD_1_46DF29ACE60986D7_OFFSET))(this, a1);
	}

	::System::Collections::Generic::LinkedListNode_1<::Class_1_28954966FF17307A*>* Method_1_83A08F753CC278DA(::Class_0_16E4307DCC419505_355* a1)
	{
		return ((::System::Collections::Generic::LinkedListNode_1<::Class_1_28954966FF17307A*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_355*))((::PBYTE)hIl2Cpp + CLASS_1_DECDDB9DECD9728E_METHOD_1_83A08F753CC278DA_OFFSET))(this, a1);
	}

	::System::Collections::Generic::LinkedListNode_1<::Class_1_28954966FF17307A*>* Method_1_EFB8C64401F2D195(::System::Collections::Generic::LinkedListNode_1<::Class_1_28954966FF17307A*>* a1)
	{
		return ((::System::Collections::Generic::LinkedListNode_1<::Class_1_28954966FF17307A*>*(*)(::PVOID, ::System::Collections::Generic::LinkedListNode_1<::Class_1_28954966FF17307A*>*))((::PBYTE)hIl2Cpp + CLASS_1_DECDDB9DECD9728E_METHOD_1_EFB8C64401F2D195_OFFSET))(this, a1);
	}
};
