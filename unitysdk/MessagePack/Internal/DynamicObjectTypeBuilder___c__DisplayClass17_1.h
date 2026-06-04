#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/Emit/Label.h"

namespace MessagePack::Internal { class DynamicObjectTypeBuilder___c__DisplayClass17_0; }
namespace System { class String; }

#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS17_1__BUILDDESERIALIZEINTERNALDESERIALIZELOOPSTRINGKEY_G__ONFOUNDASSIGNDIRECT_1_OFFSET UNITYSDK_OFFSET(0x18165D90)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS17_1__BUILDDESERIALIZEINTERNALDESERIALIZELOOPSTRINGKEY_G__ONFOUNDASSIGNLOCALVARIABLE_2_OFFSET UNITYSDK_OFFSET(0x18165F50)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS17_1__BUILDDESERIALIZEINTERNALDESERIALIZELOOPSTRINGKEY_G__ONNOTFOUND_3_OFFSET UNITYSDK_OFFSET(0x18166100)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS17_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18165D80)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder___c__DisplayClass17_1_TypeDefinitionIndex = 7278;

	class DynamicObjectTypeBuilder___c__DisplayClass17_1 : public ::System::Object
	{
	public:
		::MessagePack::Internal::DynamicObjectTypeBuilder___c__DisplayClass17_0* CS___8__locals1; // 0x10
		::System::Reflection::Emit::Label loopEnd; // 0x18
		::System::Reflection::Emit::Label readNext; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS17_1__CTOR_OFFSET))(this);
		}

		::System::Void _BuildDeserializeInternalDeserializeLoopStringKey_g__OnFoundAssignDirect_1(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS17_1__BUILDDESERIALIZEINTERNALDESERIALIZELOOPSTRINGKEY_G__ONFOUNDASSIGNDIRECT_1_OFFSET))(this, a1);
		}

		::System::Void _BuildDeserializeInternalDeserializeLoopStringKey_g__OnFoundAssignLocalVariable_2(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS17_1__BUILDDESERIALIZEINTERNALDESERIALIZELOOPSTRINGKEY_G__ONFOUNDASSIGNLOCALVARIABLE_2_OFFSET))(this, a1);
		}

		::System::Void _BuildDeserializeInternalDeserializeLoopStringKey_g__OnNotFound_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS17_1__BUILDDESERIALIZEINTERNALDESERIALIZELOOPSTRINGKEY_G__ONNOTFOUND_3_OFFSET))(this);
		}
	};
}
