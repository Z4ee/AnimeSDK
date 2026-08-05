#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_DF3786176D510571_Class_2_82300A0D1A49C358;
class Class_2_DF3786176D510571_Class_2_82300A0D1A49C358_1;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIFriendChatCommonInfoUIWidgetController; }
namespace MoleMole { class UIFriendChatCommonTopUIWidgetController; }
template <typename T> class Class_2_0D31A1661D004892;
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_DF3786176D510571_METHOD_2_25F259344056A8EA_OFFSET UNITYSDK_OFFSET(0x14E303B0)
#define CLASS_2_DF3786176D510571_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x14E305D0)
#define CLASS_2_DF3786176D510571_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x14E306D0)
#define CLASS_2_DF3786176D510571__CTOR_OFFSET UNITYSDK_OFFSET(0x14E306C0)

inline static constexpr unsigned int Class_2_DF3786176D510571_TypeDefinitionIndex = 76446;

class Class_2_DF3786176D510571 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_826A30478DA34A69<::MoleMole::UIFriendChatCommonTopUIWidgetController*>* Field_2_2; // 0x18
	::Class_2_0D31A1661D004892<::Class_2_DF3786176D510571_Class_2_82300A0D1A49C358_1*>* Field_2_7; // 0x20
	::Class_3_826A30478DA34A69<::MoleMole::UIFriendChatCommonInfoUIWidgetController*>* Field_2_1; // 0x28
	::Class_2_0D31A1661D004892<::Class_2_DF3786176D510571_Class_2_82300A0D1A49C358*>* Field_2_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF3786176D510571__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_25F259344056A8EA(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DF3786176D510571_METHOD_2_25F259344056A8EA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DF3786176D510571_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF3786176D510571_METHOD_2_737220D2233A9067_OFFSET))(this);
	}
};
