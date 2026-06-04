#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LevelNPCInfoOverride; }
namespace RPG::GameCore { class VisitorBehaviorConfigRow; }

#define CLASS_1_7CEC8DBE7729999B_GET_BEHAVIORID_OFFSET UNITYSDK_OFFSET(0xA952BD0)
#define CLASS_1_7CEC8DBE7729999B_GET_ISMEET_OFFSET UNITYSDK_OFFSET(0xA952BF0)
#define CLASS_1_7CEC8DBE7729999B_GET_OVERRIDEINFO_OFFSET UNITYSDK_OFFSET(0xA952C80)
#define CLASS_1_7CEC8DBE7729999B_GET_VISITORID_OFFSET UNITYSDK_OFFSET(0xA952BB0)
#define CLASS_1_7CEC8DBE7729999B_METHOD_1_259B533085E399D3_OFFSET UNITYSDK_OFFSET(0xA952CA0)
#define CLASS_1_7CEC8DBE7729999B_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0xA952C10)
#define CLASS_1_7CEC8DBE7729999B_METHOD_1_D978819B0A4871A0_1_OFFSET UNITYSDK_OFFSET(0xA952B70)
#define CLASS_1_7CEC8DBE7729999B_METHOD_1_D978819B0A4871A0_2_OFFSET UNITYSDK_OFFSET(0xA952B90)
#define CLASS_1_7CEC8DBE7729999B_METHOD_1_D978819B0A4871A0_3_OFFSET UNITYSDK_OFFSET(0xA952C60)
#define CLASS_1_7CEC8DBE7729999B_METHOD_1_D978819B0A4871A0_OFFSET UNITYSDK_OFFSET(0xA952B50)
#define CLASS_1_7CEC8DBE7729999B_SET_BEHAVIORID_OFFSET UNITYSDK_OFFSET(0xA952BE0)
#define CLASS_1_7CEC8DBE7729999B_SET_ISMEET_OFFSET UNITYSDK_OFFSET(0xA952C00)
#define CLASS_1_7CEC8DBE7729999B_SET_OVERRIDEINFO_OFFSET UNITYSDK_OFFSET(0xA952C90)
#define CLASS_1_7CEC8DBE7729999B_SET_VISITORID_OFFSET UNITYSDK_OFFSET(0xA952BC0)
#define CLASS_1_7CEC8DBE7729999B__CTOR_OFFSET UNITYSDK_OFFSET(0xA952A40)

inline static constexpr unsigned int Class_1_7CEC8DBE7729999B_TypeDefinitionIndex = 63775;

class Class_1_7CEC8DBE7729999B : public ::System::Object
{
public:
	::RPG::GameCore::LevelNPCInfoOverride* _OverrideInfo_k__BackingField; // 0x10
	::RPG::GameCore::VisitorBehaviorConfigRow* Field_1_1; // 0x18
	::System::UInt32 _BehaviorID_k__BackingField; // 0x20
	::System::Boolean _IsMeet_k__BackingField; // 0x24
	::System::UInt32 _VisitorID_k__BackingField; // 0x28

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7CEC8DBE7729999B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::UInt32 get_VisitorID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7CEC8DBE7729999B_GET_VISITORID_OFFSET))(this);
	}

	::System::Void set_VisitorID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7CEC8DBE7729999B_SET_VISITORID_OFFSET))(this, a1);
	}

	::System::UInt32 get_BehaviorID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7CEC8DBE7729999B_GET_BEHAVIORID_OFFSET))(this);
	}

	::System::Void set_BehaviorID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7CEC8DBE7729999B_SET_BEHAVIORID_OFFSET))(this, a1);
	}

	::System::Boolean get_IsMeet()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7CEC8DBE7729999B_GET_ISMEET_OFFSET))(this);
	}

	::System::Void set_IsMeet(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7CEC8DBE7729999B_SET_ISMEET_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7CEC8DBE7729999B_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_D978819B0A4871A0()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7CEC8DBE7729999B_METHOD_1_D978819B0A4871A0_OFFSET))(this);
	}

	::System::UInt32 Method_1_D978819B0A4871A0_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7CEC8DBE7729999B_METHOD_1_D978819B0A4871A0_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_D978819B0A4871A0_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7CEC8DBE7729999B_METHOD_1_D978819B0A4871A0_2_OFFSET))(this);
	}

	::System::UInt32 Method_1_D978819B0A4871A0_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7CEC8DBE7729999B_METHOD_1_D978819B0A4871A0_3_OFFSET))(this);
	}

	::RPG::GameCore::LevelNPCInfoOverride* get_OverrideInfo()
	{
		return ((::RPG::GameCore::LevelNPCInfoOverride*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7CEC8DBE7729999B_GET_OVERRIDEINFO_OFFSET))(this);
	}

	::System::Void set_OverrideInfo(::RPG::GameCore::LevelNPCInfoOverride* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelNPCInfoOverride*))((::PBYTE)hIl2Cpp + CLASS_1_7CEC8DBE7729999B_SET_OVERRIDEINFO_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_259B533085E399D3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7CEC8DBE7729999B_METHOD_1_259B533085E399D3_OFFSET))(this);
	}
};
