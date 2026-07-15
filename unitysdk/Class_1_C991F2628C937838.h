#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CD9533418F3B6F39_VCameraType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_997;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C991F2628C937838_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17ACB030)
#define CLASS_1_C991F2628C937838_METHOD_1_83DA7A5A4A0E6F6E_OFFSET UNITYSDK_OFFSET(0x17ACB350)
#define CLASS_1_C991F2628C937838__CTOR_OFFSET UNITYSDK_OFFSET(0x17ACAFB0)

inline static constexpr unsigned int Class_1_C991F2628C937838_TypeDefinitionIndex = 66617;

class Class_1_C991F2628C937838 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Class_1_CD9533418F3B6F39_VCameraType, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_997*>*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C991F2628C937838__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C991F2628C937838_DISPOSE_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_997* Method_1_83DA7A5A4A0E6F6E(::Class_1_CD9533418F3B6F39_VCameraType a1)
	{
		return ((::Class_0_16E4307DCC419505_997*(*)(::PVOID, ::Class_1_CD9533418F3B6F39_VCameraType))((::PBYTE)hIl2Cpp + CLASS_1_C991F2628C937838_METHOD_1_83DA7A5A4A0E6F6E_OFFSET))(this, a1);
	}
};
