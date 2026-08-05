#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class EventHandler_1; }
namespace System::Threading::Tasks { class UnobservedTaskExceptionEventArgs; }

#define MOLEMOLE_GAMEENGINE___C_METHOD_1_7A73F165001BC325_OFFSET UNITYSDK_OFFSET(0x19B19460)
#define MOLEMOLE_GAMEENGINE___C_METHOD_1_A65BE9C8C3DA7ECC_OFFSET UNITYSDK_OFFSET(0x19B194E0)
#define MOLEMOLE_GAMEENGINE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B19410)
#define MOLEMOLE_GAMEENGINE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19B19450)

namespace MoleMole
{
	inline static constexpr unsigned int GameEngine___c_TypeDefinitionIndex = 72835;

	class GameEngine___c : public ::System::Object
	{
	public:
		static ::MoleMole::GameEngine___c** StaticGet___9()
		{
			return (::MoleMole::GameEngine___c**)Il2CppClass::FromTypeDefinitionIndex(GameEngine___c_TypeDefinitionIndex)->GetStaticField(0x4E9A0);
		}
		static ::System::EventHandler_1<::System::Threading::Tasks::UnobservedTaskExceptionEventArgs*>** StaticGet___9__85_0()
		{
			return (::System::EventHandler_1<::System::Threading::Tasks::UnobservedTaskExceptionEventArgs*>**)Il2CppClass::FromTypeDefinitionIndex(GameEngine___c_TypeDefinitionIndex)->GetStaticField(0x4E9A8);
		}
		static ::System::Action** StaticGet___9__119_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(GameEngine___c_TypeDefinitionIndex)->GetStaticField(0x4E9B0);
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

		::System::Void Method_1_A65BE9C8C3DA7ECC(::System::Object* a1, ::System::Threading::Tasks::UnobservedTaskExceptionEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Threading::Tasks::UnobservedTaskExceptionEventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE___C_METHOD_1_A65BE9C8C3DA7ECC_OFFSET))(this, a1, a2);
		}
	};
}
