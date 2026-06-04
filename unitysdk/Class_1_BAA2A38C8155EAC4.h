#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ScenenLightManager/FadingState.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_339;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define CLASS_1_BAA2A38C8155EAC4_METHOD_1_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0xAA70130)
#define CLASS_1_BAA2A38C8155EAC4_METHOD_1_2F0F99A12DB93F30_OFFSET UNITYSDK_OFFSET(0xAA700D0)
#define CLASS_1_BAA2A38C8155EAC4_METHOD_1_3CCBE3B0337D2B16_OFFSET UNITYSDK_OFFSET(0xAA6FBF0)
#define CLASS_1_BAA2A38C8155EAC4_METHOD_1_454E886573412C7E_OFFSET UNITYSDK_OFFSET(0xAA6FAA0)
#define CLASS_1_BAA2A38C8155EAC4_METHOD_1_4F57A73D9ABE2F77_OFFSET UNITYSDK_OFFSET(0xAA6FDE0)
#define CLASS_1_BAA2A38C8155EAC4_METHOD_1_F4AECB1C61F7740C_OFFSET UNITYSDK_OFFSET(0xAA6FD90)
#define CLASS_1_BAA2A38C8155EAC4__CCTOR_OFFSET UNITYSDK_OFFSET(0xAA701D0)
#define CLASS_1_BAA2A38C8155EAC4__CTOR_OFFSET UNITYSDK_OFFSET(0xAA6FBE0)

inline static constexpr unsigned int Class_1_BAA2A38C8155EAC4_TypeDefinitionIndex = 46535;

class Class_1_BAA2A38C8155EAC4 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Stack_1<::Class_1_BAA2A38C8155EAC4*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Stack_1<::Class_1_BAA2A38C8155EAC4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BAA2A38C8155EAC4_TypeDefinitionIndex)->GetStaticField(0x68AF0);
	}
	::System::Action* Field_1_1; // 0x10
	::Class_0_16E4307DCC419505_339* Field_1_2; // 0x18
	::System::Single Field_1_3; // 0x20
	::System::Single Field_1_4; // 0x24
	::System::Single Field_1_5; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BAA2A38C8155EAC4__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BAA2A38C8155EAC4__CCTOR_OFFSET))();
	}

	static ::Class_1_BAA2A38C8155EAC4* Method_1_454E886573412C7E(::Class_0_16E4307DCC419505_339* a1, ::System::Single a2, ::System::Single a3, ::System::Action* a4)
	{
		return ((::Class_1_BAA2A38C8155EAC4*(*)(::Class_0_16E4307DCC419505_339*, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_BAA2A38C8155EAC4_METHOD_1_454E886573412C7E_OFFSET))(a1, a2, a3, a4);
	}

	::ScenenLightManager::FadingState Method_1_F4AECB1C61F7740C()
	{
		return ((::ScenenLightManager::FadingState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BAA2A38C8155EAC4_METHOD_1_F4AECB1C61F7740C_OFFSET))(this);
	}

	::System::Void Method_1_3CCBE3B0337D2B16(::Class_0_16E4307DCC419505_339* a1, ::System::Single a2, ::System::Single a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_339*, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_BAA2A38C8155EAC4_METHOD_1_3CCBE3B0337D2B16_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_4F57A73D9ABE2F77(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BAA2A38C8155EAC4_METHOD_1_4F57A73D9ABE2F77_OFFSET))(this, a1);
	}

	::System::Void Method_1_2F0F99A12DB93F30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BAA2A38C8155EAC4_METHOD_1_2F0F99A12DB93F30_OFFSET))(this);
	}

	::System::Void Method_1_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BAA2A38C8155EAC4_METHOD_1_1B167429A8B82AD3_OFFSET))(this);
	}
};
