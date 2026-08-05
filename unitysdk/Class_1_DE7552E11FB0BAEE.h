#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DE7552E11FB0BAEE_Class_1_0A41E43F17FA5E89;
class Class_1_DE7552E11FB0BAEE_Class_1_84F5C8AF155F10EE;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DE7552E11FB0BAEE_METHOD_1_08DFFB522415A616_OFFSET UNITYSDK_OFFSET(0x18266CE0)
#define CLASS_1_DE7552E11FB0BAEE_METHOD_1_755870B55A8B3AFF_OFFSET UNITYSDK_OFFSET(0x18266DC0)
#define CLASS_1_DE7552E11FB0BAEE_METHOD_1_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x18266F20)
#define CLASS_1_DE7552E11FB0BAEE_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x18266D20)
#define CLASS_1_DE7552E11FB0BAEE_METHOD_1_AB7CD9584B185383_OFFSET UNITYSDK_OFFSET(0x18266E40)
#define CLASS_1_DE7552E11FB0BAEE__CTOR_OFFSET UNITYSDK_OFFSET(0x18266C50)

inline static constexpr unsigned int Class_1_DE7552E11FB0BAEE_TypeDefinitionIndex = 79477;

class Class_1_DE7552E11FB0BAEE : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_DE7552E11FB0BAEE_Class_1_0A41E43F17FA5E89*>* Field_1_7; // 0x10
	::Class_1_DE7552E11FB0BAEE_Class_1_84F5C8AF155F10EE* Field_1_0; // 0x18
	::System::Int32 Field_1_6; // 0x20

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DE7552E11FB0BAEE__CTOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_DE7552E11FB0BAEE_Class_1_0A41E43F17FA5E89*>* Method_1_08DFFB522415A616()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_DE7552E11FB0BAEE_Class_1_0A41E43F17FA5E89*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE7552E11FB0BAEE_METHOD_1_08DFFB522415A616_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE7552E11FB0BAEE_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_AB7CD9584B185383(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DE7552E11FB0BAEE_METHOD_1_AB7CD9584B185383_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_755870B55A8B3AFF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE7552E11FB0BAEE_METHOD_1_755870B55A8B3AFF_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE7552E11FB0BAEE_METHOD_1_9681042564541CD6_1_OFFSET))(this);
	}
};
