#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class IMessage; }
namespace Google::Protobuf::Reflection { class FieldDescriptor; }

#define GOOGLE_PROTOBUF_MESSAGEEXTENSIONS___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA88820)
#define GOOGLE_PROTOBUF_MESSAGEEXTENSIONS___C__DISPLAYCLASS10_0__ISINITIALIZED_B__0_OFFSET UNITYSDK_OFFSET(0x1AA888A0)

namespace Google::Protobuf
{
	inline static constexpr unsigned int MessageExtensions___c__DisplayClass10_0_TypeDefinitionIndex = 5400;

	class MessageExtensions___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::Google::Protobuf::IMessage* message; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_MESSAGEEXTENSIONS___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsInitialized_b__0(::Google::Protobuf::Reflection::FieldDescriptor* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::Reflection::FieldDescriptor*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_MESSAGEEXTENSIONS___C__DISPLAYCLASS10_0__ISINITIALIZED_B__0_OFFSET))(this, a1);
		}
	};
}
