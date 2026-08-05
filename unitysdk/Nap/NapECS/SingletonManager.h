#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NAP_NAPECS_SINGLETONMANAGER_ADDSINGLETONINSTANCE_OFFSET UNITYSDK_OFFSET(0x1C85ACF0)
#define NAP_NAPECS_SINGLETONMANAGER_REMOVESINGLETONINSTANCE_OFFSET UNITYSDK_OFFSET(0x1C85AE90)
#define NAP_NAPECS_SINGLETONMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C85AFF0)

namespace Nap::NapECS
{
	inline static constexpr unsigned int SingletonManager_TypeDefinitionIndex = 37950;

	class SingletonManager : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>** StaticGet__singletons()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(SingletonManager_TypeDefinitionIndex)->GetStaticField(0x2A420);
		}
		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet__staticSingetons()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SingletonManager_TypeDefinitionIndex)->GetStaticField(0x2A428);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAP_NAPECS_SINGLETONMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void AddSingletonInstance(::System::Object* singleton, ::System::String* typeName)
		{
			return ((::System::Void(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + NAP_NAPECS_SINGLETONMANAGER_ADDSINGLETONINSTANCE_OFFSET))(singleton, typeName);
		}

		static ::System::Void RemoveSingletonInstance(::System::String* typeName)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NAP_NAPECS_SINGLETONMANAGER_REMOVESINGLETONINSTANCE_OFFSET))(typeName);
		}
	};
}
