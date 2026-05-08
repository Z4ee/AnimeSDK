#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_A8902709072EE71F_CLASS_3_FCB7915FFDB7626A_CLASS_1_C0CB11DCBE055AB9_METHOD_1_C71FA5E878D1A417_OFFSET UNITYSDK_OFFSET(0x13F2A1A0)
#define CLASS_1_A8902709072EE71F_CLASS_3_FCB7915FFDB7626A_CLASS_1_C0CB11DCBE055AB9__CTOR_OFFSET UNITYSDK_OFFSET(0x13F2A190)

inline static constexpr unsigned int Class_1_A8902709072EE71F_Class_3_FCB7915FFDB7626A_Class_1_C0CB11DCBE055AB9_TypeDefinitionIndex = 76017;

class Class_1_A8902709072EE71F_Class_3_FCB7915FFDB7626A_Class_1_C0CB11DCBE055AB9 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18
	::System::Action_1<::System::Single>* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8902709072EE71F_CLASS_3_FCB7915FFDB7626A_CLASS_1_C0CB11DCBE055AB9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C71FA5E878D1A417(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A8902709072EE71F_CLASS_3_FCB7915FFDB7626A_CLASS_1_C0CB11DCBE055AB9_METHOD_1_C71FA5E878D1A417_OFFSET))(this, a1);
	}
};
