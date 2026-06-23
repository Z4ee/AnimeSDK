#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Predicate_1; }
namespace UnityEngine { class Object; }

#define FOUNDATION_INSTANCEPOOLREQUEST___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BFE7610)
#define FOUNDATION_INSTANCEPOOLREQUEST___C__CHECKUSEDINSTANCES_B__21_0_OFFSET UNITYSDK_OFFSET(0x1BFE7660)
#define FOUNDATION_INSTANCEPOOLREQUEST___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFE7650)

namespace Foundation
{
	inline static constexpr unsigned int InstancePoolRequest___c_TypeDefinitionIndex = 8384;

	class InstancePoolRequest___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::UnityEngine::Object*>** StaticGet___9__21_0()
		{
			return (::System::Predicate_1<::UnityEngine::Object*>**)Il2CppClass::FromTypeDefinitionIndex(InstancePoolRequest___c_TypeDefinitionIndex)->GetStaticField(0x7250);
		}
		static ::Foundation::InstancePoolRequest___c** StaticGet___9()
		{
			return (::Foundation::InstancePoolRequest___c**)Il2CppClass::FromTypeDefinitionIndex(InstancePoolRequest___c_TypeDefinitionIndex)->GetStaticField(0x7258);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _CheckUsedInstances_b__21_0(::UnityEngine::Object* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST___C__CHECKUSEDINSTANCES_B__21_0_OFFSET))(this, item);
		}
	};
}
