#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_DF3786176D510571_1_Class_2_82300A0D1A49C358;
class Class_2_DF3786176D510571_1_Class_2_82300A0D1A49C358_1;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIFriendChatCommonInfoUIWidgetController; }
namespace MoleMole { class UIFriendChatCommonTopUIWidgetController; }
template <typename T> class Class_2_0D31A1661D004892;
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_DF3786176D510571_1_METHOD_2_25F259344056A8EA_OFFSET UNITYSDK_OFFSET(0x15B217F0)
#define CLASS_2_DF3786176D510571_1_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x15B21A10)
#define CLASS_2_DF3786176D510571_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x15B21B10)
#define CLASS_2_DF3786176D510571_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15B21B00)

inline static constexpr unsigned int Class_2_DF3786176D510571_1_TypeDefinitionIndex = 52249;

class Class_2_DF3786176D510571_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_0D31A1661D004892<::Class_2_DF3786176D510571_1_Class_2_82300A0D1A49C358_1*>* Field_2_3; // 0x18
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIFriendChatCommonInfoUIWidgetController*>* Field_2_1; // 0x20
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIFriendChatCommonTopUIWidgetController*>* Field_2_0; // 0x28
	::Class_2_0D31A1661D004892<::Class_2_DF3786176D510571_1_Class_2_82300A0D1A49C358*>* Field_2_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF3786176D510571_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_25F259344056A8EA(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DF3786176D510571_1_METHOD_2_25F259344056A8EA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DF3786176D510571_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF3786176D510571_1_METHOD_2_737220D2233A9067_OFFSET))(this);
	}
};
