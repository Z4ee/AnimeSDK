#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/QWER/IService.h"

namespace QWER { template <typename T> class CService_1; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace QWER
{
	inline static constexpr unsigned int CService_1_TypeDefinitionIndex = 85862;

	template <typename T>
	class CService_1 : public ::QWER::IService
	{
	public:
		::System::Func_2<::QWER::CService_1<T>*, T>* m_cbNewFrontend; // 0x0
	};
}
