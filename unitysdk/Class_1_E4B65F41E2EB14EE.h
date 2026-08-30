#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LevelNPCInfoOverride; }
namespace RPG::GameCore { class VisitorBehaviorConfigRow; }

#define CLASS_1_E4B65F41E2EB14EE_GET_BEHAVIORID_OFFSET UNITYSDK_OFFSET(0xBCE5960)
#define CLASS_1_E4B65F41E2EB14EE_GET_ISMEET_OFFSET UNITYSDK_OFFSET(0xBCE5980)
#define CLASS_1_E4B65F41E2EB14EE_GET_OVERRIDEINFO_OFFSET UNITYSDK_OFFSET(0xBCE5A40)
#define CLASS_1_E4B65F41E2EB14EE_GET_VISITORID_OFFSET UNITYSDK_OFFSET(0xBCE5940)
#define CLASS_1_E4B65F41E2EB14EE_METHOD_1_259B533085E399D3_OFFSET UNITYSDK_OFFSET(0xBCE5A60)
#define CLASS_1_E4B65F41E2EB14EE_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0xBCE59A0)
#define CLASS_1_E4B65F41E2EB14EE_METHOD_1_AA2D3E889C8A52CA_1_OFFSET UNITYSDK_OFFSET(0xBCE58A0)
#define CLASS_1_E4B65F41E2EB14EE_METHOD_1_AA2D3E889C8A52CA_2_OFFSET UNITYSDK_OFFSET(0xBCE58F0)
#define CLASS_1_E4B65F41E2EB14EE_METHOD_1_AA2D3E889C8A52CA_3_OFFSET UNITYSDK_OFFSET(0xBCE59F0)
#define CLASS_1_E4B65F41E2EB14EE_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0xBCE5850)
#define CLASS_1_E4B65F41E2EB14EE_SET_BEHAVIORID_OFFSET UNITYSDK_OFFSET(0xBCE5970)
#define CLASS_1_E4B65F41E2EB14EE_SET_ISMEET_OFFSET UNITYSDK_OFFSET(0xBCE5990)
#define CLASS_1_E4B65F41E2EB14EE_SET_OVERRIDEINFO_OFFSET UNITYSDK_OFFSET(0xBCE5A50)
#define CLASS_1_E4B65F41E2EB14EE_SET_VISITORID_OFFSET UNITYSDK_OFFSET(0xBCE5950)
#define CLASS_1_E4B65F41E2EB14EE__CTOR_OFFSET UNITYSDK_OFFSET(0xBCE55F0)

inline static constexpr unsigned int Class_1_E4B65F41E2EB14EE_TypeDefinitionIndex = 68151;

class Class_1_E4B65F41E2EB14EE : public ::System::Object
{
public:
	::RPG::GameCore::LevelNPCInfoOverride* _OverrideInfo_k__BackingField; // 0x10
	::RPG::GameCore::VisitorBehaviorConfigRow* IGHAHBNLIJA; // 0x18
	::System::Boolean _IsMeet_k__BackingField; // 0x20
	::System::UInt32 _BehaviorID_k__BackingField; // 0x24
	::System::UInt32 _VisitorID_k__BackingField; // 0x28

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E4B65F41E2EB14EE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::UInt32 get_VisitorID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4B65F41E2EB14EE_GET_VISITORID_OFFSET))(this);
	}

	::System::Void set_VisitorID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E4B65F41E2EB14EE_SET_VISITORID_OFFSET))(this, a1);
	}

	::System::UInt32 get_BehaviorID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4B65F41E2EB14EE_GET_BEHAVIORID_OFFSET))(this);
	}

	::System::Void set_BehaviorID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E4B65F41E2EB14EE_SET_BEHAVIORID_OFFSET))(this, a1);
	}

	::System::Boolean get_IsMeet()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4B65F41E2EB14EE_GET_ISMEET_OFFSET))(this);
	}

	::System::Void set_IsMeet(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E4B65F41E2EB14EE_SET_ISMEET_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E4B65F41E2EB14EE_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4B65F41E2EB14EE_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4B65F41E2EB14EE_METHOD_1_AA2D3E889C8A52CA_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4B65F41E2EB14EE_METHOD_1_AA2D3E889C8A52CA_2_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4B65F41E2EB14EE_METHOD_1_AA2D3E889C8A52CA_3_OFFSET))(this);
	}

	::RPG::GameCore::LevelNPCInfoOverride* get_OverrideInfo()
	{
		return ((::RPG::GameCore::LevelNPCInfoOverride*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4B65F41E2EB14EE_GET_OVERRIDEINFO_OFFSET))(this);
	}

	::System::Void set_OverrideInfo(::RPG::GameCore::LevelNPCInfoOverride* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelNPCInfoOverride*))((::PBYTE)hIl2Cpp + CLASS_1_E4B65F41E2EB14EE_SET_OVERRIDEINFO_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_259B533085E399D3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4B65F41E2EB14EE_METHOD_1_259B533085E399D3_OFFSET))(this);
	}
};
