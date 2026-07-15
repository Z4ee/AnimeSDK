#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class Effect_TransformToMaterialBehavior_TransformPropertyMapping; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_EFFECT_TRANSFORMTOMATERIALBEHAVIOR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15134120)
#define RPG_CLIENT_EFFECT_TRANSFORMTOMATERIALBEHAVIOR___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15134160)
#define RPG_CLIENT_EFFECT_TRANSFORMTOMATERIALBEHAVIOR___C__ONENABLE_B__7_0_OFFSET UNITYSDK_OFFSET(0x15134170)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_TransformToMaterialBehavior___c_TypeDefinitionIndex = 67425;

	class Effect_TransformToMaterialBehavior___c : public ::System::Object
	{
	public:
		static ::RPG::Client::Effect_TransformToMaterialBehavior___c** StaticGet___9()
		{
			return (::RPG::Client::Effect_TransformToMaterialBehavior___c**)Il2CppClass::FromTypeDefinitionIndex(Effect_TransformToMaterialBehavior___c_TypeDefinitionIndex)->GetStaticField(0x6BB80);
		}
		static ::System::Func_2<::RPG::Client::Effect_TransformToMaterialBehavior_TransformPropertyMapping*, ::System::Boolean>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::RPG::Client::Effect_TransformToMaterialBehavior_TransformPropertyMapping*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Effect_TransformToMaterialBehavior___c_TypeDefinitionIndex)->GetStaticField(0x6BB88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORMTOMATERIALBEHAVIOR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORMTOMATERIALBEHAVIOR___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnEnable_b__7_0(::RPG::Client::Effect_TransformToMaterialBehavior_TransformPropertyMapping* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Effect_TransformToMaterialBehavior_TransformPropertyMapping*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORMTOMATERIALBEHAVIOR___C__ONENABLE_B__7_0_OFFSET))(this, a1);
		}
	};
}
