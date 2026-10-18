#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_4882D51538AB1BD1.h"

namespace System { class String; }

#define CLASS_3_13806029858BD70C_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0xBBD7E30)
#define CLASS_3_13806029858BD70C_METHOD_3_CA62C67A023EC5B7_OFFSET UNITYSDK_OFFSET(0xBBD7EA0)
#define CLASS_3_13806029858BD70C__CTOR_OFFSET UNITYSDK_OFFSET(0xBBD80A0)

inline static constexpr unsigned int Class_3_13806029858BD70C_TypeDefinitionIndex = 59494;

class Class_3_13806029858BD70C : public ::Class_2_4882D51538AB1BD1
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_13806029858BD70C__CTOR_OFFSET))(this);
	}

	::System::String* GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_13806029858BD70C_GETTYPENAME_OFFSET))(this);
	}

	::System::Boolean Method_3_CA62C67A023EC5B7(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_13806029858BD70C_METHOD_3_CA62C67A023EC5B7_OFFSET))(this, a1, a2);
	}
};
