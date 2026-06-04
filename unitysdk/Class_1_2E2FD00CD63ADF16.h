#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MissionWayPointType.h"
#include "unitysdk/System/Object.h"

class Class_1_616F89B5F43D1E61;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SubMissionInfoConfig; }
namespace System { class String; }

#define CLASS_1_2E2FD00CD63ADF16_GET_ISREGISTERREGIONCHANGE_OFFSET UNITYSDK_OFFSET(0xCEBB280)
#define CLASS_1_2E2FD00CD63ADF16_METHOD_1_1E13A8A5C0FF7D62_OFFSET UNITYSDK_OFFSET(0xCEBAB90)
#define CLASS_1_2E2FD00CD63ADF16_METHOD_1_3A371FE1A66DC309_OFFSET UNITYSDK_OFFSET(0xCEBAE30)
#define CLASS_1_2E2FD00CD63ADF16_METHOD_1_40C9BB44984716C6_OFFSET UNITYSDK_OFFSET(0xCEBB220)
#define CLASS_1_2E2FD00CD63ADF16_METHOD_1_53B4F437767D44BA_OFFSET UNITYSDK_OFFSET(0xCEBAEB0)
#define CLASS_1_2E2FD00CD63ADF16_METHOD_1_B8B555F33BAC54D0_OFFSET UNITYSDK_OFFSET(0xCEBAD80)
#define CLASS_1_2E2FD00CD63ADF16_SET_ISREGISTERREGIONCHANGE_OFFSET UNITYSDK_OFFSET(0xCEBB290)
#define CLASS_1_2E2FD00CD63ADF16_TOSTRING_OFFSET UNITYSDK_OFFSET(0xCEBAF70)
#define CLASS_1_2E2FD00CD63ADF16__CTOR_OFFSET UNITYSDK_OFFSET(0xCEBB2A0)
#define CLASS_1_2E2FD00CD63ADF16___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xCEBB2B0)

inline static constexpr unsigned int Class_1_2E2FD00CD63ADF16_TypeDefinitionIndex = 56933;

class Class_1_2E2FD00CD63ADF16 : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10
	::System::Boolean _IsRegisterRegionChange_k__BackingField; // 0x14
	::RPG::GameCore::MissionWayPointType Field_1_2; // 0x18
	::System::UInt32 Field_1_3; // 0x1C
	::System::UInt32 Field_1_4; // 0x20
	::System::UInt32 Field_1_5; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E2FD00CD63ADF16__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1E13A8A5C0FF7D62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E2FD00CD63ADF16_METHOD_1_1E13A8A5C0FF7D62_OFFSET))(this);
	}

	::System::Void Method_1_B8B555F33BAC54D0(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_2E2FD00CD63ADF16_METHOD_1_B8B555F33BAC54D0_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_3A371FE1A66DC309(::RPG::GameCore::SubMissionInfoConfig* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::SubMissionInfoConfig*))((::PBYTE)hIl2Cpp + CLASS_1_2E2FD00CD63ADF16_METHOD_1_3A371FE1A66DC309_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_53B4F437767D44BA(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_2E2FD00CD63ADF16_METHOD_1_53B4F437767D44BA_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E2FD00CD63ADF16_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_1_40C9BB44984716C6(::Class_1_616F89B5F43D1E61* a1, ::Class_1_616F89B5F43D1E61* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_616F89B5F43D1E61*, ::Class_1_616F89B5F43D1E61*))((::PBYTE)hIl2Cpp + CLASS_1_2E2FD00CD63ADF16_METHOD_1_40C9BB44984716C6_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_IsRegisterRegionChange()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E2FD00CD63ADF16_GET_ISREGISTERREGIONCHANGE_OFFSET))(this);
	}

	::System::Void set_IsRegisterRegionChange(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2E2FD00CD63ADF16_SET_ISREGISTERREGIONCHANGE_OFFSET))(this, a1);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E2FD00CD63ADF16___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
