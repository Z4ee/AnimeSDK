#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/SkillButtonAdditionalStatusType.h"

class Class_0_16E4307DCC419505_1015;
class Class_1_F41834AAE9ED4443;
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_397009915F388B35_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x13808220)
#define CLASS_2_397009915F388B35_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x138082F0)
#define CLASS_2_397009915F388B35_METHOD_2_07F12B51391B1CFC_OFFSET UNITYSDK_OFFSET(0x13807CF0)
#define CLASS_2_397009915F388B35_METHOD_2_1CA30145E1F3ECD6_OFFSET UNITYSDK_OFFSET(0x13808090)
#define CLASS_2_397009915F388B35_METHOD_2_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x13807BB0)
#define CLASS_2_397009915F388B35_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x13808590)
#define CLASS_2_397009915F388B35_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x13808530)
#define CLASS_2_397009915F388B35_METHOD_2_5DA218DC3F75732C_OFFSET UNITYSDK_OFFSET(0x13807F90)
#define CLASS_2_397009915F388B35_METHOD_2_6946C610D47FE5F0_OFFSET UNITYSDK_OFFSET(0x13807DE0)
#define CLASS_2_397009915F388B35_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x13808170)
#define CLASS_2_397009915F388B35_METHOD_2_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x138079F0)
#define CLASS_2_397009915F388B35_METHOD_2_CF0EF72A03B510AB_OFFSET UNITYSDK_OFFSET(0x13807D90)
#define CLASS_2_397009915F388B35_METHOD_2_F7300E87EC49A206_OFFSET UNITYSDK_OFFSET(0x13807B60)
#define CLASS_2_397009915F388B35__CTOR_OFFSET UNITYSDK_OFFSET(0x13808390)
#define CLASS_2_397009915F388B35___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x138085F0)
#define CLASS_2_397009915F388B35___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x13808650)

inline static constexpr unsigned int Class_2_397009915F388B35_TypeDefinitionIndex = 67164;

class Class_2_397009915F388B35 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::SkillButtonAdditionalStatusType>* Field_2_0; // 0x60
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SkillButtonAdditionalStatusType, ::Class_0_16E4307DCC419505_1015*>* Field_2_1; // 0x68
	::Class_1_F41834AAE9ED4443* Field_2_2; // 0x70
	::RPG::GameCore::LevelUIComponent* Field_2_3; // 0x78
	::RPG::GameCore::ControlSkillType Field_2_4; // 0x80

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

	::Class_0_16E4307DCC419505_1015* Method_2_1CA30145E1F3ECD6(::RPG::GameCore::SkillButtonAdditionalStatusType a1)
	{
		return ((::Class_0_16E4307DCC419505_1015*(*)(::PVOID, ::RPG::GameCore::SkillButtonAdditionalStatusType))((::PBYTE)hIl2Cpp + CLASS_2_397009915F388B35_METHOD_2_1CA30145E1F3ECD6_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_1015* Method_2_5DA218DC3F75732C(::RPG::GameCore::SkillButtonAdditionalStatusType a1, ::System::String* a2)
	{
		return ((::Class_0_16E4307DCC419505_1015*(*)(::PVOID, ::RPG::GameCore::SkillButtonAdditionalStatusType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_397009915F388B35_METHOD_2_5DA218DC3F75732C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_397009915F388B35_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_397009915F388B35_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_397009915F388B35_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_397009915F388B35_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_397009915F388B35_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_397009915F388B35___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_397009915F388B35___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
