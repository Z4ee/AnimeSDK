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

#define CLASS_2_39FF1FC29DD67057_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB29F570)
#define CLASS_2_39FF1FC29DD67057_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xB2A0010)
#define CLASS_2_39FF1FC29DD67057_METHOD_2_19B6311C06D9EFFF_OFFSET UNITYSDK_OFFSET(0xB29F450)
#define CLASS_2_39FF1FC29DD67057_METHOD_2_1E1FFD875CA8014A_OFFSET UNITYSDK_OFFSET(0xB2A0EA0)
#define CLASS_2_39FF1FC29DD67057_METHOD_2_2DD8EB2A8AB21975_OFFSET UNITYSDK_OFFSET(0xB2A2510)
#define CLASS_2_39FF1FC29DD67057_METHOD_2_2E1D6B191E94AFFD_OFFSET UNITYSDK_OFFSET(0xB2A2340)
#define CLASS_2_39FF1FC29DD67057_METHOD_2_3FC5D2EAE16048C0_OFFSET UNITYSDK_OFFSET(0xB2A2930)
#define CLASS_2_39FF1FC29DD67057_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0xB2A2080)
#define CLASS_2_39FF1FC29DD67057_METHOD_2_48E6499EBC7D9052_OFFSET UNITYSDK_OFFSET(0xB2A2230)
#define CLASS_2_39FF1FC29DD67057_METHOD_2_49B631EF1DEFEC16_OFFSET UNITYSDK_OFFSET(0xB2A17C0)
#define CLASS_2_39FF1FC29DD67057_METHOD_2_4F60CBE29BD2AB9A_OFFSET UNITYSDK_OFFSET(0xB2A2120)
#define CLASS_2_39FF1FC29DD67057_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0xB2A2E10)
#define CLASS_2_39FF1FC29DD67057_METHOD_2_7C2C2820B36B9508_OFFSET UNITYSDK_OFFSET(0xB29F8F0)
#define CLASS_2_39FF1FC29DD67057_METHOD_2_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0xB29F770)
#define CLASS_2_39FF1FC29DD67057_METHOD_2_860BDBCE502B20FD_OFFSET UNITYSDK_OFFSET(0xB2A05D0)
#define CLASS_2_39FF1FC29DD67057_METHOD_2_8E66B82298267DC3_OFFSET UNITYSDK_OFFSET(0xB2A00E0)
#define CLASS_2_39FF1FC29DD67057_METHOD_2_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0xB2A1EE0)
#define CLASS_2_39FF1FC29DD67057_METHOD_2_97256BC7584D2307_OFFSET UNITYSDK_OFFSET(0xB29F5E0)
#define CLASS_2_39FF1FC29DD67057_METHOD_2_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0xB2A07B0)
#define CLASS_2_39FF1FC29DD67057_METHOD_2_B3A88D7849969A71_OFFSET UNITYSDK_OFFSET(0xB2A28C0)
#define CLASS_2_39FF1FC29DD67057_METHOD_2_B768DA94E3FD91D9_OFFSET UNITYSDK_OFFSET(0xB2A1D90)
#define CLASS_2_39FF1FC29DD67057_METHOD_2_BF16A23EDAB59A6E_OFFSET UNITYSDK_OFFSET(0xB2A0220)
#define CLASS_2_39FF1FC29DD67057_METHOD_2_C07F7D392A6BCDFE_OFFSET UNITYSDK_OFFSET(0xB2A0890)
#define CLASS_2_39FF1FC29DD67057_METHOD_2_C6211556A20962CB_OFFSET UNITYSDK_OFFSET(0xB29FCF0)
#define CLASS_2_39FF1FC29DD67057_METHOD_2_C8675959005FBBF0_OFFSET UNITYSDK_OFFSET(0xB29F520)
#define CLASS_2_39FF1FC29DD67057_METHOD_2_C982C8295D29DA97_OFFSET UNITYSDK_OFFSET(0xB2A2E20)
#define CLASS_2_39FF1FC29DD67057_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB29F730)
#define CLASS_2_39FF1FC29DD67057_METHOD_2_D431C8F1368228CF_OFFSET UNITYSDK_OFFSET(0xB2A0A10)
#define CLASS_2_39FF1FC29DD67057_METHOD_2_DEDB6D705D6319DA_OFFSET UNITYSDK_OFFSET(0xB2A30A0)
#define CLASS_2_39FF1FC29DD67057_METHOD_2_EBAB6A35C21A2A5B_OFFSET UNITYSDK_OFFSET(0xB2A1970)
#define CLASS_2_39FF1FC29DD67057__CCTOR_OFFSET UNITYSDK_OFFSET(0xB2A2F10)
#define CLASS_2_39FF1FC29DD67057__CTOR_OFFSET UNITYSDK_OFFSET(0xB2A2F00)
#define CLASS_2_39FF1FC29DD67057__FADEINIMMEDIATELY_B__5_0_OFFSET UNITYSDK_OFFSET(0xB2A2F40)
#define CLASS_2_39FF1FC29DD67057___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2A3100)

inline static constexpr unsigned int Class_2_39FF1FC29DD67057_TypeDefinitionIndex = 65329;

class Class_2_39FF1FC29DD67057 : public ::RPG::Client::BehaviorBase
{
public:
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_39FF1FC29DD67057_TypeDefinitionIndex)->GetStaticField(0xFFB0);
	}
	static ::System::Int32* StaticGet_Field_2_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_39FF1FC29DD67057_TypeDefinitionIndex)->GetStaticField(0xFFB4);
	}
	::Class_1_1342B57709FD7AC5* Field_2_2; // 0x18
	::UnityEngine::Animator* Field_2_3; // 0x20
	::RPG::Client::MonoEffectPluginCharaEffectBase* Field_2_4; // 0x28
	::System::Action* Field_2_5; // 0x30
	::Il2CppArray<::UnityEngine::Renderer*>* Field_2_6; // 0x38
	::Class_1_D27BF54F25500E5F* Field_2_7; // 0x40
	::System::Single Field_2_8; // 0x48
	::System::Boolean Field_2_9; // 0x4C
	::System::Boolean Field_2_10; // 0x4D
	::System::Boolean Field_2_11; // 0x4E

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

	::System::Void Method_2_C6211556A20962CB(::System::Action* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_39FF1FC29DD67057_METHOD_2_C6211556A20962CB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BF16A23EDAB59A6E(::System::Action* a1, ::System::Single a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_39FF1FC29DD67057_METHOD_2_BF16A23EDAB59A6E_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_1E1FFD875CA8014A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_39FF1FC29DD67057_METHOD_2_1E1FFD875CA8014A_OFFSET))(this);
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

	::System::Void Method_2_49B631EF1DEFEC16(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_39FF1FC29DD67057_METHOD_2_49B631EF1DEFEC16_OFFSET))(this, a1);
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

	::System::Void Method_2_DEDB6D705D6319DA(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_39FF1FC29DD67057_METHOD_2_DEDB6D705D6319DA_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_39FF1FC29DD67057___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
