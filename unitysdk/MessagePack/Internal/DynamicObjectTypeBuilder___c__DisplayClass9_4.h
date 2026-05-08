#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/Emit/Label.h"

namespace MessagePack::Internal { class DynamicObjectTypeBuilder___c__DisplayClass9_0; }
namespace System::Reflection::Emit { class LocalBuilder; }

#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS9_4__BUILDDESERIALIZE_B__8_OFFSET UNITYSDK_OFFSET(0x1AFC8FD0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS9_4__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFC8FC0)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder___c__DisplayClass9_4_TypeDefinitionIndex = 26697;

	class DynamicObjectTypeBuilder___c__DisplayClass9_4 : public ::System::Object
	{
	public:
		::System::Reflection::Emit::LocalBuilder* key; // 0x10
		::MessagePack::Internal::DynamicObjectTypeBuilder___c__DisplayClass9_0* CS___8__locals4; // 0x18
		::System::Reflection::Emit::Label switchDefault; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS9_4__CTOR_OFFSET))(this);
		}

		::System::Void _BuildDeserialize_b__8(::System::Reflection::Emit::LocalBuilder* forILocal)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::LocalBuilder*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS9_4__BUILDDESERIALIZE_B__8_OFFSET))(this, forILocal);
		}
	};
}
