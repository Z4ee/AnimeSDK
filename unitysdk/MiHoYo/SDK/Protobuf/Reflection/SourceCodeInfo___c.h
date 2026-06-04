#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf::Reflection { class SourceCodeInfo; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x181C6F50)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x181C6F90)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO___C___CCTOR_B__25_0_OFFSET UNITYSDK_OFFSET(0x181C6FA0)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int SourceCodeInfo___c_TypeDefinitionIndex = 34007;

	class SourceCodeInfo___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::Reflection::SourceCodeInfo___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Protobuf::Reflection::SourceCodeInfo___c**)Il2CppClass::FromTypeDefinitionIndex(SourceCodeInfo___c_TypeDefinitionIndex)->GetStaticField(0x4E670);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO___C__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::SourceCodeInfo* __cctor_b__25_0()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::SourceCodeInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO___C___CCTOR_B__25_0_OFFSET))(this);
		}
	};
}
