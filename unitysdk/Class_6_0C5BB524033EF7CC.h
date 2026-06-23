#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_5_92C5056C0D6BEF37.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_21.h"
#include "unitysdk/MoleMole/ELocalPlayType.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"

class Class_2_208CC9941471731A_1115;
namespace MoleMole { class AvatarInitData; }
namespace MoleMole { class InLevelBuddyDataItem; }
namespace MoleMole { class UIBaseController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_6_0C5BB524033EF7CC_METHOD_6_15B3CE02624778D4_OFFSET UNITYSDK_OFFSET(0x11712410)
#define CLASS_6_0C5BB524033EF7CC_METHOD_6_1CC1F49C95DCD42C_OFFSET UNITYSDK_OFFSET(0x117122B0)
#define CLASS_6_0C5BB524033EF7CC_METHOD_6_25678526567B115F_OFFSET UNITYSDK_OFFSET(0x11711E80)
#define CLASS_6_0C5BB524033EF7CC_METHOD_6_32D09D1F157C2CE1_OFFSET UNITYSDK_OFFSET(0x11712420)
#define CLASS_6_0C5BB524033EF7CC_METHOD_6_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x11712360)
#define CLASS_6_0C5BB524033EF7CC_METHOD_6_3E95970492C02E1A_OFFSET UNITYSDK_OFFSET(0x11712170)
#define CLASS_6_0C5BB524033EF7CC_METHOD_6_7D183B3B4AD4903E_OFFSET UNITYSDK_OFFSET(0x11712350)
#define CLASS_6_0C5BB524033EF7CC_METHOD_6_858CF2EC5EE423D3_OFFSET UNITYSDK_OFFSET(0x11711E70)
#define CLASS_6_0C5BB524033EF7CC_METHOD_6_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x11712230)
#define CLASS_6_0C5BB524033EF7CC_METHOD_6_8D7EA10616F1B51A_OFFSET UNITYSDK_OFFSET(0x11711FE0)
#define CLASS_6_0C5BB524033EF7CC_METHOD_6_A975E7D204E0C09F_OFFSET UNITYSDK_OFFSET(0x11712080)
#define CLASS_6_0C5BB524033EF7CC_METHOD_6_FAB442E4A46C6AA0_OFFSET UNITYSDK_OFFSET(0x11711ED0)
#define CLASS_6_0C5BB524033EF7CC__CTOR_OFFSET UNITYSDK_OFFSET(0x117122A0)

inline static constexpr unsigned int Class_6_0C5BB524033EF7CC_TypeDefinitionIndex = 47819;

class Class_6_0C5BB524033EF7CC : public ::Class_5_92C5056C0D6BEF37
{
public:
	::Enum_3_0A3761FE34514D6C_21 Field_6_0; // 0x2E0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_0C5BB524033EF7CC__CTOR_OFFSET))(this);
	}

	::MoleMole::ELocalPlayType Method_6_858CF2EC5EE423D3()
	{
		return ((::MoleMole::ELocalPlayType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_0C5BB524033EF7CC_METHOD_6_858CF2EC5EE423D3_OFFSET))(this);
	}

	::System::Void Method_6_25678526567B115F(::Class_2_208CC9941471731A_1115* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_1115*))((::PBYTE)hIl2Cpp + CLASS_6_0C5BB524033EF7CC_METHOD_6_25678526567B115F_OFFSET))(this, a1);
	}

	::System::Void Method_6_FAB442E4A46C6AA0(::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>* a1, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*))((::PBYTE)hIl2Cpp + CLASS_6_0C5BB524033EF7CC_METHOD_6_FAB442E4A46C6AA0_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_6_8D7EA10616F1B51A(::MoleMole::ESystemSettingType a1, ::System::Boolean& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::ESystemSettingType, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_6_0C5BB524033EF7CC_METHOD_6_8D7EA10616F1B51A_OFFSET))(this, a1, a2);
	}

	::MoleMole::UIBaseController* Method_6_3E95970492C02E1A(::MoleMole::UIBaseController* a1, ::UnityEngine::Transform* a2)
	{
		return ((::MoleMole::UIBaseController*(*)(::PVOID, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_6_0C5BB524033EF7CC_METHOD_6_3E95970492C02E1A_OFFSET))(this, a1, a2);
	}

	::System::String* Method_6_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_0C5BB524033EF7CC_METHOD_6_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::MoleMole::UIBaseController* Method_6_1CC1F49C95DCD42C(::MoleMole::UIBaseController* a1, ::UnityEngine::Transform* a2)
	{
		return ((::MoleMole::UIBaseController*(*)(::PVOID, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_6_0C5BB524033EF7CC_METHOD_6_1CC1F49C95DCD42C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_6_A975E7D204E0C09F(::MoleMole::ESystemSettingType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::ESystemSettingType))((::PBYTE)hIl2Cpp + CLASS_6_0C5BB524033EF7CC_METHOD_6_A975E7D204E0C09F_OFFSET))(this, a1);
	}

	::System::Void Method_6_7D183B3B4AD4903E(::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>* a1, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*))((::PBYTE)hIl2Cpp + CLASS_6_0C5BB524033EF7CC_METHOD_6_7D183B3B4AD4903E_OFFSET))(this, a1, a2);
	}

	::System::String* Method_6_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_0C5BB524033EF7CC_METHOD_6_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::System::Void Method_6_15B3CE02624778D4(::Class_2_208CC9941471731A_1115* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_1115*))((::PBYTE)hIl2Cpp + CLASS_6_0C5BB524033EF7CC_METHOD_6_15B3CE02624778D4_OFFSET))(this, a1);
	}

	::System::Boolean Method_6_32D09D1F157C2CE1(::MoleMole::ESystemSettingType a1, ::System::Boolean& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::ESystemSettingType, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_6_0C5BB524033EF7CC_METHOD_6_32D09D1F157C2CE1_OFFSET))(this, a1, a2);
	}
};
