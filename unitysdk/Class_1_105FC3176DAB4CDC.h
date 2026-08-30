#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IronTombProgressMode.h"
#include "unitysdk/System/Object.h"

class Class_1_3AB98DAE2BB28D1E;
namespace RPG::GameCore { class IronTombNormalModeThresholdConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_1_105FC3176DAB4CDC_CLEAR_OFFSET UNITYSDK_OFFSET(0x18235840)
#define CLASS_1_105FC3176DAB4CDC_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x18235C80)
#define CLASS_1_105FC3176DAB4CDC_GET_NORMALMODETHRESHOLDCONFIG_OFFSET UNITYSDK_OFFSET(0x18235C60)
#define CLASS_1_105FC3176DAB4CDC_GET_PROGRESSMODE_OFFSET UNITYSDK_OFFSET(0x18235BE0)
#define CLASS_1_105FC3176DAB4CDC_METHOD_1_0093FF1335E94929_OFFSET UNITYSDK_OFFSET(0x18235AB0)
#define CLASS_1_105FC3176DAB4CDC_METHOD_1_0113B02AE024480A_OFFSET UNITYSDK_OFFSET(0x182355F0)
#define CLASS_1_105FC3176DAB4CDC_METHOD_1_1A54E3DF1B02B1B9_OFFSET UNITYSDK_OFFSET(0x182359F0)
#define CLASS_1_105FC3176DAB4CDC_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x182359B0)
#define CLASS_1_105FC3176DAB4CDC_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x18235C10)
#define CLASS_1_105FC3176DAB4CDC_METHOD_1_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x182356F0)
#define CLASS_1_105FC3176DAB4CDC_METHOD_1_B64C60973842FE45_OFFSET UNITYSDK_OFFSET(0x18235750)
#define CLASS_1_105FC3176DAB4CDC_METHOD_1_C04C10246EBC8F79_OFFSET UNITYSDK_OFFSET(0x182358D0)
#define CLASS_1_105FC3176DAB4CDC_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x18235C00)
#define CLASS_1_105FC3176DAB4CDC_METHOD_1_D20BF56E36607D54_OFFSET UNITYSDK_OFFSET(0x18235B90)
#define CLASS_1_105FC3176DAB4CDC_METHOD_1_D7DDA895983CCCB2_OFFSET UNITYSDK_OFFSET(0x18235940)
#define CLASS_1_105FC3176DAB4CDC_SET_DURATION_OFFSET UNITYSDK_OFFSET(0x18235C90)
#define CLASS_1_105FC3176DAB4CDC_SET_NORMALMODETHRESHOLDCONFIG_OFFSET UNITYSDK_OFFSET(0x18235C70)
#define CLASS_1_105FC3176DAB4CDC_SET_PROGRESSMODE_OFFSET UNITYSDK_OFFSET(0x18235BF0)
#define CLASS_1_105FC3176DAB4CDC__CTOR_OFFSET UNITYSDK_OFFSET(0x182356E0)

inline static constexpr unsigned int Class_1_105FC3176DAB4CDC_TypeDefinitionIndex = 55717;

class Class_1_105FC3176DAB4CDC : public ::System::Object
{
public:
	// static const ::System::Int32 ADBJELLGJAG = 0x64; // 0x0
	::Class_1_3AB98DAE2BB28D1E* _NormalModeThresholdConfig_k__BackingField; // 0x10
	::RPG::GameCore::IronTombProgressMode _ProgressMode_k__BackingField; // 0x18
	::System::Single _Duration_k__BackingField; // 0x1C
	::System::Int32 LKBKDNAMNEG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_105FC3176DAB4CDC__CTOR_OFFSET))(this);
	}

	static ::Class_1_105FC3176DAB4CDC* Method_1_0113B02AE024480A(::RPG::GameCore::IronTombProgressMode a1, ::System::Int32 a2, ::RPG::GameCore::IronTombNormalModeThresholdConfig* a3, ::System::Single a4, ::RPG::GameCore::TaskContext* a5)
	{
		return ((::Class_1_105FC3176DAB4CDC*(*)(::RPG::GameCore::IronTombProgressMode, ::System::Int32, ::RPG::GameCore::IronTombNormalModeThresholdConfig*, ::System::Single, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_105FC3176DAB4CDC_METHOD_1_0113B02AE024480A_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::Class_1_105FC3176DAB4CDC* Method_1_B64C60973842FE45()
	{
		return ((::Class_1_105FC3176DAB4CDC*(*)())((::PBYTE)hIl2Cpp + CLASS_1_105FC3176DAB4CDC_METHOD_1_B64C60973842FE45_OFFSET))();
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_105FC3176DAB4CDC_CLEAR_OFFSET))(this);
	}

	::System::Boolean Method_1_C04C10246EBC8F79(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_105FC3176DAB4CDC_METHOD_1_C04C10246EBC8F79_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D7DDA895983CCCB2(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_105FC3176DAB4CDC_METHOD_1_D7DDA895983CCCB2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_105FC3176DAB4CDC_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_1A54E3DF1B02B1B9(::Class_1_105FC3176DAB4CDC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_105FC3176DAB4CDC*))((::PBYTE)hIl2Cpp + CLASS_1_105FC3176DAB4CDC_METHOD_1_1A54E3DF1B02B1B9_OFFSET))(this, a1);
	}

	::System::Void Method_1_0093FF1335E94929(::RPG::GameCore::IronTombProgressMode a1, ::System::Int32 a2, ::RPG::GameCore::IronTombNormalModeThresholdConfig* a3, ::System::Single a4, ::RPG::GameCore::TaskContext* a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IronTombProgressMode, ::System::Int32, ::RPG::GameCore::IronTombNormalModeThresholdConfig*, ::System::Single, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_105FC3176DAB4CDC_METHOD_1_0093FF1335E94929_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_D20BF56E36607D54(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_105FC3176DAB4CDC_METHOD_1_D20BF56E36607D54_OFFSET))(this, a1);
	}

	::RPG::GameCore::IronTombProgressMode get_ProgressMode()
	{
		return ((::RPG::GameCore::IronTombProgressMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_105FC3176DAB4CDC_GET_PROGRESSMODE_OFFSET))(this);
	}

	::System::Void set_ProgressMode(::RPG::GameCore::IronTombProgressMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IronTombProgressMode))((::PBYTE)hIl2Cpp + CLASS_1_105FC3176DAB4CDC_SET_PROGRESSMODE_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_105FC3176DAB4CDC_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_105FC3176DAB4CDC_METHOD_1_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_105FC3176DAB4CDC_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	::Class_1_3AB98DAE2BB28D1E* get_NormalModeThresholdConfig()
	{
		return ((::Class_1_3AB98DAE2BB28D1E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_105FC3176DAB4CDC_GET_NORMALMODETHRESHOLDCONFIG_OFFSET))(this);
	}

	::System::Void set_NormalModeThresholdConfig(::Class_1_3AB98DAE2BB28D1E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3AB98DAE2BB28D1E*))((::PBYTE)hIl2Cpp + CLASS_1_105FC3176DAB4CDC_SET_NORMALMODETHRESHOLDCONFIG_OFFSET))(this, a1);
	}

	::System::Single get_Duration()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_105FC3176DAB4CDC_GET_DURATION_OFFSET))(this);
	}

	::System::Void set_Duration(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_105FC3176DAB4CDC_SET_DURATION_OFFSET))(this, a1);
	}
};
