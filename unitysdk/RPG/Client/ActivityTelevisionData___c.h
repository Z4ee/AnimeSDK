#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYTELEVISIONDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB214370)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB2143B0)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA___C__GETTRIALAVATARS_B__5_0_OFFSET UNITYSDK_OFFSET(0xB2143C0)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA___C__ISPRELEVELFINISHED_B__6_0_OFFSET UNITYSDK_OFFSET(0xB2143D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityTelevisionData___c_TypeDefinitionIndex = 57980;

	class ActivityTelevisionData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::AvatarSystem::IAvatar*>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::AvatarSystem::IAvatar*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityTelevisionData___c_TypeDefinitionIndex)->GetStaticField(0x5B9F0);
		}
		static ::RPG::Client::ActivityTelevisionData___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityTelevisionData___c**)Il2CppClass::FromTypeDefinitionIndex(ActivityTelevisionData___c_TypeDefinitionIndex)->GetStaticField(0x5B9F8);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ActivityTelevisionData___c_TypeDefinitionIndex)->GetStaticField(0x5BA00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA___C__CTOR_OFFSET))(this);
		}

		::RPG::AvatarSystem::IAvatar* _GetTrialAvatars_b__5_0(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA___C__GETTRIALAVATARS_B__5_0_OFFSET))(this, a1);
		}

		::System::Boolean _IsPreLevelFinished_b__6_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA___C__ISPRELEVELFINISHED_B__6_0_OFFSET))(this, a1);
		}
	};
}
