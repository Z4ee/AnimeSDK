#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace QWER { class CServiceFrontend; }
namespace System { template <typename T> class Action_1; }

#define QWER_SSERVICEFRONTENDID___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE8C010)
#define QWER_SSERVICEFRONTENDID___C__DISPLAYCLASS2_0__POST_G__TMP_0_OFFSET UNITYSDK_OFFSET(0x1BE8C020)

namespace QWER
{
	inline static constexpr unsigned int SServiceFrontendID___c__DisplayClass2_0_TypeDefinitionIndex = 85882;

	class SServiceFrontendID___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::Action_1<::QWER::CServiceFrontend*>* cbAction; // 0x10
		::QWER::CServiceFrontend* oServiceFrontend; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_SSERVICEFRONTENDID___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Void _Post_g__tmp_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_SSERVICEFRONTENDID___C__DISPLAYCLASS2_0__POST_G__TMP_0_OFFSET))(this);
		}
	};
}
