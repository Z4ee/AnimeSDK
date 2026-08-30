#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_4F3230E81B5CCA49.h"
#include "unitysdk/RPG/GameCore/ActivitySubModeType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_3_9AC44AECA5589F32_GET_ACTIVITYSUBMODETYPE_OFFSET UNITYSDK_OFFSET(0x1A0869D0)
#define CLASS_3_9AC44AECA5589F32_GET_CURSPOTLIGHT_OFFSET UNITYSDK_OFFSET(0x1A087160)
#define CLASS_3_9AC44AECA5589F32_GET_MAXSPOTLIGHT_OFFSET UNITYSDK_OFFSET(0x1A087180)
#define CLASS_3_9AC44AECA5589F32_GET_STYLEEXP_OFFSET UNITYSDK_OFFSET(0x1A087140)
#define CLASS_3_9AC44AECA5589F32_GET_STYLEID_OFFSET UNITYSDK_OFFSET(0x1A087100)
#define CLASS_3_9AC44AECA5589F32_GET_STYLELEVEL_OFFSET UNITYSDK_OFFSET(0x1A087120)
#define CLASS_3_9AC44AECA5589F32_METHOD_3_00135C7FD2981F66_OFFSET UNITYSDK_OFFSET(0x1A086BB0)
#define CLASS_3_9AC44AECA5589F32_METHOD_3_441A337071A19F2A_OFFSET UNITYSDK_OFFSET(0x1A086F50)
#define CLASS_3_9AC44AECA5589F32_METHOD_3_7430C69E6A62A4FC_OFFSET UNITYSDK_OFFSET(0x1A086AA0)
#define CLASS_3_9AC44AECA5589F32_METHOD_3_7965052C3A01DCA5_OFFSET UNITYSDK_OFFSET(0x1A087060)
#define CLASS_3_9AC44AECA5589F32_METHOD_3_AF930CE757E9BBF8_OFFSET UNITYSDK_OFFSET(0x1A086B10)
#define CLASS_3_9AC44AECA5589F32_ONBATTLEINSTANCECREATED_OFFSET UNITYSDK_OFFSET(0x1A0869E0)
#define CLASS_3_9AC44AECA5589F32_SET_CURSPOTLIGHT_OFFSET UNITYSDK_OFFSET(0x1A087170)
#define CLASS_3_9AC44AECA5589F32_SET_MAXSPOTLIGHT_OFFSET UNITYSDK_OFFSET(0x1A087190)
#define CLASS_3_9AC44AECA5589F32_SET_STYLEEXP_OFFSET UNITYSDK_OFFSET(0x1A087150)
#define CLASS_3_9AC44AECA5589F32_SET_STYLEID_OFFSET UNITYSDK_OFFSET(0x1A087110)
#define CLASS_3_9AC44AECA5589F32_SET_STYLELEVEL_OFFSET UNITYSDK_OFFSET(0x1A087130)
#define CLASS_3_9AC44AECA5589F32__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0871A0)

inline static constexpr unsigned int Class_3_9AC44AECA5589F32_TypeDefinitionIndex = 56203;

class Class_3_9AC44AECA5589F32 : public ::Class_2_4F3230E81B5CCA49
{
public:
	::RPG::GameCore::GameEntity* NAELCJFONDB; // 0x48
	::RPG::GameCore::FixPoint _CurSpotlight_k__BackingField; // 0x50
	::RPG::GameCore::FixPoint _MaxSpotlight_k__BackingField; // 0x58
	::System::UInt32 _StyleLevel_k__BackingField; // 0x60
	::System::UInt32 _StyleExp_k__BackingField; // 0x64
	::System::UInt32 _StyleID_k__BackingField; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9AC44AECA5589F32__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::ActivitySubModeType get_ActivitySubModeType()
	{
		return ((::RPG::GameCore::ActivitySubModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9AC44AECA5589F32_GET_ACTIVITYSUBMODETYPE_OFFSET))(this);
	}

	::System::Void OnBattleInstanceCreated()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9AC44AECA5589F32_ONBATTLEINSTANCECREATED_OFFSET))(this);
	}

	::System::Void Method_3_7430C69E6A62A4FC(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_9AC44AECA5589F32_METHOD_3_7430C69E6A62A4FC_OFFSET))(this, a1);
	}

	::System::Void Method_3_00135C7FD2981F66(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_9AC44AECA5589F32_METHOD_3_00135C7FD2981F66_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_AF930CE757E9BBF8(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_9AC44AECA5589F32_METHOD_3_AF930CE757E9BBF8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_7965052C3A01DCA5(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_9AC44AECA5589F32_METHOD_3_7965052C3A01DCA5_OFFSET))(this, a1, a2);
	}

	::System::UInt32 get_StyleID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9AC44AECA5589F32_GET_STYLEID_OFFSET))(this);
	}

	::System::Void set_StyleID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_9AC44AECA5589F32_SET_STYLEID_OFFSET))(this, a1);
	}

	::System::UInt32 get_StyleLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9AC44AECA5589F32_GET_STYLELEVEL_OFFSET))(this);
	}

	::System::Void set_StyleLevel(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_9AC44AECA5589F32_SET_STYLELEVEL_OFFSET))(this, a1);
	}

	::System::UInt32 get_StyleExp()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9AC44AECA5589F32_GET_STYLEEXP_OFFSET))(this);
	}

	::System::Void set_StyleExp(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_9AC44AECA5589F32_SET_STYLEEXP_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_CurSpotlight()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9AC44AECA5589F32_GET_CURSPOTLIGHT_OFFSET))(this);
	}

	::System::Void set_CurSpotlight(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_9AC44AECA5589F32_SET_CURSPOTLIGHT_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_MaxSpotlight()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9AC44AECA5589F32_GET_MAXSPOTLIGHT_OFFSET))(this);
	}

	::System::Void set_MaxSpotlight(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_9AC44AECA5589F32_SET_MAXSPOTLIGHT_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_3_441A337071A19F2A()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9AC44AECA5589F32_METHOD_3_441A337071A19F2A_OFFSET))(this);
	}
};
