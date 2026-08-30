#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EarlyAccessContent; }
namespace RPG::Client { class SubMissionData; }
namespace RPG::Client { class World3DMapEntranceConfig; }
namespace RPG::GameCore { class World3DMapEntranceConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_WORLD3DMAPUTILS_GETWORLD3DMAPENTRANCECONFIGS_OFFSET UNITYSDK_OFFSET(0x1681AF60)
#define RPG_CLIENT_WORLD3DMAPUTILS_PREPAREWORLD3DMAPENTRANCESUBMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x1681B520)
#define RPG_CLIENT_WORLD3DMAPUTILS__CHECKENTRANCECONFIGCONDITIONWITHOUTEARLYACCESS_OFFSET UNITYSDK_OFFSET(0x1681B420)
#define RPG_CLIENT_WORLD3DMAPUTILS__CHECKENTRANCECONFIGCONDITION_OFFSET UNITYSDK_OFFSET(0x1681B4B0)
#define RPG_CLIENT_WORLD3DMAPUTILS__CHECKSUBMISSIONCONDITION_OFFSET UNITYSDK_OFFSET(0x1681B770)
#define RPG_CLIENT_WORLD3DMAPUTILS__ISMISSIONBEFORECONTENTRELEASECONDITION_OFFSET UNITYSDK_OFFSET(0x1681BB80)
#define RPG_CLIENT_WORLD3DMAPUTILS__ISSUBMISSIONBEFORECURRENT_OFFSET UNITYSDK_OFFSET(0x1681BD30)

namespace RPG::Client
{
	inline static constexpr unsigned int World3DMapUtils_TypeDefinitionIndex = 68249;

	class World3DMapUtils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::Client::World3DMapEntranceConfig*>* GetWorld3DMapEntranceConfigs(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::World3DMapEntranceConfig*>*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLD3DMAPUTILS_GETWORLD3DMAPENTRANCECONFIGS_OFFSET))(a1);
		}

		static ::System::Void PrepareWorld3DMapEntranceSubMissionData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLD3DMAPUTILS_PREPAREWORLD3DMAPENTRANCESUBMISSIONDATA_OFFSET))();
		}

		static ::System::Boolean _CheckEntranceConfigConditionWithOutEarlyAccess(::RPG::GameCore::World3DMapEntranceConfigRow* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::World3DMapEntranceConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLD3DMAPUTILS__CHECKENTRANCECONFIGCONDITIONWITHOUTEARLYACCESS_OFFSET))(a1);
		}

		static ::System::Boolean _CheckEntranceConfigCondition(::RPG::GameCore::World3DMapEntranceConfigRow* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::World3DMapEntranceConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLD3DMAPUTILS__CHECKENTRANCECONFIGCONDITION_OFFSET))(a1);
		}

		static ::System::Boolean _CheckSubMissionCondition(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLD3DMAPUTILS__CHECKSUBMISSIONCONDITION_OFFSET))(a1);
		}

		static ::System::Boolean _IsMissionBeforeContentReleaseCondition(::RPG::Client::EarlyAccessContent* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::EarlyAccessContent*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLD3DMAPUTILS__ISMISSIONBEFORECONTENTRELEASECONDITION_OFFSET))(a1, a2);
		}

		static ::System::Boolean _IsSubMissionBeforeCurrent(::System::UInt32 a1, ::RPG::Client::SubMissionData* a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLD3DMAPUTILS__ISSUBMISSIONBEFORECURRENT_OFFSET))(a1, a2);
		}
	};
}
