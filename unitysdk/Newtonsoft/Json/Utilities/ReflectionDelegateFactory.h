#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json::Serialization { template <typename T> class ObjectConstructor_1; }
namespace Newtonsoft::Json::Utilities { template <typename T1, typename T2> class MethodCall_2; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class MethodBase; }
namespace System::Reflection { class PropertyInfo; }

#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONDELEGATEFACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x15BCC080)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int ReflectionDelegateFactory_TypeDefinitionIndex = 9298;

	class ReflectionDelegateFactory : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONDELEGATEFACTORY__CTOR_OFFSET))(this);
		}
	};
}
