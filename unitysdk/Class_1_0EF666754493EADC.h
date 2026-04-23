#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_62F6948CD584C7D5;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0EF666754493EADC_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x11A670B0)
#define CLASS_1_0EF666754493EADC_METHOD_1_E40A3C1711FCD249_OFFSET UNITYSDK_OFFSET(0x11A67140)
#define CLASS_1_0EF666754493EADC__CTOR_OFFSET UNITYSDK_OFFSET(0x11A67870)

inline static constexpr unsigned int Class_1_0EF666754493EADC_TypeDefinitionIndex = 55852;

class Class_1_0EF666754493EADC : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_62F6948CD584C7D5*>* Field_1_6; // 0x10
	::System::Int32 Field_1_5; // 0x18
	::System::Int32 Field_1_1; // 0x1C
	::System::UInt64 Field_1_4; // 0x20
	::System::Int32 Field_1_3; // 0x28
	::System::Int32 Field_1_0; // 0x2C
	::System::UInt64 Field_1_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EF666754493EADC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EF666754493EADC_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::String* Method_1_E40A3C1711FCD249()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EF666754493EADC_METHOD_1_E40A3C1711FCD249_OFFSET))(this);
	}
};
