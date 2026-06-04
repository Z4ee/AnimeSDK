#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraDuelMainPuzzleStateType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraDuelMainPuzzleConfig_StateEntry; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBOARD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC512E50)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBOARD___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC512E90)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBOARD___C__INITPUZZLE_B__6_0_OFFSET UNITYSDK_OFFSET(0xC512EA0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBOARD___C__INITPUZZLE_B__6_1_OFFSET UNITYSDK_OFFSET(0xC512EC0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelMainPuzzleBoard___c_TypeDefinitionIndex = 72820;

	class ChimeraDuelMainPuzzleBoard___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::Prop::ChimeraDuelMainPuzzleConfig_StateEntry*, ::UnityEngine::GameObject*>** StaticGet___9__6_1()
		{
			return (::System::Func_2<::RPG::Client::Prop::ChimeraDuelMainPuzzleConfig_StateEntry*, ::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelMainPuzzleBoard___c_TypeDefinitionIndex)->GetStaticField(0x13110);
		}
		static ::System::Func_2<::RPG::Client::Prop::ChimeraDuelMainPuzzleConfig_StateEntry*, ::RPG::Client::Prop::ChimeraDuelMainPuzzleStateType>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::RPG::Client::Prop::ChimeraDuelMainPuzzleConfig_StateEntry*, ::RPG::Client::Prop::ChimeraDuelMainPuzzleStateType>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelMainPuzzleBoard___c_TypeDefinitionIndex)->GetStaticField(0x13118);
		}
		static ::RPG::Client::Prop::ChimeraDuelMainPuzzleBoard___c** StaticGet___9()
		{
			return (::RPG::Client::Prop::ChimeraDuelMainPuzzleBoard___c**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelMainPuzzleBoard___c_TypeDefinitionIndex)->GetStaticField(0x13120);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBOARD___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBOARD___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::Prop::ChimeraDuelMainPuzzleStateType _InitPuzzle_b__6_0(::RPG::Client::Prop::ChimeraDuelMainPuzzleConfig_StateEntry* a1)
		{
			return ((::RPG::Client::Prop::ChimeraDuelMainPuzzleStateType(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelMainPuzzleConfig_StateEntry*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBOARD___C__INITPUZZLE_B__6_0_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* _InitPuzzle_b__6_1(::RPG::Client::Prop::ChimeraDuelMainPuzzleConfig_StateEntry* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelMainPuzzleConfig_StateEntry*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBOARD___C__INITPUZZLE_B__6_1_OFFSET))(this, a1);
		}
	};
}
