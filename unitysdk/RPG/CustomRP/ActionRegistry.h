#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/ActionEntry.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/BindingFlags.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CUSTOMRP_ACTIONREGISTRY_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CBECD50)
#define RPG_CUSTOMRP_ACTIONREGISTRY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1CBECCD0)
#define RPG_CUSTOMRP_ACTIONREGISTRY_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CBED5A0)
#define RPG_CUSTOMRP_ACTIONREGISTRY_REBUILDFROMROOT_OFFSET UNITYSDK_OFFSET(0x1CBECDF0)
#define RPG_CUSTOMRP_ACTIONREGISTRY_TRYGETENTRY_OFFSET UNITYSDK_OFFSET(0x1CBED470)
#define RPG_CUSTOMRP_ACTIONREGISTRY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CBED810)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int ActionRegistry_TypeDefinitionIndex = 37759;

	class ActionRegistry : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::CustomRP::ActionEntry>** StaticGet__entries()
		{
			return (::System::Collections::Generic::List_1<::RPG::CustomRP::ActionEntry>**)Il2CppClass::FromTypeDefinitionIndex(ActionRegistry_TypeDefinitionIndex)->GetStaticField(0x2C430);
		}
		// static const ::System::Reflection::BindingFlags k_MethodFlags; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_ACTIONREGISTRY__CCTOR_OFFSET))();
		}

		static ::System::Int32 get_Count()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_ACTIONREGISTRY_GET_COUNT_OFFSET))();
		}

		static ::System::Void Clear()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_ACTIONREGISTRY_CLEAR_OFFSET))();
		}

		static ::System::Void RebuildFromRoot(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_ACTIONREGISTRY_REBUILDFROMROOT_OFFSET))(a1);
		}

		static ::System::Boolean TryGetEntry(::System::Int32 a1, ::System::String*& a2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_ACTIONREGISTRY_TRYGETENTRY_OFFSET))(a1, a2);
		}

		static ::System::Void Invoke(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_ACTIONREGISTRY_INVOKE_OFFSET))(a1);
		}
	};
}
