#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/QWER/CPropertyObjectModule.h"

namespace QWER { class COctStream; }
namespace QWER { class DOnPropertyModuleChanged; }
namespace QWER { class IOctData; }
namespace Share { template <typename T> class CPolymorphsimModule_1_CData; }
namespace System { class Object; }
namespace System { class String; }

namespace Share
{
	inline static constexpr unsigned int CPolymorphsimModule_1_TypeDefinitionIndex = 11232;

	template <typename T>
	class CPolymorphsimModule_1 : public ::QWER::CPropertyObjectModule
	{
	public:
		::Share::CPolymorphsimModule_1_CData<T>* _Value_k__BackingField; // 0x0
	};
}
