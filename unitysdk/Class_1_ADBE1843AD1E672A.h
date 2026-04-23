#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_ADBE1843AD1E672A_METHOD_1_0425D2FBB324FA05_OFFSET UNITYSDK_OFFSET(0x19DB8CC0)
#define CLASS_1_ADBE1843AD1E672A_METHOD_1_8EF383CA44957E7B_OFFSET UNITYSDK_OFFSET(0x19DB8C70)
#define CLASS_1_ADBE1843AD1E672A__CTOR_OFFSET UNITYSDK_OFFSET(0x19DB8C60)

inline static constexpr unsigned int Class_1_ADBE1843AD1E672A_TypeDefinitionIndex = 39796;

class Class_1_ADBE1843AD1E672A : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_ADBE1843AD1E672A__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8EF383CA44957E7B(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_ADBE1843AD1E672A_METHOD_1_8EF383CA44957E7B_OFFSET))(this, a1);
	}

	::System::Void Method_1_0425D2FBB324FA05(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_ADBE1843AD1E672A_METHOD_1_0425D2FBB324FA05_OFFSET))(this, a1);
	}
};
