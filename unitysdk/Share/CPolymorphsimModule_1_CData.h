#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/QWER/CPropertyObjectModule.h"

namespace QWER { class COctStream; }
namespace QWER { class DOnPropertyModuleChanged; }
namespace QWER { class IOctData; }
namespace Share { template <typename T> class CPolymorphsim_1; }
namespace System { class Object; }

namespace Share
{
	inline static constexpr unsigned int CPolymorphsimModule_1_CData_TypeDefinitionIndex = 11233;

	template <typename T>
	class CPolymorphsimModule_1_CData : public ::QWER::CPropertyObjectModule
	{
	public:
		::Share::CPolymorphsim_1<T>* _Value_k__BackingField; // 0x0
	};
}
