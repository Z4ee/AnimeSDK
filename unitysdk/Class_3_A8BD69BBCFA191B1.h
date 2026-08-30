#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"

class WaveSimPanel;
namespace RPG::Client::DynamicFloatingObject { class DynamicFloatingManagerMono; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_3_A8BD69BBCFA191B1_METHOD_3_6055A93732CC885D_OFFSET UNITYSDK_OFFSET(0xC303920)
#define CLASS_3_A8BD69BBCFA191B1_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xC303440)
#define CLASS_3_A8BD69BBCFA191B1_METHOD_3_D87A7D8243E04FD7_1_OFFSET UNITYSDK_OFFSET(0xC303620)
#define CLASS_3_A8BD69BBCFA191B1_METHOD_3_D87A7D8243E04FD7_OFFSET UNITYSDK_OFFSET(0xC3034A0)
#define CLASS_3_A8BD69BBCFA191B1_METHOD_3_EC2B405D0723571D_OFFSET UNITYSDK_OFFSET(0xC303290)
#define CLASS_3_A8BD69BBCFA191B1_METHOD_3_F239777256F9BA8F_OFFSET UNITYSDK_OFFSET(0xC303280)
#define CLASS_3_A8BD69BBCFA191B1_METHOD_3_F245C316033C505E_OFFSET UNITYSDK_OFFSET(0xC303880)
#define CLASS_3_A8BD69BBCFA191B1_TICK_OFFSET UNITYSDK_OFFSET(0xC3037B0)
#define CLASS_3_A8BD69BBCFA191B1__CTOR_OFFSET UNITYSDK_OFFSET(0xC3039C0)

inline static constexpr unsigned int Class_3_A8BD69BBCFA191B1_TypeDefinitionIndex = 73465;

class Class_3_A8BD69BBCFA191B1 : public ::RPG::Client::TABehaviorBase
{
public:
	static ::Class_3_A8BD69BBCFA191B1** StaticGet_EMLNOINPICJ()
	{
		return (::Class_3_A8BD69BBCFA191B1**)Il2CppClass::FromTypeDefinitionIndex(Class_3_A8BD69BBCFA191B1_TypeDefinitionIndex)->GetStaticField(0x39880);
	}
	::RPG::Client::DynamicFloatingObject::DynamicFloatingManagerMono* DILGJEAEKGL; // 0x38
	::WaveSimPanel* AOOPKMPKDDF; // 0x40
	::System::Boolean DCAMGHCDDHE; // 0x48

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
