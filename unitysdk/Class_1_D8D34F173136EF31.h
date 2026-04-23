#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D8D34F173136EF31_Class_1_0A269D8215127608;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D8D34F173136EF31_METHOD_1_117D6E49E7E02C23_OFFSET UNITYSDK_OFFSET(0x1175B4C0)
#define CLASS_1_D8D34F173136EF31_METHOD_1_40066102DAC0EEA6_OFFSET UNITYSDK_OFFSET(0x1175B390)
#define CLASS_1_D8D34F173136EF31_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1175B450)
#define CLASS_1_D8D34F173136EF31__CTOR_OFFSET UNITYSDK_OFFSET(0x1175B620)

inline static constexpr unsigned int Class_1_D8D34F173136EF31_TypeDefinitionIndex = 54809;

class Class_1_D8D34F173136EF31 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_D8D34F173136EF31_Class_1_0A269D8215127608*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8D34F173136EF31__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_40066102DAC0EEA6(::System::Action_1<::System::Object*>* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D8D34F173136EF31_METHOD_1_40066102DAC0EEA6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8D34F173136EF31_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_117D6E49E7E02C23()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8D34F173136EF31_METHOD_1_117D6E49E7E02C23_OFFSET))(this);
	}
};
