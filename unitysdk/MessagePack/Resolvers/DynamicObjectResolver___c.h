#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Internal { class DynamicAssembly; }

#define MESSAGEPACK_RESOLVERS_DYNAMICOBJECTRESOLVER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6D25C0)
#define MESSAGEPACK_RESOLVERS_DYNAMICOBJECTRESOLVER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6D2600)
#define MESSAGEPACK_RESOLVERS_DYNAMICOBJECTRESOLVER___C___CCTOR_B__4_0_OFFSET UNITYSDK_OFFSET(0x1E6D2610)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int DynamicObjectResolver___c_TypeDefinitionIndex = 31344;

	class DynamicObjectResolver___c : public ::System::Object
	{
	public:
		static ::MessagePack::Resolvers::DynamicObjectResolver___c** StaticGet___9()
		{
			return (::MessagePack::Resolvers::DynamicObjectResolver___c**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectResolver___c_TypeDefinitionIndex)->GetStaticField(0x25640);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICOBJECTRESOLVER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICOBJECTRESOLVER___C__CTOR_OFFSET))(this);
		}

		::MessagePack::Internal::DynamicAssembly* __cctor_b__4_0()
		{
			return ((::MessagePack::Internal::DynamicAssembly*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICOBJECTRESOLVER___C___CCTOR_B__4_0_OFFSET))(this);
		}
	};
}
