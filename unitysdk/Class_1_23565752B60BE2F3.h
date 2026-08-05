#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_9.h"
#include "unitysdk/System/Object.h"

class Class_3_C925DD9FCB5E4906;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_23565752B60BE2F3_METHOD_1_A8F5EC3D031B49A7_OFFSET UNITYSDK_OFFSET(0x1131DEB0)
#define CLASS_1_23565752B60BE2F3__CTOR_OFFSET UNITYSDK_OFFSET(0x1131DEA0)

inline static constexpr unsigned int Class_1_23565752B60BE2F3_TypeDefinitionIndex = 90347;

class Class_1_23565752B60BE2F3 : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* Field_1_1; // 0x10
	::System::Int32 Field_1_2; // 0x18
	::System::Int64 Field_1_0; // 0x20
	::System::Int32 Field_1_3; // 0x28
	::Enum_3_ED790DAC948A65A9_9 Field_1_6; // 0x2C
	::System::Int64 Field_1_7; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23565752B60BE2F3__CTOR_OFFSET))(this);
	}

	static ::Class_1_23565752B60BE2F3* Method_1_A8F5EC3D031B49A7(::Class_3_C925DD9FCB5E4906* a1)
	{
		return ((::Class_1_23565752B60BE2F3*(*)(::Class_3_C925DD9FCB5E4906*))((::PBYTE)hIl2Cpp + CLASS_1_23565752B60BE2F3_METHOD_1_A8F5EC3D031B49A7_OFFSET))(a1);
	}
};
