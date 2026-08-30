#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_414BCDCDAD47B487;
namespace System { class String; }

#define CLASS_1_B5A9DA083406A268_METHOD_1_4D0519499D70328F_OFFSET UNITYSDK_OFFSET(0xB510500)
#define CLASS_1_B5A9DA083406A268_METHOD_1_5F642F91C0DEEB77_OFFSET UNITYSDK_OFFSET(0xB5107D0)
#define CLASS_1_B5A9DA083406A268_METHOD_1_EC5A0691CFC2967F_OFFSET UNITYSDK_OFFSET(0xB5109D0)
#define CLASS_1_B5A9DA083406A268__CTOR_OFFSET UNITYSDK_OFFSET(0xB510A40)

inline static constexpr unsigned int Class_1_B5A9DA083406A268_TypeDefinitionIndex = 73643;

class Class_1_B5A9DA083406A268 : public ::System::Object
{
public:
	::Il2CppArray<::System::String*>* HHBCANKANID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5A9DA083406A268__CTOR_OFFSET))(this);
	}

	::Class_1_B5A9DA083406A268* Method_1_4D0519499D70328F(::System::String* a1, ::Class_1_414BCDCDAD47B487* a2, ::Il2CppArray<::System::String*>* a3)
	{
		return ((::Class_1_B5A9DA083406A268*(*)(::PVOID, ::System::String*, ::Class_1_414BCDCDAD47B487*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_B5A9DA083406A268_METHOD_1_4D0519499D70328F_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_B5A9DA083406A268* Method_1_5F642F91C0DEEB77(::System::String* a1)
	{
		return ((::Class_1_B5A9DA083406A268*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B5A9DA083406A268_METHOD_1_5F642F91C0DEEB77_OFFSET))(this, a1);
	}

	::System::String* Method_1_EC5A0691CFC2967F(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B5A9DA083406A268_METHOD_1_EC5A0691CFC2967F_OFFSET))(this, a1);
	}
};
