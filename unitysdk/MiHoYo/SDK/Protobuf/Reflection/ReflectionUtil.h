#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf { class IMessage; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Reflection { class MethodInfo; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_REFLECTIONUTIL_CREATEACTIONIMESSAGEOBJECT_OFFSET UNITYSDK_OFFSET(0x1C55FD70)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_REFLECTIONUTIL_CREATEACTIONIMESSAGE_OFFSET UNITYSDK_OFFSET(0x1C55FDF0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_REFLECTIONUTIL_CREATEFUNCIMESSAGEOBJECT_OFFSET UNITYSDK_OFFSET(0x1C55FCF0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_REFLECTIONUTIL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C55FE70)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int ReflectionUtil_TypeDefinitionIndex = 26090;

	class ReflectionUtil : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Type*>** StaticGet_EmptyTypes()
		{
			return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(ReflectionUtil_TypeDefinitionIndex)->GetStaticField(0x1F290);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_REFLECTIONUTIL__CCTOR_OFFSET))();
		}

		static ::System::Func_2<::MiHoYo::SDK::Protobuf::IMessage*, ::System::Object*>* CreateFuncIMessageObject(::System::Reflection::MethodInfo* method)
		{
			return ((::System::Func_2<::MiHoYo::SDK::Protobuf::IMessage*, ::System::Object*>*(*)(::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_REFLECTIONUTIL_CREATEFUNCIMESSAGEOBJECT_OFFSET))(method);
		}

		static ::System::Action_2<::MiHoYo::SDK::Protobuf::IMessage*, ::System::Object*>* CreateActionIMessageObject(::System::Reflection::MethodInfo* method)
		{
			return ((::System::Action_2<::MiHoYo::SDK::Protobuf::IMessage*, ::System::Object*>*(*)(::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_REFLECTIONUTIL_CREATEACTIONIMESSAGEOBJECT_OFFSET))(method);
		}

		static ::System::Action_1<::MiHoYo::SDK::Protobuf::IMessage*>* CreateActionIMessage(::System::Reflection::MethodInfo* method)
		{
			return ((::System::Action_1<::MiHoYo::SDK::Protobuf::IMessage*>*(*)(::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_REFLECTIONUTIL_CREATEACTIONIMESSAGE_OFFSET))(method);
		}
	};
}
