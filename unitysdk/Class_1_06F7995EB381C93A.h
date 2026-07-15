#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7807B2B04302CD7B_31;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_06F7995EB381C93A_CLEAR_OFFSET UNITYSDK_OFFSET(0x169CAE10)
#define CLASS_1_06F7995EB381C93A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x169CB120)
#define CLASS_1_06F7995EB381C93A__CTOR_OFFSET UNITYSDK_OFFSET(0x169CB190)

inline static constexpr unsigned int Class_1_06F7995EB381C93A_TypeDefinitionIndex = 64556;

class Class_1_06F7995EB381C93A : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::Class_1_7807B2B04302CD7B_31*>* Field_1_3; // 0x28
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_4; // 0x30
	::System::UInt32 Field_1_5; // 0x38
	::System::UInt32 Field_1_6; // 0x3C
	::System::UInt32 Field_1_7; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06F7995EB381C93A__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06F7995EB381C93A_CLEAR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06F7995EB381C93A_DISPOSE_OFFSET))(this);
	}
};
