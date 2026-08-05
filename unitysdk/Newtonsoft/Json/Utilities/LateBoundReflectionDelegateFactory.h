#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Utilities/ReflectionDelegateFactory.h"

namespace Newtonsoft::Json::Serialization { template <typename T> class ObjectConstructor_1; }
namespace Newtonsoft::Json::Utilities { template <typename T1, typename T2> class MethodCall_2; }
namespace System { class Object; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MethodBase; }
namespace System::Reflection { class PropertyInfo; }

#define NEWTONSOFT_JSON_UTILITIES_LATEBOUNDREFLECTIONDELEGATEFACTORY_CREATEPARAMETERIZEDCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1E9F4EB0)
#define NEWTONSOFT_JSON_UTILITIES_LATEBOUNDREFLECTIONDELEGATEFACTORY_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1E9F9710)
#define NEWTONSOFT_JSON_UTILITIES_LATEBOUNDREFLECTIONDELEGATEFACTORY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9F9780)
#define NEWTONSOFT_JSON_UTILITIES_LATEBOUNDREFLECTIONDELEGATEFACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9F9770)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int LateBoundReflectionDelegateFactory_TypeDefinitionIndex = 7063;

	class LateBoundReflectionDelegateFactory : public ::Newtonsoft::Json::Utilities::ReflectionDelegateFactory
	{
	public:
		static ::Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory** StaticGet__instance()
		{
			return (::Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory**)Il2CppClass::FromTypeDefinitionIndex(LateBoundReflectionDelegateFactory_TypeDefinitionIndex)->GetStaticField(0x6050);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_LATEBOUNDREFLECTIONDELEGATEFACTORY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_LATEBOUNDREFLECTIONDELEGATEFACTORY__CCTOR_OFFSET))();
		}

		static ::Newtonsoft::Json::Utilities::ReflectionDelegateFactory* get_Instance()
		{
			return ((::Newtonsoft::Json::Utilities::ReflectionDelegateFactory*(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_LATEBOUNDREFLECTIONDELEGATEFACTORY_GET_INSTANCE_OFFSET))();
		}

		::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* CreateParameterizedConstructor(::System::Reflection::MethodBase* method)
		{
			return ((::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*(*)(::PVOID, ::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_LATEBOUNDREFLECTIONDELEGATEFACTORY_CREATEPARAMETERIZEDCONSTRUCTOR_OFFSET))(this, method);
		}
	};
}
