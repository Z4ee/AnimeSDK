#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_20.h"
#include "unitysdk/Struct_2_5A70B04B36C288E4.h"

class Class_0_16E4307DCC419505_121;
class Class_0_16E4307DCC419505_163;
class Class_1_5E2D533DC7C7E714;
class Class_1_CDF5B114F6C8E3BB;
class Class_2_762B4BDC1532F282;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_2_BB7158A19169E7DC_ADD_ONATTRIBUTESCHANGED_OFFSET UNITYSDK_OFFSET(0x1C53D0A0)
#define CLASS_2_BB7158A19169E7DC_ADD_ONATTRIBUTESCHANGING_OFFSET UNITYSDK_OFFSET(0x1C53CFE0)
#define CLASS_2_BB7158A19169E7DC_METHOD_2_218F2836DA51D562_OFFSET UNITYSDK_OFFSET(0x1C53CDE0)
#define CLASS_2_BB7158A19169E7DC_METHOD_2_7DD02BF4914E1A64_OFFSET UNITYSDK_OFFSET(0x1C53D3C0)
#define CLASS_2_BB7158A19169E7DC_METHOD_2_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0x1C53D240)
#define CLASS_2_BB7158A19169E7DC_REMOVE_ONATTRIBUTESCHANGED_OFFSET UNITYSDK_OFFSET(0x1C53D100)
#define CLASS_2_BB7158A19169E7DC_REMOVE_ONATTRIBUTESCHANGING_OFFSET UNITYSDK_OFFSET(0x1C53D040)
#define CLASS_2_BB7158A19169E7DC__CTOR_OFFSET UNITYSDK_OFFSET(0x1C53D160)

inline static constexpr unsigned int Class_2_BB7158A19169E7DC_TypeDefinitionIndex = 41749;

class Class_2_BB7158A19169E7DC : public ::Class_1_43BD383C98B4C0C5_20
{
public:
	::Class_2_762B4BDC1532F282* NELLPHEKEPH; // 0x10
	::System::Action* OnAttributesChanging; // 0x18
	::System::Action* OnAttributesChanged; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* BODEBHFCMEE; // 0x28
	::Class_1_CDF5B114F6C8E3BB* HBDGDCJFLBN; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* BIGOKJLEAKC; // 0x38

	::System::Void _ctor(::Class_2_762B4BDC1532F282* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_762B4BDC1532F282*))((::PBYTE)hIl2Cpp + CLASS_2_BB7158A19169E7DC__CTOR_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_121* Method_2_218F2836DA51D562()
	{
		return ((::Class_0_16E4307DCC419505_121*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB7158A19169E7DC_METHOD_2_218F2836DA51D562_OFFSET))(this);
	}

	::System::Void add_OnAttributesChanging(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_BB7158A19169E7DC_ADD_ONATTRIBUTESCHANGING_OFFSET))(this, a1);
	}

	::System::Void remove_OnAttributesChanging(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_BB7158A19169E7DC_REMOVE_ONATTRIBUTESCHANGING_OFFSET))(this, a1);
	}

	::System::Void add_OnAttributesChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_BB7158A19169E7DC_ADD_ONATTRIBUTESCHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnAttributesChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_BB7158A19169E7DC_REMOVE_ONATTRIBUTESCHANGED_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::Struct_2_5A70B04B36C288E4>* Method_2_7DD02BF4914E1A64(::Class_0_16E4307DCC419505_163* a1, ::Class_1_5E2D533DC7C7E714* a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Struct_2_5A70B04B36C288E4>*(*)(::PVOID, ::Class_0_16E4307DCC419505_163*, ::Class_1_5E2D533DC7C7E714*))((::PBYTE)hIl2Cpp + CLASS_2_BB7158A19169E7DC_METHOD_2_7DD02BF4914E1A64_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A1781348F0A89177()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB7158A19169E7DC_METHOD_2_A1781348F0A89177_OFFSET))(this);
	}
};
