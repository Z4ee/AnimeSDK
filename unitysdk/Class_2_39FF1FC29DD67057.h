#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

class Class_1_1342B57709FD7AC5;
class Class_1_D27BF54F25500E5F;
namespace RPG::Client { class MonoEffectPluginCharaEffectBase; }
namespace RPG::Client { class MonoEffectPluginFade; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Renderer; }

#define CLASS_2_39FF1FC29DD67057_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14FB5BA0)
#define CLASS_2_39FF1FC29DD67057_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x14FB6630)
#define CLASS_2_39FF1FC29DD67057_METHOD_2_1713F44301AA802F_OFFSET UNITYSDK_OFFSET(0x14FB7490)
#define CLASS_2_39FF1FC29DD67057_METHOD_2_19B6311C06D9EFFF_OFFSET UNITYSDK_OFFSET(0x14FB5A80)
#define CLASS_2_39FF1FC29DD67057_METHOD_2_2DD8EB2A8AB21975_OFFSET UNITYSDK_OFFSET(0x14FB8AB0)
#define CLASS_2_39FF1FC29DD67057_METHOD_2_2E1D6B191E94AFFD_OFFSET UNITYSDK_OFFSET(0x14FB88E0)
#define CLASS_2_39FF1FC29DD67057_METHOD_2_3FC5D2EAE16048C0_OFFSET UNITYSDK_OFFSET(0x14FB8ED0)
#define CLASS_2_39FF1FC29DD67057_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0x14FB8620)
#define CLASS_2_39FF1FC29DD67057_METHOD_2_48E6499EBC7D9052_OFFSET UNITYSDK_OFFSET(0x14FB87D0)
#define CLASS_2_39FF1FC29DD67057_METHOD_2_4F60CBE29BD2AB9A_OFFSET UNITYSDK_OFFSET(0x14FB86C0)
#define CLASS_2_39FF1FC29DD67057_METHOD_2_521314B4A361DB14_OFFSET UNITYSDK_OFFSET(0x14FB6320)
#define CLASS_2_39FF1FC29DD67057_METHOD_2_52C18C0DA8AC23E5_OFFSET UNITYSDK_OFFSET(0x14FB7900)
#define CLASS_2_39FF1FC29DD67057_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x14FB93C0)
#define CLASS_2_39FF1FC29DD67057_METHOD_2_7C2C2820B36B9508_OFFSET UNITYSDK_OFFSET(0x14FB5F20)
#define CLASS_2_39FF1FC29DD67057_METHOD_2_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x14FB5DA0)
#define CLASS_2_39FF1FC29DD67057_METHOD_2_860BDBCE502B20FD_OFFSET UNITYSDK_OFFSET(0x14FB6BF0)
#define CLASS_2_39FF1FC29DD67057_METHOD_2_8E66B82298267DC3_OFFSET UNITYSDK_OFFSET(0x14FB6700)
#define CLASS_2_39FF1FC29DD67057_METHOD_2_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0x14FB8480)
#define CLASS_2_39FF1FC29DD67057_METHOD_2_958AC3A3E274189C_OFFSET UNITYSDK_OFFSET(0x14FB77C0)
#define CLASS_2_39FF1FC29DD67057_METHOD_2_97256BC7584D2307_OFFSET UNITYSDK_OFFSET(0x14FB5C10)
#define CLASS_2_39FF1FC29DD67057_METHOD_2_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x14FB6DD0)
#define CLASS_2_39FF1FC29DD67057_METHOD_2_B3A88D7849969A71_OFFSET UNITYSDK_OFFSET(0x14FB8E60)
#define CLASS_2_39FF1FC29DD67057_METHOD_2_B768DA94E3FD91D9_OFFSET UNITYSDK_OFFSET(0x14FB8330)
#define CLASS_2_39FF1FC29DD67057_METHOD_2_BF16A23EDAB59A6E_OFFSET UNITYSDK_OFFSET(0x14FB6840)
#define CLASS_2_39FF1FC29DD67057_METHOD_2_C07F7D392A6BCDFE_OFFSET UNITYSDK_OFFSET(0x14FB6EB0)
#define CLASS_2_39FF1FC29DD67057_METHOD_2_C8675959005FBBF0_OFFSET UNITYSDK_OFFSET(0x14FB5B50)
#define CLASS_2_39FF1FC29DD67057_METHOD_2_C982C8295D29DA97_OFFSET UNITYSDK_OFFSET(0x14FB93D0)
#define CLASS_2_39FF1FC29DD67057_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14FB5D60)
#define CLASS_2_39FF1FC29DD67057_METHOD_2_D431C8F1368228CF_OFFSET UNITYSDK_OFFSET(0x14FB7010)
#define CLASS_2_39FF1FC29DD67057_METHOD_2_EBAB6A35C21A2A5B_OFFSET UNITYSDK_OFFSET(0x14FB7F10)
#define CLASS_2_39FF1FC29DD67057__CCTOR_OFFSET UNITYSDK_OFFSET(0x14FB94C0)
#define CLASS_2_39FF1FC29DD67057__CTOR_OFFSET UNITYSDK_OFFSET(0x14FB94B0)
#define CLASS_2_39FF1FC29DD67057__FADEINIMMEDIATELY_B__5_0_OFFSET UNITYSDK_OFFSET(0x14FB94F0)

inline static constexpr unsigned int Class_2_39FF1FC29DD67057_TypeDefinitionIndex = 66739;

