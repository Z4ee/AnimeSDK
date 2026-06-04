#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Internal { class ObjectSerializationInfo_EmittableMember; }
namespace System { class Type; }

#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS5_0__BUILDCUSTOMFORMATTERFIELD_B__1_OFFSET UNITYSDK_OFFSET(0x18166860)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1815E560)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder___c__DisplayClass5_0_TypeDefinitionIndex = 7284;

	class DynamicObjectTypeBuilder___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* item; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _BuildCustomFormatterField_b__1(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS5_0__BUILDCUSTOMFORMATTERFIELD_B__1_OFFSET))(this, a1);
		}
	};
}
