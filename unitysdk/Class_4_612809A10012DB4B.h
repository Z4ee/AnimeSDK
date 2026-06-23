#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_612809A10012DB4B_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x1267F7D0)
#define CLASS_4_612809A10012DB4B_METHOD_4_4A7D8AD50F8D54B5_OFFSET UNITYSDK_OFFSET(0x1267F210)
#define CLASS_4_612809A10012DB4B_METHOD_4_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1267F180)
#define CLASS_4_612809A10012DB4B_METHOD_4_E8690C9B4ECB7AA4_OFFSET UNITYSDK_OFFSET(0x1267F440)
#define CLASS_4_612809A10012DB4B__CTOR_OFFSET UNITYSDK_OFFSET(0x1267F730)

inline static constexpr unsigned int Class_4_612809A10012DB4B_TypeDefinitionIndex = 47113;

class Class_4_612809A10012DB4B : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_4_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_612809A10012DB4B__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_612809A10012DB4B_METHOD_4_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_4_4A7D8AD50F8D54B5(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_612809A10012DB4B_METHOD_4_4A7D8AD50F8D54B5_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_612809A10012DB4B_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_4_E8690C9B4ECB7AA4(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_4_612809A10012DB4B_METHOD_4_E8690C9B4ECB7AA4_OFFSET))(this, a1);
	}
};
