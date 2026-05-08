#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_029D829B853B7C95.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }

#define CLASS_1_60759CE54EA22CFC_METHOD_1_85E657E328490B3B_OFFSET UNITYSDK_OFFSET(0x13DB3890)
#define CLASS_1_60759CE54EA22CFC_METHOD_1_BA8DA10955CBCD4F_OFFSET UNITYSDK_OFFSET(0x13DB3910)
#define CLASS_1_60759CE54EA22CFC__CTOR_1_OFFSET UNITYSDK_OFFSET(0x13DB3870)
#define CLASS_1_60759CE54EA22CFC__CTOR_OFFSET UNITYSDK_OFFSET(0x13DB3860)

inline static constexpr unsigned int Class_1_60759CE54EA22CFC_TypeDefinitionIndex = 45744;

class Class_1_60759CE54EA22CFC : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x10; // 0x0
	::System::Action* Field_1_2; // 0x10
	::System::Collections::Generic::LinkedListNode_1<::Class_1_60759CE54EA22CFC*>* Field_1_8; // 0x18
	::System::UInt16 Field_1_9; // 0x20
	::System::Boolean Field_1_11; // 0x22
	::System::Int32 Field_1_12; // 0x24
	::System::Int32 Field_1_10; // 0x28
	::System::Boolean Field_1_7; // 0x2C
	::System::Boolean Field_1_6; // 0x2D
	::Enum_3_029D829B853B7C95 Field_1_5; // 0x30
	::System::Int32 Field_1_1; // 0x34
	::System::Int32 Field_1_4; // 0x38
	::System::Int32 Field_1_3; // 0x3C
	::System::Int32 Field_1_13; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60759CE54EA22CFC__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Action* a1, ::System::Int32 a2, ::Enum_3_029D829B853B7C95 a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Int32, ::Enum_3_029D829B853B7C95, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_60759CE54EA22CFC__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_85E657E328490B3B(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_60759CE54EA22CFC_METHOD_1_85E657E328490B3B_OFFSET))(this, a1);
	}

	::System::Void Method_1_BA8DA10955CBCD4F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60759CE54EA22CFC_METHOD_1_BA8DA10955CBCD4F_OFFSET))(this);
	}
};
