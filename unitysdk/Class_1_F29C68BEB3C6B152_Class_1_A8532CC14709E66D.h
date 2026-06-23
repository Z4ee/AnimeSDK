#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F29C68BEB3C6B152_Enum_3_3F747909115DC2A7.h"
#include "unitysdk/Struct_2_24A53FACD918DAF7.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_700;
class Class_3_D92ADC48CDFCC09B;
class MonoUITableScrollV2;
class MonoUITableScrollV2_InitScrollViewData;
namespace System { template <typename T> class Func_1; }
namespace System::Collections { class IEnumerable; }

#define CLASS_1_F29C68BEB3C6B152_CLASS_1_A8532CC14709E66D_METHOD_1_1A18B4FD58E22656_OFFSET UNITYSDK_OFFSET(0x168003A0)
#define CLASS_1_F29C68BEB3C6B152_CLASS_1_A8532CC14709E66D_METHOD_1_D64942AA821E0D31_OFFSET UNITYSDK_OFFSET(0x167FFF10)
#define CLASS_1_F29C68BEB3C6B152_CLASS_1_A8532CC14709E66D_METHOD_1_FB36EB856C65D51B_OFFSET UNITYSDK_OFFSET(0x167FFDB0)
#define CLASS_1_F29C68BEB3C6B152_CLASS_1_A8532CC14709E66D__CTOR_OFFSET UNITYSDK_OFFSET(0x167FFDA0)

inline static constexpr unsigned int Class_1_F29C68BEB3C6B152_Class_1_A8532CC14709E66D_TypeDefinitionIndex = 70769;

class Class_1_F29C68BEB3C6B152_Class_1_A8532CC14709E66D : public ::System::Object
{
public:
	::System::Func_1<::MonoUITableScrollV2_InitScrollViewData*>* Field_1_2; // 0x10
	::Class_3_D92ADC48CDFCC09B* Field_1_4; // 0x18
	::Struct_2_24A53FACD918DAF7 Field_1_5; // 0x20
	::MonoUITableScrollV2* Field_1_1; // 0x30
	::Class_0_16E4307DCC419505_700* Field_1_6; // 0x38
	::Class_1_F29C68BEB3C6B152_Enum_3_3F747909115DC2A7 Field_1_0; // 0x40
	::System::Boolean Field_1_3; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_CLASS_1_A8532CC14709E66D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FB36EB856C65D51B(::MonoUITableScrollV2* a1, ::System::Collections::IEnumerable* a2, ::System::Collections::IEnumerable* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*, ::System::Collections::IEnumerable*, ::System::Collections::IEnumerable*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_CLASS_1_A8532CC14709E66D_METHOD_1_FB36EB856C65D51B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_D64942AA821E0D31(::MonoUITableScrollV2* a1, ::System::Collections::IEnumerable* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*, ::System::Collections::IEnumerable*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_CLASS_1_A8532CC14709E66D_METHOD_1_D64942AA821E0D31_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1A18B4FD58E22656(::System::Collections::IEnumerable* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::IEnumerable*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_CLASS_1_A8532CC14709E66D_METHOD_1_1A18B4FD58E22656_OFFSET))(this, a1);
	}
};
