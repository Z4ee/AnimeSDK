#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define INCONTROL_MARSHALUTILITY_COPY_OFFSET UNITYSDK_OFFSET(0x1717DA40)
#define INCONTROL_MARSHALUTILITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1717DB30)

namespace InControl
{
	inline static constexpr unsigned int MarshalUtility_TypeDefinitionIndex = 37207;

	class MarshalUtility : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_buffer()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MarshalUtility_TypeDefinitionIndex)->GetStaticField(0xC620);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_MARSHALUTILITY__CCTOR_OFFSET))();
		}

		static ::System::Void Copy(::System::IntPtr source, ::Il2CppArray<::System::UInt32>* destination, ::System::Int32 length)
		{
			return ((::System::Void(*)(::System::IntPtr, ::Il2CppArray<::System::UInt32>*, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_MARSHALUTILITY_COPY_OFFSET))(source, destination, length);
		}
	};
}
