#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_5_92C5056C0D6BEF37.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_38.h"
#include "unitysdk/MoleMole/ELocalPlayType.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"

class Class_2_208CC9941471731A_1186;
namespace MoleMole { class AvatarInitData; }
namespace MoleMole { class InLevelBuddyDataItem; }
namespace MoleMole { class UIBaseController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_6_0C5BB524033EF7CC_METHOD_6_15B3CE02624778D4_OFFSET UNITYSDK_OFFSET(0x1660A8E0)
#define CLASS_6_0C5BB524033EF7CC_METHOD_6_1CC1F49C95DCD42C_OFFSET UNITYSDK_OFFSET(0x1660A9B0)
#define CLASS_6_0C5BB524033EF7CC_METHOD_6_25678526567B115F_OFFSET UNITYSDK_OFFSET(0x1660A4B0)
#define CLASS_6_0C5BB524033EF7CC_METHOD_6_32D09D1F157C2CE1_OFFSET UNITYSDK_OFFSET(0x1660AA50)
#define CLASS_6_0C5BB524033EF7CC_METHOD_6_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x1660A8F0)
#define CLASS_6_0C5BB524033EF7CC_METHOD_6_3E95970492C02E1A_OFFSET UNITYSDK_OFFSET(0x1660A7A0)
#define CLASS_6_0C5BB524033EF7CC_METHOD_6_858CF2EC5EE423D3_OFFSET UNITYSDK_OFFSET(0x1660A4A0)
#define CLASS_6_0C5BB524033EF7CC_METHOD_6_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x1660A860)
#define CLASS_6_0C5BB524033EF7CC_METHOD_6_8D7EA10616F1B51A_OFFSET UNITYSDK_OFFSET(0x1660A610)
#define CLASS_6_0C5BB524033EF7CC_METHOD_6_A975E7D204E0C09F_OFFSET UNITYSDK_OFFSET(0x1660A6B0)
#define CLASS_6_0C5BB524033EF7CC_METHOD_6_F1C27C0837BEBFB1_OFFSET UNITYSDK_OFFSET(0x1660A9A0)
#define CLASS_6_0C5BB524033EF7CC_METHOD_6_FAB442E4A46C6AA0_OFFSET UNITYSDK_OFFSET(0x1660A500)
#define CLASS_6_0C5BB524033EF7CC__CTOR_OFFSET UNITYSDK_OFFSET(0x1660A8D0)

inline static constexpr unsigned int Class_6_0C5BB524033EF7CC_TypeDefinitionIndex = 75117;

class Class_6_0C5BB524033EF7CC : public ::Class_5_92C5056C0D6BEF37
{
public:
	::Enum_3_0A3761FE34514D6C_38 Field_6_0; // 0x2F0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_0C5BB524033EF7CC__CTOR_OFFSET))(this);
	}

	::MoleMole::ELocalPlayType Method_6_858CF2EC5EE423D3()
	{
		return ((::MoleMole::ELocalPlayType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_0C5BB524033EF7CC_METHOD_6_858CF2EC5EE423D3_OFFSET))(this);
	}

	::System::Void Method_6_25678526567B115F(::Class_2_208CC9941471731A_1186* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_1186*))((::PBYTE)hIl2Cpp + CLASS_6_0C5BB524033EF7CC_METHOD_6_25678526567B115F_OFFSET))(this, a1);
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

	::System::Void Method_6_15B3CE02624778D4(::Class_2_208CC9941471731A_1186* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_1186*))((::PBYTE)hIl2Cpp + CLASS_6_0C5BB524033EF7CC_METHOD_6_15B3CE02624778D4_OFFSET))(this, a1);
	}

	::System::String* Method_6_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_0C5BB524033EF7CC_METHOD_6_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::System::Boolean Method_6_A975E7D204E0C09F(::MoleMole::ESystemSettingType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::ESystemSettingType))((::PBYTE)hIl2Cpp + CLASS_6_0C5BB524033EF7CC_METHOD_6_A975E7D204E0C09F_OFFSET))(this, a1);
	}

	::System::Void Method_6_F1C27C0837BEBFB1(::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>* a1, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*))((::PBYTE)hIl2Cpp + CLASS_6_0C5BB524033EF7CC_METHOD_6_F1C27C0837BEBFB1_OFFSET))(this, a1, a2);
	}

	::MoleMole::UIBaseController* Method_6_1CC1F49C95DCD42C(::MoleMole::UIBaseController* a1, ::UnityEngine::Transform* a2)
	{
		return ((::MoleMole::UIBaseController*(*)(::PVOID, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_6_0C5BB524033EF7CC_METHOD_6_1CC1F49C95DCD42C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_6_32D09D1F157C2CE1(::MoleMole::ESystemSettingType a1, ::System::Boolean& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::ESystemSettingType, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_6_0C5BB524033EF7CC_METHOD_6_32D09D1F157C2CE1_OFFSET))(this, a1, a2);
	}
};
