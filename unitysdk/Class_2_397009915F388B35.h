#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/SkillButtonAdditionalStatusType.h"

class Class_0_16E4307DCC419505_1227;
class Class_1_F41834AAE9ED4443;
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_397009915F388B35_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x158F4CB0)
#define CLASS_2_397009915F388B35_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x158F4D80)
#define CLASS_2_397009915F388B35_METHOD_2_07F12B51391B1CFC_OFFSET UNITYSDK_OFFSET(0x158F4750)
#define CLASS_2_397009915F388B35_METHOD_2_1CA30145E1F3ECD6_OFFSET UNITYSDK_OFFSET(0x158F4AF0)
#define CLASS_2_397009915F388B35_METHOD_2_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x158F4610)
#define CLASS_2_397009915F388B35_METHOD_2_5DA218DC3F75732C_OFFSET UNITYSDK_OFFSET(0x158F49F0)
#define CLASS_2_397009915F388B35_METHOD_2_6946C610D47FE5F0_OFFSET UNITYSDK_OFFSET(0x158F4840)
#define CLASS_2_397009915F388B35_METHOD_2_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x158F4450)
#define CLASS_2_397009915F388B35_METHOD_2_CF0EF72A03B510AB_OFFSET UNITYSDK_OFFSET(0x158F47F0)
#define CLASS_2_397009915F388B35_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x158F4BD0)
#define CLASS_2_397009915F388B35_METHOD_2_F7300E87EC49A206_OFFSET UNITYSDK_OFFSET(0x158F45C0)
#define CLASS_2_397009915F388B35__CTOR_OFFSET UNITYSDK_OFFSET(0x158F4E20)

inline static constexpr unsigned int Class_2_397009915F388B35_TypeDefinitionIndex = 71879;

class Class_2_397009915F388B35 : public ::Class_1_34917908B7833130
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SkillButtonAdditionalStatusType, ::Class_0_16E4307DCC419505_1227*>* FDIGELCHJOM; // 0x60
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::SkillButtonAdditionalStatusType>* ODHMLAMBLCB; // 0x68
	::RPG::GameCore::LevelUIComponent* OMCLLLAHOIP; // 0x70
	::Class_1_F41834AAE9ED4443* KHLOKFOANJC; // 0x78
	::RPG::GameCore::ControlSkillType IGGBDDOGADM; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_397009915F388B35__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_397009915F388B35_METHOD_2_B7F8E0B4AF22DEA3_OFFSET))(this);
	}

	::System::Void Method_2_F7300E87EC49A206()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_397009915F388B35_METHOD_2_F7300E87EC49A206_OFFSET))(this);
	}

	::System::Void Method_2_07F12B51391B1CFC(::RPG::GameCore::ControlSkillType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ControlSkillType))((::PBYTE)hIl2Cpp + CLASS_2_397009915F388B35_METHOD_2_07F12B51391B1CFC_OFFSET))(this, a1);
	}

	::System::Void Method_2_CF0EF72A03B510AB(::Class_1_F41834AAE9ED4443* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F41834AAE9ED4443*))((::PBYTE)hIl2Cpp + CLASS_2_397009915F388B35_METHOD_2_CF0EF72A03B510AB_OFFSET))(this, a1);
	}

	::System::Void Method_2_4389275F4099DE36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_397009915F388B35_METHOD_2_4389275F4099DE36_OFFSET))(this);
	}

	::System::Void Method_2_6946C610D47FE5F0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_397009915F388B35_METHOD_2_6946C610D47FE5F0_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_1227* Method_2_1CA30145E1F3ECD6(::RPG::GameCore::SkillButtonAdditionalStatusType a1)
	{
		return ((::Class_0_16E4307DCC419505_1227*(*)(::PVOID, ::RPG::GameCore::SkillButtonAdditionalStatusType))((::PBYTE)hIl2Cpp + CLASS_2_397009915F388B35_METHOD_2_1CA30145E1F3ECD6_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_1227* Method_2_5DA218DC3F75732C(::RPG::GameCore::SkillButtonAdditionalStatusType a1, ::System::String* a2)
	{
		return ((::Class_0_16E4307DCC419505_1227*(*)(::PVOID, ::RPG::GameCore::SkillButtonAdditionalStatusType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_397009915F388B35_METHOD_2_5DA218DC3F75732C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_397009915F388B35_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_397009915F388B35_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_397009915F388B35_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
