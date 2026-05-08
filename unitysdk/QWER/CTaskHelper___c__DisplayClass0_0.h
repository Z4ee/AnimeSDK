#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define QWER_CTASKHELPER___C__DISPLAYCLASS0_0__CREATEPENDINGTASK_B__0_OFFSET UNITYSDK_OFFSET(0x1BE8B0A0)
#define QWER_CTASKHELPER___C__DISPLAYCLASS0_0__CREATEPENDINGTASK_G__CBACTION_1_OFFSET UNITYSDK_OFFSET(0x1BE8B0B0)
#define QWER_CTASKHELPER___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE8AE50)

namespace QWER
{
	inline static constexpr unsigned int CTaskHelper___c__DisplayClass0_0_TypeDefinitionIndex = 85869;

	class CTaskHelper___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::System::Threading::Tasks::Task_1<::System::Exception*>* oTask; // 0x10
		::System::Exception* oException; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CTASKHELPER___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::System::Exception* _CreatePendingTask_b__0()
		{
			return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CTASKHELPER___C__DISPLAYCLASS0_0__CREATEPENDINGTASK_B__0_OFFSET))(this);
		}

		::System::Void _CreatePendingTask_g__cbAction_1(::System::Exception* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + QWER_CTASKHELPER___C__DISPLAYCLASS0_0__CREATEPENDINGTASK_G__CBACTION_1_OFFSET))(this, e);
		}
	};
}
