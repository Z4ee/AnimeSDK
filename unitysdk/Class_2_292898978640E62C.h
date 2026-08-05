#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_292898978640E62C_Class_2_73327C2912394382;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIFriendChatCommonInfoUIWidgetController; }
namespace MoleMole { class UIFriendChatCommonTopUIWidgetController; }
template <typename T> class Class_2_0D31A1661D004892;
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_292898978640E62C_METHOD_2_5200FEEACE882DF3_OFFSET UNITYSDK_OFFSET(0xDC6BC90)
#define CLASS_2_292898978640E62C_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0xDC6BE90)
#define CLASS_2_292898978640E62C_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xDC6BF90)
#define CLASS_2_292898978640E62C__CTOR_OFFSET UNITYSDK_OFFSET(0xDC6BF80)

inline static constexpr unsigned int Class_2_292898978640E62C_TypeDefinitionIndex = 51950;

class Class_2_292898978640E62C : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_826A30478DA34A69<::MoleMole::UIFriendChatCommonTopUIWidgetController*>* Field_2_0; // 0x18
	::Class_2_0D31A1661D004892<::Class_2_292898978640E62C_Class_2_73327C2912394382*>* Field_2_5; // 0x20
	::Class_2_0D31A1661D004892<::Class_2_292898978640E62C_Class_2_73327C2912394382*>* Field_2_6; // 0x28
	::Class_3_826A30478DA34A69<::MoleMole::UIFriendChatCommonInfoUIWidgetController*>* Field_2_7; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_292898978640E62C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5200FEEACE882DF3(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_292898978640E62C_METHOD_2_5200FEEACE882DF3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_292898978640E62C_METHOD_2_737220D2233A9067_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_292898978640E62C_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
