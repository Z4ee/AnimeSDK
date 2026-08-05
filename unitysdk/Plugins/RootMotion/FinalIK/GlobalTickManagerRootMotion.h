#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_8649573A691533F8.h"

class Class_0_16E4307DCC419505;
namespace RootMotion::FinalIK { class LookController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_3B365E645019A36F;

#define PLUGINS_ROOTMOTION_FINALIK_GLOBALTICKMANAGERROOTMOTION_INITDELAYREFRESHLIST_OFFSET UNITYSDK_OFFSET(0x1FA56A60)
#define PLUGINS_ROOTMOTION_FINALIK_GLOBALTICKMANAGERROOTMOTION_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1FA56AB0)
#define PLUGINS_ROOTMOTION_FINALIK_GLOBALTICKMANAGERROOTMOTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA56AF0)

namespace Plugins::RootMotion::FinalIK
{
	inline static constexpr unsigned int GlobalTickManagerRootMotion_TypeDefinitionIndex = 39004;

	class GlobalTickManagerRootMotion : public ::Class_2_8649573A691533F8<::Plugins::RootMotion::FinalIK::GlobalTickManagerRootMotion*>
	{
	public:
		::Class_1_3B365E645019A36F<::RootMotion::FinalIK::LookController*>* _lookControllers; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLUGINS_ROOTMOTION_FINALIK_GLOBALTICKMANAGERROOTMOTION__CTOR_OFFSET))(this);
		}

		::System::Void InitDelayRefreshList(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505*>* delayRefreshList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505*>*))((::PBYTE)hIl2Cpp + PLUGINS_ROOTMOTION_FINALIK_GLOBALTICKMANAGERROOTMOTION_INITDELAYREFRESHLIST_OFFSET))(this, delayRefreshList);
		}

		::System::Void OnLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLUGINS_ROOTMOTION_FINALIK_GLOBALTICKMANAGERROOTMOTION_ONLATEUPDATE_OFFSET))(this);
		}
	};
}
