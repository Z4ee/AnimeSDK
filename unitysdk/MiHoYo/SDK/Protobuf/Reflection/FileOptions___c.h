#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf::Reflection { class FileOptions; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB1CCB0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB1CCF0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS___C___CCTOR_B__95_0_OFFSET UNITYSDK_OFFSET(0x1FB1CD00)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int FileOptions___c_TypeDefinitionIndex = 29128;

	class FileOptions___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::Reflection::FileOptions___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Protobuf::Reflection::FileOptions___c**)Il2CppClass::FromTypeDefinitionIndex(FileOptions___c_TypeDefinitionIndex)->GetStaticField(0x24670);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS___C__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::FileOptions* __cctor_b__95_0()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::FileOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS___C___CCTOR_B__95_0_OFFSET))(this);
		}
	};
}
