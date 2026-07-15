#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"

class WaveSimPanel;
namespace RPG::Client::DynamicFloatingObject { class DynamicFloatingManagerMono; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_3_A8BD69BBCFA191B1_METHOD_3_6055A93732CC885D_OFFSET UNITYSDK_OFFSET(0x14D69CA0)
#define CLASS_3_A8BD69BBCFA191B1_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x14D697D0)
#define CLASS_3_A8BD69BBCFA191B1_METHOD_3_D87A7D8243E04FD7_1_OFFSET UNITYSDK_OFFSET(0x14D699B0)
#define CLASS_3_A8BD69BBCFA191B1_METHOD_3_D87A7D8243E04FD7_OFFSET UNITYSDK_OFFSET(0x14D69830)
#define CLASS_3_A8BD69BBCFA191B1_METHOD_3_EC2B405D0723571D_OFFSET UNITYSDK_OFFSET(0x14D69620)
#define CLASS_3_A8BD69BBCFA191B1_METHOD_3_F239777256F9BA8F_OFFSET UNITYSDK_OFFSET(0x14D69610)
#define CLASS_3_A8BD69BBCFA191B1_METHOD_3_F245C316033C505E_OFFSET UNITYSDK_OFFSET(0x14D69C00)
#define CLASS_3_A8BD69BBCFA191B1_TICK_OFFSET UNITYSDK_OFFSET(0x14D69B30)
#define CLASS_3_A8BD69BBCFA191B1__CTOR_OFFSET UNITYSDK_OFFSET(0x14D69D40)

inline static constexpr unsigned int Class_3_A8BD69BBCFA191B1_TypeDefinitionIndex = 70165;

class Class_3_A8BD69BBCFA191B1 : public ::RPG::Client::TABehaviorBase
{
public:
	static ::Class_3_A8BD69BBCFA191B1** StaticGet_Field_3_0()
	{
		return (::Class_3_A8BD69BBCFA191B1**)Il2CppClass::FromTypeDefinitionIndex(Class_3_A8BD69BBCFA191B1_TypeDefinitionIndex)->GetStaticField(0x26D30);
	}
	::WaveSimPanel* Field_3_1; // 0x38
	::RPG::Client::DynamicFloatingObject::DynamicFloatingManagerMono* Field_3_2; // 0x40
	::System::Boolean Field_3_3; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A8BD69BBCFA191B1__CTOR_OFFSET))(this);
	}

	static ::Class_3_A8BD69BBCFA191B1* Method_3_F239777256F9BA8F()
	{
		return ((::Class_3_A8BD69BBCFA191B1*(*)())((::PBYTE)hIl2Cpp + CLASS_3_A8BD69BBCFA191B1_METHOD_3_F239777256F9BA8F_OFFSET))();
	}

	::System::Void Method_3_EC2B405D0723571D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A8BD69BBCFA191B1_METHOD_3_EC2B405D0723571D_OFFSET))(this);
	}

	::System::Void Method_3_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A8BD69BBCFA191B1_METHOD_3_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_3_D87A7D8243E04FD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A8BD69BBCFA191B1_METHOD_3_D87A7D8243E04FD7_OFFSET))(this);
	}

	::System::Void Method_3_D87A7D8243E04FD7_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A8BD69BBCFA191B1_METHOD_3_D87A7D8243E04FD7_1_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_A8BD69BBCFA191B1_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_3_F245C316033C505E(::System::Collections::Generic::List_1<::UnityEngine::Transform*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + CLASS_3_A8BD69BBCFA191B1_METHOD_3_F245C316033C505E_OFFSET))(this, a1);
	}

	::System::Void Method_3_6055A93732CC885D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A8BD69BBCFA191B1_METHOD_3_6055A93732CC885D_OFFSET))(this);
	}
};
