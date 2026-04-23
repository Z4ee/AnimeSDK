#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AddMenuItem; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_26A64292982BF218_METHOD_1_296803465F1C5202_OFFSET UNITYSDK_OFFSET(0xB20E110)
#define CLASS_1_26A64292982BF218_METHOD_1_4D9539F68FD19854_OFFSET UNITYSDK_OFFSET(0xB20DEE0)
#define CLASS_1_26A64292982BF218_METHOD_1_63BB7821E0B2584A_OFFSET UNITYSDK_OFFSET(0xB20E0A0)
#define CLASS_1_26A64292982BF218_METHOD_1_C442F8BD69CD9609_OFFSET UNITYSDK_OFFSET(0xB20DE70)
#define CLASS_1_26A64292982BF218_METHOD_1_D4121170778F8E08_OFFSET UNITYSDK_OFFSET(0xB20E2C0)

inline static constexpr unsigned int Class_1_26A64292982BF218_TypeDefinitionIndex = 54445;

class Class_1_26A64292982BF218 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_C442F8BD69CD9609(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_26A64292982BF218_METHOD_1_C442F8BD69CD9609_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_63BB7821E0B2584A(::RPG::GameCore::PropComponent* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::PropComponent*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_26A64292982BF218_METHOD_1_63BB7821E0B2584A_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_4D9539F68FD19854(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_26A64292982BF218_METHOD_1_4D9539F68FD19854_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_296803465F1C5202(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::GameCore::RuntimeGroupInfo* a4, ::RPG::GameCore::HoyoTagContainer* a5)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::RuntimeGroupInfo*, ::RPG::GameCore::HoyoTagContainer*))((::PBYTE)hIl2Cpp + CLASS_1_26A64292982BF218_METHOD_1_296803465F1C5202_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_D4121170778F8E08(::System::UInt32 a1, ::System::Collections::Generic::List_1<::RPG::GameCore::AddMenuItem*>* a2)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::AddMenuItem*>*))((::PBYTE)hIl2Cpp + CLASS_1_26A64292982BF218_METHOD_1_D4121170778F8E08_OFFSET))(a1, a2);
	}
};
