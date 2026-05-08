#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_13.h"
#include "unitysdk/System/Object.h"

class Class_3_126510A8BEABCBD0_6;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_BBD5871BDCC78D93_METHOD_1_2BCA7103C454279E_OFFSET UNITYSDK_OFFSET(0x94E7B40)
#define CLASS_1_BBD5871BDCC78D93__CTOR_OFFSET UNITYSDK_OFFSET(0x94E7B30)

inline static constexpr unsigned int Class_1_BBD5871BDCC78D93_TypeDefinitionIndex = 47221;

class Class_1_BBD5871BDCC78D93 : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* Field_1_2; // 0x10
	::System::Int32 Field_1_1; // 0x18
	::Enum_3_ED790DAC948A65A9_13 Field_1_5; // 0x1C
	::System::Int32 Field_1_0; // 0x20
	::System::Int64 Field_1_3; // 0x28
	::System::Int64 Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBD5871BDCC78D93__CTOR_OFFSET))(this);
	}

	static ::Class_1_BBD5871BDCC78D93* Method_1_2BCA7103C454279E(::Class_3_126510A8BEABCBD0_6* a1)
	{
		return ((::Class_1_BBD5871BDCC78D93*(*)(::Class_3_126510A8BEABCBD0_6*))((::PBYTE)hIl2Cpp + CLASS_1_BBD5871BDCC78D93_METHOD_1_2BCA7103C454279E_OFFSET))(a1);
	}
};
