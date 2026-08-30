#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ScenenLightManager/FadingState.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_382;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define CLASS_1_BAA2A38C8155EAC4_METHOD_1_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x17F5BC00)
#define CLASS_1_BAA2A38C8155EAC4_METHOD_1_2F0F99A12DB93F30_OFFSET UNITYSDK_OFFSET(0x17F5BBA0)
#define CLASS_1_BAA2A38C8155EAC4_METHOD_1_3CCBE3B0337D2B16_OFFSET UNITYSDK_OFFSET(0x17F5B5C0)
#define CLASS_1_BAA2A38C8155EAC4_METHOD_1_454E886573412C7E_OFFSET UNITYSDK_OFFSET(0x17F5B470)
#define CLASS_1_BAA2A38C8155EAC4_METHOD_1_4F57A73D9ABE2F77_OFFSET UNITYSDK_OFFSET(0x17F5B800)
#define CLASS_1_BAA2A38C8155EAC4_METHOD_1_F4AECB1C61F7740C_OFFSET UNITYSDK_OFFSET(0x17F5B7B0)
#define CLASS_1_BAA2A38C8155EAC4__CCTOR_OFFSET UNITYSDK_OFFSET(0x17F5BCA0)
#define CLASS_1_BAA2A38C8155EAC4__CTOR_OFFSET UNITYSDK_OFFSET(0x17F5B5B0)

inline static constexpr unsigned int Class_1_BAA2A38C8155EAC4_TypeDefinitionIndex = 49780;

class Class_1_BAA2A38C8155EAC4 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Stack_1<::Class_1_BAA2A38C8155EAC4*>** StaticGet_MFPNICMCKJG()
	{
		return (::System::Collections::Generic::Stack_1<::Class_1_BAA2A38C8155EAC4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BAA2A38C8155EAC4_TypeDefinitionIndex)->GetStaticField(0x64CF0);
	}
	::Class_0_16E4307DCC419505_382* NHOEPPPPFCP; // 0x10
	::System::Action* DLLHNPPIIPG; // 0x18
	::System::Single BAGBOHCDFFA; // 0x20
	::System::Single PPJFAHFEGDD; // 0x24
	::System::Single HNOLFPKINDK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BAA2A38C8155EAC4__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BAA2A38C8155EAC4__CCTOR_OFFSET))();
	}

	static ::Class_1_BAA2A38C8155EAC4* Method_1_454E886573412C7E(::Class_0_16E4307DCC419505_382* a1, ::System::Single a2, ::System::Single a3, ::System::Action* a4)
	{
		return ((::Class_1_BAA2A38C8155EAC4*(*)(::Class_0_16E4307DCC419505_382*, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_BAA2A38C8155EAC4_METHOD_1_454E886573412C7E_OFFSET))(a1, a2, a3, a4);
	}

	::ScenenLightManager::FadingState Method_1_F4AECB1C61F7740C()
	{
		return ((::ScenenLightManager::FadingState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BAA2A38C8155EAC4_METHOD_1_F4AECB1C61F7740C_OFFSET))(this);
	}

	::System::Void Method_1_3CCBE3B0337D2B16(::Class_0_16E4307DCC419505_382* a1, ::System::Single a2, ::System::Single a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_BAA2A38C8155EAC4_METHOD_1_3CCBE3B0337D2B16_OFFSET))(this, a1, a2, a3, a4);
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
