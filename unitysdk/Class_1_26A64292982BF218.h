#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AddMenuItem; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_26A64292982BF218_METHOD_1_296803465F1C5202_OFFSET UNITYSDK_OFFSET(0xA564280)
#define CLASS_1_26A64292982BF218_METHOD_1_528514BB477C7DB3_OFFSET UNITYSDK_OFFSET(0xA564210)
#define CLASS_1_26A64292982BF218_METHOD_1_5B004BD135FAEF3C_OFFSET UNITYSDK_OFFSET(0xA564420)
#define CLASS_1_26A64292982BF218_METHOD_1_A5B71F2C92C80A2B_OFFSET UNITYSDK_OFFSET(0xA563FF0)
#define CLASS_1_26A64292982BF218_METHOD_1_D6BD3F3FA148F594_OFFSET UNITYSDK_OFFSET(0xA563F80)

inline static constexpr unsigned int Class_1_26A64292982BF218_TypeDefinitionIndex = 55172;

class Class_1_26A64292982BF218 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_D6BD3F3FA148F594(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_26A64292982BF218_METHOD_1_D6BD3F3FA148F594_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_528514BB477C7DB3(::RPG::GameCore::PropComponent* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::PropComponent*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_26A64292982BF218_METHOD_1_528514BB477C7DB3_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_A5B71F2C92C80A2B(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_26A64292982BF218_METHOD_1_A5B71F2C92C80A2B_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_296803465F1C5202(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::GameCore::RuntimeGroupInfo* a4, ::RPG::GameCore::HoyoTagContainer* a5)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::RuntimeGroupInfo*, ::RPG::GameCore::HoyoTagContainer*))((::PBYTE)hIl2Cpp + CLASS_1_26A64292982BF218_METHOD_1_296803465F1C5202_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_5B004BD135FAEF3C(::System::UInt32 a1, ::System::Collections::Generic::List_1<::RPG::GameCore::AddMenuItem*>* a2)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::AddMenuItem*>*))((::PBYTE)hIl2Cpp + CLASS_1_26A64292982BF218_METHOD_1_5B004BD135FAEF3C_OFFSET))(a1, a2);
	}
};
