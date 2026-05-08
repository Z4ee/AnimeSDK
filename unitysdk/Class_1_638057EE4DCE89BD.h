#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_CF29219B64B7B4D4.h"
#include "unitysdk/Struct_2_8FE35F6355424026_1.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_638057EE4DCE89BD_METHOD_1_75A3BB091A840D1E_OFFSET UNITYSDK_OFFSET(0x1362FB40)
#define CLASS_1_638057EE4DCE89BD__CTOR_OFFSET UNITYSDK_OFFSET(0x1362F9A0)

inline static constexpr unsigned int Class_1_638057EE4DCE89BD_TypeDefinitionIndex = 76629;

class Class_1_638057EE4DCE89BD : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_11; // 0x10
	::System::Collections::Generic::List_1<::System::Single>* Field_1_9; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Struct_2_8FE35F6355424026_1>* Field_1_10; // 0x20
	::Enum_3_CF29219B64B7B4D4 Field_1_6; // 0x28
	::System::Boolean Field_1_13; // 0x2C
	::System::UInt32 Field_1_12; // 0x30
	::System::Int32 Field_1_0; // 0x34
	::System::Int32 Field_1_3; // 0x38
	::System::Int32 Field_1_2; // 0x3C
	::System::Int32 Field_1_1; // 0x40
	::System::Int32 Field_1_4; // 0x44
	::System::Single Field_1_7; // 0x48
	::System::Single Field_1_5; // 0x4C
	::System::Single Field_1_8; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_638057EE4DCE89BD__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_75A3BB091A840D1E(::System::Int32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_638057EE4DCE89BD_METHOD_1_75A3BB091A840D1E_OFFSET))(this, a1, a2);
	}
};
