#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json::Utilities { template <typename T1, typename T2> class ThreadSafeStore_2; }

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int CachedAttributeGetter_1_TypeDefinitionIndex = 9409;

	template <typename T>
	class CachedAttributeGetter_1 : public ::System::Object
	{
	public:
		static ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Object*, T>** StaticGet_TypeAttributeCache()
		{
			return (::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Object*, T>**)Il2CppClass::FromTypeDefinitionIndex(CachedAttributeGetter_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
