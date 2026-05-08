#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Internal { class AutomataDictionary; }
namespace MessagePack::Internal { class DynamicObjectTypeBuilder___c__DisplayClass9_0; }
namespace System::Reflection::Emit { class LocalBuilder; }

#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS9_2__BUILDDESERIALIZE_B__5_OFFSET UNITYSDK_OFFSET(0x1AFC8910)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS9_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFC8900)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder___c__DisplayClass9_2_TypeDefinitionIndex = 26713;

	class DynamicObjectTypeBuilder___c__DisplayClass9_2 : public ::System::Object
	{
	public:
		::MessagePack::Internal::AutomataDictionary* automata; // 0x10
		::System::Reflection::Emit::LocalBuilder* buffer; // 0x18
		::System::Reflection::Emit::LocalBuilder* longKey; // 0x20
		::MessagePack::Internal::DynamicObjectTypeBuilder___c__DisplayClass9_0* CS___8__locals2; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS9_2__CTOR_OFFSET))(this);
		}

		::System::Void _BuildDeserialize_b__5(::System::Reflection::Emit::LocalBuilder* forILocal)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::LocalBuilder*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS9_2__BUILDDESERIALIZE_B__5_OFFSET))(this, forILocal);
		}
	};
}
