#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8FBDD7D8E0EE0B49;
class Class_4_AFD38822E2F27DEC_Class_1_B9B98B77056DB800;
namespace System { template <typename T> class Action_1; }

#define CLASS_4_AFD38822E2F27DEC_CLASS_1_1976C015AF4E628B_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x15DDAE40)
#define CLASS_4_AFD38822E2F27DEC_CLASS_1_1976C015AF4E628B_METHOD_1_92C5F138F167B6A2_OFFSET UNITYSDK_OFFSET(0x15DDADF0)
#define CLASS_4_AFD38822E2F27DEC_CLASS_1_1976C015AF4E628B__CTOR_OFFSET UNITYSDK_OFFSET(0x15DDAA50)

inline static constexpr unsigned int Class_4_AFD38822E2F27DEC_Class_1_1976C015AF4E628B_TypeDefinitionIndex = 83816;

class Class_4_AFD38822E2F27DEC_Class_1_1976C015AF4E628B : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* Field_1_1; // 0x10
	::Class_4_AFD38822E2F27DEC_Class_1_B9B98B77056DB800* Field_1_0; // 0x18
	::System::Boolean Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_AFD38822E2F27DEC_CLASS_1_1976C015AF4E628B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_92C5F138F167B6A2(::Class_1_8FBDD7D8E0EE0B49* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8FBDD7D8E0EE0B49*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_AFD38822E2F27DEC_CLASS_1_1976C015AF4E628B_METHOD_1_92C5F138F167B6A2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_AFD38822E2F27DEC_CLASS_1_1976C015AF4E628B_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}
};
