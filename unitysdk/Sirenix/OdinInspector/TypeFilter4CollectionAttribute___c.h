#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define SIRENIX_ODININSPECTOR_TYPEFILTER4COLLECTIONATTRIBUTE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C022570)
#define SIRENIX_ODININSPECTOR_TYPEFILTER4COLLECTIONATTRIBUTE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0225B0)
#define SIRENIX_ODININSPECTOR_TYPEFILTER4COLLECTIONATTRIBUTE___C___CTOR_B__1_0_OFFSET UNITYSDK_OFFSET(0x1C0225C0)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int TypeFilter4CollectionAttribute___c_TypeDefinitionIndex = 7244;

	class TypeFilter4CollectionAttribute___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Type*, ::System::String*>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::System::Type*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TypeFilter4CollectionAttribute___c_TypeDefinitionIndex)->GetStaticField(0x6040);
		}
		static ::Sirenix::OdinInspector::TypeFilter4CollectionAttribute___c** StaticGet___9()
		{
			return (::Sirenix::OdinInspector::TypeFilter4CollectionAttribute___c**)Il2CppClass::FromTypeDefinitionIndex(TypeFilter4CollectionAttribute___c_TypeDefinitionIndex)->GetStaticField(0x6048);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_TYPEFILTER4COLLECTIONATTRIBUTE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_TYPEFILTER4COLLECTIONATTRIBUTE___C__CTOR_OFFSET))(this);
		}

		::System::String* __ctor_b__1_0(::System::Type* arg)
		{
			return ((::System::String*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_TYPEFILTER4COLLECTIONATTRIBUTE___C___CTOR_B__1_0_OFFSET))(this, arg);
		}
	};
}
