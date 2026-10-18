#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_54A2EB293CF77FFF;
namespace System { class String; }

#define CLASS_1_2F214E1A5E1FAFFB_GET_ACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0x1C54CDC0)
#define CLASS_1_2F214E1A5E1FAFFB_GET_ENTRANCEBIGICONPATH_OFFSET UNITYSDK_OFFSET(0x1C54CD80)
#define CLASS_1_2F214E1A5E1FAFFB_GET_ENTRANCESMALLICONPATH_OFFSET UNITYSDK_OFFSET(0x1C54CDA0)
#define CLASS_1_2F214E1A5E1FAFFB_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C54CCA0)
#define CLASS_1_2F214E1A5E1FAFFB_GET_LEADINGROLEID_OFFSET UNITYSDK_OFFSET(0x1C54CD40)
#define CLASS_1_2F214E1A5E1FAFFB_GET_LEVELEASY_OFFSET UNITYSDK_OFFSET(0x1C54CD00)
#define CLASS_1_2F214E1A5E1FAFFB_GET_LEVELHARD_OFFSET UNITYSDK_OFFSET(0x1C54CD20)
#define CLASS_1_2F214E1A5E1FAFFB_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x1C54CCC0)
#define CLASS_1_2F214E1A5E1FAFFB_GET_PERFECTREMAINROUND_OFFSET UNITYSDK_OFFSET(0x1C54CD60)
#define CLASS_1_2F214E1A5E1FAFFB_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x1C54CCE0)
#define CLASS_1_2F214E1A5E1FAFFB_GET_TUTORIALGUIDEID_OFFSET UNITYSDK_OFFSET(0x1C54CDE0)
#define CLASS_1_2F214E1A5E1FAFFB_SET_ACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0x1C54CDD0)
#define CLASS_1_2F214E1A5E1FAFFB_SET_ENTRANCEBIGICONPATH_OFFSET UNITYSDK_OFFSET(0x1C54CD90)
#define CLASS_1_2F214E1A5E1FAFFB_SET_ENTRANCESMALLICONPATH_OFFSET UNITYSDK_OFFSET(0x1C54CDB0)
#define CLASS_1_2F214E1A5E1FAFFB_SET_ID_OFFSET UNITYSDK_OFFSET(0x1C54CCB0)
#define CLASS_1_2F214E1A5E1FAFFB_SET_LEADINGROLEID_OFFSET UNITYSDK_OFFSET(0x1C54CD50)
#define CLASS_1_2F214E1A5E1FAFFB_SET_LEVELEASY_OFFSET UNITYSDK_OFFSET(0x1C54CD10)
#define CLASS_1_2F214E1A5E1FAFFB_SET_LEVELHARD_OFFSET UNITYSDK_OFFSET(0x1C54CD30)
#define CLASS_1_2F214E1A5E1FAFFB_SET_ORDER_OFFSET UNITYSDK_OFFSET(0x1C54CCD0)
#define CLASS_1_2F214E1A5E1FAFFB_SET_PERFECTREMAINROUND_OFFSET UNITYSDK_OFFSET(0x1C54CD70)
#define CLASS_1_2F214E1A5E1FAFFB_SET_TITLE_OFFSET UNITYSDK_OFFSET(0x1C54CCF0)
#define CLASS_1_2F214E1A5E1FAFFB_SET_TUTORIALGUIDEID_OFFSET UNITYSDK_OFFSET(0x1C54CDF0)
#define CLASS_1_2F214E1A5E1FAFFB__CTOR_OFFSET UNITYSDK_OFFSET(0x1C54CE00)

inline static constexpr unsigned int Class_1_2F214E1A5E1FAFFB_TypeDefinitionIndex = 41912;

