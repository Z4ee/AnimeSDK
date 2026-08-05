#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Share { class CRandom; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SHARE_COBJECTUTIL_SHUFFLEINDEXS_OFFSET UNITYSDK_OFFSET(0x1BBC42A0)

namespace Share
{
	inline static constexpr unsigned int CObjectUtil_TypeDefinitionIndex = 11266;

	class CObjectUtil : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Int32>* ShuffleIndexs(::System::Int32 num, ::Share::CRandom* random)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::System::Int32, ::Share::CRandom*))((::PBYTE)hIl2Cpp + SHARE_COBJECTUTIL_SHUFFLEINDEXS_OFFSET))(num, random);
		}
	};
}
