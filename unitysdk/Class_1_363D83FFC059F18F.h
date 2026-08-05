#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_09C145E2F0896242.h"
#include "unitysdk/System/Object.h"

class Class_1_A1B83C8DEA7CC5F6_1;
class Class_1_C4C2ACF3D9655BEA_2;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_363D83FFC059F18F_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x1B328E40)
#define CLASS_1_363D83FFC059F18F_METHOD_1_3E0FE2F7E1CC3F35_OFFSET UNITYSDK_OFFSET(0x1B329B20)
#define CLASS_1_363D83FFC059F18F_METHOD_1_4155E433CDAD6311_OFFSET UNITYSDK_OFFSET(0x1B3295B0)
#define CLASS_1_363D83FFC059F18F_METHOD_1_627594C270CB38B4_OFFSET UNITYSDK_OFFSET(0x1B329040)
#define CLASS_1_363D83FFC059F18F_METHOD_1_A8E5FA6BCD56FEC4_OFFSET UNITYSDK_OFFSET(0x1B328F90)
#define CLASS_1_363D83FFC059F18F_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x1B329560)
#define CLASS_1_363D83FFC059F18F__CTOR_OFFSET UNITYSDK_OFFSET(0x1B328E30)

inline static constexpr unsigned int Class_1_363D83FFC059F18F_TypeDefinitionIndex = 58728;

class Class_1_363D83FFC059F18F : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_C4C2ACF3D9655BEA_2*>* Field_1_0; // 0x10
	::System::Action_1<::System::Single>* Field_1_1; // 0x18
	::Class_1_A1B83C8DEA7CC5F6_1* Field_1_3; // 0x20
	::System::Boolean Field_1_2; // 0x28
	::System::Single Field_1_7; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_363D83FFC059F18F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_363D83FFC059F18F_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_1_A8E5FA6BCD56FEC4(::Enum_3_09C145E2F0896242 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_09C145E2F0896242))((::PBYTE)hIl2Cpp + CLASS_1_363D83FFC059F18F_METHOD_1_A8E5FA6BCD56FEC4_OFFSET))(this, a1);
	}

	::System::Void Method_1_627594C270CB38B4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_363D83FFC059F18F_METHOD_1_627594C270CB38B4_OFFSET))(this, a1);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_A1B83C8DEA7CC5F6_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A1B83C8DEA7CC5F6_1*))((::PBYTE)hIl2Cpp + CLASS_1_363D83FFC059F18F_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_1_4155E433CDAD6311(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_363D83FFC059F18F_METHOD_1_4155E433CDAD6311_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E0FE2F7E1CC3F35(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_363D83FFC059F18F_METHOD_1_3E0FE2F7E1CC3F35_OFFSET))(this, a1);
	}
};
