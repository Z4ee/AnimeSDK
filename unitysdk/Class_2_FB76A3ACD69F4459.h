#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_383;
class Class_1_4EE99D7CBA59EE47_10;
namespace RPG::GameCore { class FinishPerformanceMission; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_FB76A3ACD69F4459_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8FD2C80)
#define CLASS_2_FB76A3ACD69F4459_METHOD_2_08BBACE844405300_OFFSET UNITYSDK_OFFSET(0x8FD4780)
#define CLASS_2_FB76A3ACD69F4459_METHOD_2_27688B76B2DCC338_OFFSET UNITYSDK_OFFSET(0x8FD4490)
#define CLASS_2_FB76A3ACD69F4459_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x8FD4580)
#define CLASS_2_FB76A3ACD69F4459_METHOD_2_464F9487BF0D77F8_OFFSET UNITYSDK_OFFSET(0x8FD4AD0)
#define CLASS_2_FB76A3ACD69F4459_METHOD_2_5AD578FCE9CF19D4_OFFSET UNITYSDK_OFFSET(0x8FD3510)
#define CLASS_2_FB76A3ACD69F4459_METHOD_2_7F6BC0E1A156D72B_OFFSET UNITYSDK_OFFSET(0x8FD4C70)
#define CLASS_2_FB76A3ACD69F4459_METHOD_2_8C3DB70FFBBF01C7_OFFSET UNITYSDK_OFFSET(0x8FD4BB0)
#define CLASS_2_FB76A3ACD69F4459_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x8FD2DE0)
#define CLASS_2_FB76A3ACD69F4459_METHOD_2_D15F52B395531E3F_OFFSET UNITYSDK_OFFSET(0x8FD2D00)
#define CLASS_2_FB76A3ACD69F4459_METHOD_2_D295E618607793C1_OFFSET UNITYSDK_OFFSET(0x8FD35F0)
#define CLASS_2_FB76A3ACD69F4459_METHOD_2_F476304D68944B28_OFFSET UNITYSDK_OFFSET(0x8FD4FF0)
#define CLASS_2_FB76A3ACD69F4459_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8FD2EE0)
#define CLASS_2_FB76A3ACD69F4459_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8FD4380)
#define CLASS_2_FB76A3ACD69F4459_TICK_OFFSET UNITYSDK_OFFSET(0x8FD4430)
#define CLASS_2_FB76A3ACD69F4459__CCTOR_OFFSET UNITYSDK_OFFSET(0x8FD5430)
#define CLASS_2_FB76A3ACD69F4459__CTOR_OFFSET UNITYSDK_OFFSET(0x8FD2C70)

inline static constexpr unsigned int Class_2_FB76A3ACD69F4459_TypeDefinitionIndex = 48712;

class Class_2_FB76A3ACD69F4459 : public ::Class_1_5F51D4049EA87B7B
{
public:
	static ::System::Single* StaticGet_Field_2_9()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FB76A3ACD69F4459_TypeDefinitionIndex)->GetStaticField(0x10850);
	}
	static ::System::Single* StaticGet_Field_2_10()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FB76A3ACD69F4459_TypeDefinitionIndex)->GetStaticField(0x10854);
	}
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_4EE99D7CBA59EE47_10*>* Field_2_3; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::RPG::GameCore::FinishPerformanceMission* Field_2_0; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_4EE99D7CBA59EE47_10*>* Field_2_4; // 0x30
	::Class_0_16E4307DCC419505_383* Field_2_7; // 0x38
	::System::Boolean Field_2_8; // 0x40
	::System::UInt32 Field_2_5; // 0x44
	::System::UInt32 Field_2_6; // 0x48
	::System::UInt32 Field_2_2; // 0x4C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FinishPerformanceMission* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FinishPerformanceMission*))((::PBYTE)hIl2Cpp + CLASS_2_FB76A3ACD69F4459__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_FB76A3ACD69F4459__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB76A3ACD69F4459_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB76A3ACD69F4459_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB76A3ACD69F4459_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FB76A3ACD69F4459_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_5AD578FCE9CF19D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB76A3ACD69F4459_METHOD_2_5AD578FCE9CF19D4_OFFSET))(this);
	}

	::System::Void Method_2_D15F52B395531E3F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB76A3ACD69F4459_METHOD_2_D15F52B395531E3F_OFFSET))(this);
	}

	::System::Void Method_2_27688B76B2DCC338(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FB76A3ACD69F4459_METHOD_2_27688B76B2DCC338_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_464F9487BF0D77F8(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FB76A3ACD69F4459_METHOD_2_464F9487BF0D77F8_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C3DB70FFBBF01C7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FB76A3ACD69F4459_METHOD_2_8C3DB70FFBBF01C7_OFFSET))(this, a1);
	}

	::System::Void Method_2_D295E618607793C1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_FB76A3ACD69F4459_METHOD_2_D295E618607793C1_OFFSET))(this, a1);
	}

	::System::Void Method_2_7F6BC0E1A156D72B(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_FB76A3ACD69F4459_METHOD_2_7F6BC0E1A156D72B_OFFSET))(this, a1);
	}

	::System::Void Method_2_F476304D68944B28(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_FB76A3ACD69F4459_METHOD_2_F476304D68944B28_OFFSET))(this, a1);
	}

	::System::Void Method_2_08BBACE844405300()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB76A3ACD69F4459_METHOD_2_08BBACE844405300_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB76A3ACD69F4459_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB76A3ACD69F4459_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}
};
