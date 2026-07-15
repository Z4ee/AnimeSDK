#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Prop { class IChimeraDuelMainPuzzleState; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESTATEMACHINE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18FEA6B0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESTATEMACHINE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18FEA6F0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESTATEMACHINE___C__PREPAREONSTARTPUZZLE_B__10_0_OFFSET UNITYSDK_OFFSET(0x18FEA700)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelMainPuzzleStateMachine___c_TypeDefinitionIndex = 74352;

	class ChimeraDuelMainPuzzleStateMachine___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::Prop::IChimeraDuelMainPuzzleState*, ::RPG::Client::Promises::IPromise*>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::RPG::Client::Prop::IChimeraDuelMainPuzzleState*, ::RPG::Client::Promises::IPromise*>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelMainPuzzleStateMachine___c_TypeDefinitionIndex)->GetStaticField(0x13B0);
		}
		static ::RPG::Client::Prop::ChimeraDuelMainPuzzleStateMachine___c** StaticGet___9()
		{
			return (::RPG::Client::Prop::ChimeraDuelMainPuzzleStateMachine___c**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelMainPuzzleStateMachine___c_TypeDefinitionIndex)->GetStaticField(0x13B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESTATEMACHINE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESTATEMACHINE___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _PrepareOnStartPuzzle_b__10_0(::RPG::Client::Prop::IChimeraDuelMainPuzzleState* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::Prop::IChimeraDuelMainPuzzleState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESTATEMACHINE___C__PREPAREONSTARTPUZZLE_B__10_0_OFFSET))(this, a1);
		}
	};
}
