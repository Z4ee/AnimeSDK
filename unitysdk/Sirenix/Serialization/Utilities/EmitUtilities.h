#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Sirenix::Serialization::Utilities { class WeakValueGetter; }
namespace Sirenix::Serialization::Utilities { class WeakValueSetter; }
namespace Sirenix::Serialization::Utilities { template <typename T1, typename T2> class InstanceRefMethodCaller_2; }
namespace Sirenix::Serialization::Utilities { template <typename T1, typename T2> class ValueGetter_2; }
namespace Sirenix::Serialization::Utilities { template <typename T> class InstanceRefMethodCaller_1; }
namespace System { class Type; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class PropertyInfo; }

#define SIRENIX_SERIALIZATION_UTILITIES_EMITUTILITIES_CREATEWEAKINSTANCEFIELDGETTER_OFFSET UNITYSDK_OFFSET(0x1E690EF0)
#define SIRENIX_SERIALIZATION_UTILITIES_EMITUTILITIES_CREATEWEAKINSTANCEFIELDSETTER_OFFSET UNITYSDK_OFFSET(0x1E691080)
#define SIRENIX_SERIALIZATION_UTILITIES_EMITUTILITIES_CREATEWEAKINSTANCEPROPERTYGETTER_OFFSET UNITYSDK_OFFSET(0x1E691210)
#define SIRENIX_SERIALIZATION_UTILITIES_EMITUTILITIES_CREATEWEAKINSTANCEPROPERTYSETTER_OFFSET UNITYSDK_OFFSET(0x1E691470)
#define SIRENIX_SERIALIZATION_UTILITIES_EMITUTILITIES_GET_CANEMIT_OFFSET UNITYSDK_OFFSET(0x1E690EE0)

namespace Sirenix::Serialization::Utilities
{
	inline static constexpr unsigned int EmitUtilities_TypeDefinitionIndex = 7640;

	class EmitUtilities : public ::System::Object
	{
	public:
		static ::System::Boolean get_CanEmit()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_EMITUTILITIES_GET_CANEMIT_OFFSET))();
		}

		static ::Sirenix::Serialization::Utilities::WeakValueGetter* CreateWeakInstanceFieldGetter(::System::Type* instanceType, ::System::Reflection::FieldInfo* fieldInfo)
		{
			return ((::Sirenix::Serialization::Utilities::WeakValueGetter*(*)(::System::Type*, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_EMITUTILITIES_CREATEWEAKINSTANCEFIELDGETTER_OFFSET))(instanceType, fieldInfo);
		}

		static ::Sirenix::Serialization::Utilities::WeakValueSetter* CreateWeakInstanceFieldSetter(::System::Type* instanceType, ::System::Reflection::FieldInfo* fieldInfo)
		{
			return ((::Sirenix::Serialization::Utilities::WeakValueSetter*(*)(::System::Type*, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_EMITUTILITIES_CREATEWEAKINSTANCEFIELDSETTER_OFFSET))(instanceType, fieldInfo);
		}

		static ::Sirenix::Serialization::Utilities::WeakValueGetter* CreateWeakInstancePropertyGetter(::System::Type* instanceType, ::System::Reflection::PropertyInfo* propertyInfo)
		{
			return ((::Sirenix::Serialization::Utilities::WeakValueGetter*(*)(::System::Type*, ::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_EMITUTILITIES_CREATEWEAKINSTANCEPROPERTYGETTER_OFFSET))(instanceType, propertyInfo);
		}

		static ::Sirenix::Serialization::Utilities::WeakValueSetter* CreateWeakInstancePropertySetter(::System::Type* instanceType, ::System::Reflection::PropertyInfo* propertyInfo)
		{
			return ((::Sirenix::Serialization::Utilities::WeakValueSetter*(*)(::System::Type*, ::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_EMITUTILITIES_CREATEWEAKINSTANCEPROPERTYSETTER_OFFSET))(instanceType, propertyInfo);
		}
	};
}
