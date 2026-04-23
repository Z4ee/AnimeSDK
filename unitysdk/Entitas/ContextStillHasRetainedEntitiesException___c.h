#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Entitas { class IEntity; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define ENTITAS_CONTEXTSTILLHASRETAINEDENTITIESEXCEPTION___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12C51A90)
#define ENTITAS_CONTEXTSTILLHASRETAINEDENTITIESEXCEPTION___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12C51AD0)
#define ENTITAS_CONTEXTSTILLHASRETAINEDENTITIESEXCEPTION___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x12C51AE0)
#define ENTITAS_CONTEXTSTILLHASRETAINEDENTITIESEXCEPTION___C___CTOR_B__0_1_OFFSET UNITYSDK_OFFSET(0x12C51CA0)

namespace Entitas
{
	inline static constexpr unsigned int ContextStillHasRetainedEntitiesException___c_TypeDefinitionIndex = 9816;

	class ContextStillHasRetainedEntitiesException___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Object*, ::System::String*>** StaticGet___9__0_1()
		{
			return (::System::Func_2<::System::Object*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ContextStillHasRetainedEntitiesException___c_TypeDefinitionIndex)->GetStaticField(0x19D40);
		}
		static ::Entitas::ContextStillHasRetainedEntitiesException___c** StaticGet___9()
		{
			return (::Entitas::ContextStillHasRetainedEntitiesException___c**)Il2CppClass::FromTypeDefinitionIndex(ContextStillHasRetainedEntitiesException___c_TypeDefinitionIndex)->GetStaticField(0x19D48);
		}
		static ::System::Func_2<::Entitas::IEntity*, ::System::String*>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::Entitas::IEntity*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ContextStillHasRetainedEntitiesException___c_TypeDefinitionIndex)->GetStaticField(0x19D50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENTITAS_CONTEXTSTILLHASRETAINEDENTITIESEXCEPTION___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_CONTEXTSTILLHASRETAINEDENTITIESEXCEPTION___C__CTOR_OFFSET))(this);
		}

		::System::String* __ctor_b__0_0(::Entitas::IEntity* e)
		{
			return ((::System::String*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + ENTITAS_CONTEXTSTILLHASRETAINEDENTITIESEXCEPTION___C___CTOR_B__0_0_OFFSET))(this, e);
		}

		::System::String* __ctor_b__0_1(::System::Object* o)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ENTITAS_CONTEXTSTILLHASRETAINEDENTITIESEXCEPTION___C___CTOR_B__0_1_OFFSET))(this, o);
		}
	};
}
