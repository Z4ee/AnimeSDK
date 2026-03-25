#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FF977B9ED3EAAF49;
namespace RPG::Client::LittleGame { template <typename T> class SimpleEffectService_1___c; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int SimpleEffectService_1___c_TypeDefinitionIndex = 62246;

	template <typename TEntity>
	class SimpleEffectService_1___c : public ::System::Object
	{
	public:
		static ::RPG::Client::LittleGame::SimpleEffectService_1___c<TEntity>** StaticGet___9()
		{
			return (::RPG::Client::LittleGame::SimpleEffectService_1___c<TEntity>**)Il2CppClass::FromTypeDefinitionIndex(SimpleEffectService_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_3<::System::String*, ::Class_1_FF977B9ED3EAAF49*, ::System::Boolean>** StaticGet___9__35_0()
		{
			return (::System::Func_3<::System::String*, ::Class_1_FF977B9ED3EAAF49*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(SimpleEffectService_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_3<::System::String*, ::Class_1_FF977B9ED3EAAF49*, ::System::Boolean>** StaticGet___9__36_0()
		{
			return (::System::Func_3<::System::String*, ::Class_1_FF977B9ED3EAAF49*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(SimpleEffectService_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
