#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_09C145E2F0896242.h"
#include "unitysdk/System/Object.h"

class Class_1_A1B83C8DEA7CC5F6;
class Class_1_C4C2ACF3D9655BEA_1;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_64C88CC973F780A7_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x123BC5C0)
#define CLASS_1_64C88CC973F780A7_METHOD_1_459C79521BFE514E_OFFSET UNITYSDK_OFFSET(0x123BBB80)
#define CLASS_1_64C88CC973F780A7_METHOD_1_627594C270CB38B4_OFFSET UNITYSDK_OFFSET(0x123BC0B0)
#define CLASS_1_64C88CC973F780A7_METHOD_1_A8E5FA6BCD56FEC4_OFFSET UNITYSDK_OFFSET(0x123BB9E0)
#define CLASS_1_64C88CC973F780A7_METHOD_1_C71FA5E878D1A417_OFFSET UNITYSDK_OFFSET(0x123BBAE0)
#define CLASS_1_64C88CC973F780A7_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x123BBA90)
#define CLASS_1_64C88CC973F780A7__CTOR_OFFSET UNITYSDK_OFFSET(0x123BB9D0)

inline static constexpr unsigned int Class_1_64C88CC973F780A7_TypeDefinitionIndex = 41464;

class Class_1_64C88CC973F780A7 : public ::System::Object
{
public:
	::Class_1_A1B83C8DEA7CC5F6* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_C4C2ACF3D9655BEA_1*>* Field_1_3; // 0x18
	::System::Action_1<::System::Single>* Field_1_2; // 0x20
	::System::Boolean Field_1_1; // 0x28
	::System::Single Field_1_4; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64C88CC973F780A7__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A8E5FA6BCD56FEC4(::Enum_3_09C145E2F0896242 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_09C145E2F0896242))((::PBYTE)hIl2Cpp + CLASS_1_64C88CC973F780A7_METHOD_1_A8E5FA6BCD56FEC4_OFFSET))(this, a1);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_A1B83C8DEA7CC5F6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A1B83C8DEA7CC5F6*))((::PBYTE)hIl2Cpp + CLASS_1_64C88CC973F780A7_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_1_C71FA5E878D1A417(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_64C88CC973F780A7_METHOD_1_C71FA5E878D1A417_OFFSET))(this, a1);
	}

	::System::Void Method_1_459C79521BFE514E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_64C88CC973F780A7_METHOD_1_459C79521BFE514E_OFFSET))(this, a1);
	}

	::System::Void Method_1_627594C270CB38B4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_64C88CC973F780A7_METHOD_1_627594C270CB38B4_OFFSET))(this, a1);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64C88CC973F780A7_METHOD_1_1290EA767C459179_OFFSET))(this);
	}
};
