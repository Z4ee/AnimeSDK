#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_1C46DBAB65E43874;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_702B64C88BBE9F68_METHOD_1_22B983A93B65EF81_OFFSET UNITYSDK_OFFSET(0xFFB11E0)
#define CLASS_1_702B64C88BBE9F68_METHOD_1_50884DFE76178C82_1_OFFSET UNITYSDK_OFFSET(0xFFB1550)
#define CLASS_1_702B64C88BBE9F68_METHOD_1_50884DFE76178C82_OFFSET UNITYSDK_OFFSET(0xFFB14B0)
#define CLASS_1_702B64C88BBE9F68_METHOD_1_5A997764392D3E95_OFFSET UNITYSDK_OFFSET(0xFFB10F0)
#define CLASS_1_702B64C88BBE9F68_METHOD_1_7E8ED949CE177B8B_OFFSET UNITYSDK_OFFSET(0xFFB1450)
#define CLASS_1_702B64C88BBE9F68_METHOD_1_9C73DA90A30983CE_OFFSET UNITYSDK_OFFSET(0xFFB1260)
#define CLASS_1_702B64C88BBE9F68_METHOD_1_C03C708BD0709308_OFFSET UNITYSDK_OFFSET(0xFFB0FB0)
#define CLASS_1_702B64C88BBE9F68_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0xFFB11C0)
#define CLASS_1_702B64C88BBE9F68_METHOD_1_F6B522B422985D1A_OFFSET UNITYSDK_OFFSET(0xFFB1080)
#define CLASS_1_702B64C88BBE9F68__CTOR_OFFSET UNITYSDK_OFFSET(0xFFB0EB0)

inline static constexpr unsigned int Class_1_702B64C88BBE9F68_TypeDefinitionIndex = 86009;

class Class_1_702B64C88BBE9F68 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_7; // 0x18
	::Class_1_1C46DBAB65E43874* Field_1_1; // 0x20
	::System::UInt32 Field_1_6; // 0x28
	::MoleMole::HollowChessboard::HollowCell Field_1_2; // 0x2C

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_702B64C88BBE9F68__CTOR_OFFSET))(this, a1);
	}

	::System::Nullable_1<::System::Int32> Method_1_C03C708BD0709308(::System::Int32 a1)
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_702B64C88BBE9F68_METHOD_1_C03C708BD0709308_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_F6B522B422985D1A(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_702B64C88BBE9F68_METHOD_1_F6B522B422985D1A_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_5A997764392D3E95(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_702B64C88BBE9F68_METHOD_1_5A997764392D3E95_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_702B64C88BBE9F68_METHOD_1_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::System::Collections::Generic::List_1_Enumerator<::System::Int32> Method_1_22B983A93B65EF81()
	{
		return ((::System::Collections::Generic::List_1_Enumerator<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_702B64C88BBE9F68_METHOD_1_22B983A93B65EF81_OFFSET))(this);
	}

	::System::Void Method_1_9C73DA90A30983CE(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_702B64C88BBE9F68_METHOD_1_9C73DA90A30983CE_OFFSET))(this, a1);
	}

	::System::Void Method_1_50884DFE76178C82(::Class_1_1C46DBAB65E43874* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1C46DBAB65E43874*))((::PBYTE)hIl2Cpp + CLASS_1_702B64C88BBE9F68_METHOD_1_50884DFE76178C82_OFFSET))(this, a1);
	}

	::System::Void Method_1_50884DFE76178C82_1(::Class_1_1C46DBAB65E43874* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1C46DBAB65E43874*))((::PBYTE)hIl2Cpp + CLASS_1_702B64C88BBE9F68_METHOD_1_50884DFE76178C82_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_7E8ED949CE177B8B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_702B64C88BBE9F68_METHOD_1_7E8ED949CE177B8B_OFFSET))(this, a1);
	}
};
