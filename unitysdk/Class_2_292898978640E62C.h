#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_292898978640E62C_Class_2_F03B0164AF5E38A9;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIFriendChatCommonInfoUIWidgetController; }
namespace MoleMole { class UIFriendChatCommonTopUIWidgetController; }
template <typename T> class Class_2_0D31A1661D004892;
template <typename T> class Class_3_30A064D7BE47C07D;

#define CLASS_2_292898978640E62C_METHOD_2_5200FEEACE882DF3_OFFSET UNITYSDK_OFFSET(0x178F5C60)
#define CLASS_2_292898978640E62C_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x178F5E60)
#define CLASS_2_292898978640E62C_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x178F5F60)
#define CLASS_2_292898978640E62C__CTOR_OFFSET UNITYSDK_OFFSET(0x178F5F50)

inline static constexpr unsigned int Class_2_292898978640E62C_TypeDefinitionIndex = 74734;

class Class_2_292898978640E62C : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_0D31A1661D004892<::Class_2_292898978640E62C_Class_2_F03B0164AF5E38A9*>* Field_2_2; // 0x18
	::Class_3_30A064D7BE47C07D<::MoleMole::UIFriendChatCommonTopUIWidgetController*>* Field_2_0; // 0x20
	::Class_3_30A064D7BE47C07D<::MoleMole::UIFriendChatCommonInfoUIWidgetController*>* Field_2_1; // 0x28
	::Class_2_0D31A1661D004892<::Class_2_292898978640E62C_Class_2_F03B0164AF5E38A9*>* Field_2_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_292898978640E62C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5200FEEACE882DF3(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_292898978640E62C_METHOD_2_5200FEEACE882DF3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_292898978640E62C_METHOD_2_737220D2233A9067_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_292898978640E62C_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