class Class_2_39FF1FC29DD67057 : public ::RPG::Client::BehaviorBase
{
public:
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_39FF1FC29DD67057_TypeDefinitionIndex)->GetStaticField(0xE400);
	}
	static ::System::Int32* StaticGet_Field_2_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_39FF1FC29DD67057_TypeDefinitionIndex)->GetStaticField(0xE404);
	}
	::UnityEngine::Animator* Field_2_2; // 0x18
	::Class_1_D27BF54F25500E5F* Field_2_3; // 0x20
	::Il2CppArray<::UnityEngine::Renderer*>* Field_2_4; // 0x28
	::System::Action* Field_2_5; // 0x30
	::RPG::Client::MonoEffectPluginCharaEffectBase* Field_2_6; // 0x38
	::Class_1_1342B57709FD7AC5* Field_2_7; // 0x40
	::System::Boolean Field_2_8; // 0x48
	::System::Boolean Field_2_9; // 0x49
	::System::Boolean Field_2_10; // 0x4A
	::System::Single Field_2_11; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_39FF1FC29DD67057__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_39FF1FC29DD67057__CCTOR_OFFSET))();
	}

	::System::Void Method_2_19B6311C06D9EFFF(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_39FF1FC29DD67057_METHOD_2_19B6311C06D9EFFF_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_39FF1FC29DD67057_DISPOSE_OFFSET))(this);
	}

	::UnityEngine::Animator* Method_2_97256BC7584D2307()
	{
		return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_39FF1FC29DD67057_METHOD_2_97256BC7584D2307_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_39FF1FC29DD67057_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_39FF1FC29DD67057_METHOD_2_84B92802FDAFF6C8_OFFSET))(this);
	}

	::System::Void Method_2_521314B4A361DB14(::System::Action* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_39FF1FC29DD67057_METHOD_2_521314B4A361DB14_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BF16A23EDAB59A6E(::System::Action* a1, ::System::Single a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_39FF1FC29DD67057_METHOD_2_BF16A23EDAB59A6E_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_1713F44301AA802F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_39FF1FC29DD67057_METHOD_2_1713F44301AA802F_OFFSET))(this);
	}

	::System::Void Method_2_52C18C0DA8AC23E5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_39FF1FC29DD67057_METHOD_2_52C18C0DA8AC23E5_OFFSET))(this);
	}

	::System::Void Method_2_B768DA94E3FD91D9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_39FF1FC29DD67057_METHOD_2_B768DA94E3FD91D9_OFFSET))(this);
	}

	::System::Void Method_2_8FAD57395F26ACC4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_39FF1FC29DD67057_METHOD_2_8FAD57395F26ACC4_OFFSET))(this, a1);
	}

	::System::Void Method_2_7C2C2820B36B9508()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_39FF1FC29DD67057_METHOD_2_7C2C2820B36B9508_OFFSET))(this);
	}

	::System::Void Method_2_EBAB6A35C21A2A5B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_39FF1FC29DD67057_METHOD_2_EBAB6A35C21A2A5B_OFFSET))(this);
	}

	::System::Void Method_2_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_39FF1FC29DD67057_METHOD_2_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_2_4F60CBE29BD2AB9A(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_39FF1FC29DD67057_METHOD_2_4F60CBE29BD2AB9A_OFFSET))(this, a1);
	}

	::System::Void Method_2_2E1D6B191E94AFFD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_39FF1FC29DD67057_METHOD_2_2E1D6B191E94AFFD_OFFSET))(this, a1);
	}

	::System::Void Method_2_48E6499EBC7D9052(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_39FF1FC29DD67057_METHOD_2_48E6499EBC7D9052_OFFSET))(this, a1);
	}

	::System::Void Method_2_2DD8EB2A8AB21975(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_39FF1FC29DD67057_METHOD_2_2DD8EB2A8AB21975_OFFSET))(this, a1);
	}

	::System::Void Method_2_B3A88D7849969A71(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_39FF1FC29DD67057_METHOD_2_B3A88D7849969A71_OFFSET))(this, a1);
	}

	::System::Void Method_2_8E66B82298267DC3(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_39FF1FC29DD67057_METHOD_2_8E66B82298267DC3_OFFSET))(this, a1);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_39FF1FC29DD67057_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Boolean Method_2_860BDBCE502B20FD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_39FF1FC29DD67057_METHOD_2_860BDBCE502B20FD_OFFSET))(this);
	}

	::System::Void Method_2_D431C8F1368228CF(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_39FF1FC29DD67057_METHOD_2_D431C8F1368228CF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C07F7D392A6BCDFE(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_39FF1FC29DD67057_METHOD_2_C07F7D392A6BCDFE_OFFSET))(this, a1);
	}

	::System::Void Method_2_958AC3A3E274189C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_39FF1FC29DD67057_METHOD_2_958AC3A3E274189C_OFFSET))(this, a1);
	}

	::System::Void Method_2_3FC5D2EAE16048C0(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_39FF1FC29DD67057_METHOD_2_3FC5D2EAE16048C0_OFFSET))(this, a1);
	}

	::System::Void Method_2_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_39FF1FC29DD67057_METHOD_2_A1ADC999CFACEB89_OFFSET))(this);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_39FF1FC29DD67057_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Boolean Method_2_C982C8295D29DA97()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_39FF1FC29DD67057_METHOD_2_C982C8295D29DA97_OFFSET))(this);
	}

	::RPG::Client::MonoEffectPluginFade* Method_2_C8675959005FBBF0()
	{
		return ((::RPG::Client::MonoEffectPluginFade*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_39FF1FC29DD67057_METHOD_2_C8675959005FBBF0_OFFSET))(this);
	}

	::System::Void _FadeInImmediately_b__5_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_39FF1FC29DD67057__FADEINIMMEDIATELY_B__5_0_OFFSET))(this);
	}
};
