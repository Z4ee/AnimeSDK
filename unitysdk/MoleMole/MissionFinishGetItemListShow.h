#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

class Class_1_0D6706375CDAAE8C;
class Class_1_B46A33D0838CB6F0;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MISSIONFINISHGETITEMLISTSHOW_DIRECTSHOW_OFFSET UNITYSDK_OFFSET(0x16D50E50)
#define MOLEMOLE_MISSIONFINISHGETITEMLISTSHOW_DOPROCESS_OFFSET UNITYSDK_OFFSET(0x16D50EA0)
#define MOLEMOLE_MISSIONFINISHGETITEMLISTSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x16D509F0)
#define MOLEMOLE_MISSIONFINISHGETITEMLISTSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x16D50E00)
#define MOLEMOLE_MISSIONFINISHGETITEMLISTSHOW_SHOWREWARDWINDOW_OFFSET UNITYSDK_OFFSET(0x16D50EF0)
#define MOLEMOLE_MISSIONFINISHGETITEMLISTSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x16D50A00)

namespace MoleMole
{
	inline static constexpr unsigned int MissionFinishGetItemListShow_TypeDefinitionIndex = 56874;

	class MissionFinishGetItemListShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* items; // 0x28
		::Class_1_B46A33D0838CB6F0* _context; // 0x30

		::System::Void _ctor(::Class_1_B46A33D0838CB6F0* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B46A33D0838CB6F0*))((::PBYTE)hIl2Cpp + MOLEMOLE_MISSIONFINISHGETITEMLISTSHOW__CTOR_OFFSET))(this, context);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MISSIONFINISHGETITEMLISTSHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MISSIONFINISHGETITEMLISTSHOW_ONPROCESS_OFFSET))(this);
		}

		::System::Void DirectShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MISSIONFINISHGETITEMLISTSHOW_DIRECTSHOW_OFFSET))(this);
		}

		::System::Void DoProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MISSIONFINISHGETITEMLISTSHOW_DOPROCESS_OFFSET))(this);
		}

		::System::Void ShowRewardWindow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MISSIONFINISHGETITEMLISTSHOW_SHOWREWARDWINDOW_OFFSET))(this);
		}
	};
}
