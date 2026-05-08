#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class Class_1_366DF9E8C3FBFE98;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_455124A410922D9D_1;

#define CLASS_4_E1F2061EF3D1A4BF_CLASS_1_6E3970EA1CF91188_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1193CCD0)
#define CLASS_4_E1F2061EF3D1A4BF_CLASS_1_6E3970EA1CF91188_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1193CE20)
#define CLASS_4_E1F2061EF3D1A4BF_CLASS_1_6E3970EA1CF91188_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1193CE80)
#define CLASS_4_E1F2061EF3D1A4BF_CLASS_1_6E3970EA1CF91188_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1193CE30)
#define CLASS_4_E1F2061EF3D1A4BF_CLASS_1_6E3970EA1CF91188_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1193CCC0)
#define CLASS_4_E1F2061EF3D1A4BF_CLASS_1_6E3970EA1CF91188__CTOR_OFFSET UNITYSDK_OFFSET(0x1193CCB0)

inline static constexpr unsigned int Class_4_E1F2061EF3D1A4BF_Class_1_6E3970EA1CF91188_TypeDefinitionIndex = 51778;

class Class_4_E1F2061EF3D1A4BF_Class_1_6E3970EA1CF91188 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_4; // 0x10
	::Class_1_455124A410922D9D_1<::Class_1_366DF9E8C3FBFE98*>* Field_1_3; // 0x18
	::System::Object* Field_1_1; // 0x20
	::System::Int32 Field_1_0; // 0x28
	::System::Single Field_1_2; // 0x2C
	::System::Int32 Field_1_6; // 0x30
	::System::Single Field_1_5; // 0x34

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_E1F2061EF3D1A4BF_CLASS_1_6E3970EA1CF91188__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E1F2061EF3D1A4BF_CLASS_1_6E3970EA1CF91188_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E1F2061EF3D1A4BF_CLASS_1_6E3970EA1CF91188_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E1F2061EF3D1A4BF_CLASS_1_6E3970EA1CF91188_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E1F2061EF3D1A4BF_CLASS_1_6E3970EA1CF91188_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E1F2061EF3D1A4BF_CLASS_1_6E3970EA1CF91188_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
