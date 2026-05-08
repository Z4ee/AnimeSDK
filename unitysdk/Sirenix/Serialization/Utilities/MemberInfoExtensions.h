#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Reflection { class ICustomAttributeProvider; }
namespace System::Reflection { class MemberInfo; }

#define SIRENIX_SERIALIZATION_UTILITIES_MEMBERINFOEXTENSIONS_GETNICENAME_OFFSET UNITYSDK_OFFSET(0x1C47DAA0)

namespace Sirenix::Serialization::Utilities
{
	inline static constexpr unsigned int MemberInfoExtensions_TypeDefinitionIndex = 7486;

	class MemberInfoExtensions : public ::System::Object
	{
	public:
		static ::System::String* GetNiceName(::System::Reflection::MemberInfo* member)
		{
			return ((::System::String*(*)(::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_MEMBERINFOEXTENSIONS_GETNICENAME_OFFSET))(member);
		}
	};
}
