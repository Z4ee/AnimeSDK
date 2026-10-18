#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class EntitySnapshot; }

#define PROTO_ENTITYSNAPSHOT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFC2000)
#define PROTO_ENTITYSNAPSHOT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFC2040)
#define PROTO_ENTITYSNAPSHOT___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1DFC2050)

namespace Proto
{
	inline static constexpr unsigned int EntitySnapshot___c_TypeDefinitionIndex = 25825;

	class EntitySnapshot___c : public ::System::Object
	{
	public:
		static ::Proto::EntitySnapshot___c** StaticGet___9()
		{
			return (::Proto::EntitySnapshot___c**)Il2CppClass::FromTypeDefinitionIndex(EntitySnapshot___c_TypeDefinitionIndex)->GetStaticField(0x4A0F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT___C__CTOR_OFFSET))(this);
		}

		::Proto::EntitySnapshot* __cctor_b__48_0()
		{
			return ((::Proto::EntitySnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT___C___CCTOR_B__48_0_OFFSET))(this);
		}
	};
}
