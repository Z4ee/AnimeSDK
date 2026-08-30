#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf::Reflection { class SourceCodeInfo_Types_Location; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B714AB0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B714AF0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION___C___CCTOR_B__44_0_OFFSET UNITYSDK_OFFSET(0x1B714B00)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int SourceCodeInfo_Types_Location___c_TypeDefinitionIndex = 35144;

	class SourceCodeInfo_Types_Location___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::Reflection::SourceCodeInfo_Types_Location___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Protobuf::Reflection::SourceCodeInfo_Types_Location___c**)Il2CppClass::FromTypeDefinitionIndex(SourceCodeInfo_Types_Location___c_TypeDefinitionIndex)->GetStaticField(0x631E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION___C__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::SourceCodeInfo_Types_Location* __cctor_b__44_0()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::SourceCodeInfo_Types_Location*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION___C___CCTOR_B__44_0_OFFSET))(this);
		}
	};
}
