#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Object; }

#define FOUNDATION_OBJECTX_COMPARENAME_1_OFFSET UNITYSDK_OFFSET(0x1D59C060)
#define FOUNDATION_OBJECTX_COMPARENAME_OFFSET UNITYSDK_OFFSET(0x1D59BFD0)
#define FOUNDATION_OBJECTX_NAMECONTAINS_1_OFFSET UNITYSDK_OFFSET(0x1D59C300)
#define FOUNDATION_OBJECTX_NAMECONTAINS_OFFSET UNITYSDK_OFFSET(0x1D59C210)
#define FOUNDATION_OBJECTX_NAMEENDSWITH_OFFSET UNITYSDK_OFFSET(0x1D59C180)
#define FOUNDATION_OBJECTX_NAMESTARTSWITH_OFFSET UNITYSDK_OFFSET(0x1D59C0F0)

namespace Foundation
{
	inline static constexpr unsigned int ObjectX_TypeDefinitionIndex = 8476;

	class ObjectX : public ::System::Object
	{
	public:
		static ::System::Boolean CompareName(::UnityEngine::Object* lObject, ::UnityEngine::Object* rObject)
		{
			return ((::System::Boolean(*)(::UnityEngine::Object*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTX_COMPARENAME_OFFSET))(lObject, rObject);
		}

		static ::System::Boolean CompareName_1(::UnityEngine::Object* lObject, ::System::String* name)
		{
			return ((::System::Boolean(*)(::UnityEngine::Object*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTX_COMPARENAME_1_OFFSET))(lObject, name);
		}

		static ::System::Boolean NameStartsWith(::UnityEngine::Object* lObject, ::UnityEngine::Object* rObject)
		{
			return ((::System::Boolean(*)(::UnityEngine::Object*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTX_NAMESTARTSWITH_OFFSET))(lObject, rObject);
		}

		static ::System::Boolean NameEndsWith(::UnityEngine::Object* lObject, ::UnityEngine::Object* rObject)
		{
			return ((::System::Boolean(*)(::UnityEngine::Object*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTX_NAMEENDSWITH_OFFSET))(lObject, rObject);
		}

		static ::System::Boolean NameContains(::UnityEngine::Object* lObject, ::UnityEngine::Object* rObject)
		{
			return ((::System::Boolean(*)(::UnityEngine::Object*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTX_NAMECONTAINS_OFFSET))(lObject, rObject);
		}

		static ::System::Boolean NameContains_1(::UnityEngine::Object* lObject, ::System::String* name)
		{
			return ((::System::Boolean(*)(::UnityEngine::Object*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTX_NAMECONTAINS_1_OFFSET))(lObject, name);
		}
	};
}
