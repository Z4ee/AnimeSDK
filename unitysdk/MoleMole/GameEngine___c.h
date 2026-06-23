#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class EventHandler_1; }
namespace System::Threading::Tasks { class UnobservedTaskExceptionEventArgs; }

#define MOLEMOLE_GAMEENGINE___C_METHOD_1_34B1296700537A51_OFFSET UNITYSDK_OFFSET(0x182E2B50)
#define MOLEMOLE_GAMEENGINE___C_METHOD_1_7A73F165001BC325_OFFSET UNITYSDK_OFFSET(0x182E2AD0)
#define MOLEMOLE_GAMEENGINE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x182E2A80)
#define MOLEMOLE_GAMEENGINE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x182E2AC0)

namespace MoleMole
{
	inline static constexpr unsigned int GameEngine___c_TypeDefinitionIndex = 70659;

	class GameEngine___c : public ::System::Object
	{
	public:
		static ::MoleMole::GameEngine___c** StaticGet___9()
		{
			return (::MoleMole::GameEngine___c**)Il2CppClass::FromTypeDefinitionIndex(GameEngine___c_TypeDefinitionIndex)->GetStaticField(0x48550);
		}
		static ::System::EventHandler_1<::System::Threading::Tasks::UnobservedTaskExceptionEventArgs*>** StaticGet___9__81_0()
		{
			return (::System::EventHandler_1<::System::Threading::Tasks::UnobservedTaskExceptionEventArgs*>**)Il2CppClass::FromTypeDefinitionIndex(GameEngine___c_TypeDefinitionIndex)->GetStaticField(0x48558);
		}
		static ::System::Action** StaticGet___9__104_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(GameEngine___c_TypeDefinitionIndex)->GetStaticField(0x48560);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE___C__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_7A73F165001BC325()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE___C_METHOD_1_7A73F165001BC325_OFFSET))(this);
		}

		::System::Void Method_1_34B1296700537A51(::System::Object* a1, ::System::Threading::Tasks::UnobservedTaskExceptionEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Threading::Tasks::UnobservedTaskExceptionEventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE___C_METHOD_1_34B1296700537A51_OFFSET))(this, a1, a2);
		}
	};
}
