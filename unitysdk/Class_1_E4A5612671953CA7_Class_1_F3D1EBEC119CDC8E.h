#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E4A5612671953CA7;
namespace System::Net::Http { class ByteArrayContent; }
namespace System::Net::Http { class HttpResponseMessage; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define CLASS_1_E4A5612671953CA7_CLASS_1_F3D1EBEC119CDC8E_METHOD_1_70F7121B3995A9A6_OFFSET UNITYSDK_OFFSET(0x1C4F1F50)
#define CLASS_1_E4A5612671953CA7_CLASS_1_F3D1EBEC119CDC8E__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4F1F40)

inline static constexpr unsigned int Class_1_E4A5612671953CA7_Class_1_F3D1EBEC119CDC8E_TypeDefinitionIndex = 26171;

class Class_1_E4A5612671953CA7_Class_1_F3D1EBEC119CDC8E : public ::System::Object
{
public:
	::Class_1_E4A5612671953CA7* Field_1_1; // 0x10
	::System::Net::Http::ByteArrayContent* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4A5612671953CA7_CLASS_1_F3D1EBEC119CDC8E__CTOR_OFFSET))(this);
	}

	::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* Method_1_70F7121B3995A9A6()
	{
		return ((::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4A5612671953CA7_CLASS_1_F3D1EBEC119CDC8E_METHOD_1_70F7121B3995A9A6_OFFSET))(this);
	}
};
