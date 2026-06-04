#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"

class WaveSimPanel;
namespace RPG::Client::DynamicFloatingObject { class DynamicFloatingManagerMono; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_3_5708A63D2DD68530_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xAEC9550)
#define CLASS_3_5708A63D2DD68530_METHOD_3_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0xAEC95B0)
#define CLASS_3_5708A63D2DD68530_METHOD_3_5790A55946AA509D_3_OFFSET UNITYSDK_OFFSET(0xAEC9610)
#define CLASS_3_5708A63D2DD68530_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xAEC94F0)
#define CLASS_3_5708A63D2DD68530_METHOD_3_6055A93732CC885D_OFFSET UNITYSDK_OFFSET(0xAEC9440)
#define CLASS_3_5708A63D2DD68530_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xAEC8F60)
#define CLASS_3_5708A63D2DD68530_METHOD_3_D87A7D8243E04FD7_1_OFFSET UNITYSDK_OFFSET(0xAEC9140)
#define CLASS_3_5708A63D2DD68530_METHOD_3_D87A7D8243E04FD7_OFFSET UNITYSDK_OFFSET(0xAEC8FC0)
#define CLASS_3_5708A63D2DD68530_METHOD_3_EC2B405D0723571D_OFFSET UNITYSDK_OFFSET(0xAEC8DB0)
#define CLASS_3_5708A63D2DD68530_METHOD_3_F239777256F9BA8F_OFFSET UNITYSDK_OFFSET(0xAEC8DA0)
#define CLASS_3_5708A63D2DD68530_METHOD_3_F245C316033C505E_OFFSET UNITYSDK_OFFSET(0xAEC93A0)
#define CLASS_3_5708A63D2DD68530_TICK_OFFSET UNITYSDK_OFFSET(0xAEC92D0)
#define CLASS_3_5708A63D2DD68530__CTOR_OFFSET UNITYSDK_OFFSET(0xAEC94E0)
#define CLASS_3_5708A63D2DD68530___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xAEC9670)

inline static constexpr unsigned int Class_3_5708A63D2DD68530_TypeDefinitionIndex = 68667;

class Class_3_5708A63D2DD68530 : public ::RPG::Client::TABehaviorBase
{
public:
	static ::Class_3_5708A63D2DD68530** StaticGet_Field_3_0()
	{
		return (::Class_3_5708A63D2DD68530**)Il2CppClass::FromTypeDefinitionIndex(Class_3_5708A63D2DD68530_TypeDefinitionIndex)->GetStaticField(0x33510);
	}
	::WaveSimPanel* Field_3_1; // 0x38
	::RPG::Client::DynamicFloatingObject::DynamicFloatingManagerMono* Field_3_2; // 0x40
	::System::Boolean Field_3_3; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5708A63D2DD68530__CTOR_OFFSET))(this);
	}

	static ::Class_3_5708A63D2DD68530* Method_3_F239777256F9BA8F()
	{
		return ((::Class_3_5708A63D2DD68530*(*)())((::PBYTE)hIl2Cpp + CLASS_3_5708A63D2DD68530_METHOD_3_F239777256F9BA8F_OFFSET))();
	}

	::System::Void Method_3_EC2B405D0723571D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5708A63D2DD68530_METHOD_3_EC2B405D0723571D_OFFSET))(this);
	}

	::System::Void Method_3_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5708A63D2DD68530_METHOD_3_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_3_D87A7D8243E04FD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5708A63D2DD68530_METHOD_3_D87A7D8243E04FD7_OFFSET))(this);
	}

	::System::Void Method_3_D87A7D8243E04FD7_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5708A63D2DD68530_METHOD_3_D87A7D8243E04FD7_1_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_5708A63D2DD68530_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_3_F245C316033C505E(::System::Collections::Generic::List_1<::UnityEngine::Transform*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + CLASS_3_5708A63D2DD68530_METHOD_3_F245C316033C505E_OFFSET))(this, a1);
	}

	::System::Void Method_3_6055A93732CC885D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5708A63D2DD68530_METHOD_3_6055A93732CC885D_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5708A63D2DD68530_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5708A63D2DD68530_METHOD_3_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5708A63D2DD68530_METHOD_3_5790A55946AA509D_2_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5708A63D2DD68530_METHOD_3_5790A55946AA509D_3_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_5708A63D2DD68530___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}
};
