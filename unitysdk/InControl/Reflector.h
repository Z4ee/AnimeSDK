#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define INCONTROL_REFLECTOR_GETALLASSEMBLYTYPES_OFFSET UNITYSDK_OFFSET(0x15C09370)
#define INCONTROL_REFLECTOR_GET_ALLASSEMBLYTYPES_OFFSET UNITYSDK_OFFSET(0x15C092D0)
#define INCONTROL_REFLECTOR_IGNOREASSEMBLYWITHNAME_OFFSET UNITYSDK_OFFSET(0x15C09490)
#define INCONTROL_REFLECTOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x15C09590)

namespace InControl
{
	inline static constexpr unsigned int Reflector_TypeDefinitionIndex = 31497;

	class Reflector : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_ignoreAssemblies()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Reflector_TypeDefinitionIndex)->GetStaticField(0x37110);
		}
		static ::System::Collections::Generic::IEnumerable_1<::System::Type*>** StaticGet_assemblyTypes()
		{
			return (::System::Collections::Generic::IEnumerable_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Reflector_TypeDefinitionIndex)->GetStaticField(0x37118);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_REFLECTOR__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::Type*>* get_AllAssemblyTypes()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Type*>*(*)())((::PBYTE)hIl2Cpp + INCONTROL_REFLECTOR_GET_ALLASSEMBLYTYPES_OFFSET))();
		}

		static ::System::Boolean IgnoreAssemblyWithName(::System::String* assemblyName)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_REFLECTOR_IGNOREASSEMBLYWITHNAME_OFFSET))(assemblyName);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::Type*>* GetAllAssemblyTypes()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Type*>*(*)())((::PBYTE)hIl2Cpp + INCONTROL_REFLECTOR_GETALLASSEMBLYTYPES_OFFSET))();
		}
	};
}
