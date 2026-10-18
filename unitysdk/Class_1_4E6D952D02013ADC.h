#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BA6BCADCC0F483C1;
class Class_1_ED80D3EC77F13F93;
namespace System { class Type; }

#define CLASS_1_4E6D952D02013ADC_METHOD_1_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0x15B23760)
#define CLASS_1_4E6D952D02013ADC_METHOD_1_A51E1A43FA3F52D4_OFFSET UNITYSDK_OFFSET(0x15B237C0)
#define CLASS_1_4E6D952D02013ADC_METHOD_1_DBAFB3822F104C31_OFFSET UNITYSDK_OFFSET(0x15B23A50)
#define CLASS_1_4E6D952D02013ADC__CTOR_OFFSET UNITYSDK_OFFSET(0x15B23A00)

inline static constexpr unsigned int Class_1_4E6D952D02013ADC_TypeDefinitionIndex = 62596;

class Class_1_4E6D952D02013ADC : public ::System::Object
{
public:
	::Class_1_BA6BCADCC0F483C1* GGFJKIHOGDA; // 0x10

	::System::Void _ctor(::Class_1_BA6BCADCC0F483C1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BA6BCADCC0F483C1*))((::PBYTE)hIl2Cpp + CLASS_1_4E6D952D02013ADC__CTOR_OFFSET))(this, a1);
	}

	::System::Type* Method_1_4FB5F56430673EA6()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E6D952D02013ADC_METHOD_1_4FB5F56430673EA6_OFFSET))(this);
	}

	::Il2CppArray<::System::Type*>* Method_1_A51E1A43FA3F52D4()
	{
		return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E6D952D02013ADC_METHOD_1_A51E1A43FA3F52D4_OFFSET))(this);
	}

	::System::Void Method_1_DBAFB3822F104C31(::Class_1_ED80D3EC77F13F93* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ED80D3EC77F13F93*))((::PBYTE)hIl2Cpp + CLASS_1_4E6D952D02013ADC_METHOD_1_DBAFB3822F104C31_OFFSET))(this, a1);
	}
};
