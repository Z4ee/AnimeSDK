#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_137.h"
#include "unitysdk/RPG/Client/RuntimeGroupManager_HoYoGroupUnit_CustomRuleType.h"
#include "unitysdk/RPG/Client/RuntimeGroupManager_HoYoGroupUnit_InVisionRefreshState.h"
#include "unitysdk/RPG/Client/RuntimeGroupManager_HoYoGroupUnit_NpcConflictRefreshState.h"
#include "unitysdk/RPG/Client/RuntimeGroupManager_HoYoGroupUnit_RegionRefreshState.h"
#include "unitysdk/RPG/Client/RuntimeGroupManager_HoYoGroupUnit_SpaceConflictRefreshState.h"
#include "unitysdk/RPG/GameCore/GroupCategory.h"
#include "unitysdk/RPG/GameCore/HoYoGroupType.h"

namespace RPG::GameCore { class LevelGroupBakedInfo; }
namespace RPG::GameCore { class LevelGroupSpatialBakedInfo; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_C26550BDF4374801_METHOD_2_21502C11B3A9ECE9_OFFSET UNITYSDK_OFFSET(0xA852690)
#define CLASS_2_C26550BDF4374801_METHOD_2_259B533085E399D3_OFFSET UNITYSDK_OFFSET(0xA852330)
#define CLASS_2_C26550BDF4374801_METHOD_2_2E03F5D0DE1D6C5C_OFFSET UNITYSDK_OFFSET(0xA851EF0)
#define CLASS_2_C26550BDF4374801_METHOD_2_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0xA852030)
#define CLASS_2_C26550BDF4374801_METHOD_2_391A84BCD9F51317_2_OFFSET UNITYSDK_OFFSET(0xA8520D0)
#define CLASS_2_C26550BDF4374801_METHOD_2_391A84BCD9F51317_3_OFFSET UNITYSDK_OFFSET(0xA852170)
#define CLASS_2_C26550BDF4374801_METHOD_2_391A84BCD9F51317_4_OFFSET UNITYSDK_OFFSET(0xA852290)
#define CLASS_2_C26550BDF4374801_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xA851F90)
#define CLASS_2_C26550BDF4374801_METHOD_2_4013F515B68DCA44_OFFSET UNITYSDK_OFFSET(0xA852610)
#define CLASS_2_C26550BDF4374801_METHOD_2_4484591CA1060976_OFFSET UNITYSDK_OFFSET(0xA8523E0)
#define CLASS_2_C26550BDF4374801_METHOD_2_4566D0B23DA94A17_OFFSET UNITYSDK_OFFSET(0xA851EB0)
#define CLASS_2_C26550BDF4374801_METHOD_2_489DC8E0A460FF43_OFFSET UNITYSDK_OFFSET(0xA851FE0)
#define CLASS_2_C26550BDF4374801_METHOD_2_5135E99239DDCA8C_OFFSET UNITYSDK_OFFSET(0xA8525B0)
#define CLASS_2_C26550BDF4374801_METHOD_2_5CEC4607322705E5_1_OFFSET UNITYSDK_OFFSET(0xA8524B0)
#define CLASS_2_C26550BDF4374801_METHOD_2_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0xA852470)
#define CLASS_2_C26550BDF4374801_METHOD_2_64B8079B1F058B8D_OFFSET UNITYSDK_OFFSET(0xA852120)
#define CLASS_2_C26550BDF4374801_METHOD_2_696ED1E9D5DBB650_OFFSET UNITYSDK_OFFSET(0xA8522D0)
#define CLASS_2_C26550BDF4374801_METHOD_2_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0xA852390)
#define CLASS_2_C26550BDF4374801_METHOD_2_8E6B9255CA6EC5B2_OFFSET UNITYSDK_OFFSET(0xA851F40)
#define CLASS_2_C26550BDF4374801_METHOD_2_990693FCFAE1F8A0_OFFSET UNITYSDK_OFFSET(0xA852080)
#define CLASS_2_C26550BDF4374801_METHOD_2_9FE6F3C8AD4ACA37_OFFSET UNITYSDK_OFFSET(0xA852550)
#define CLASS_2_C26550BDF4374801_METHOD_2_A5E31ADD989F7EA7_OFFSET UNITYSDK_OFFSET(0xA8521C0)
#define CLASS_2_C26550BDF4374801_METHOD_2_AEE163C389D11505_OFFSET UNITYSDK_OFFSET(0xA8524F0)
#define CLASS_2_C26550BDF4374801_METHOD_2_BE463E7183711547_OFFSET UNITYSDK_OFFSET(0xA852230)
#define CLASS_2_C26550BDF4374801_METHOD_2_D978819B0A4871A0_OFFSET UNITYSDK_OFFSET(0xA851E20)
#define CLASS_2_C26550BDF4374801_METHOD_2_E8302C157AFBAD54_OFFSET UNITYSDK_OFFSET(0xA851E60)
#define CLASS_2_C26550BDF4374801_METHOD_2_E942DF9F38FB80E2_OFFSET UNITYSDK_OFFSET(0xA8526E0)
#define CLASS_2_C26550BDF4374801_METHOD_2_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0xA8528E0)
#define CLASS_2_C26550BDF4374801_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0xA851DF0)
#define CLASS_2_C26550BDF4374801_METHOD_2_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0xA851E40)
#define CLASS_2_C26550BDF4374801_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA852940)
#define CLASS_2_C26550BDF4374801__CTOR_OFFSET UNITYSDK_OFFSET(0xA851DD0)
#define CLASS_2_C26550BDF4374801___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA852A20)

inline static constexpr unsigned int Class_2_C26550BDF4374801_TypeDefinitionIndex = 58017;

class Class_2_C26550BDF4374801 : public ::Class_1_43BD383C98B4C0C5_137
{
public:
	::RPG::GameCore::RuntimeGroupInfo* Field_2_0; // 0x10
	::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_InVisionRefreshState Field_2_1; // 0x18
	::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_SpaceConflictRefreshState Field_2_2; // 0x1C
	::System::UInt64 Field_2_3; // 0x20
	::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_RegionRefreshState Field_2_4; // 0x28
	::System::UInt32 Field_2_5; // 0x2C
	::System::UInt32 Field_2_6; // 0x30
	::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_NpcConflictRefreshState Field_2_7; // 0x34

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::RuntimeGroupInfo* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + CLASS_2_C26550BDF4374801__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C26550BDF4374801_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}

