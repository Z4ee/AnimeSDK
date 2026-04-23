#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D5FAA251D0AA82EB.h"
#include "unitysdk/RPG/Client/ActivityHipplen/StatusViewData.h"

class Class_1_7D1FC6C2A098568F;
class Class_1_DED4BA2FC834659B;
class Class_1_F9FBCC956DFCF137_13;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenIncidentOption; }
namespace RPG::GameCore { class HipplenIncidentOptionStepConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_AF4DE620A0127371_METHOD_2_2CD6D17D088D5DB9_OFFSET UNITYSDK_OFFSET(0x11C23410)
#define CLASS_2_AF4DE620A0127371_METHOD_2_2FC887146F7D9C32_OFFSET UNITYSDK_OFFSET(0x11C23800)
#define CLASS_2_AF4DE620A0127371_METHOD_2_51DEC44B986280C0_OFFSET UNITYSDK_OFFSET(0x11C23460)
#define CLASS_2_AF4DE620A0127371_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x11C238D0)
#define CLASS_2_AF4DE620A0127371_METHOD_2_5C14A48496CB9BA3_OFFSET UNITYSDK_OFFSET(0x11C231E0)
#define CLASS_2_AF4DE620A0127371_METHOD_2_681B1F716F37911B_OFFSET UNITYSDK_OFFSET(0x11C23540)
#define CLASS_2_AF4DE620A0127371_METHOD_2_8E0634CDC64D0684_OFFSET UNITYSDK_OFFSET(0x11C235E0)
#define CLASS_2_AF4DE620A0127371__CTOR_OFFSET UNITYSDK_OFFSET(0x11C23280)

inline static constexpr unsigned int Class_2_AF4DE620A0127371_TypeDefinitionIndex = 69609;

class Class_2_AF4DE620A0127371 : public ::Class_1_D5FAA251D0AA82EB
{
public:
	::RPG::GameCore::HipplenIncidentOptionStepConfig* Field_2_0; // 0x30
	::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::StatusViewData>* Field_2_1; // 0x38
	::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenIncidentOption*>* Field_2_2; // 0x40
	::System::Boolean Field_2_4; // 0x48
	::System::Int32 Field_2_3; // 0x4C

	::System::Void _ctor(::RPG::GameCore::HipplenIncidentOptionStepConfig* a1, ::Class_1_DED4BA2FC834659B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HipplenIncidentOptionStepConfig*, ::Class_1_DED4BA2FC834659B*))((::PBYTE)hIl2Cpp + CLASS_2_AF4DE620A0127371__CTOR_OFFSET))(this, a1, a2);
	}

	static ::Class_2_AF4DE620A0127371* Method_2_5C14A48496CB9BA3(::RPG::GameCore::HipplenIncidentOptionStepConfig* a1, ::Class_1_DED4BA2FC834659B* a2)
	{
		return ((::Class_2_AF4DE620A0127371*(*)(::RPG::GameCore::HipplenIncidentOptionStepConfig*, ::Class_1_DED4BA2FC834659B*))((::PBYTE)hIl2Cpp + CLASS_2_AF4DE620A0127371_METHOD_2_5C14A48496CB9BA3_OFFSET))(a1, a2);
	}

	::System::Void Method_2_2CD6D17D088D5DB9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF4DE620A0127371_METHOD_2_2CD6D17D088D5DB9_OFFSET))(this);
	}

	::RPG::Client::ActivityHipplen::ActivityHipplenIncidentOption* Method_2_681B1F716F37911B()
	{
		return ((::RPG::Client::ActivityHipplen::ActivityHipplenIncidentOption*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF4DE620A0127371_METHOD_2_681B1F716F37911B_OFFSET))(this);
	}

	::System::Void Method_2_8E0634CDC64D0684(::Class_1_7D1FC6C2A098568F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7D1FC6C2A098568F*))((::PBYTE)hIl2Cpp + CLASS_2_AF4DE620A0127371_METHOD_2_8E0634CDC64D0684_OFFSET))(this, a1);
	}

	::System::Void Method_2_2FC887146F7D9C32(::Class_1_F9FBCC956DFCF137_13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_13*))((::PBYTE)hIl2Cpp + CLASS_2_AF4DE620A0127371_METHOD_2_2FC887146F7D9C32_OFFSET))(this, a1);
	}

	::System::Void Method_2_51DEC44B986280C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF4DE620A0127371_METHOD_2_51DEC44B986280C0_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF4DE620A0127371_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
