#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CF86480F2E4E6546;
namespace RPG::GameCore { class GameEntity; }
namespace System { class IDisposable; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define CLASS_1_CF86480F2E4E6546_CLASS_1_57A18A8F002D0354_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15DF0620)
#define CLASS_1_CF86480F2E4E6546_CLASS_1_57A18A8F002D0354_METHOD_1_0553429A79B3385F_OFFSET UNITYSDK_OFFSET(0x15DF06F0)
#define CLASS_1_CF86480F2E4E6546_CLASS_1_57A18A8F002D0354_METHOD_1_107E55D62E2FB482_OFFSET UNITYSDK_OFFSET(0x15DF05B0)
#define CLASS_1_CF86480F2E4E6546_CLASS_1_57A18A8F002D0354_METHOD_1_5058E147053C7FA1_OFFSET UNITYSDK_OFFSET(0x15DEF930)
#define CLASS_1_CF86480F2E4E6546_CLASS_1_57A18A8F002D0354_METHOD_1_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0x15DF0520)
#define CLASS_1_CF86480F2E4E6546_CLASS_1_57A18A8F002D0354_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15DF06A0)
#define CLASS_1_CF86480F2E4E6546_CLASS_1_57A18A8F002D0354__CCTOR_OFFSET UNITYSDK_OFFSET(0x15DF07A0)
#define CLASS_1_CF86480F2E4E6546_CLASS_1_57A18A8F002D0354__CTOR_OFFSET UNITYSDK_OFFSET(0x15DF0510)

inline static constexpr unsigned int Class_1_CF86480F2E4E6546_Class_1_57A18A8F002D0354_TypeDefinitionIndex = 80165;

class Class_1_CF86480F2E4E6546_Class_1_57A18A8F002D0354 : public ::System::Object
{
public:
	static ::System::IDisposable** StaticGet_COAHELMPGLI()
	{
		return (::System::IDisposable**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CF86480F2E4E6546_Class_1_57A18A8F002D0354_TypeDefinitionIndex)->GetStaticField(0x36440);
	}
	::UnityEngine::Coroutine* NAEJCNNMAKA; // 0x10
	::System::Action_2<::RPG::GameCore::GameEntity*, ::System::Boolean>* MPKAFEJFNKN; // 0x18
	::Class_1_CF86480F2E4E6546* ADJNOFMEIKM; // 0x20
	::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF86480F2E4E6546_CLASS_1_57A18A8F002D0354__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CF86480F2E4E6546_CLASS_1_57A18A8F002D0354__CCTOR_OFFSET))();
	}

	static ::System::IDisposable* Method_1_5058E147053C7FA1(::Class_1_CF86480F2E4E6546* a1, ::RPG::GameCore::GameEntity* a2, ::System::Action_2<::RPG::GameCore::GameEntity*, ::System::Boolean>* a3)
	{
		return ((::System::IDisposable*(*)(::Class_1_CF86480F2E4E6546*, ::RPG::GameCore::GameEntity*, ::System::Action_2<::RPG::GameCore::GameEntity*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_CF86480F2E4E6546_CLASS_1_57A18A8F002D0354_METHOD_1_5058E147053C7FA1_OFFSET))(a1, a2, a3);
	}

	::System::Collections::IEnumerator* Method_1_627C7524E98F4AC5()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF86480F2E4E6546_CLASS_1_57A18A8F002D0354_METHOD_1_627C7524E98F4AC5_OFFSET))(this);
	}

	::System::Void Method_1_107E55D62E2FB482(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_CF86480F2E4E6546_CLASS_1_57A18A8F002D0354_METHOD_1_107E55D62E2FB482_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF86480F2E4E6546_CLASS_1_57A18A8F002D0354_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_0553429A79B3385F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CF86480F2E4E6546_CLASS_1_57A18A8F002D0354_METHOD_1_0553429A79B3385F_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF86480F2E4E6546_CLASS_1_57A18A8F002D0354_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
