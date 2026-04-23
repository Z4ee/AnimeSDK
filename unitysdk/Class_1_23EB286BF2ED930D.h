#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_244369E1A8054DAC;
class Class_2_6E6B68B4081104EC;
namespace RPG::Client::ActivityAlley { class AlleyPackComponent; }
namespace RPG::Client::ActivityAlley { class AlleyPackGoodData; }
namespace RPG::GameCore { class AlleyPackGoodItemConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_23EB286BF2ED930D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12542A20)
#define CLASS_1_23EB286BF2ED930D_METHOD_1_2B93CCEE4CF4FFA8_OFFSET UNITYSDK_OFFSET(0x12542D50)
#define CLASS_1_23EB286BF2ED930D_METHOD_1_3306F24AC967FE79_1_OFFSET UNITYSDK_OFFSET(0x12543080)
#define CLASS_1_23EB286BF2ED930D_METHOD_1_3306F24AC967FE79_OFFSET UNITYSDK_OFFSET(0x12542EA0)
#define CLASS_1_23EB286BF2ED930D_METHOD_1_9751651A0903E6FB_1_OFFSET UNITYSDK_OFFSET(0x125432B0)
#define CLASS_1_23EB286BF2ED930D_METHOD_1_9751651A0903E6FB_OFFSET UNITYSDK_OFFSET(0x12543260)
#define CLASS_1_23EB286BF2ED930D_METHOD_1_A05ABEB93949AF84_OFFSET UNITYSDK_OFFSET(0x12542B20)
#define CLASS_1_23EB286BF2ED930D_METHOD_1_AFCE9457F2AA6E92_OFFSET UNITYSDK_OFFSET(0x125425C0)
#define CLASS_1_23EB286BF2ED930D_METHOD_1_F19C208A737CC821_OFFSET UNITYSDK_OFFSET(0x12542CB0)
#define CLASS_1_23EB286BF2ED930D__CTOR_OFFSET UNITYSDK_OFFSET(0x12542190)

inline static constexpr unsigned int Class_1_23EB286BF2ED930D_TypeDefinitionIndex = 68216;

class Class_1_23EB286BF2ED930D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_2_244369E1A8054DAC*>* Field_1_3; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::ActivityAlley::AlleyPackGoodData*>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::Class_2_6E6B68B4081104EC*>* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::RPG::Client::ActivityAlley::AlleyPackGoodData*>* Field_1_0; // 0x28

	::System::Void _ctor(::RPG::Client::ActivityAlley::AlleyPackComponent* a1, ::RPG::Client::ActivityAlley::AlleyPackGoodData* a2, ::RPG::GameCore::AlleyPackGoodItemConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackComponent*, ::RPG::Client::ActivityAlley::AlleyPackGoodData*, ::RPG::GameCore::AlleyPackGoodItemConfig*))((::PBYTE)hIl2Cpp + CLASS_1_23EB286BF2ED930D__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23EB286BF2ED930D_DISPOSE_OFFSET))(this);
	}

	::System::UInt32 Method_1_A05ABEB93949AF84(::RPG::Client::ActivityAlley::AlleyPackGoodData* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackGoodData*))((::PBYTE)hIl2Cpp + CLASS_1_23EB286BF2ED930D_METHOD_1_A05ABEB93949AF84_OFFSET))(this, a1);
	}

	::Class_2_244369E1A8054DAC* Method_1_F19C208A737CC821(::System::Int32 a1)
	{
		return ((::Class_2_244369E1A8054DAC*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_23EB286BF2ED930D_METHOD_1_F19C208A737CC821_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_2B93CCEE4CF4FFA8()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23EB286BF2ED930D_METHOD_1_2B93CCEE4CF4FFA8_OFFSET))(this);
	}

	::System::Void Method_1_AFCE9457F2AA6E92(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_23EB286BF2ED930D_METHOD_1_AFCE9457F2AA6E92_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3306F24AC967FE79()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23EB286BF2ED930D_METHOD_1_3306F24AC967FE79_OFFSET))(this);
	}

	::System::Void Method_1_3306F24AC967FE79_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23EB286BF2ED930D_METHOD_1_3306F24AC967FE79_1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::ActivityAlley::AlleyPackGoodData*>* Method_1_9751651A0903E6FB()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityAlley::AlleyPackGoodData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23EB286BF2ED930D_METHOD_1_9751651A0903E6FB_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::ActivityAlley::AlleyPackGoodData*>* Method_1_9751651A0903E6FB_1()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityAlley::AlleyPackGoodData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23EB286BF2ED930D_METHOD_1_9751651A0903E6FB_1_OFFSET))(this);
	}
};
