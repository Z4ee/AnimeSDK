#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Object; }

#define SIRENIX_SERIALIZATION_UTILITIES_UNITYEXTENSIONS_SAFEISUNITYNULL_OFFSET UNITYSDK_OFFSET(0x1F04EF30)

namespace Sirenix::Serialization::Utilities
{
	inline static constexpr unsigned int UnityExtensions_TypeDefinitionIndex = 7632;

	class UnityExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean SafeIsUnityNull(::UnityEngine::Object* obj)
		{
			return ((::System::Boolean(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_UNITYEXTENSIONS_SAFEISUNITYNULL_OFFSET))(obj);
		}
	};
}
