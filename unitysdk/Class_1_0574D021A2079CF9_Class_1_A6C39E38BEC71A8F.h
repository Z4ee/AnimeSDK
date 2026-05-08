#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/System/Object.h"

class Class_1_71A741F5D691F2DB;
class Class_2_F5737224A0253470;
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0574D021A2079CF9_CLASS_1_A6C39E38BEC71A8F_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xDECD6D0)
#define CLASS_1_0574D021A2079CF9_CLASS_1_A6C39E38BEC71A8F_METHOD_1_DCDF2FF319F7355F_OFFSET UNITYSDK_OFFSET(0xDECC860)
#define CLASS_1_0574D021A2079CF9_CLASS_1_A6C39E38BEC71A8F_METHOD_1_F6636345F4B5C3C2_OFFSET UNITYSDK_OFFSET(0xDECC930)
#define CLASS_1_0574D021A2079CF9_CLASS_1_A6C39E38BEC71A8F_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xDECD750)
#define CLASS_1_0574D021A2079CF9_CLASS_1_A6C39E38BEC71A8F__CTOR_OFFSET UNITYSDK_OFFSET(0xDECC580)

inline static constexpr unsigned int Class_1_0574D021A2079CF9_Class_1_A6C39E38BEC71A8F_TypeDefinitionIndex = 62984;

class Class_1_0574D021A2079CF9_Class_1_A6C39E38BEC71A8F : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_71A741F5D691F2DB*>* Field_1_0; // 0x10
	::Class_2_F5737224A0253470* Field_1_1; // 0x18
	::MoleMole::HollowChessboard::HollowChessboardUID Field_1_2; // 0x20

	::System::Void _ctor(::MoleMole::HollowChessboard::HollowChessboardUID a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_1_0574D021A2079CF9_CLASS_1_A6C39E38BEC71A8F__CTOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_1_71A741F5D691F2DB*>* GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_1_71A741F5D691F2DB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0574D021A2079CF9_CLASS_1_A6C39E38BEC71A8F_GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0574D021A2079CF9_CLASS_1_A6C39E38BEC71A8F_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}

	::System::Void Method_1_DCDF2FF319F7355F(::System::Collections::Generic::List_1<::Class_1_71A741F5D691F2DB*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_71A741F5D691F2DB*>*))((::PBYTE)hIl2Cpp + CLASS_1_0574D021A2079CF9_CLASS_1_A6C39E38BEC71A8F_METHOD_1_DCDF2FF319F7355F_OFFSET))(this, a1);
	}

	::System::Void Method_1_F6636345F4B5C3C2(::MoleMole::HollowChessboard::HollowChessboardUID a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_1_0574D021A2079CF9_CLASS_1_A6C39E38BEC71A8F_METHOD_1_F6636345F4B5C3C2_OFFSET))(this, a1);
	}
};
