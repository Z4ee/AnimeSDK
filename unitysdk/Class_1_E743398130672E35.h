#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_8FE35F6355424026_1.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E743398130672E35_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x114AE3B0)
#define CLASS_1_E743398130672E35_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x114AE3A0)
#define CLASS_1_E743398130672E35__CTOR_OFFSET UNITYSDK_OFFSET(0x114AE400)

inline static constexpr unsigned int Class_1_E743398130672E35_TypeDefinitionIndex = 75565;

class Class_1_E743398130672E35 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_6; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Struct_2_8FE35F6355424026_1>* Field_1_8; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_4; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_3; // 0x28
	::System::Int32 Field_1_5; // 0x30
	::System::Int32 Field_1_0; // 0x34
	::System::Int32 Field_1_9; // 0x38
	::System::UInt32 Field_1_1; // 0x3C
	::System::UInt32 Field_1_7; // 0x40
	::System::UInt32 Field_1_2; // 0x44
	::System::Int32 Field_1_10; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E743398130672E35__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E743398130672E35_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E743398130672E35_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}
};