	::System::UInt32 Method_2_D978819B0A4871A0()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C26550BDF4374801_METHOD_2_D978819B0A4871A0_OFFSET))(this);
	}

	::System::Int32 Method_2_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C26550BDF4374801_METHOD_2_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::System::Boolean Method_2_E8302C157AFBAD54()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C26550BDF4374801_METHOD_2_E8302C157AFBAD54_OFFSET))(this);
	}

	::RPG::GameCore::RuntimeGroupInfo* Method_2_4566D0B23DA94A17()
	{
		return ((::RPG::GameCore::RuntimeGroupInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C26550BDF4374801_METHOD_2_4566D0B23DA94A17_OFFSET))(this);
	}

	::RPG::GameCore::LevelGroupBakedInfo* Method_2_2E03F5D0DE1D6C5C()
	{
		return ((::RPG::GameCore::LevelGroupBakedInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C26550BDF4374801_METHOD_2_2E03F5D0DE1D6C5C_OFFSET))(this);
	}

	::System::Void Method_2_8E6B9255CA6EC5B2(::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_NpcConflictRefreshState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_NpcConflictRefreshState))((::PBYTE)hIl2Cpp + CLASS_2_C26550BDF4374801_METHOD_2_8E6B9255CA6EC5B2_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C26550BDF4374801_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_2_489DC8E0A460FF43(::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_SpaceConflictRefreshState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_SpaceConflictRefreshState))((::PBYTE)hIl2Cpp + CLASS_2_C26550BDF4374801_METHOD_2_489DC8E0A460FF43_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C26550BDF4374801_METHOD_2_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Void Method_2_990693FCFAE1F8A0(::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_InVisionRefreshState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_InVisionRefreshState))((::PBYTE)hIl2Cpp + CLASS_2_C26550BDF4374801_METHOD_2_990693FCFAE1F8A0_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C26550BDF4374801_METHOD_2_391A84BCD9F51317_2_OFFSET))(this);
	}

	::System::Void Method_2_64B8079B1F058B8D(::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_RegionRefreshState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_RegionRefreshState))((::PBYTE)hIl2Cpp + CLASS_2_C26550BDF4374801_METHOD_2_64B8079B1F058B8D_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C26550BDF4374801_METHOD_2_391A84BCD9F51317_3_OFFSET))(this);
	}

	::System::Void Method_2_A5E31ADD989F7EA7(::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_CustomRuleType a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_CustomRuleType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C26550BDF4374801_METHOD_2_A5E31ADD989F7EA7_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_BE463E7183711547(::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_CustomRuleType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_CustomRuleType))((::PBYTE)hIl2Cpp + CLASS_2_C26550BDF4374801_METHOD_2_BE463E7183711547_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317_4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C26550BDF4374801_METHOD_2_391A84BCD9F51317_4_OFFSET))(this);
	}

	::RPG::GameCore::GroupCategory Method_2_696ED1E9D5DBB650()
	{
		return ((::RPG::GameCore::GroupCategory(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C26550BDF4374801_METHOD_2_696ED1E9D5DBB650_OFFSET))(this);
	}

	::System::UInt32 Method_2_259B533085E399D3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C26550BDF4374801_METHOD_2_259B533085E399D3_OFFSET))(this);
	}

	::System::Void Method_2_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_C26550BDF4374801_METHOD_2_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_4484591CA1060976()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C26550BDF4374801_METHOD_2_4484591CA1060976_OFFSET))(this);
	}

	::System::UInt32 Method_2_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C26550BDF4374801_METHOD_2_5CEC4607322705E5_OFFSET))(this);
	}

	::System::UInt32 Method_2_5CEC4607322705E5_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C26550BDF4374801_METHOD_2_5CEC4607322705E5_1_OFFSET))(this);
	}

	::RPG::GameCore::HoYoGroupType Method_2_AEE163C389D11505()
	{
		return ((::RPG::GameCore::HoYoGroupType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C26550BDF4374801_METHOD_2_AEE163C389D11505_OFFSET))(this);
	}

	::RPG::GameCore::LevelGroupSpatialBakedInfo* Method_2_9FE6F3C8AD4ACA37()
	{
		return ((::RPG::GameCore::LevelGroupSpatialBakedInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C26550BDF4374801_METHOD_2_9FE6F3C8AD4ACA37_OFFSET))(this);
	}

	::Il2CppArray<::System::UInt32>* Method_2_5135E99239DDCA8C()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C26550BDF4374801_METHOD_2_5135E99239DDCA8C_OFFSET))(this);
	}

	::System::Boolean Method_2_4013F515B68DCA44(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_C26550BDF4374801_METHOD_2_4013F515B68DCA44_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_2_21502C11B3A9ECE9()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C26550BDF4374801_METHOD_2_21502C11B3A9ECE9_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt32>* Method_2_E942DF9F38FB80E2()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C26550BDF4374801_METHOD_2_E942DF9F38FB80E2_OFFSET))(this);
	}

	::System::Int32 Method_2_F026F9F94BAA5E1F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C26550BDF4374801_METHOD_2_F026F9F94BAA5E1F_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C26550BDF4374801_TOSTRING_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C26550BDF4374801___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
