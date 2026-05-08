#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace QWER { class CTimer; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define QWER_CEXECTIMERINFOLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3E47E0)

namespace QWER
{
	inline static constexpr unsigned int CExecTimerInfoList_TypeDefinitionIndex = 84241;

	class CExecTimerInfoList : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Collections::Generic::LinkedList_1<::QWER::CTimer*>*>* m_oExecTimerInfo; // 0x10
		::System::UInt16 m_wOffset; // 0x18
		::System::UInt64 m_qwEndTime; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CEXECTIMERINFOLIST__CTOR_OFFSET))(this);
		}
	};
}
