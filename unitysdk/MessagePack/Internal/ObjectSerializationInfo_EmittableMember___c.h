#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1735E170)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1735E1B0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER___C__GET_ISINITONLY_B__14_0_OFFSET UNITYSDK_OFFSET(0x1735E1C0)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int ObjectSerializationInfo_EmittableMember___c_TypeDefinitionIndex = 9386;

	class ObjectSerializationInfo_EmittableMember___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Type*, ::System::Boolean>** StaticGet___9__14_0()
		{
			return (::System::Func_2<::System::Type*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ObjectSerializationInfo_EmittableMember___c_TypeDefinitionIndex)->GetStaticField(0x43600);
		}
		static ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember___c** StaticGet___9()
		{
			return (::MessagePack::Internal::ObjectSerializationInfo_EmittableMember___c**)Il2CppClass::FromTypeDefinitionIndex(ObjectSerializationInfo_EmittableMember___c_TypeDefinitionIndex)->GetStaticField(0x43608);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_IsInitOnly_b__14_0(::System::Type* modifierType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER___C__GET_ISINITONLY_B__14_0_OFFSET))(this, modifierType);
		}
	};
}
