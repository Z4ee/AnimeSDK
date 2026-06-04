#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Reflection { class FileOptions; }

#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E6DD60)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17E6DDA0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEOPTIONS___C___CCTOR_B__215_0_OFFSET UNITYSDK_OFFSET(0x17E6DDB0)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int FileOptions___c_TypeDefinitionIndex = 5490;

	class FileOptions___c : public ::System::Object
	{
	public:
		static ::Google::Protobuf::Reflection::FileOptions___c** StaticGet___9()
		{
			return (::Google::Protobuf::Reflection::FileOptions___c**)Il2CppClass::FromTypeDefinitionIndex(FileOptions___c_TypeDefinitionIndex)->GetStaticField(0x3E590);
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
