#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_CBE8F99B157BE8C1_METHOD_1_4846DF9AB76EF245_OFFSET UNITYSDK_OFFSET(0xF7FED00)
#define CLASS_1_CBE8F99B157BE8C1_METHOD_1_8CA88D55ECEFAD59_OFFSET UNITYSDK_OFFSET(0xF7FEFE0)
#define CLASS_1_CBE8F99B157BE8C1_METHOD_1_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0xF7FED90)
#define CLASS_1_CBE8F99B157BE8C1_METHOD_1_B3A88D7849969A71_OFFSET UNITYSDK_OFFSET(0xF7FEC50)
#define CLASS_1_CBE8F99B157BE8C1__CTOR_OFFSET UNITYSDK_OFFSET(0xF7FEBD0)

inline static constexpr unsigned int Class_1_CBE8F99B157BE8C1_TypeDefinitionIndex = 73099;

class Class_1_CBE8F99B157BE8C1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CBE8F99B157BE8C1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B3A88D7849969A71(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CBE8F99B157BE8C1_METHOD_1_B3A88D7849969A71_OFFSET))(this, a1);
	}

	::System::Void Method_1_4846DF9AB76EF245(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CBE8F99B157BE8C1_METHOD_1_4846DF9AB76EF245_OFFSET))(this, a1);
	}

	::System::Void Method_1_B2C0ADBFEA309440()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CBE8F99B157BE8C1_METHOD_1_B2C0ADBFEA309440_OFFSET))(this);
	}

	::System::Void Method_1_8CA88D55ECEFAD59()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CBE8F99B157BE8C1_METHOD_1_8CA88D55ECEFAD59_OFFSET))(this);
	}
};
