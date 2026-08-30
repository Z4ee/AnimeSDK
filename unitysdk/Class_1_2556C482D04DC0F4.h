#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/B51RacingTREventType.h"
#include "unitysdk/System/Object.h"

class Class_2_230F5EDDB35DAEBA;
class Class_2_D55679E3C796A7AF;
class Class_3_CD59F26A5F0E803D;
namespace RPG::Client::RoadRash { class MonoRoadRashGameSettings; }
namespace RPG::Client::RoadRash { class RoadRashGameSettingsConfigure_RoadRashTREventDetectorConfig; }
namespace RPG::GameCore { class B51RacingTREventRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2556C482D04DC0F4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E39BE0)
#define CLASS_1_2556C482D04DC0F4_GET_DETECTORCONFIG_OFFSET UNITYSDK_OFFSET(0x15E39C80)
#define CLASS_1_2556C482D04DC0F4_METHOD_1_08281B4C71E16810_OFFSET UNITYSDK_OFFSET(0x15E39CA0)
#define CLASS_1_2556C482D04DC0F4_METHOD_1_20663BD6D0167792_OFFSET UNITYSDK_OFFSET(0x15E3A9E0)
#define CLASS_1_2556C482D04DC0F4_METHOD_1_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0x15E3A830)
#define CLASS_1_2556C482D04DC0F4_METHOD_1_CBDC22058B67F0FE_OFFSET UNITYSDK_OFFSET(0x15E39F60)
#define CLASS_1_2556C482D04DC0F4_METHOD_1_CF6753EE614BC357_OFFSET UNITYSDK_OFFSET(0x15E3A2F0)
#define CLASS_1_2556C482D04DC0F4_METHOD_1_F6D5B77FE5FB5EE1_OFFSET UNITYSDK_OFFSET(0x15E3A680)
#define CLASS_1_2556C482D04DC0F4_METHOD_1_F79597C89908C205_OFFSET UNITYSDK_OFFSET(0x15E3A610)
#define CLASS_1_2556C482D04DC0F4_SET_DETECTORCONFIG_OFFSET UNITYSDK_OFFSET(0x15E39C90)
#define CLASS_1_2556C482D04DC0F4__CTOR_OFFSET UNITYSDK_OFFSET(0x15E39B00)

inline static constexpr unsigned int Class_1_2556C482D04DC0F4_TypeDefinitionIndex = 75511;

class Class_1_2556C482D04DC0F4 : public ::System::Object
{
public:
	::Class_2_D55679E3C796A7AF* EEFMDEHLLFI; // 0x10
	::Class_3_CD59F26A5F0E803D* PDENFEFCAGN; // 0x18
	::RPG::Client::RoadRash::RoadRashGameSettingsConfigure_RoadRashTREventDetectorConfig* _DetectorConfig_k__BackingField; // 0x20
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingTREventType, ::System::Collections::Generic::List_1<::System::UInt32>*>* CMDHEKHIKIK; // 0x28

	::System::Void _ctor(::Class_2_D55679E3C796A7AF* a1, ::Class_3_CD59F26A5F0E803D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D55679E3C796A7AF*, ::Class_3_CD59F26A5F0E803D*))((::PBYTE)hIl2Cpp + CLASS_1_2556C482D04DC0F4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2556C482D04DC0F4_DISPOSE_OFFSET))(this);
	}

	::RPG::Client::RoadRash::RoadRashGameSettingsConfigure_RoadRashTREventDetectorConfig* get_DetectorConfig()
	{
		return ((::RPG::Client::RoadRash::RoadRashGameSettingsConfigure_RoadRashTREventDetectorConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2556C482D04DC0F4_GET_DETECTORCONFIG_OFFSET))(this);
	}

	::System::Void set_DetectorConfig(::RPG::Client::RoadRash::RoadRashGameSettingsConfigure_RoadRashTREventDetectorConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RoadRash::RoadRashGameSettingsConfigure_RoadRashTREventDetectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_2556C482D04DC0F4_SET_DETECTORCONFIG_OFFSET))(this, a1);
	}

	::System::Void Method_1_08281B4C71E16810(::RPG::Client::RoadRash::MonoRoadRashGameSettings* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RoadRash::MonoRoadRashGameSettings*))((::PBYTE)hIl2Cpp + CLASS_1_2556C482D04DC0F4_METHOD_1_08281B4C71E16810_OFFSET))(this, a1);
	}

	::System::Void Method_1_CBDC22058B67F0FE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2556C482D04DC0F4_METHOD_1_CBDC22058B67F0FE_OFFSET))(this);
	}

	::System::Boolean Method_1_CF6753EE614BC357(::Class_2_230F5EDDB35DAEBA* a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_230F5EDDB35DAEBA*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2556C482D04DC0F4_METHOD_1_CF6753EE614BC357_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_F6D5B77FE5FB5EE1(::Class_2_230F5EDDB35DAEBA* a1, ::RPG::GameCore::B51RacingTREventType a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_230F5EDDB35DAEBA*, ::RPG::GameCore::B51RacingTREventType))((::PBYTE)hIl2Cpp + CLASS_1_2556C482D04DC0F4_METHOD_1_F6D5B77FE5FB5EE1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_85377D41FEE05B66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2556C482D04DC0F4_METHOD_1_85377D41FEE05B66_OFFSET))(this);
	}

	::System::Boolean Method_1_F79597C89908C205(::RPG::GameCore::B51RacingTREventRow* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::B51RacingTREventRow*))((::PBYTE)hIl2Cpp + CLASS_1_2556C482D04DC0F4_METHOD_1_F79597C89908C205_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_20663BD6D0167792()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2556C482D04DC0F4_METHOD_1_20663BD6D0167792_OFFSET))(this);
	}
};
