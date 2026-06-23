#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_2F64460E7C7A0A4C.h"
#include "unitysdk/MoleMole/BubbleType.h"

class Class_2_53DC1420F60D9B88;
namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }
namespace MoleMole { class UIGeneralNewsBubbleWidgetController; }
namespace MoleMole { class UIInLevelScoreUIChildWindowController; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define CLASS_3_ABE60CF2480801CA_GETBUBBLEWIDGET_OFFSET UNITYSDK_OFFSET(0x11FD1EE0)
#define CLASS_3_ABE60CF2480801CA_METHOD_3_1248912EDEC87A84_OFFSET UNITYSDK_OFFSET(0x11FD1F50)
#define CLASS_3_ABE60CF2480801CA_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x11FD1D90)
#define CLASS_3_ABE60CF2480801CA_METHOD_3_58B1CA7CD6631E35_OFFSET UNITYSDK_OFFSET(0x11FD2AC0)
#define CLASS_3_ABE60CF2480801CA_METHOD_3_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x11FD1E10)
#define CLASS_3_ABE60CF2480801CA_METHOD_3_7B24D627DE89D288_OFFSET UNITYSDK_OFFSET(0x11FD2360)
#define CLASS_3_ABE60CF2480801CA_METHOD_3_830714A29ACB1B94_OFFSET UNITYSDK_OFFSET(0x11FD23E0)
#define CLASS_3_ABE60CF2480801CA_METHOD_3_90EC931103FB6F31_OFFSET UNITYSDK_OFFSET(0x11FD2300)
#define CLASS_3_ABE60CF2480801CA_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x11FD2270)
#define CLASS_3_ABE60CF2480801CA_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11FD21E0)
#define CLASS_3_ABE60CF2480801CA_METHOD_3_D70C8B847AF08ADE_OFFSET UNITYSDK_OFFSET(0x11FD2A60)
#define CLASS_3_ABE60CF2480801CA_OPENBUBBLEROW_OFFSET UNITYSDK_OFFSET(0x11FD1FB0)
#define CLASS_3_ABE60CF2480801CA__CTOR_OFFSET UNITYSDK_OFFSET(0x11FD2140)

inline static constexpr unsigned int Class_3_ABE60CF2480801CA_TypeDefinitionIndex = 47748;

class Class_3_ABE60CF2480801CA : public ::Class_2_2F64460E7C7A0A4C<::Class_3_ABE60CF2480801CA*>
{
public:
	::Class_2_53DC1420F60D9B88* Field_3_0; // 0x70
	::System::Collections::Generic::Dictionary_2<::MoleMole::BubbleType, ::MoleMole::UIInLevelScoreUIChildWindowController*>* Field_3_1; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ABE60CF2480801CA__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ABE60CF2480801CA_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_3_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ABE60CF2480801CA_METHOD_3_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::MoleMole::UIGeneralNewsBubbleWidgetController* GetBubbleWidget()
	{
		return ((::MoleMole::UIGeneralNewsBubbleWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ABE60CF2480801CA_GETBUBBLEWIDGET_OFFSET))(this);
	}

	::MoleMole::UIGeneralNewsBubbleRowWidgetController* OpenBubbleRow()
	{
		return ((::MoleMole::UIGeneralNewsBubbleRowWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ABE60CF2480801CA_OPENBUBBLEROW_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ABE60CF2480801CA_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ABE60CF2480801CA_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_3_90EC931103FB6F31()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ABE60CF2480801CA_METHOD_3_90EC931103FB6F31_OFFSET))(this);
	}

	::System::Void Method_3_7B24D627DE89D288(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_ABE60CF2480801CA_METHOD_3_7B24D627DE89D288_OFFSET))(this, a1);
	}

	::System::Void Method_3_D70C8B847AF08ADE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ABE60CF2480801CA_METHOD_3_D70C8B847AF08ADE_OFFSET))(this);
	}

	::System::Boolean Method_3_58B1CA7CD6631E35(::MoleMole::UIGeneralNewsBubbleRowWidgetController* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIGeneralNewsBubbleRowWidgetController*))((::PBYTE)hIl2Cpp + CLASS_3_ABE60CF2480801CA_METHOD_3_58B1CA7CD6631E35_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_830714A29ACB1B94(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_ABE60CF2480801CA_METHOD_3_830714A29ACB1B94_OFFSET))(this, a1);
	}

	::MoleMole::UIGeneralNewsBubbleWidgetController* Method_3_1248912EDEC87A84()
	{
		return ((::MoleMole::UIGeneralNewsBubbleWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ABE60CF2480801CA_METHOD_3_1248912EDEC87A84_OFFSET))(this);
	}
};
