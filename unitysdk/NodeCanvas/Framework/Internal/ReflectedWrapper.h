#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::Framework { class BBParameter; }
namespace NodeCanvas::Framework { class IBlackboard; }
namespace ParadoxNotion::Serialization { class ISerializedReflectedInfo; }
namespace ParadoxNotion::Serialization { class SerializedMethodInfo; }
namespace System { class String; }
namespace System::Reflection { class MethodInfo; }

#define NODECANVAS_FRAMEWORK_INTERNAL_REFLECTEDWRAPPER_ASSTRING_OFFSET UNITYSDK_OFFSET(0x1E5429D0)
#define NODECANVAS_FRAMEWORK_INTERNAL_REFLECTEDWRAPPER_CREATE_OFFSET UNITYSDK_OFFSET(0x1E5426F0)
#define NODECANVAS_FRAMEWORK_INTERNAL_REFLECTEDWRAPPER_GETMETHOD_OFFSET UNITYSDK_OFFSET(0x1E542990)
#define NODECANVAS_FRAMEWORK_INTERNAL_REFLECTEDWRAPPER_GETSERIALIZEDMETHOD_OFFSET UNITYSDK_OFFSET(0x1E542980)
#define NODECANVAS_FRAMEWORK_INTERNAL_REFLECTEDWRAPPER_HASCHANGED_OFFSET UNITYSDK_OFFSET(0x1E5429B0)
#define NODECANVAS_FRAMEWORK_INTERNAL_REFLECTEDWRAPPER_NODECANVAS_FRAMEWORK_IREFLECTEDWRAPPER_GETSERIALIZEDINFO_OFFSET UNITYSDK_OFFSET(0x1E542790)
#define NODECANVAS_FRAMEWORK_INTERNAL_REFLECTEDWRAPPER_SETVARIABLESBB_OFFSET UNITYSDK_OFFSET(0x1E5427A0)
#define NODECANVAS_FRAMEWORK_INTERNAL_REFLECTEDWRAPPER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5429E0)
#define NODECANVAS_FRAMEWORK_INTERNAL_REFLECTEDWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5426E0)

namespace NodeCanvas::Framework::Internal
{
	inline static constexpr unsigned int ReflectedWrapper_TypeDefinitionIndex = 30356;

	class ReflectedWrapper : public ::System::Object
	{
	public:
		::ParadoxNotion::Serialization::SerializedMethodInfo* _targetMethod; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_REFLECTEDWRAPPER__CTOR_OFFSET))(this);
		}

		static ::NodeCanvas::Framework::Internal::ReflectedWrapper* Create(::System::Reflection::MethodInfo* method, ::NodeCanvas::Framework::IBlackboard* bb)
		{
			return ((::NodeCanvas::Framework::Internal::ReflectedWrapper*(*)(::System::Reflection::MethodInfo*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_REFLECTEDWRAPPER_CREATE_OFFSET))(method, bb);
		}

		::ParadoxNotion::Serialization::ISerializedReflectedInfo* NodeCanvas_Framework_IReflectedWrapper_GetSerializedInfo()
		{
			return ((::ParadoxNotion::Serialization::ISerializedReflectedInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_REFLECTEDWRAPPER_NODECANVAS_FRAMEWORK_IREFLECTEDWRAPPER_GETSERIALIZEDINFO_OFFSET))(this);
		}

		::System::Void SetVariablesBB(::NodeCanvas::Framework::IBlackboard* bb)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_REFLECTEDWRAPPER_SETVARIABLESBB_OFFSET))(this, bb);
		}

		::ParadoxNotion::Serialization::SerializedMethodInfo* GetSerializedMethod()
		{
			return ((::ParadoxNotion::Serialization::SerializedMethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_REFLECTEDWRAPPER_GETSERIALIZEDMETHOD_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* GetMethod()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_REFLECTEDWRAPPER_GETMETHOD_OFFSET))(this);
		}

		::System::Boolean HasChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_REFLECTEDWRAPPER_HASCHANGED_OFFSET))(this);
		}

		::System::String* AsString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_REFLECTEDWRAPPER_ASSTRING_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_REFLECTEDWRAPPER_TOSTRING_OFFSET))(this);
		}
	};
}
