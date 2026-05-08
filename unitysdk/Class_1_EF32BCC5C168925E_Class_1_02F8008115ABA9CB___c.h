#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class IScenePerformConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_EF32BCC5C168925E_CLASS_1_02F8008115ABA9CB___C_METHOD_1_4F9E02607E977CE7_1_OFFSET UNITYSDK_OFFSET(0x120ACF50)
#define CLASS_1_EF32BCC5C168925E_CLASS_1_02F8008115ABA9CB___C_METHOD_1_4F9E02607E977CE7_OFFSET UNITYSDK_OFFSET(0x120ACE80)
#define CLASS_1_EF32BCC5C168925E_CLASS_1_02F8008115ABA9CB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x120ACE30)
#define CLASS_1_EF32BCC5C168925E_CLASS_1_02F8008115ABA9CB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x120ACE70)

inline static constexpr unsigned int Class_1_EF32BCC5C168925E_Class_1_02F8008115ABA9CB___c_TypeDefinitionIndex = 57204;

class Class_1_EF32BCC5C168925E_Class_1_02F8008115ABA9CB___c : public ::System::Object
{
public:
	static ::Class_1_EF32BCC5C168925E_Class_1_02F8008115ABA9CB___c** StaticGet___9()
	{
		return (::Class_1_EF32BCC5C168925E_Class_1_02F8008115ABA9CB___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EF32BCC5C168925E_Class_1_02F8008115ABA9CB___c_TypeDefinitionIndex)->GetStaticField(0x3F900);
	}
	static ::System::Func_2<::MoleMole::Config::IScenePerformConfig*, ::System::Boolean>** StaticGet___9__67_1()
	{
		return (::System::Func_2<::MoleMole::Config::IScenePerformConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EF32BCC5C168925E_Class_1_02F8008115ABA9CB___c_TypeDefinitionIndex)->GetStaticField(0x3F908);
	}
	static ::System::Func_2<::MoleMole::Config::IScenePerformConfig*, ::System::Boolean>** StaticGet___9__67_0()
	{
		return (::System::Func_2<::MoleMole::Config::IScenePerformConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EF32BCC5C168925E_Class_1_02F8008115ABA9CB___c_TypeDefinitionIndex)->GetStaticField(0x3F910);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EF32BCC5C168925E_CLASS_1_02F8008115ABA9CB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF32BCC5C168925E_CLASS_1_02F8008115ABA9CB___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_4F9E02607E977CE7(::MoleMole::Config::IScenePerformConfig* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::IScenePerformConfig*))((::PBYTE)hIl2Cpp + CLASS_1_EF32BCC5C168925E_CLASS_1_02F8008115ABA9CB___C_METHOD_1_4F9E02607E977CE7_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4F9E02607E977CE7_1(::MoleMole::Config::IScenePerformConfig* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::IScenePerformConfig*))((::PBYTE)hIl2Cpp + CLASS_1_EF32BCC5C168925E_CLASS_1_02F8008115ABA9CB___C_METHOD_1_4F9E02607E977CE7_1_OFFSET))(this, a1);
	}
};
