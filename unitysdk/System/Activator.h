#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/BindingFlags.h"

namespace System { class Type; }
namespace System::Globalization { class CultureInfo; }
namespace System::Reflection { class Binder; }

#define SYSTEM_ACTIVATOR_CREATEINSTANCE_1_OFFSET UNITYSDK_OFFSET(0x18C4E2D0)
#define SYSTEM_ACTIVATOR_CREATEINSTANCE_2_OFFSET UNITYSDK_OFFSET(0x18C4E480)
#define SYSTEM_ACTIVATOR_CREATEINSTANCE_3_OFFSET UNITYSDK_OFFSET(0x18C4E4B0)
#define SYSTEM_ACTIVATOR_CREATEINSTANCE_4_OFFSET UNITYSDK_OFFSET(0x18C4E4E0)
#define SYSTEM_ACTIVATOR_CREATEINSTANCE_5_OFFSET UNITYSDK_OFFSET(0x18C4E4F0)
#define SYSTEM_ACTIVATOR_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x18C4E2A0)
#define SYSTEM_ACTIVATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x18C4E290)

namespace System
{
	inline static constexpr unsigned int Activator_TypeDefinitionIndex = 178;

	class Activator : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ACTIVATOR__CTOR_OFFSET))(this);
		}

		static ::System::Object* CreateInstance(::System::Type* type, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::Il2CppArray<::System::Object*>* args, ::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_ACTIVATOR_CREATEINSTANCE_OFFSET))(type, bindingAttr, binder, args, culture);
		}

		static ::System::Object* CreateInstance_1(::System::Type* type, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::Il2CppArray<::System::Object*>* args, ::System::Globalization::CultureInfo* culture, ::Il2CppArray<::System::Object*>* activationAttributes)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_ACTIVATOR_CREATEINSTANCE_1_OFFSET))(type, bindingAttr, binder, args, culture, activationAttributes);
		}

		static ::System::Object* CreateInstance_2(::System::Type* type, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Object*(*)(::System::Type*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_ACTIVATOR_CREATEINSTANCE_2_OFFSET))(type, args);
		}

		static ::System::Object* CreateInstance_3(::System::Type* type, ::Il2CppArray<::System::Object*>* args, ::Il2CppArray<::System::Object*>* activationAttributes)
		{
			return ((::System::Object*(*)(::System::Type*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_ACTIVATOR_CREATEINSTANCE_3_OFFSET))(type, args, activationAttributes);
		}

		static ::System::Object* CreateInstance_4(::System::Type* type)
		{
			return ((::System::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_ACTIVATOR_CREATEINSTANCE_4_OFFSET))(type);
		}

		static ::System::Object* CreateInstance_5(::System::Type* type, ::System::Boolean nonPublic)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ACTIVATOR_CREATEINSTANCE_5_OFFSET))(type, nonPublic);
		}
	};
}
