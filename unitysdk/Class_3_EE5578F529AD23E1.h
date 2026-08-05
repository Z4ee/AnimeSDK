#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_2F64460E7C7A0A4C.h"
#include "unitysdk/MoleMole/BubbleType.h"

class Class_1_2CD6915EC12D64B9;
class Class_2_53DC1420F60D9B88;
namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }
namespace MoleMole { class UIGeneralNewsBubbleWidgetController; }
namespace MoleMole { class UIInLevelScoreUIChildWindowController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define CLASS_3_EE5578F529AD23E1_GETBUBBLEWIDGET_OFFSET UNITYSDK_OFFSET(0x12FC91A0)
#define CLASS_3_EE5578F529AD23E1_METHOD_3_0AB98FDCB4011B8D_OFFSET UNITYSDK_OFFSET(0x12FCA160)
#define CLASS_3_EE5578F529AD23E1_METHOD_3_0ACEFA1176C0BD9F_OFFSET UNITYSDK_OFFSET(0x12FC9EF0)
#define CLASS_3_EE5578F529AD23E1_METHOD_3_0D8DB2DC8B47A973_OFFSET UNITYSDK_OFFSET(0x12FCA3A0)
#define CLASS_3_EE5578F529AD23E1_METHOD_3_1248912EDEC87A84_OFFSET UNITYSDK_OFFSET(0x12FC9210)
#define CLASS_3_EE5578F529AD23E1_METHOD_3_2096541E433905CE_OFFSET UNITYSDK_OFFSET(0x12FC8D20)
#define CLASS_3_EE5578F529AD23E1_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x12FC8690)
#define CLASS_3_EE5578F529AD23E1_METHOD_3_58B1CA7CD6631E35_OFFSET UNITYSDK_OFFSET(0x12FC9CC0)
#define CLASS_3_EE5578F529AD23E1_METHOD_3_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x12FC8710)
#define CLASS_3_EE5578F529AD23E1_METHOD_3_7D21D8548943D577_OFFSET UNITYSDK_OFFSET(0x12FC9BC0)
#define CLASS_3_EE5578F529AD23E1_METHOD_3_90EC931103FB6F31_OFFSET UNITYSDK_OFFSET(0x12FC8CC0)
#define CLASS_3_EE5578F529AD23E1_METHOD_3_AC85106D9E64398A_OFFSET UNITYSDK_OFFSET(0x12FC8820)
#define CLASS_3_EE5578F529AD23E1_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x12FCA0D0)
#define CLASS_3_EE5578F529AD23E1_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12FC9C30)
#define CLASS_3_EE5578F529AD23E1_METHOD_3_F7979D7E7B270869_1_OFFSET UNITYSDK_OFFSET(0x12FCA020)
#define CLASS_3_EE5578F529AD23E1_METHOD_3_F7979D7E7B270869_OFFSET UNITYSDK_OFFSET(0x12FC9F70)
#define CLASS_3_EE5578F529AD23E1_METHOD_3_F7E53CF8CDEF3E05_OFFSET UNITYSDK_OFFSET(0x12FC9530)
#define CLASS_3_EE5578F529AD23E1_OPENBUBBLEROW_OFFSET UNITYSDK_OFFSET(0x12FC9270)
#define CLASS_3_EE5578F529AD23E1__CTOR_OFFSET UNITYSDK_OFFSET(0x12FC9400)

inline static constexpr unsigned int Class_3_EE5578F529AD23E1_TypeDefinitionIndex = 52275;

class Class_3_EE5578F529AD23E1 : public ::Class_2_2F64460E7C7A0A4C<::Class_3_EE5578F529AD23E1*>
{
public:
	// static const ::System::String* Field_3_0; // 0x0
	// static const ::System::String* Field_3_7; // 0x0
	::Class_2_53DC1420F60D9B88* Field_3_2; // 0x70
	::System::Collections::Generic::Dictionary_2<::MoleMole::BubbleType, ::MoleMole::UIInLevelScoreUIChildWindowController*>* Field_3_1; // 0x78
	::Class_1_2CD6915EC12D64B9* Field_3_6; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE5578F529AD23E1__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE5578F529AD23E1_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_3_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE5578F529AD23E1_METHOD_3_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_3_AC85106D9E64398A(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_3_EE5578F529AD23E1_METHOD_3_AC85106D9E64398A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_2096541E433905CE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_3_EE5578F529AD23E1_METHOD_3_2096541E433905CE_OFFSET))(this, a1, a2);
	}

	::MoleMole::UIGeneralNewsBubbleWidgetController* GetBubbleWidget()
	{
		return ((::MoleMole::UIGeneralNewsBubbleWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE5578F529AD23E1_GETBUBBLEWIDGET_OFFSET))(this);
	}

	::MoleMole::UIGeneralNewsBubbleRowWidgetController* OpenBubbleRow()
	{
		return ((::MoleMole::UIGeneralNewsBubbleRowWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE5578F529AD23E1_OPENBUBBLEROW_OFFSET))(this);
	}

	::MoleMole::UIGeneralNewsBubbleWidgetController* Method_3_1248912EDEC87A84()
	{
		return ((::MoleMole::UIGeneralNewsBubbleWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE5578F529AD23E1_METHOD_3_1248912EDEC87A84_OFFSET))(this);
	}

	::System::Boolean Method_3_F7E53CF8CDEF3E05(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_EE5578F529AD23E1_METHOD_3_F7E53CF8CDEF3E05_OFFSET))(this, a1);
	}

	::System::Void Method_3_7D21D8548943D577()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE5578F529AD23E1_METHOD_3_7D21D8548943D577_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE5578F529AD23E1_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_3_58B1CA7CD6631E35(::MoleMole::UIGeneralNewsBubbleRowWidgetController* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIGeneralNewsBubbleRowWidgetController*))((::PBYTE)hIl2Cpp + CLASS_3_EE5578F529AD23E1_METHOD_3_58B1CA7CD6631E35_OFFSET))(this, a1);
	}

	::System::Void Method_3_0ACEFA1176C0BD9F(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_EE5578F529AD23E1_METHOD_3_0ACEFA1176C0BD9F_OFFSET))(this, a1);
	}

	::System::Void Method_3_F7979D7E7B270869(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_3_EE5578F529AD23E1_METHOD_3_F7979D7E7B270869_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Transform* Method_3_90EC931103FB6F31()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE5578F529AD23E1_METHOD_3_90EC931103FB6F31_OFFSET))(this);
	}

	::System::Void Method_3_F7979D7E7B270869_1(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_3_EE5578F529AD23E1_METHOD_3_F7979D7E7B270869_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE5578F529AD23E1_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Boolean Method_3_0AB98FDCB4011B8D(::System::Func_2<::MoleMole::UIGeneralNewsBubbleRowWidgetController*, ::System::Boolean>* a1, ::MoleMole::UIGeneralNewsBubbleRowWidgetController* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Func_2<::MoleMole::UIGeneralNewsBubbleRowWidgetController*, ::System::Boolean>*, ::MoleMole::UIGeneralNewsBubbleRowWidgetController*))((::PBYTE)hIl2Cpp + CLASS_3_EE5578F529AD23E1_METHOD_3_0AB98FDCB4011B8D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_0D8DB2DC8B47A973()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE5578F529AD23E1_METHOD_3_0D8DB2DC8B47A973_OFFSET))(this);
	}
};
