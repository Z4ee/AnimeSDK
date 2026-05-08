#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/QWER/CPropertyModule.h"

namespace QWER { class CPropertyObjectModule; }
namespace QWER { class DOnPropertyModuleChanged; }
namespace System { class String; }

namespace QWER
{
	inline static constexpr unsigned int CPropertyBasicTypeModule_1_TypeDefinitionIndex = 9660;

	template <typename T>
	class CPropertyBasicTypeModule_1 : public ::QWER::CPropertyModule
	{
	public:
		T m_oValue; // 0x0
	};
}
