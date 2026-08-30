#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class IMessage; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define GOOGLE_PROTOBUF_REFLECTION_SINGLEFIELDACCESSOR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DBB31F0)
#define GOOGLE_PROTOBUF_REFLECTION_SINGLEFIELDACCESSOR___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DBB3230)
#define GOOGLE_PROTOBUF_REFLECTION_SINGLEFIELDACCESSOR___C___CTOR_B__3_0_OFFSET UNITYSDK_OFFSET(0x1DBB3240)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int SingleFieldAccessor___c_TypeDefinitionIndex = 5568;

	class SingleFieldAccessor___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Google::Protobuf::IMessage*, ::System::Boolean>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::Google::Protobuf::IMessage*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(SingleFieldAccessor___c_TypeDefinitionIndex)->GetStaticField(0x18E80);
		}
		static ::Google::Protobuf::Reflection::SingleFieldAccessor___c** StaticGet___9()
		{
			return (::Google::Protobuf::Reflection::SingleFieldAccessor___c**)Il2CppClass::FromTypeDefinitionIndex(SingleFieldAccessor___c_TypeDefinitionIndex)->GetStaticField(0x18E88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SINGLEFIELDACCESSOR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SINGLEFIELDACCESSOR___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __ctor_b__3_0(::Google::Protobuf::IMessage* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SINGLEFIELDACCESSOR___C___CTOR_B__3_0_OFFSET))(this, a1);
		}
	};
}
