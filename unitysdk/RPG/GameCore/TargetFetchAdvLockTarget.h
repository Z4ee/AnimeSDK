#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHADVLOCKTARGET_METHOD_4_3BF9131457BBBA6B_OFFSET UNITYSDK_OFFSET(0x1D0B2E80)
#define RPG_GAMECORE_TARGETFETCHADVLOCKTARGET_METHOD_4_3FDCF70080D9C1D3_OFFSET UNITYSDK_OFFSET(0x1D0B2DE0)
#define RPG_GAMECORE_TARGETFETCHADVLOCKTARGET_METHOD_4_AED67D417B9291D2_OFFSET UNITYSDK_OFFSET(0x1D0B2D40)
#define RPG_GAMECORE_TARGETFETCHADVLOCKTARGET_METHOD_4_E9770F8EA2D951C7_OFFSET UNITYSDK_OFFSET(0x1D0B2E40)
#define RPG_GAMECORE_TARGETFETCHADVLOCKTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0B2DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAdvLockTarget_TypeDefinitionIndex = 23062;

	class TargetFetchAdvLockTarget : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVLOCKTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_AED67D417B9291D2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvLockTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvLockTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVLOCKTARGET_METHOD_4_AED67D417B9291D2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3FDCF70080D9C1D3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvLockTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvLockTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVLOCKTARGET_METHOD_4_3FDCF70080D9C1D3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E9770F8EA2D951C7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvLockTarget*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvLockTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVLOCKTARGET_METHOD_4_E9770F8EA2D951C7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3BF9131457BBBA6B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvLockTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvLockTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVLOCKTARGET_METHOD_4_3BF9131457BBBA6B_OFFSET))(a1, a2);
		}
	};
}
