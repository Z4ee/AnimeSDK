#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8F09310)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8F09350)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE___C__GETTRIALAVATARS_B__23_0_OFFSET UNITYSDK_OFFSET(0x8F09360)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityFeverTimeModule___c_TypeDefinitionIndex = 49910;

	class ActivityFeverTimeModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::IAvatarInfoProvider*>** StaticGet___9__23_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::IAvatarInfoProvider*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityFeverTimeModule___c_TypeDefinitionIndex)->GetStaticField(0x29BB0);
		}
		static ::RPG::Client::ActivityFeverTimeModule___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityFeverTimeModule___c**)Il2CppClass::FromTypeDefinitionIndex(ActivityFeverTimeModule___c_TypeDefinitionIndex)->GetStaticField(0x29BB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::IAvatarInfoProvider* _GetTrialAvatars_b__23_0(::System::UInt32 specialAvatarID)
		{
			return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE___C__GETTRIALAVATARS_B__23_0_OFFSET))(this, specialAvatarID);
		}
	};
}
