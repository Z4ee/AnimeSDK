#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define SRF_HIERARCHY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1ED717B0)
#define SRF_HIERARCHY_GET_OFFSET UNITYSDK_OFFSET(0x1ED717E0)
#define SRF_HIERARCHY_RUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1ED71AF0)
#define SRF_HIERARCHY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ED71B90)
#define SRF_HIERARCHY__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED71B80)

namespace SRF
{
	inline static constexpr unsigned int Hierarchy_TypeDefinitionIndex = 35374;

	class Hierarchy : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>** StaticGet_Cache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>**)Il2CppClass::FromTypeDefinitionIndex(Hierarchy_TypeDefinitionIndex)->GetStaticField(0x47600);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_Seperator()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(Hierarchy_TypeDefinitionIndex)->GetStaticField(0x47608);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_HIERARCHY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SRF_HIERARCHY__CCTOR_OFFSET))();
		}

		::UnityEngine::Transform* get_Item(::System::String* a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SRF_HIERARCHY_GET_ITEM_OFFSET))(this, a1);
		}

		static ::UnityEngine::Transform* Get(::System::String* a1)
		{
			return ((::UnityEngine::Transform*(*)(::System::String*))((::PBYTE)hIl2Cpp + SRF_HIERARCHY_GET_OFFSET))(a1);
		}

		static ::System::Void RuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SRF_HIERARCHY_RUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
