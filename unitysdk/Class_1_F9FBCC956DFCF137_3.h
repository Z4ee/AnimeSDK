#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_148FC490588BDD52;
namespace System { class String; }

#define CLASS_1_F9FBCC956DFCF137_3_METHOD_1_1DF70B274C3935AF_OFFSET UNITYSDK_OFFSET(0x10BAA100)
#define CLASS_1_F9FBCC956DFCF137_3_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x10BAA0C0)
#define CLASS_1_F9FBCC956DFCF137_3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x10BAA160)
#define CLASS_1_F9FBCC956DFCF137_3__CTOR_OFFSET UNITYSDK_OFFSET(0x10BAA0B0)
#define CLASS_1_F9FBCC956DFCF137_3___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x10BAA210)

inline static constexpr unsigned int Class_1_F9FBCC956DFCF137_3_TypeDefinitionIndex = 48043;

class Class_1_F9FBCC956DFCF137_3 : public ::System::Object
{
public:
	::Class_1_148FC490588BDD52* Field_1_0; // 0x10

	::System::Void _ctor(::Class_1_148FC490588BDD52* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_148FC490588BDD52*))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_3__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_3_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_1_1DF70B274C3935AF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_3_METHOD_1_1DF70B274C3935AF_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_3_TOSTRING_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_3___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
