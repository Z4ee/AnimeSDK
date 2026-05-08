#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace QWER { template <typename T1, typename T2, typename T3> class CPropertyDKDictionaryModule_3; }
namespace QWER { template <typename T1, typename T2> class CPDictionary_2; }
namespace QWER { template <typename T1, typename T2> class CPropertyDictionaryModule_2; }
namespace QWER { template <typename T> class CPropertyBasicTypeModule_1; }
namespace QWER { template <typename T> class CPropertyHashSetModule_1; }
namespace Share { template <typename T> class CPolymorphsim_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SHARE_CSTRINGGENERATOR_GETSTRING_OFFSET UNITYSDK_OFFSET(0x194FDAD0)

namespace Share
{
	inline static constexpr unsigned int CStringGenerator_TypeDefinitionIndex = 13352;

	class CStringGenerator : public ::System::Object
	{
	public:
		static ::System::String* GetString(::System::Object* x)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SHARE_CSTRINGGENERATOR_GETSTRING_OFFSET))(x);
		}
	};
}
