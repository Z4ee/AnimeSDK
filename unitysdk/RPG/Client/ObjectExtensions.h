#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Object; }

#define RPG_CLIENT_OBJECTEXTENSIONS_ISEQUALSNULL_OFFSET UNITYSDK_OFFSET(0xABDFCA0)
#define RPG_CLIENT_OBJECTEXTENSIONS_ISNOTNULL_OFFSET UNITYSDK_OFFSET(0xABDFC40)
#define RPG_CLIENT_OBJECTEXTENSIONS_ISNULL_OFFSET UNITYSDK_OFFSET(0xABDFBE0)

namespace RPG::Client
{
	inline static constexpr unsigned int ObjectExtensions_TypeDefinitionIndex = 67043;

	class ObjectExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean IsNull(::UnityEngine::Object* o)
		{
			return ((::System::Boolean(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OBJECTEXTENSIONS_ISNULL_OFFSET))(o);
		}

		static ::System::Boolean IsNotNull(::UnityEngine::Object* o)
		{
			return ((::System::Boolean(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OBJECTEXTENSIONS_ISNOTNULL_OFFSET))(o);
		}

		static ::System::Boolean IsEqualsNull(::System::Object* o)
		{
			return ((::System::Boolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OBJECTEXTENSIONS_ISEQUALSNULL_OFFSET))(o);
		}
	};
}