class Class_1_2F214E1A5E1FAFFB : public ::System::Object
{
public:
	::System::String* _EntranceBigIconPath_k__BackingField; // 0x10
	::System::String* _EntranceSmallIconPath_k__BackingField; // 0x18
	::Class_1_54A2EB293CF77FFF* _LevelHard_k__BackingField; // 0x20
	::Class_1_54A2EB293CF77FFF* _LevelEasy_k__BackingField; // 0x28
	::System::UInt32 _Order_k__BackingField; // 0x30
	::System::UInt32 _TutorialGuideID_k__BackingField; // 0x34
	::System::UInt32 _LeadingRoleID_k__BackingField; // 0x38
	::System::UInt32 _ID_k__BackingField; // 0x3C
	::System::UInt32 _ActivityModuleID_k__BackingField; // 0x40
	::System::UInt32 _PerfectRemainRound_k__BackingField; // 0x44
	::RPG::Client::TextID _Title_k__BackingField; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F214E1A5E1FAFFB__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F214E1A5E1FAFFB_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2F214E1A5E1FAFFB_SET_ID_OFFSET))(this, a1);
	}

	::System::UInt32 get_Order()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F214E1A5E1FAFFB_GET_ORDER_OFFSET))(this);
	}

	::System::Void set_Order(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2F214E1A5E1FAFFB_SET_ORDER_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_Title()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F214E1A5E1FAFFB_GET_TITLE_OFFSET))(this);
	}

	::System::Void set_Title(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_2F214E1A5E1FAFFB_SET_TITLE_OFFSET))(this, a1);
	}

	::Class_1_54A2EB293CF77FFF* get_LevelEasy()
	{
		return ((::Class_1_54A2EB293CF77FFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F214E1A5E1FAFFB_GET_LEVELEASY_OFFSET))(this);
	}

	::System::Void set_LevelEasy(::Class_1_54A2EB293CF77FFF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_54A2EB293CF77FFF*))((::PBYTE)hIl2Cpp + CLASS_1_2F214E1A5E1FAFFB_SET_LEVELEASY_OFFSET))(this, a1);
	}

	::Class_1_54A2EB293CF77FFF* get_LevelHard()
	{
		return ((::Class_1_54A2EB293CF77FFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F214E1A5E1FAFFB_GET_LEVELHARD_OFFSET))(this);
	}

	::System::Void set_LevelHard(::Class_1_54A2EB293CF77FFF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_54A2EB293CF77FFF*))((::PBYTE)hIl2Cpp + CLASS_1_2F214E1A5E1FAFFB_SET_LEVELHARD_OFFSET))(this, a1);
	}

	::System::UInt32 get_LeadingRoleID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F214E1A5E1FAFFB_GET_LEADINGROLEID_OFFSET))(this);
	}

	::System::Void set_LeadingRoleID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2F214E1A5E1FAFFB_SET_LEADINGROLEID_OFFSET))(this, a1);
	}

	::System::UInt32 get_PerfectRemainRound()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F214E1A5E1FAFFB_GET_PERFECTREMAINROUND_OFFSET))(this);
	}

	::System::Void set_PerfectRemainRound(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2F214E1A5E1FAFFB_SET_PERFECTREMAINROUND_OFFSET))(this, a1);
	}

	::System::String* get_EntranceBigIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F214E1A5E1FAFFB_GET_ENTRANCEBIGICONPATH_OFFSET))(this);
	}

	::System::Void set_EntranceBigIconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2F214E1A5E1FAFFB_SET_ENTRANCEBIGICONPATH_OFFSET))(this, a1);
	}

	::System::String* get_EntranceSmallIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F214E1A5E1FAFFB_GET_ENTRANCESMALLICONPATH_OFFSET))(this);
	}

	::System::Void set_EntranceSmallIconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2F214E1A5E1FAFFB_SET_ENTRANCESMALLICONPATH_OFFSET))(this, a1);
	}

	::System::UInt32 get_ActivityModuleID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F214E1A5E1FAFFB_GET_ACTIVITYMODULEID_OFFSET))(this);
	}

	::System::Void set_ActivityModuleID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2F214E1A5E1FAFFB_SET_ACTIVITYMODULEID_OFFSET))(this, a1);
	}

	::System::UInt32 get_TutorialGuideID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F214E1A5E1FAFFB_GET_TUTORIALGUIDEID_OFFSET))(this);
	}

	::System::Void set_TutorialGuideID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2F214E1A5E1FAFFB_SET_TUTORIALGUIDEID_OFFSET))(this, a1);
	}
};
