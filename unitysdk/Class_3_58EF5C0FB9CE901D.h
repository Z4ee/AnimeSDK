#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_58EF5C0FB9CE901D_Struct_2_D062B8B527D09B71.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_58EF5C0FB9CE901D_AnimatedItem;
namespace RPG::Client { class GPUParticleTransformLoopAnim; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }

#define CLASS_3_58EF5C0FB9CE901D_METHOD_3_33E2FA8E6403B93D_OFFSET UNITYSDK_OFFSET(0x88B0DA0)
#define CLASS_3_58EF5C0FB9CE901D_METHOD_3_394F35BBA0EE596A_OFFSET UNITYSDK_OFFSET(0x88AF530)
#define CLASS_3_58EF5C0FB9CE901D_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x88B33D0)
#define CLASS_3_58EF5C0FB9CE901D_METHOD_3_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x88B3430)
#define CLASS_3_58EF5C0FB9CE901D_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x88B3370)
#define CLASS_3_58EF5C0FB9CE901D_METHOD_3_5EEAD951AA9FDA02_OFFSET UNITYSDK_OFFSET(0x88B1590)
#define CLASS_3_58EF5C0FB9CE901D_METHOD_3_948B5358C5B8F68D_OFFSET UNITYSDK_OFFSET(0x88AF3B0)
#define CLASS_3_58EF5C0FB9CE901D_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x88AF210)
#define CLASS_3_58EF5C0FB9CE901D_METHOD_3_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x88B3040)
#define CLASS_3_58EF5C0FB9CE901D_METHOD_3_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x88B3130)
#define CLASS_3_58EF5C0FB9CE901D_METHOD_3_B12B4E4A39A083D2_OFFSET UNITYSDK_OFFSET(0x88B1380)
#define CLASS_3_58EF5C0FB9CE901D_METHOD_3_B20BEFA3114DC074_OFFSET UNITYSDK_OFFSET(0x88B21D0)
#define CLASS_3_58EF5C0FB9CE901D_METHOD_3_D0BD1377F2594D33_1_OFFSET UNITYSDK_OFFSET(0x88AF420)
#define CLASS_3_58EF5C0FB9CE901D_METHOD_3_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x88AF2A0)
#define CLASS_3_58EF5C0FB9CE901D_METHOD_3_DF7CEFC0E6C5FD0D_OFFSET UNITYSDK_OFFSET(0x88B3230)
#define CLASS_3_58EF5C0FB9CE901D_TICK_OFFSET UNITYSDK_OFFSET(0x88AF940)
#define CLASS_3_58EF5C0FB9CE901D__CCTOR_OFFSET UNITYSDK_OFFSET(0x88B3320)
#define CLASS_3_58EF5C0FB9CE901D__CTOR_OFFSET UNITYSDK_OFFSET(0x88B32F0)
#define CLASS_3_58EF5C0FB9CE901D___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x88B3490)

inline static constexpr unsigned int Class_3_58EF5C0FB9CE901D_TypeDefinitionIndex = 57556;

class Class_3_58EF5C0FB9CE901D : public ::RPG::Client::TABehaviorBase
{
public:
	static ::System::Int32* StaticGet_Field_3_7()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_58EF5C0FB9CE901D_TypeDefinitionIndex)->GetStaticField(0x13030);
	}
	static ::System::Int32* StaticGet_Field_3_8()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_58EF5C0FB9CE901D_TypeDefinitionIndex)->GetStaticField(0x13034);
	}
	::UnityEngine::ComputeBuffer* Field_3_6; // 0x38
	::System::Single Field_3_1; // 0x40
	::System::Single Field_3_0; // 0x44
	::System::Boolean Field_3_2; // 0x48
	::System::Single Field_3_3; // 0x4C
	::UnityEngine::Vector3 Field_3_4; // 0x50
	::UnityEngine::Quaternion Field_3_5; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_58EF5C0FB9CE901D__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_58EF5C0FB9CE901D__CCTOR_OFFSET))();
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_58EF5C0FB9CE901D_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_3_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_58EF5C0FB9CE901D_METHOD_3_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_3_D0BD1377F2594D33_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_58EF5C0FB9CE901D_METHOD_3_D0BD1377F2594D33_1_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_58EF5C0FB9CE901D_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_3_33E2FA8E6403B93D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_58EF5C0FB9CE901D_METHOD_3_33E2FA8E6403B93D_OFFSET))(this);
	}

	::System::Void Method_3_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_58EF5C0FB9CE901D_METHOD_3_A1ADC999CFACEB89_OFFSET))(this);
	}

	::System::Void Method_3_394F35BBA0EE596A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_58EF5C0FB9CE901D_METHOD_3_394F35BBA0EE596A_OFFSET))(this);
	}

	::System::Void Method_3_B12B4E4A39A083D2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_58EF5C0FB9CE901D_METHOD_3_B12B4E4A39A083D2_OFFSET))(this, a1);
	}

	::System::Void Method_3_5EEAD951AA9FDA02(::Class_3_58EF5C0FB9CE901D_AnimatedItem* a1, ::System::Int32 a2, ::Class_3_58EF5C0FB9CE901D_Struct_2_D062B8B527D09B71& a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_58EF5C0FB9CE901D_AnimatedItem*, ::System::Int32, ::Class_3_58EF5C0FB9CE901D_Struct_2_D062B8B527D09B71&))((::PBYTE)hIl2Cpp + CLASS_3_58EF5C0FB9CE901D_METHOD_3_5EEAD951AA9FDA02_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_DF7CEFC0E6C5FD0D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_58EF5C0FB9CE901D_METHOD_3_DF7CEFC0E6C5FD0D_OFFSET))(this, a1);
	}

	::System::Void Method_3_B20BEFA3114DC074(::Class_3_58EF5C0FB9CE901D_AnimatedItem* a1, ::System::Collections::Generic::List_1<::Class_3_58EF5C0FB9CE901D_Struct_2_D062B8B527D09B71>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_58EF5C0FB9CE901D_AnimatedItem*, ::System::Collections::Generic::List_1<::Class_3_58EF5C0FB9CE901D_Struct_2_D062B8B527D09B71>*))((::PBYTE)hIl2Cpp + CLASS_3_58EF5C0FB9CE901D_METHOD_3_B20BEFA3114DC074_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_58EF5C0FB9CE901D_METHOD_3_A239DF324AF4215D_OFFSET))(this);
	}

	::RPG::Client::GPUParticleTransformLoopAnim* Method_3_948B5358C5B8F68D()
	{
		return ((::RPG::Client::GPUParticleTransformLoopAnim*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_58EF5C0FB9CE901D_METHOD_3_948B5358C5B8F68D_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_58EF5C0FB9CE901D_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_58EF5C0FB9CE901D_METHOD_3_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_58EF5C0FB9CE901D_METHOD_3_5790A55946AA509D_2_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_58EF5C0FB9CE901D___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
