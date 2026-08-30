#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_244369E1A8054DAC;
class Class_2_7059893B56AC9837;
namespace RPG::Client::ActivityAlley { class AlleyPackComponent; }
namespace RPG::Client::ActivityAlley { class AlleyPackGoodData; }
namespace RPG::GameCore { class AlleyPackGoodItemConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B803BB50EF969C0C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17BDF5A0)
#define CLASS_1_B803BB50EF969C0C_METHOD_1_3E3A9561557377CB_OFFSET UNITYSDK_OFFSET(0x17BDF3B0)
#define CLASS_1_B803BB50EF969C0C_METHOD_1_88108C4ACDAA4E4F_OFFSET UNITYSDK_OFFSET(0x17BDF6D0)
#define CLASS_1_B803BB50EF969C0C_METHOD_1_9751651A0903E6FB_1_OFFSET UNITYSDK_OFFSET(0x17BDFF70)
#define CLASS_1_B803BB50EF969C0C_METHOD_1_9751651A0903E6FB_OFFSET UNITYSDK_OFFSET(0x17BDFF20)
#define CLASS_1_B803BB50EF969C0C_METHOD_1_A61A196E6AD5766D_1_OFFSET UNITYSDK_OFFSET(0x17BDFCB0)
#define CLASS_1_B803BB50EF969C0C_METHOD_1_A61A196E6AD5766D_OFFSET UNITYSDK_OFFSET(0x17BDFA40)
#define CLASS_1_B803BB50EF969C0C_METHOD_1_C4297EFF013E4E78_OFFSET UNITYSDK_OFFSET(0x17BDF870)
#define CLASS_1_B803BB50EF969C0C_METHOD_1_FD97D7184557CB1A_OFFSET UNITYSDK_OFFSET(0x17BDF900)
#define CLASS_1_B803BB50EF969C0C__CTOR_OFFSET UNITYSDK_OFFSET(0x17BDEE80)

inline static constexpr unsigned int Class_1_B803BB50EF969C0C_TypeDefinitionIndex = 74010;

class Class_1_B803BB50EF969C0C : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::ActivityAlley::AlleyPackGoodData*>* HLGMBGDFMAB; // 0x10
	::System::Collections::Generic::List_1<::Class_2_244369E1A8054DAC*>* LCLOFPPGBHE; // 0x18
	::System::Collections::Generic::List_1<::Class_2_7059893B56AC9837*>* OGDCJIEKKNL; // 0x20
	::System::Collections::Generic::List_1<::RPG::Client::ActivityAlley::AlleyPackGoodData*>* PHKALAKCLOK; // 0x28

	::System::Void _ctor(::RPG::Client::ActivityAlley::AlleyPackComponent* a1, ::RPG::Client::ActivityAlley::AlleyPackGoodData* a2, ::RPG::GameCore::AlleyPackGoodItemConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackComponent*, ::RPG::Client::ActivityAlley::AlleyPackGoodData*, ::RPG::GameCore::AlleyPackGoodItemConfig*))((::PBYTE)hIl2Cpp + CLASS_1_B803BB50EF969C0C__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B803BB50EF969C0C_DISPOSE_OFFSET))(this);
	}

	::System::UInt32 Method_1_88108C4ACDAA4E4F(::RPG::Client::ActivityAlley::AlleyPackGoodData* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackGoodData*))((::PBYTE)hIl2Cpp + CLASS_1_B803BB50EF969C0C_METHOD_1_88108C4ACDAA4E4F_OFFSET))(this, a1);
	}

	::Class_2_244369E1A8054DAC* Method_1_C4297EFF013E4E78(::System::Int32 a1)
	{
		return ((::Class_2_244369E1A8054DAC*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B803BB50EF969C0C_METHOD_1_C4297EFF013E4E78_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_FD97D7184557CB1A()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B803BB50EF969C0C_METHOD_1_FD97D7184557CB1A_OFFSET))(this);
	}

	::System::Void Method_1_3E3A9561557377CB(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B803BB50EF969C0C_METHOD_1_3E3A9561557377CB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A61A196E6AD5766D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B803BB50EF969C0C_METHOD_1_A61A196E6AD5766D_OFFSET))(this);
	}

	::System::Void Method_1_A61A196E6AD5766D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B803BB50EF969C0C_METHOD_1_A61A196E6AD5766D_1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::ActivityAlley::AlleyPackGoodData*>* Method_1_9751651A0903E6FB()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityAlley::AlleyPackGoodData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B803BB50EF969C0C_METHOD_1_9751651A0903E6FB_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::ActivityAlley::AlleyPackGoodData*>* Method_1_9751651A0903E6FB_1()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityAlley::AlleyPackGoodData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B803BB50EF969C0C_METHOD_1_9751651A0903E6FB_1_OFFSET))(this);
	}
};
