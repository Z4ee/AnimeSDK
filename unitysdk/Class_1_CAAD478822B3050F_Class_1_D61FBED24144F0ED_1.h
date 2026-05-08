#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CLASS_1_CAAD478822B3050F_CLASS_1_D61FBED24144F0ED_1_METHOD_1_CBCB1EF15E904B7F_OFFSET UNITYSDK_OFFSET(0x118C98D0)
#define CLASS_1_CAAD478822B3050F_CLASS_1_D61FBED24144F0ED_1__CTOR_OFFSET UNITYSDK_OFFSET(0x118C98C0)

inline static constexpr unsigned int Class_1_CAAD478822B3050F_Class_1_D61FBED24144F0ED_1_TypeDefinitionIndex = 74797;

class Class_1_CAAD478822B3050F_Class_1_D61FBED24144F0ED_1 : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CAAD478822B3050F_CLASS_1_D61FBED24144F0ED_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CBCB1EF15E904B7F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CAAD478822B3050F_CLASS_1_D61FBED24144F0ED_1_METHOD_1_CBCB1EF15E904B7F_OFFSET))(this, a1);
	}
};
