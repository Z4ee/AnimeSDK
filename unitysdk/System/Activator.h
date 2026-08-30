#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/BindingFlags.h"

namespace System { class Type; }
namespace System::Globalization { class CultureInfo; }
namespace System::Reflection { class Binder; }

#define SYSTEM_ACTIVATOR_CREATEINSTANCE_1_OFFSET UNITYSDK_OFFSET(0x1BB90AA0)
#define SYSTEM_ACTIVATOR_CREATEINSTANCE_2_OFFSET UNITYSDK_OFFSET(0x1BB90C90)
#define SYSTEM_ACTIVATOR_CREATEINSTANCE_3_OFFSET UNITYSDK_OFFSET(0x1BB6DD80)
#define SYSTEM_ACTIVATOR_CREATEINSTANCE_4_OFFSET UNITYSDK_OFFSET(0x1BB90CC0)
#define SYSTEM_ACTIVATOR_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1BB90A70)

namespace System
{
	inline static constexpr unsigned int Activator_TypeDefinitionIndex = 189;

	class Activator : public ::System::Object
	{
	public:
		static ::System::Object* CreateInstance(::System::Type* a1, ::System::Reflection::BindingFlags a2, ::System::Reflection::Binder* a3, ::Il2CppArray<::System::Object*>* a4, ::System::Globalization::CultureInfo* a5)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_ACTIVATOR_CREATEINSTANCE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Object* CreateInstance_1(::System::Type* a1, ::System::Reflection::BindingFlags a2, ::System::Reflection::Binder* a3, ::Il2CppArray<::System::Object*>* a4, ::System::Globalization::CultureInfo* a5, ::Il2CppArray<::System::Object*>* a6)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_ACTIVATOR_CREATEINSTANCE_1_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Object* CreateInstance_2(::System::Type* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Object*(*)(::System::Type*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_ACTIVATOR_CREATEINSTANCE_2_OFFSET))(a1, a2);
		}

		static ::System::Object* CreateInstance_3(::System::Type* a1)
		{
			return ((::System::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_ACTIVATOR_CREATEINSTANCE_3_OFFSET))(a1);
		}

		static ::System::Object* CreateInstance_4(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ACTIVATOR_CREATEINSTANCE_4_OFFSET))(a1, a2);
		}
	};
}
