#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_11.h"
#include "unitysdk/System/Object.h"

class Class_3_126510A8BEABCBD0_14;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_23565752B60BE2F3_METHOD_1_A8F5EC3D031B49A7_OFFSET UNITYSDK_OFFSET(0x1483F1E0)
#define CLASS_1_23565752B60BE2F3__CTOR_OFFSET UNITYSDK_OFFSET(0x1483F1D0)

inline static constexpr unsigned int Class_1_23565752B60BE2F3_TypeDefinitionIndex = 65017;

class Class_1_23565752B60BE2F3 : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* Field_1_2; // 0x10
	::System::Int64 Field_1_4; // 0x18
	::System::Int32 Field_1_1; // 0x20
	::System::Int32 Field_1_0; // 0x24
	::Enum_3_ED790DAC948A65A9_11 Field_1_5; // 0x28
	::System::Int64 Field_1_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23565752B60BE2F3__CTOR_OFFSET))(this);
	}

	static ::Class_1_23565752B60BE2F3* Method_1_A8F5EC3D031B49A7(::Class_3_126510A8BEABCBD0_14* a1)
	{
		return ((::Class_1_23565752B60BE2F3*(*)(::Class_3_126510A8BEABCBD0_14*))((::PBYTE)hIl2Cpp + CLASS_1_23565752B60BE2F3_METHOD_1_A8F5EC3D031B49A7_OFFSET))(a1);
	}
};
