#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8278C4CB5E7C57A4;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_78A7ED2C7E071DF9_METHOD_1_A0BDC44A9D22219F_1_OFFSET UNITYSDK_OFFSET(0x1C29C340)
#define CLASS_1_78A7ED2C7E071DF9_METHOD_1_A0BDC44A9D22219F_OFFSET UNITYSDK_OFFSET(0x1C29C1E0)
#define CLASS_1_78A7ED2C7E071DF9_METHOD_1_F29D7A7F508EABE1_OFFSET UNITYSDK_OFFSET(0x1C29C4A0)
#define CLASS_1_78A7ED2C7E071DF9__CTOR_OFFSET UNITYSDK_OFFSET(0x1C29C570)

inline static constexpr unsigned int Class_1_78A7ED2C7E071DF9_TypeDefinitionIndex = 36224;

class Class_1_78A7ED2C7E071DF9 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_8278C4CB5E7C57A4*>* CMIODLLHPEH; // 0x10
	::System::Collections::Generic::List_1<::Class_1_8278C4CB5E7C57A4*>* OGOEEKNLOON; // 0x18
	::System::UInt64 JMKOAHBFANB; // 0x20
	::System::UInt32 KNEFCBAALDF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78A7ED2C7E071DF9__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_A0BDC44A9D22219F()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78A7ED2C7E071DF9_METHOD_1_A0BDC44A9D22219F_OFFSET))(this);
	}

	::System::String* Method_1_A0BDC44A9D22219F_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78A7ED2C7E071DF9_METHOD_1_A0BDC44A9D22219F_1_OFFSET))(this);
	}

	::System::Void Method_1_F29D7A7F508EABE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78A7ED2C7E071DF9_METHOD_1_F29D7A7F508EABE1_OFFSET))(this);
	}
};
