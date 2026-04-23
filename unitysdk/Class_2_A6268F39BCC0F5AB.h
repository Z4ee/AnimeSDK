#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_125.h"
#include "unitysdk/RPG/Client/RuntimeGroupManager_HoYoGroupUnit_CustomRuleType.h"
#include "unitysdk/RPG/Client/RuntimeGroupManager_HoYoGroupUnit_InVisionRefreshState.h"
#include "unitysdk/RPG/Client/RuntimeGroupManager_HoYoGroupUnit_NpcConflictRefreshState.h"
#include "unitysdk/RPG/Client/RuntimeGroupManager_HoYoGroupUnit_RegionRefreshState.h"
#include "unitysdk/RPG/Client/RuntimeGroupManager_HoYoGroupUnit_SpaceConflictRefreshState.h"
#include "unitysdk/RPG/GameCore/GroupCategory.h"
#include "unitysdk/RPG/GameCore/HoYoGroupType.h"

namespace RPG::Client { class RuntimeGroupManager_HoYoGroupUnit; }
namespace RPG::GameCore { class LevelGroupBakedInfo; }
namespace RPG::GameCore { class LevelGroupSpatialBakedInfo; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_A6268F39BCC0F5AB_METHOD_2_09B8F368BEF6ADA5_OFFSET UNITYSDK_OFFSET(0x923C940)
#define CLASS_2_A6268F39BCC0F5AB_METHOD_2_0DA02645F51F0244_OFFSET UNITYSDK_OFFSET(0x923C2B0)
#define CLASS_2_A6268F39BCC0F5AB_METHOD_2_0DB9E09E779F665E_OFFSET UNITYSDK_OFFSET(0x923BD50)
#define CLASS_2_A6268F39BCC0F5AB_METHOD_2_123DFB09BD2C9B9E_OFFSET UNITYSDK_OFFSET(0x923C250)
#define CLASS_2_A6268F39BCC0F5AB_METHOD_2_13DC56A834EE2F9D_OFFSET UNITYSDK_OFFSET(0x923C4A0)
#define CLASS_2_A6268F39BCC0F5AB_METHOD_2_1808E1CF7A125519_1_OFFSET UNITYSDK_OFFSET(0x923BCE0)
#define CLASS_2_A6268F39BCC0F5AB_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x923BBF0)
#define CLASS_2_A6268F39BCC0F5AB_METHOD_2_2372762F4122DEB8_OFFSET UNITYSDK_OFFSET(0x923B950)
#define CLASS_2_A6268F39BCC0F5AB_METHOD_2_2416113C73C7C955_OFFSET UNITYSDK_OFFSET(0x923BC60)
#define CLASS_2_A6268F39BCC0F5AB_METHOD_2_24552DC4DDC68C19_OFFSET UNITYSDK_OFFSET(0x923BAA0)
#define CLASS_2_A6268F39BCC0F5AB_METHOD_2_34BC8282ADEBDD26_OFFSET UNITYSDK_OFFSET(0x923C520)
#define CLASS_2_A6268F39BCC0F5AB_METHOD_2_37D0382D0C30A2DC_OFFSET UNITYSDK_OFFSET(0x923B9C0)
#define CLASS_2_A6268F39BCC0F5AB_METHOD_2_3B29BFD93B19B87F_OFFSET UNITYSDK_OFFSET(0x923C420)
#define CLASS_2_A6268F39BCC0F5AB_METHOD_2_4484591CA1060976_OFFSET UNITYSDK_OFFSET(0x923C1B0)
#define CLASS_2_A6268F39BCC0F5AB_METHOD_2_4628F59881B23161_OFFSET UNITYSDK_OFFSET(0x923C3A0)
#define CLASS_2_A6268F39BCC0F5AB_METHOD_2_595499E86B195EE3_OFFSET UNITYSDK_OFFSET(0x923C6B0)
#define CLASS_2_A6268F39BCC0F5AB_METHOD_2_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0x923C360)
#define CLASS_2_A6268F39BCC0F5AB_METHOD_2_5D8A9BA8CCDDD8B2_OFFSET UNITYSDK_OFFSET(0x923C5A0)
#define CLASS_2_A6268F39BCC0F5AB_METHOD_2_70F4EBC2B41EB744_OFFSET UNITYSDK_OFFSET(0x923BB70)
#define CLASS_2_A6268F39BCC0F5AB_METHOD_2_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0x923C0A0)
#define CLASS_2_A6268F39BCC0F5AB_METHOD_2_868BAA031BE8E5FB_OFFSET UNITYSDK_OFFSET(0x923BE60)
#define CLASS_2_A6268F39BCC0F5AB_METHOD_2_8BABCC7D1D7DB6B6_OFFSET UNITYSDK_OFFSET(0x923BB00)
#define CLASS_2_A6268F39BCC0F5AB_METHOD_2_97A4CC8A02FB1ACD_OFFSET UNITYSDK_OFFSET(0x923BF70)
#define CLASS_2_A6268F39BCC0F5AB_METHOD_2_A3FAE12D7B6ACD62_1_OFFSET UNITYSDK_OFFSET(0x923BDD0)
#define CLASS_2_A6268F39BCC0F5AB_METHOD_2_A3FAE12D7B6ACD62_2_OFFSET UNITYSDK_OFFSET(0x923BEE0)
#define CLASS_2_A6268F39BCC0F5AB_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x923B8E0)
#define CLASS_2_A6268F39BCC0F5AB_METHOD_2_B632E3BE93938E42_OFFSET UNITYSDK_OFFSET(0x923BA30)
#define CLASS_2_A6268F39BCC0F5AB_METHOD_2_E14A5373E539FB71_OFFSET UNITYSDK_OFFSET(0x923C640)
#define CLASS_2_A6268F39BCC0F5AB_METHOD_2_F0299A4331432AE2_OFFSET UNITYSDK_OFFSET(0x923C130)
#define CLASS_2_A6268F39BCC0F5AB_METHOD_2_F65930C2CCB51D49_OFFSET UNITYSDK_OFFSET(0x923C010)
#define CLASS_2_A6268F39BCC0F5AB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x923C9C0)
#define CLASS_2_A6268F39BCC0F5AB__CTOR_OFFSET UNITYSDK_OFFSET(0x923B8D0)
#define CLASS_2_A6268F39BCC0F5AB___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x923CA70)

inline static constexpr unsigned int Class_2_A6268F39BCC0F5AB_TypeDefinitionIndex = 57226;

class Class_2_A6268F39BCC0F5AB : public ::Class_1_43BD383C98B4C0C5_125
{
public:
	::RPG::Client::RuntimeGroupManager_HoYoGroupUnit* Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x18

