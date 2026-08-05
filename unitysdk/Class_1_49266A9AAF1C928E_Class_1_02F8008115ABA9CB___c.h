#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class IScenePerformConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_49266A9AAF1C928E_CLASS_1_02F8008115ABA9CB___C_METHOD_1_5F4E6103B7C0D43C_1_OFFSET UNITYSDK_OFFSET(0x120EE1D0)
#define CLASS_1_49266A9AAF1C928E_CLASS_1_02F8008115ABA9CB___C_METHOD_1_5F4E6103B7C0D43C_OFFSET UNITYSDK_OFFSET(0x120EE100)
#define CLASS_1_49266A9AAF1C928E_CLASS_1_02F8008115ABA9CB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x120EE0B0)
#define CLASS_1_49266A9AAF1C928E_CLASS_1_02F8008115ABA9CB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x120EE0F0)

inline static constexpr unsigned int Class_1_49266A9AAF1C928E_Class_1_02F8008115ABA9CB___c_TypeDefinitionIndex = 78845;

class Class_1_49266A9AAF1C928E_Class_1_02F8008115ABA9CB___c : public ::System::Object
{
public:
	static ::System::Func_2<::MoleMole::Config::IScenePerformConfig*, ::System::Boolean>** StaticGet___9__67_1()
	{
		return (::System::Func_2<::MoleMole::Config::IScenePerformConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_49266A9AAF1C928E_Class_1_02F8008115ABA9CB___c_TypeDefinitionIndex)->GetStaticField(0x2EF90);
	}
	static ::Class_1_49266A9AAF1C928E_Class_1_02F8008115ABA9CB___c** StaticGet___9()
	{
		return (::Class_1_49266A9AAF1C928E_Class_1_02F8008115ABA9CB___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_49266A9AAF1C928E_Class_1_02F8008115ABA9CB___c_TypeDefinitionIndex)->GetStaticField(0x2EF98);
	}
	static ::System::Func_2<::MoleMole::Config::IScenePerformConfig*, ::System::Boolean>** StaticGet___9__67_0()
	{
		return (::System::Func_2<::MoleMole::Config::IScenePerformConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_49266A9AAF1C928E_Class_1_02F8008115ABA9CB___c_TypeDefinitionIndex)->GetStaticField(0x2EFA0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_49266A9AAF1C928E_CLASS_1_02F8008115ABA9CB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49266A9AAF1C928E_CLASS_1_02F8008115ABA9CB___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_5F4E6103B7C0D43C(::MoleMole::Config::IScenePerformConfig* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::IScenePerformConfig*))((::PBYTE)hIl2Cpp + CLASS_1_49266A9AAF1C928E_CLASS_1_02F8008115ABA9CB___C_METHOD_1_5F4E6103B7C0D43C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5F4E6103B7C0D43C_1(::MoleMole::Config::IScenePerformConfig* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::IScenePerformConfig*))((::PBYTE)hIl2Cpp + CLASS_1_49266A9AAF1C928E_CLASS_1_02F8008115ABA9CB___C_METHOD_1_5F4E6103B7C0D43C_1_OFFSET))(this, a1);
	}
};
