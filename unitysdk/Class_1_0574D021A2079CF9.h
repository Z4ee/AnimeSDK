#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_2383C6C1B6DFD4E4.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/System/Object.h"

class Class_1_0574D021A2079CF9_Class_1_A6C39E38BEC71A8F;
class Class_1_71A741F5D691F2DB;
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0574D021A2079CF9_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xDECC590)
#define CLASS_1_0574D021A2079CF9_METHOD_1_0A7C75AE549C5CCF_OFFSET UNITYSDK_OFFSET(0xDECD190)
#define CLASS_1_0574D021A2079CF9_METHOD_1_0F0A1ECD0DE88E95_OFFSET UNITYSDK_OFFSET(0xDECC6B0)
#define CLASS_1_0574D021A2079CF9_METHOD_1_241FCB0507EB9FA1_OFFSET UNITYSDK_OFFSET(0xDECC980)
#define CLASS_1_0574D021A2079CF9_METHOD_1_2860AB9CDC1DE2D4_OFFSET UNITYSDK_OFFSET(0xDECC8B0)
#define CLASS_1_0574D021A2079CF9_METHOD_1_388700302FEBD48B_OFFSET UNITYSDK_OFFSET(0xDECD420)
#define CLASS_1_0574D021A2079CF9_METHOD_1_42ABC95DF9B1DD49_OFFSET UNITYSDK_OFFSET(0xDECCCE0)
#define CLASS_1_0574D021A2079CF9_METHOD_1_85AB083DB95CDF8B_OFFSET UNITYSDK_OFFSET(0xDECC9C0)
#define CLASS_1_0574D021A2079CF9_METHOD_1_C6843992E5B2B49B_1_OFFSET UNITYSDK_OFFSET(0xDECD0B0)
#define CLASS_1_0574D021A2079CF9_METHOD_1_C6843992E5B2B49B_OFFSET UNITYSDK_OFFSET(0xDECCFD0)
#define CLASS_1_0574D021A2079CF9_METHOD_1_DAF13E2DDF8F15E7_OFFSET UNITYSDK_OFFSET(0xDECCDE0)
#define CLASS_1_0574D021A2079CF9_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xDECC610)
#define CLASS_1_0574D021A2079CF9__CTOR_OFFSET UNITYSDK_OFFSET(0xDECC3F0)

inline static constexpr unsigned int Class_1_0574D021A2079CF9_TypeDefinitionIndex = 62982;

class Class_1_0574D021A2079CF9 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Enum_3_2383C6C1B6DFD4E4, ::System::Collections::Generic::List_1<::Class_1_71A741F5D691F2DB*>*>* Field_1_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_71A741F5D691F2DB*>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::Class_1_71A741F5D691F2DB*>* Field_1_0; // 0x20
	::Class_1_0574D021A2079CF9_Class_1_A6C39E38BEC71A8F* Field_1_3; // 0x28
	::MoleMole::HollowChessboard::HollowChessboardUID Field_1_4; // 0x30

	::System::Void _ctor(::MoleMole::HollowChessboard::HollowChessboardUID a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_1_0574D021A2079CF9__CTOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_1_71A741F5D691F2DB*>* GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_1_71A741F5D691F2DB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0574D021A2079CF9_GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0574D021A2079CF9_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_1_71A741F5D691F2DB*>* Method_1_0F0A1ECD0DE88E95(::Enum_3_2383C6C1B6DFD4E4 a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_1_71A741F5D691F2DB*>*(*)(::PVOID, ::Enum_3_2383C6C1B6DFD4E4))((::PBYTE)hIl2Cpp + CLASS_1_0574D021A2079CF9_METHOD_1_0F0A1ECD0DE88E95_OFFSET))(this, a1);
	}

	::System::Void Method_1_2860AB9CDC1DE2D4(::MoleMole::HollowChessboard::HollowChessboardUID a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_1_0574D021A2079CF9_METHOD_1_2860AB9CDC1DE2D4_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_71A741F5D691F2DB*>* Method_1_241FCB0507EB9FA1()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_71A741F5D691F2DB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0574D021A2079CF9_METHOD_1_241FCB0507EB9FA1_OFFSET))(this);
	}

	::System::Void Method_1_85AB083DB95CDF8B(::Class_1_71A741F5D691F2DB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_71A741F5D691F2DB*))((::PBYTE)hIl2Cpp + CLASS_1_0574D021A2079CF9_METHOD_1_85AB083DB95CDF8B_OFFSET))(this, a1);
	}

	::System::Void Method_1_42ABC95DF9B1DD49(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0574D021A2079CF9_METHOD_1_42ABC95DF9B1DD49_OFFSET))(this, a1);
	}

	::Class_1_71A741F5D691F2DB* Method_1_C6843992E5B2B49B(::System::UInt32 a1)
	{
		return ((::Class_1_71A741F5D691F2DB*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0574D021A2079CF9_METHOD_1_C6843992E5B2B49B_OFFSET))(this, a1);
	}

	::System::Void Method_1_DAF13E2DDF8F15E7(::Class_1_71A741F5D691F2DB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_71A741F5D691F2DB*))((::PBYTE)hIl2Cpp + CLASS_1_0574D021A2079CF9_METHOD_1_DAF13E2DDF8F15E7_OFFSET))(this, a1);
	}

	::Class_1_71A741F5D691F2DB* Method_1_C6843992E5B2B49B_1(::System::UInt32 a1)
	{
		return ((::Class_1_71A741F5D691F2DB*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0574D021A2079CF9_METHOD_1_C6843992E5B2B49B_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_0A7C75AE549C5CCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0574D021A2079CF9_METHOD_1_0A7C75AE549C5CCF_OFFSET))(this);
	}

	::Class_1_71A741F5D691F2DB* Method_1_388700302FEBD48B(::Enum_3_2383C6C1B6DFD4E4 a1)
	{
		return ((::Class_1_71A741F5D691F2DB*(*)(::PVOID, ::Enum_3_2383C6C1B6DFD4E4))((::PBYTE)hIl2Cpp + CLASS_1_0574D021A2079CF9_METHOD_1_388700302FEBD48B_OFFSET))(this, a1);
	}
};
