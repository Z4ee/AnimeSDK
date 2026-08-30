#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D1B027C23F0C5507;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_1_D1B027C23F0C5507___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17926170)
#define CLASS_1_D1B027C23F0C5507___C__CTOR_OFFSET UNITYSDK_OFFSET(0x179261A0)
#define CLASS_1_D1B027C23F0C5507___C___LISTENLEVELVARS_B__5_0_OFFSET UNITYSDK_OFFSET(0x179261B0)
#define CLASS_1_D1B027C23F0C5507___C___LISTENSUBMISSIONSTATE_B__6_0_OFFSET UNITYSDK_OFFSET(0x179261D0)

inline static constexpr unsigned int Class_1_D1B027C23F0C5507___c_TypeDefinitionIndex = 76445;

class Class_1_D1B027C23F0C5507___c : public ::System::Object
{
public:
	static ::System::Action_2<::Class_1_D1B027C23F0C5507*, ::System::UInt32>** StaticGet___9__6_0()
	{
		return (::System::Action_2<::Class_1_D1B027C23F0C5507*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1B027C23F0C5507___c_TypeDefinitionIndex)->GetStaticField(0x5F7C0);
	}
	static ::Class_1_D1B027C23F0C5507___c** StaticGet___9()
	{
		return (::Class_1_D1B027C23F0C5507___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1B027C23F0C5507___c_TypeDefinitionIndex)->GetStaticField(0x5F7C8);
	}
	static ::System::Action_2<::Class_1_D1B027C23F0C5507*, ::System::String*>** StaticGet___9__5_0()
	{
		return (::System::Action_2<::Class_1_D1B027C23F0C5507*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1B027C23F0C5507___c_TypeDefinitionIndex)->GetStaticField(0x5F7D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1B027C23F0C5507___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1B027C23F0C5507___C__CTOR_OFFSET))(this);
	}

	::System::Void __ListenLevelVars_b__5_0(::Class_1_D1B027C23F0C5507* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D1B027C23F0C5507*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D1B027C23F0C5507___C___LISTENLEVELVARS_B__5_0_OFFSET))(this, a1, a2);
	}

	::System::Void __ListenSubMissionState_b__6_0(::Class_1_D1B027C23F0C5507* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D1B027C23F0C5507*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D1B027C23F0C5507___C___LISTENSUBMISSIONSTATE_B__6_0_OFFSET))(this, a1, a2);
	}
};
