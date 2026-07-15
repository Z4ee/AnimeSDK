#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraPreparationState.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_6135324DB18E6F67___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x171DEF20)
#define CLASS_1_6135324DB18E6F67___C__CTOR_OFFSET UNITYSDK_OFFSET(0x171DEF60)
#define CLASS_1_6135324DB18E6F67___C___CTOR_B__5_0_OFFSET UNITYSDK_OFFSET(0x171DEF70)

inline static constexpr unsigned int Class_1_6135324DB18E6F67___c_TypeDefinitionIndex = 74515;

class Class_1_6135324DB18E6F67___c : public ::System::Object
{
public:
	static ::System::Func_2<::UnityEngine::GameObject*, ::RPG::Client::Prop::ChimeraPreparationState>** StaticGet___9__5_0()
	{
		return (::System::Func_2<::UnityEngine::GameObject*, ::RPG::Client::Prop::ChimeraPreparationState>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6135324DB18E6F67___c_TypeDefinitionIndex)->GetStaticField(0x31700);
	}
	static ::Class_1_6135324DB18E6F67___c** StaticGet___9()
	{
		return (::Class_1_6135324DB18E6F67___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6135324DB18E6F67___c_TypeDefinitionIndex)->GetStaticField(0x31708);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6135324DB18E6F67___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6135324DB18E6F67___C__CTOR_OFFSET))(this);
	}

	::RPG::Client::Prop::ChimeraPreparationState __ctor_b__5_0(::UnityEngine::GameObject* a1)
	{
		return ((::RPG::Client::Prop::ChimeraPreparationState(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_6135324DB18E6F67___C___CTOR_B__5_0_OFFSET))(this, a1);
	}
};
