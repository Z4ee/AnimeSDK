#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Google/Protobuf/Reflection/ReflectionUtil_SampleEnum.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class Extension; }
namespace Google::Protobuf { class IMessage; }
namespace Google::Protobuf::Reflection { class ReflectionUtil_IExtensionReflectionHelper; }
namespace Google::Protobuf::Reflection { class ReflectionUtil_IReflectionHelper; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Reflection { class MethodInfo; }

#define GOOGLE_PROTOBUF_REFLECTION_REFLECTIONUTIL_CHECKCANCONVERTENUMFUNCTOINT32FUNC_OFFSET UNITYSDK_OFFSET(0x1711A500)
#define GOOGLE_PROTOBUF_REFLECTION_REFLECTIONUTIL_CREATEACTIONIMESSAGEOBJECT_OFFSET UNITYSDK_OFFSET(0x1711A9B0)
#define GOOGLE_PROTOBUF_REFLECTION_REFLECTIONUTIL_CREATEACTIONIMESSAGE_OFFSET UNITYSDK_OFFSET(0x17117510)
#define GOOGLE_PROTOBUF_REFLECTION_REFLECTIONUTIL_CREATEEXTENSIONHELPER_OFFSET UNITYSDK_OFFSET(0x1711AC60)
#define GOOGLE_PROTOBUF_REFLECTION_REFLECTIONUTIL_CREATEFUNCIMESSAGEBOOL_OFFSET UNITYSDK_OFFSET(0x1711AB30)
#define GOOGLE_PROTOBUF_REFLECTION_REFLECTIONUTIL_CREATEFUNCIMESSAGEINT32_OFFSET UNITYSDK_OFFSET(0x171173E0)
#define GOOGLE_PROTOBUF_REFLECTION_REFLECTIONUTIL_CREATEFUNCIMESSAGEOBJECT_OFFSET UNITYSDK_OFFSET(0x1711A6A0)
#define GOOGLE_PROTOBUF_REFLECTION_REFLECTIONUTIL_GETREFLECTIONHELPER_OFFSET UNITYSDK_OFFSET(0x1711A7D0)
#define GOOGLE_PROTOBUF_REFLECTION_REFLECTIONUTIL_GET_CANCONVERTENUMFUNCTOINT32FUNC_OFFSET UNITYSDK_OFFSET(0x1711AEA0)
#define GOOGLE_PROTOBUF_REFLECTION_REFLECTIONUTIL_SAMPLEENUMMETHOD_OFFSET UNITYSDK_OFFSET(0x1711A690)
#define GOOGLE_PROTOBUF_REFLECTION_REFLECTIONUTIL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1711A050)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int ReflectionUtil_TypeDefinitionIndex = 6356;

	class ReflectionUtil : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Type*>** StaticGet_EmptyTypes()
		{
			return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(ReflectionUtil_TypeDefinitionIndex)->GetStaticField(0x19B0);
		}
		static ::System::Boolean* StaticGet__CanConvertEnumFuncToInt32Func_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ReflectionUtil_TypeDefinitionIndex)->GetStaticField(0x1100);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_REFLECTIONUTIL__CCTOR_OFFSET))();
		}

		static ::System::Func_2<::Google::Protobuf::IMessage*, ::System::Object*>* CreateFuncIMessageObject(::System::Reflection::MethodInfo* method)
		{
			return ((::System::Func_2<::Google::Protobuf::IMessage*, ::System::Object*>*(*)(::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_REFLECTIONUTIL_CREATEFUNCIMESSAGEOBJECT_OFFSET))(method);
		}

		static ::System::Func_2<::Google::Protobuf::IMessage*, ::System::Int32>* CreateFuncIMessageInt32(::System::Reflection::MethodInfo* method)
		{
			return ((::System::Func_2<::Google::Protobuf::IMessage*, ::System::Int32>*(*)(::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_REFLECTIONUTIL_CREATEFUNCIMESSAGEINT32_OFFSET))(method);
		}

		static ::System::Action_2<::Google::Protobuf::IMessage*, ::System::Object*>* CreateActionIMessageObject(::System::Reflection::MethodInfo* method)
		{
			return ((::System::Action_2<::Google::Protobuf::IMessage*, ::System::Object*>*(*)(::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_REFLECTIONUTIL_CREATEACTIONIMESSAGEOBJECT_OFFSET))(method);
		}

		static ::System::Action_1<::Google::Protobuf::IMessage*>* CreateActionIMessage(::System::Reflection::MethodInfo* method)
		{
			return ((::System::Action_1<::Google::Protobuf::IMessage*>*(*)(::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_REFLECTIONUTIL_CREATEACTIONIMESSAGE_OFFSET))(method);
		}

		static ::System::Func_2<::Google::Protobuf::IMessage*, ::System::Boolean>* CreateFuncIMessageBool(::System::Reflection::MethodInfo* method)
		{
			return ((::System::Func_2<::Google::Protobuf::IMessage*, ::System::Boolean>*(*)(::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_REFLECTIONUTIL_CREATEFUNCIMESSAGEBOOL_OFFSET))(method);
		}

		static ::Google::Protobuf::Reflection::ReflectionUtil_IExtensionReflectionHelper* CreateExtensionHelper(::Google::Protobuf::Extension* extension)
		{
			return ((::Google::Protobuf::Reflection::ReflectionUtil_IExtensionReflectionHelper*(*)(::Google::Protobuf::Extension*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_REFLECTIONUTIL_CREATEEXTENSIONHELPER_OFFSET))(extension);
		}

		static ::Google::Protobuf::Reflection::ReflectionUtil_IReflectionHelper* GetReflectionHelper(::System::Type* t1, ::System::Type* t2)
		{
			return ((::Google::Protobuf::Reflection::ReflectionUtil_IReflectionHelper*(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_REFLECTIONUTIL_GETREFLECTIONHELPER_OFFSET))(t1, t2);
		}

		static ::System::Boolean get_CanConvertEnumFuncToInt32Func()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_REFLECTIONUTIL_GET_CANCONVERTENUMFUNCTOINT32FUNC_OFFSET))();
		}

		static ::System::Boolean CheckCanConvertEnumFuncToInt32Func()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_REFLECTIONUTIL_CHECKCANCONVERTENUMFUNCTOINT32FUNC_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::ReflectionUtil_SampleEnum SampleEnumMethod()
		{
			return ((::Google::Protobuf::Reflection::ReflectionUtil_SampleEnum(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_REFLECTIONUTIL_SAMPLEENUMMETHOD_OFFSET))();
		}
	};
}