	::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit*))((::PBYTE)hIl2Cpp + CLASS_2_A6268F39BCC0F5AB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6268F39BCC0F5AB_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::UInt32 Method_2_2372762F4122DEB8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6268F39BCC0F5AB_METHOD_2_2372762F4122DEB8_OFFSET))(this);
	}

	::System::Int32 Method_2_37D0382D0C30A2DC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6268F39BCC0F5AB_METHOD_2_37D0382D0C30A2DC_OFFSET))(this);
	}

	::System::Boolean Method_2_B632E3BE93938E42()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6268F39BCC0F5AB_METHOD_2_B632E3BE93938E42_OFFSET))(this);
	}

	::RPG::GameCore::RuntimeGroupInfo* Method_2_24552DC4DDC68C19()
	{
		return ((::RPG::GameCore::RuntimeGroupInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6268F39BCC0F5AB_METHOD_2_24552DC4DDC68C19_OFFSET))(this);
	}

	::RPG::GameCore::LevelGroupBakedInfo* Method_2_8BABCC7D1D7DB6B6()
	{
		return ((::RPG::GameCore::LevelGroupBakedInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6268F39BCC0F5AB_METHOD_2_8BABCC7D1D7DB6B6_OFFSET))(this);
	}

	::System::Void Method_2_70F4EBC2B41EB744(::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_NpcConflictRefreshState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_NpcConflictRefreshState))((::PBYTE)hIl2Cpp + CLASS_2_A6268F39BCC0F5AB_METHOD_2_70F4EBC2B41EB744_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6268F39BCC0F5AB_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_2_2416113C73C7C955(::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_SpaceConflictRefreshState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_SpaceConflictRefreshState))((::PBYTE)hIl2Cpp + CLASS_2_A6268F39BCC0F5AB_METHOD_2_2416113C73C7C955_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1808E1CF7A125519_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6268F39BCC0F5AB_METHOD_2_1808E1CF7A125519_1_OFFSET))(this);
	}

	::System::Void Method_2_0DB9E09E779F665E(::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_InVisionRefreshState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_InVisionRefreshState))((::PBYTE)hIl2Cpp + CLASS_2_A6268F39BCC0F5AB_METHOD_2_0DB9E09E779F665E_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6268F39BCC0F5AB_METHOD_2_A3FAE12D7B6ACD62_1_OFFSET))(this);
	}

	::System::Void Method_2_868BAA031BE8E5FB(::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_RegionRefreshState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_RegionRefreshState))((::PBYTE)hIl2Cpp + CLASS_2_A6268F39BCC0F5AB_METHOD_2_868BAA031BE8E5FB_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6268F39BCC0F5AB_METHOD_2_A3FAE12D7B6ACD62_2_OFFSET))(this);
	}

	::System::Void Method_2_97A4CC8A02FB1ACD(::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_CustomRuleType a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_CustomRuleType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A6268F39BCC0F5AB_METHOD_2_97A4CC8A02FB1ACD_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F65930C2CCB51D49(::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_CustomRuleType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_CustomRuleType))((::PBYTE)hIl2Cpp + CLASS_2_A6268F39BCC0F5AB_METHOD_2_F65930C2CCB51D49_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6268F39BCC0F5AB_METHOD_2_83DA3EC57FF907F4_OFFSET))(this);
	}

	::RPG::GameCore::GroupCategory Method_2_F0299A4331432AE2()
	{
		return ((::RPG::GameCore::GroupCategory(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6268F39BCC0F5AB_METHOD_2_F0299A4331432AE2_OFFSET))(this);
	}

	::System::UInt32 Method_2_4484591CA1060976()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6268F39BCC0F5AB_METHOD_2_4484591CA1060976_OFFSET))(this);
	}

	::System::Void Method_2_123DFB09BD2C9B9E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_A6268F39BCC0F5AB_METHOD_2_123DFB09BD2C9B9E_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_0DA02645F51F0244()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6268F39BCC0F5AB_METHOD_2_0DA02645F51F0244_OFFSET))(this);
	}

	::System::UInt32 Method_2_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6268F39BCC0F5AB_METHOD_2_5CEC4607322705E5_OFFSET))(this);
	}

	::System::UInt32 Method_2_4628F59881B23161()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6268F39BCC0F5AB_METHOD_2_4628F59881B23161_OFFSET))(this);
	}

	::RPG::GameCore::HoYoGroupType Method_2_3B29BFD93B19B87F()
	{
		return ((::RPG::GameCore::HoYoGroupType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6268F39BCC0F5AB_METHOD_2_3B29BFD93B19B87F_OFFSET))(this);
	}

	::RPG::GameCore::LevelGroupSpatialBakedInfo* Method_2_13DC56A834EE2F9D()
	{
		return ((::RPG::GameCore::LevelGroupSpatialBakedInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6268F39BCC0F5AB_METHOD_2_13DC56A834EE2F9D_OFFSET))(this);
	}

	::Il2CppArray<::System::UInt32>* Method_2_34BC8282ADEBDD26()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6268F39BCC0F5AB_METHOD_2_34BC8282ADEBDD26_OFFSET))(this);
	}

	::System::Boolean Method_2_5D8A9BA8CCDDD8B2(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_A6268F39BCC0F5AB_METHOD_2_5D8A9BA8CCDDD8B2_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_2_E14A5373E539FB71()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6268F39BCC0F5AB_METHOD_2_E14A5373E539FB71_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt32>* Method_2_595499E86B195EE3()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6268F39BCC0F5AB_METHOD_2_595499E86B195EE3_OFFSET))(this);
	}

	::System::Int32 Method_2_09B8F368BEF6ADA5()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6268F39BCC0F5AB_METHOD_2_09B8F368BEF6ADA5_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6268F39BCC0F5AB_TOSTRING_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6268F39BCC0F5AB___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
