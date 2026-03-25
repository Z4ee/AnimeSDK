#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_3DE15EA7F53A0550.h"
#include "unitysdk/RPG/Client/MVVM/Model/LimaoNewsStateTag.h"

#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSSTATETAGVIEWMODEL_GET_STATETAG_OFFSET UNITYSDK_OFFSET(0x9AAFE10)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSSTATETAGVIEWMODEL_GET_SUBMITREWARDID_OFFSET UNITYSDK_OFFSET(0x9AAFE20)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSSTATETAGVIEWMODEL_SET_STATETAG_OFFSET UNITYSDK_OFFSET(0x9AAFCF0)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSSTATETAGVIEWMODEL_SET_SUBMITREWARDID_OFFSET UNITYSDK_OFFSET(0x9AAFD80)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSSTATETAGVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x9AAFBB0)

namespace RPG::Client::MVVM::ViewModel
{
	inline static constexpr unsigned int LimaoNewsStateTagViewModel_TypeDefinitionIndex = 60938;

	class LimaoNewsStateTagViewModel : public ::Class_2_3DE15EA7F53A0550
	{
	public:
		::RPG::Client::MVVM::Model::LimaoNewsStateTag _StateTag; // 0x18
		::System::UInt32 _SubmitRewardID; // 0x1C

		::System::Void _ctor(::RPG::Client::MVVM::Model::LimaoNewsStateTag stateTag, ::System::UInt32 submitRewardID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MVVM::Model::LimaoNewsStateTag, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSSTATETAGVIEWMODEL__CTOR_OFFSET))(this, stateTag, submitRewardID);
		}

		::RPG::Client::MVVM::Model::LimaoNewsStateTag get_StateTag()
		{
			return ((::RPG::Client::MVVM::Model::LimaoNewsStateTag(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSSTATETAGVIEWMODEL_GET_STATETAG_OFFSET))(this);
		}

		::System::Void set_StateTag(::RPG::Client::MVVM::Model::LimaoNewsStateTag value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MVVM::Model::LimaoNewsStateTag))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSSTATETAGVIEWMODEL_SET_STATETAG_OFFSET))(this, value);
		}

		::System::UInt32 get_SubmitRewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSSTATETAGVIEWMODEL_GET_SUBMITREWARDID_OFFSET))(this);
		}

		::System::Void set_SubmitRewardID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSSTATETAGVIEWMODEL_SET_SUBMITREWARDID_OFFSET))(this, value);
		}
	};
}
