#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHADVLOCKTARGET_METHOD_4_3BF9131457BBBA6B_OFFSET UNITYSDK_OFFSET(0x19D08A20)
#define RPG_GAMECORE_TARGETFETCHADVLOCKTARGET_METHOD_4_3FDCF70080D9C1D3_OFFSET UNITYSDK_OFFSET(0x19CF4FF0)
#define RPG_GAMECORE_TARGETFETCHADVLOCKTARGET_METHOD_4_9A05F6F660D98812_OFFSET UNITYSDK_OFFSET(0x19D033E0)
#define RPG_GAMECORE_TARGETFETCHADVLOCKTARGET_METHOD_4_C5DB0049B1146EC5_OFFSET UNITYSDK_OFFSET(0x19D08940)
#define RPG_GAMECORE_TARGETFETCHADVLOCKTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x19CF4FA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAdvLockTarget_TypeDefinitionIndex = 22599;

	class TargetFetchAdvLockTarget : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVLOCKTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C5DB0049B1146EC5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvLockTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvLockTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVLOCKTARGET_METHOD_4_C5DB0049B1146EC5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3FDCF70080D9C1D3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvLockTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvLockTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVLOCKTARGET_METHOD_4_3FDCF70080D9C1D3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9A05F6F660D98812(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvLockTarget*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvLockTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVLOCKTARGET_METHOD_4_9A05F6F660D98812_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3BF9131457BBBA6B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvLockTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvLockTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVLOCKTARGET_METHOD_4_3BF9131457BBBA6B_OFFSET))(a1, a2);
		}
	};
}
