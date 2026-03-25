#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Reflection { class FileOptions; }

#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B108B0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15B108F0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS___C___CCTOR_B__215_0_OFFSET UNITYSDK_OFFSET(0x15B10900)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int FileOptions___c_TypeDefinitionIndex = 6278;

	class FileOptions___c : public ::System::Object
	{
	public:
		static ::Google::Protobuf::Reflection::FileOptions___c** StaticGet___9()
		{
			return (::Google::Protobuf::Reflection::FileOptions___c**)Il2CppClass::FromTypeDefinitionIndex(FileOptions___c_TypeDefinitionIndex)->GetStaticField(0xD1A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS___C__CTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::FileOptions* __cctor_b__215_0()
		{
			return ((::Google::Protobuf::Reflection::FileOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS___C___CCTOR_B__215_0_OFFSET))(this);
		}
	};
}
