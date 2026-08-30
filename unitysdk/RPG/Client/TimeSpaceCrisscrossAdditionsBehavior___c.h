#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Predicate_1; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE207DE0)
#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE207E20)
#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR___C___COLLECTRENDERERSTO_B__21_0_OFFSET UNITYSDK_OFFSET(0xE207E30)

namespace RPG::Client
{
	inline static constexpr unsigned int TimeSpaceCrisscrossAdditionsBehavior___c_TypeDefinitionIndex = 70161;

	class TimeSpaceCrisscrossAdditionsBehavior___c : public ::System::Object
	{
	public:
		static ::RPG::Client::TimeSpaceCrisscrossAdditionsBehavior___c** StaticGet___9()
		{
			return (::RPG::Client::TimeSpaceCrisscrossAdditionsBehavior___c**)Il2CppClass::FromTypeDefinitionIndex(TimeSpaceCrisscrossAdditionsBehavior___c_TypeDefinitionIndex)->GetStaticField(0x575F0);
		}
		static ::System::Predicate_1<::UnityEngine::Renderer*>** StaticGet___9__21_0()
		{
			return (::System::Predicate_1<::UnityEngine::Renderer*>**)Il2CppClass::FromTypeDefinitionIndex(TimeSpaceCrisscrossAdditionsBehavior___c_TypeDefinitionIndex)->GetStaticField(0x575F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __CollectRenderersTo_b__21_0(::UnityEngine::Renderer* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR___C___COLLECTRENDERERSTO_B__21_0_OFFSET))(this, a1);
		}
	};
}
