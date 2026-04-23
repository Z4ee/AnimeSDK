#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MissionWayPointType.h"
#include "unitysdk/System/Object.h"

class Class_1_ECBCF86CDE61CBCA;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SubMissionInfoConfig; }
namespace System { class String; }

#define CLASS_1_2FB4417C907E2514_GET_ISREGISTERREGIONCHANGE_OFFSET UNITYSDK_OFFSET(0x117C6EE0)
#define CLASS_1_2FB4417C907E2514_METHOD_1_16911FF547634FAF_OFFSET UNITYSDK_OFFSET(0x117C6E80)
#define CLASS_1_2FB4417C907E2514_METHOD_1_1E13A8A5C0FF7D62_OFFSET UNITYSDK_OFFSET(0x117C6790)
#define CLASS_1_2FB4417C907E2514_METHOD_1_3A371FE1A66DC309_OFFSET UNITYSDK_OFFSET(0x117C6A20)
#define CLASS_1_2FB4417C907E2514_METHOD_1_53B4F437767D44BA_OFFSET UNITYSDK_OFFSET(0x117C6AA0)
#define CLASS_1_2FB4417C907E2514_METHOD_1_B8B555F33BAC54D0_OFFSET UNITYSDK_OFFSET(0x117C6970)
#define CLASS_1_2FB4417C907E2514_SET_ISREGISTERREGIONCHANGE_OFFSET UNITYSDK_OFFSET(0x117C6EF0)
#define CLASS_1_2FB4417C907E2514_TOSTRING_OFFSET UNITYSDK_OFFSET(0x117C6B60)
#define CLASS_1_2FB4417C907E2514__CTOR_OFFSET UNITYSDK_OFFSET(0x117C6F00)
#define CLASS_1_2FB4417C907E2514___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x117C6F10)

inline static constexpr unsigned int Class_1_2FB4417C907E2514_TypeDefinitionIndex = 56171;

class Class_1_2FB4417C907E2514 : public ::System::Object
{
public:
	::System::UInt32 Field_1_2; // 0x10
	::System::UInt32 Field_1_0; // 0x14
	::RPG::GameCore::MissionWayPointType Field_1_4; // 0x18
	::System::UInt32 Field_1_3; // 0x1C
	::System::Boolean _IsRegisterRegionChange_k__BackingField; // 0x20
	::System::UInt32 Field_1_1; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FB4417C907E2514__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1E13A8A5C0FF7D62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FB4417C907E2514_METHOD_1_1E13A8A5C0FF7D62_OFFSET))(this);
	}

	::System::Void Method_1_B8B555F33BAC54D0(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_2FB4417C907E2514_METHOD_1_B8B555F33BAC54D0_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_3A371FE1A66DC309(::RPG::GameCore::SubMissionInfoConfig* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::SubMissionInfoConfig*))((::PBYTE)hIl2Cpp + CLASS_1_2FB4417C907E2514_METHOD_1_3A371FE1A66DC309_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_53B4F437767D44BA(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_2FB4417C907E2514_METHOD_1_53B4F437767D44BA_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FB4417C907E2514_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_1_16911FF547634FAF(::Class_1_ECBCF86CDE61CBCA* a1, ::Class_1_ECBCF86CDE61CBCA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ECBCF86CDE61CBCA*, ::Class_1_ECBCF86CDE61CBCA*))((::PBYTE)hIl2Cpp + CLASS_1_2FB4417C907E2514_METHOD_1_16911FF547634FAF_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_IsRegisterRegionChange()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FB4417C907E2514_GET_ISREGISTERREGIONCHANGE_OFFSET))(this);
	}

	::System::Void set_IsRegisterRegionChange(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2FB4417C907E2514_SET_ISREGISTERREGIONCHANGE_OFFSET))(this, value);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FB4417C907E2514___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
