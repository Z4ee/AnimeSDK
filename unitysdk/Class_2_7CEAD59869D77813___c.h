#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace MoleMole { class UIBaseController; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Predicate_1; }

#define CLASS_2_7CEAD59869D77813___C_METHOD_1_86697EDDC6F0C78D_OFFSET UNITYSDK_OFFSET(0x14467A00)
#define CLASS_2_7CEAD59869D77813___C_METHOD_1_9FAD925FE4908E9E_OFFSET UNITYSDK_OFFSET(0x14467930)
#define CLASS_2_7CEAD59869D77813___C_METHOD_1_D8299432719B3C68_OFFSET UNITYSDK_OFFSET(0x144679A0)
#define CLASS_2_7CEAD59869D77813___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x144678E0)
#define CLASS_2_7CEAD59869D77813___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14467920)

inline static constexpr unsigned int Class_2_7CEAD59869D77813___c_TypeDefinitionIndex = 90481;

class Class_2_7CEAD59869D77813___c : public ::System::Object
{
public:
	static ::Class_2_7CEAD59869D77813___c** StaticGet___9()
	{
		return (::Class_2_7CEAD59869D77813___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7CEAD59869D77813___c_TypeDefinitionIndex)->GetStaticField(0x38610);
	}
	static ::System::Predicate_1<::MoleMole::UIBaseController*>** StaticGet___9__15_3()
	{
		return (::System::Predicate_1<::MoleMole::UIBaseController*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7CEAD59869D77813___c_TypeDefinitionIndex)->GetStaticField(0x38618);
	}
	static ::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>** StaticGet___9__16_0()
	{
		return (::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7CEAD59869D77813___c_TypeDefinitionIndex)->GetStaticField(0x38620);
	}
	static ::System::Action_1<::MoleMole::UIBaseController*>** StaticGet___9__15_4()
	{
		return (::System::Action_1<::MoleMole::UIBaseController*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7CEAD59869D77813___c_TypeDefinitionIndex)->GetStaticField(0x38628);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_7CEAD59869D77813___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CEAD59869D77813___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9FAD925FE4908E9E(::MoleMole::UIBaseController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + CLASS_2_7CEAD59869D77813___C_METHOD_1_9FAD925FE4908E9E_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_D8299432719B3C68(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_2_7CEAD59869D77813___C_METHOD_1_D8299432719B3C68_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_86697EDDC6F0C78D(::MoleMole::UIBaseController* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + CLASS_2_7CEAD59869D77813___C_METHOD_1_86697EDDC6F0C78D_OFFSET))(this, a1);
	}
};
