#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/SkillButtonAdditionalStatusType.h"

class Class_0_16E4307DCC419505_1113;
class Class_1_F41834AAE9ED4443;
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_397009915F388B35_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x16ED74F0)
#define CLASS_2_397009915F388B35_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x16ED75C0)
#define CLASS_2_397009915F388B35_METHOD_2_1CA30145E1F3ECD6_OFFSET UNITYSDK_OFFSET(0x16ED7330)
#define CLASS_2_397009915F388B35_METHOD_2_3A599F23178B2776_OFFSET UNITYSDK_OFFSET(0x16ED6C10)
#define CLASS_2_397009915F388B35_METHOD_2_5DA218DC3F75732C_OFFSET UNITYSDK_OFFSET(0x16ED7230)
#define CLASS_2_397009915F388B35_METHOD_2_742C69CABDBA1483_OFFSET UNITYSDK_OFFSET(0x16ED6F10)
#define CLASS_2_397009915F388B35_METHOD_2_7FE7F893829399D7_OFFSET UNITYSDK_OFFSET(0x16ED6FB0)
#define CLASS_2_397009915F388B35_METHOD_2_B2AF81294D9C69C7_OFFSET UNITYSDK_OFFSET(0x16ED6BC0)
#define CLASS_2_397009915F388B35_METHOD_2_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x16ED6A60)
#define CLASS_2_397009915F388B35_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x16ED7410)
#define CLASS_2_397009915F388B35_METHOD_2_FD647A48096EB173_OFFSET UNITYSDK_OFFSET(0x16ED7000)
#define CLASS_2_397009915F388B35__CTOR_OFFSET UNITYSDK_OFFSET(0x16ED7660)

inline static constexpr unsigned int Class_2_397009915F388B35_TypeDefinitionIndex = 71814;

class Class_2_397009915F388B35 : public ::Class_1_34917908B7833130
{
public:
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::SkillButtonAdditionalStatusType>* ODHMLAMBLCB; // 0x60
	::Class_1_F41834AAE9ED4443* KHLOKFOANJC; // 0x68
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SkillButtonAdditionalStatusType, ::Class_0_16E4307DCC419505_1113*>* FDIGELCHJOM; // 0x70
	::RPG::GameCore::LevelUIComponent* OMCLLLAHOIP; // 0x78
	::RPG::GameCore::ControlSkillType IGGBDDOGADM; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_397009915F388B35__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_397009915F388B35_METHOD_2_B7F8E0B4AF22DEA3_OFFSET))(this);
	}

	::System::Void Method_2_B2AF81294D9C69C7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_397009915F388B35_METHOD_2_B2AF81294D9C69C7_OFFSET))(this);
	}

	::System::Void Method_2_742C69CABDBA1483(::RPG::GameCore::ControlSkillType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ControlSkillType))((::PBYTE)hIl2Cpp + CLASS_2_397009915F388B35_METHOD_2_742C69CABDBA1483_OFFSET))(this, a1);
	}

	::System::Void Method_2_7FE7F893829399D7(::Class_1_F41834AAE9ED4443* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F41834AAE9ED4443*))((::PBYTE)hIl2Cpp + CLASS_2_397009915F388B35_METHOD_2_7FE7F893829399D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_3A599F23178B2776()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_397009915F388B35_METHOD_2_3A599F23178B2776_OFFSET))(this);
	}

	::System::Void Method_2_FD647A48096EB173()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_397009915F388B35_METHOD_2_FD647A48096EB173_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_1113* Method_2_1CA30145E1F3ECD6(::RPG::GameCore::SkillButtonAdditionalStatusType a1)
	{
		return ((::Class_0_16E4307DCC419505_1113*(*)(::PVOID, ::RPG::GameCore::SkillButtonAdditionalStatusType))((::PBYTE)hIl2Cpp + CLASS_2_397009915F388B35_METHOD_2_1CA30145E1F3ECD6_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_1113* Method_2_5DA218DC3F75732C(::RPG::GameCore::SkillButtonAdditionalStatusType a1, ::System::String* a2)
	{
		return ((::Class_0_16E4307DCC419505_1113*(*)(::PVOID, ::RPG::GameCore::SkillButtonAdditionalStatusType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_397009915F388B35_METHOD_2_5DA218DC3F75732C_OFFSET))(this, a1, a2);
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
