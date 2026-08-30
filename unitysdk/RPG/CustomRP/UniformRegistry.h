#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/UniformEntry.h"
#include "unitysdk/RPG/CustomRP/UniformType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/BindingFlags.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CUSTOMRP_UNIFORMREGISTRY_APPLYVALUE_OFFSET UNITYSDK_OFFSET(0x1EE5A670)
#define RPG_CUSTOMRP_UNIFORMREGISTRY_CLEAR_OFFSET UNITYSDK_OFFSET(0x1EE59980)
#define RPG_CUSTOMRP_UNIFORMREGISTRY_GETINITIALVALUE_OFFSET UNITYSDK_OFFSET(0x1EE5A2E0)
#define RPG_CUSTOMRP_UNIFORMREGISTRY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1EE59900)
#define RPG_CUSTOMRP_UNIFORMREGISTRY_REBUILDFROMROOT_OFFSET UNITYSDK_OFFSET(0x1EE59A20)
#define RPG_CUSTOMRP_UNIFORMREGISTRY_TRYGETENTRY_OFFSET UNITYSDK_OFFSET(0x1EE5A180)
#define RPG_CUSTOMRP_UNIFORMREGISTRY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EE5AB60)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int UniformRegistry_TypeDefinitionIndex = 37073;

	class UniformRegistry : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::CustomRP::UniformEntry>** StaticGet__entries()
		{
			return (::System::Collections::Generic::List_1<::RPG::CustomRP::UniformEntry>**)Il2CppClass::FromTypeDefinitionIndex(UniformRegistry_TypeDefinitionIndex)->GetStaticField(0x3BE90);
		}
		// static const ::System::Reflection::BindingFlags k_FieldFlags; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_UNIFORMREGISTRY__CCTOR_OFFSET))();
		}

		static ::System::Int32 get_Count()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_UNIFORMREGISTRY_GET_COUNT_OFFSET))();
		}

		static ::System::Void Clear()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_UNIFORMREGISTRY_CLEAR_OFFSET))();
		}

		static ::System::Void RebuildFromRoot(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_UNIFORMREGISTRY_REBUILDFROMROOT_OFFSET))(a1);
		}

		static ::System::Boolean TryGetEntry(::System::Int32 a1, ::System::String*& a2, ::RPG::CustomRP::UniformType& a3)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::String*&, ::RPG::CustomRP::UniformType&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_UNIFORMREGISTRY_TRYGETENTRY_OFFSET))(a1, a2, a3);
		}

		static ::System::Void GetInitialValue(::System::Int32 a1, ::System::Single& a2, ::System::Single& a3, ::System::Single& a4, ::System::Single& a5, ::System::Int32& a6, ::System::Boolean& a7, ::System::String*& a8)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Int32&, ::System::Boolean&, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_UNIFORMREGISTRY_GETINITIALVALUE_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Void ApplyValue(::System::Int32 a1, ::RPG::CustomRP::UniformType a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Int32 a7, ::System::Boolean a8, ::System::String* a9)
		{
			return ((::System::Void(*)(::System::Int32, ::RPG::CustomRP::UniformType, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_UNIFORMREGISTRY_APPLYVALUE_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}
	};
}
