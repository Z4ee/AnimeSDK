#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHAVELOCKTARGETINCAMERA_METHOD_4_0802E2A22724B1FD_OFFSET UNITYSDK_OFFSET(0x1BBE6830)
#define RPG_GAMECORE_BYHAVELOCKTARGETINCAMERA_METHOD_4_13E8DEB4CBAB4382_OFFSET UNITYSDK_OFFSET(0x1BBE66C0)
#define RPG_GAMECORE_BYHAVELOCKTARGETINCAMERA_METHOD_4_85BB37E2F5D96F3C_OFFSET UNITYSDK_OFFSET(0x1BBE6800)
#define RPG_GAMECORE_BYHAVELOCKTARGETINCAMERA_METHOD_4_CEC5190B5BEEE879_OFFSET UNITYSDK_OFFSET(0x1BBE6680)
#define RPG_GAMECORE_BYHAVELOCKTARGETINCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBE66B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHaveLockTargetInCamera_TypeDefinitionIndex = 20547;

	class ByHaveLockTargetInCamera : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVELOCKTARGETINCAMERA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_CEC5190B5BEEE879(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHaveLockTargetInCamera*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHaveLockTargetInCamera*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVELOCKTARGETINCAMERA_METHOD_4_CEC5190B5BEEE879_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_13E8DEB4CBAB4382(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHaveLockTargetInCamera* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHaveLockTargetInCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVELOCKTARGETINCAMERA_METHOD_4_13E8DEB4CBAB4382_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_85BB37E2F5D96F3C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveLockTargetInCamera*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveLockTargetInCamera*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVELOCKTARGETINCAMERA_METHOD_4_85BB37E2F5D96F3C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0802E2A22724B1FD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveLockTargetInCamera* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveLockTargetInCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVELOCKTARGETINCAMERA_METHOD_4_0802E2A22724B1FD_OFFSET))(a1, a2);
		}
	};
}
