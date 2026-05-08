#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf::Reflection { class FieldDescriptorProto; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C3DC950)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3DC990)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO___C___CCTOR_B__70_0_OFFSET UNITYSDK_OFFSET(0x1C3DC9A0)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int FieldDescriptorProto___c_TypeDefinitionIndex = 26016;

	class FieldDescriptorProto___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptorProto___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptorProto___c**)Il2CppClass::FromTypeDefinitionIndex(FieldDescriptorProto___c_TypeDefinitionIndex)->GetStaticField(0x1F360);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO___C__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptorProto* __cctor_b__70_0()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptorProto*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO___C___CCTOR_B__70_0_OFFSET))(this);
		}
	};
}
