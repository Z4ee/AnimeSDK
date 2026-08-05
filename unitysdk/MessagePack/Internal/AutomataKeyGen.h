#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"

namespace System::Reflection { class MethodInfo; }

#define MESSAGEPACK_INTERNAL_AUTOMATAKEYGEN_GETKEY_OFFSET UNITYSDK_OFFSET(0x1DB2AB00)
#define MESSAGEPACK_INTERNAL_AUTOMATAKEYGEN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DB2B890)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int AutomataKeyGen_TypeDefinitionIndex = 30394;

	class AutomataKeyGen : public ::System::Object
	{
	public:
		static ::System::Reflection::MethodInfo** StaticGet_GetKeyMethod()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(AutomataKeyGen_TypeDefinitionIndex)->GetStaticField(0x26110);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_AUTOMATAKEYGEN__CCTOR_OFFSET))();
		}

		static ::System::UInt64 GetKey(::System::ReadOnlySpan_1<::System::Byte>& span)
		{
			return ((::System::UInt64(*)(::System::ReadOnlySpan_1<::System::Byte>&))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_AUTOMATAKEYGEN_GETKEY_OFFSET))(span);
		}
	};
}
