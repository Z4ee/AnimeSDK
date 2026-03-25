#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_73C7A91168CA39E6_CatStatType.h"
#include "unitysdk/Class_1_73C7A91168CA39E6_ModifyType.h"
#include "unitysdk/System/Object.h"

class Class_1_73C7A91168CA39E6_Class_1_1A0A2E4E6A008911;
class Class_1_73C7A91168CA39E6_Class_1_C249E433BCBD8541;
class Class_2_F3C45F1FC7349B6E;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_73C7A91168CA39E6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x166D0710)
#define CLASS_1_73C7A91168CA39E6_GET_CATSTATS_OFFSET UNITYSDK_OFFSET(0x166D4450)
#define CLASS_1_73C7A91168CA39E6_GET_PLAYERSTATS_OFFSET UNITYSDK_OFFSET(0x166D4470)
#define CLASS_1_73C7A91168CA39E6_METHOD_1_146E6E50FAF07D8F_OFFSET UNITYSDK_OFFSET(0x166D2920)
#define CLASS_1_73C7A91168CA39E6_METHOD_1_1D4EEDDAEDD99A9D_OFFSET UNITYSDK_OFFSET(0x166D0BE0)
#define CLASS_1_73C7A91168CA39E6_METHOD_1_2214B2DD0C024A0A_OFFSET UNITYSDK_OFFSET(0x166D1360)
#define CLASS_1_73C7A91168CA39E6_METHOD_1_2B9CF7B5107619CA_OFFSET UNITYSDK_OFFSET(0x166D1C30)
#define CLASS_1_73C7A91168CA39E6_METHOD_1_3CE3A20535BE55E6_OFFSET UNITYSDK_OFFSET(0x166CFA40)
#define CLASS_1_73C7A91168CA39E6_METHOD_1_810DD818C57F797D_OFFSET UNITYSDK_OFFSET(0x166D1930)
#define CLASS_1_73C7A91168CA39E6_METHOD_1_88947ACE1950EB23_OFFSET UNITYSDK_OFFSET(0x166D1170)
#define CLASS_1_73C7A91168CA39E6_METHOD_1_CB1AB4FB4042C687_OFFSET UNITYSDK_OFFSET(0x166D1590)
#define CLASS_1_73C7A91168CA39E6_METHOD_1_CDC9D49B9C57EE71_OFFSET UNITYSDK_OFFSET(0x166D0F60)
#define CLASS_1_73C7A91168CA39E6_METHOD_1_E8C07C74D3D8F211_OFFSET UNITYSDK_OFFSET(0x166D1BD0)
#define CLASS_1_73C7A91168CA39E6_METHOD_1_F63FE1AA9633F811_OFFSET UNITYSDK_OFFSET(0x166D0760)
#define CLASS_1_73C7A91168CA39E6_SET_CATSTATS_OFFSET UNITYSDK_OFFSET(0x166D4460)
#define CLASS_1_73C7A91168CA39E6_SET_PLAYERSTATS_OFFSET UNITYSDK_OFFSET(0x166D4480)
#define CLASS_1_73C7A91168CA39E6__CTOR_OFFSET UNITYSDK_OFFSET(0x166D05F0)

inline static constexpr unsigned int Class_1_73C7A91168CA39E6_TypeDefinitionIndex = 28980;

class Class_1_73C7A91168CA39E6 : public ::System::Object
{
public:
	::Class_2_F3C45F1FC7349B6E* Field_1_0; // 0x10
	::System::String* Field_1_3; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_73C7A91168CA39E6_Class_1_1A0A2E4E6A008911*>* _PlayerStats_k__BackingField; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_73C7A91168CA39E6_Class_1_C249E433BCBD8541*>* _CatStats_k__BackingField; // 0x28

	::System::Void _ctor(::Class_2_F3C45F1FC7349B6E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_1_73C7A91168CA39E6__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73C7A91168CA39E6_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_F63FE1AA9633F811()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73C7A91168CA39E6_METHOD_1_F63FE1AA9633F811_OFFSET))(this);
	}

	::System::Void Method_1_1D4EEDDAEDD99A9D(::System::UInt32 a1, ::Class_1_73C7A91168CA39E6_CatStatType a2, ::Class_1_73C7A91168CA39E6_ModifyType a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_73C7A91168CA39E6_CatStatType, ::Class_1_73C7A91168CA39E6_ModifyType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_73C7A91168CA39E6_METHOD_1_1D4EEDDAEDD99A9D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::UInt32 Method_1_CDC9D49B9C57EE71(::System::UInt32 a1, ::Class_1_73C7A91168CA39E6_CatStatType a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::Class_1_73C7A91168CA39E6_CatStatType))((::PBYTE)hIl2Cpp + CLASS_1_73C7A91168CA39E6_METHOD_1_CDC9D49B9C57EE71_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_88947ACE1950EB23(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_73C7A91168CA39E6_METHOD_1_88947ACE1950EB23_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_1_2214B2DD0C024A0A(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_73C7A91168CA39E6_METHOD_1_2214B2DD0C024A0A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CB1AB4FB4042C687(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_73C7A91168CA39E6_METHOD_1_CB1AB4FB4042C687_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_810DD818C57F797D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73C7A91168CA39E6_METHOD_1_810DD818C57F797D_OFFSET))(this);
	}

	::System::Void Method_1_E8C07C74D3D8F211(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_73C7A91168CA39E6_METHOD_1_E8C07C74D3D8F211_OFFSET))(this, a1);
	}

	::System::Void Method_1_3CE3A20535BE55E6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_73C7A91168CA39E6_METHOD_1_3CE3A20535BE55E6_OFFSET))(this, a1);
	}

	::System::Void Method_1_2B9CF7B5107619CA(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_73C7A91168CA39E6_METHOD_1_2B9CF7B5107619CA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_146E6E50FAF07D8F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73C7A91168CA39E6_METHOD_1_146E6E50FAF07D8F_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_73C7A91168CA39E6_Class_1_C249E433BCBD8541*>* get_CatStats()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_73C7A91168CA39E6_Class_1_C249E433BCBD8541*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73C7A91168CA39E6_GET_CATSTATS_OFFSET))(this);
	}

	::System::Void set_CatStats(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_73C7A91168CA39E6_Class_1_C249E433BCBD8541*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_73C7A91168CA39E6_Class_1_C249E433BCBD8541*>*))((::PBYTE)hIl2Cpp + CLASS_1_73C7A91168CA39E6_SET_CATSTATS_OFFSET))(this, value);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_73C7A91168CA39E6_Class_1_1A0A2E4E6A008911*>* get_PlayerStats()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_73C7A91168CA39E6_Class_1_1A0A2E4E6A008911*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73C7A91168CA39E6_GET_PLAYERSTATS_OFFSET))(this);
	}

	::System::Void set_PlayerStats(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_73C7A91168CA39E6_Class_1_1A0A2E4E6A008911*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_73C7A91168CA39E6_Class_1_1A0A2E4E6A008911*>*))((::PBYTE)hIl2Cpp + CLASS_1_73C7A91168CA39E6_SET_PLAYERSTATS_OFFSET))(this, value);
	}
};
