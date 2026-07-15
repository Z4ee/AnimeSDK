#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6D71C04EE4F62B55_CatStatType.h"
#include "unitysdk/Class_1_6D71C04EE4F62B55_ModifyType.h"
#include "unitysdk/System/Object.h"

class Class_1_6D71C04EE4F62B55_Class_1_3A1B2E99409FD037;
class Class_1_6D71C04EE4F62B55_Class_1_C249E433BCBD8541;
class Class_2_F3C45F1FC7349B6E;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_6D71C04EE4F62B55_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17BA8740)
#define CLASS_1_6D71C04EE4F62B55_GET_CATSTATS_OFFSET UNITYSDK_OFFSET(0x17BABC90)
#define CLASS_1_6D71C04EE4F62B55_GET_PLAYERSTATS_OFFSET UNITYSDK_OFFSET(0x17BABCB0)
#define CLASS_1_6D71C04EE4F62B55_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x17BA96A0)
#define CLASS_1_6D71C04EE4F62B55_METHOD_1_2B9CF7B5107619CA_OFFSET UNITYSDK_OFFSET(0x17BA9900)
#define CLASS_1_6D71C04EE4F62B55_METHOD_1_3CE3A20535BE55E6_OFFSET UNITYSDK_OFFSET(0x17BA6DD0)
#define CLASS_1_6D71C04EE4F62B55_METHOD_1_4918C21D4C1473A5_OFFSET UNITYSDK_OFFSET(0x17B87E90)
#define CLASS_1_6D71C04EE4F62B55_METHOD_1_5554C21C67DE0348_OFFSET UNITYSDK_OFFSET(0x17BA8FA0)
#define CLASS_1_6D71C04EE4F62B55_METHOD_1_7AFDCEBE215B2348_OFFSET UNITYSDK_OFFSET(0x17BA8DF0)
#define CLASS_1_6D71C04EE4F62B55_METHOD_1_96189EDEF38976A6_OFFSET UNITYSDK_OFFSET(0x17BAA320)
#define CLASS_1_6D71C04EE4F62B55_METHOD_1_A61D2055CC5A69FE_OFFSET UNITYSDK_OFFSET(0x17BA9320)
#define CLASS_1_6D71C04EE4F62B55_METHOD_1_AE80CBC984AADFD5_OFFSET UNITYSDK_OFFSET(0x17BA8790)
#define CLASS_1_6D71C04EE4F62B55_METHOD_1_E8C07C74D3D8F211_OFFSET UNITYSDK_OFFSET(0x17BA98A0)
#define CLASS_1_6D71C04EE4F62B55_METHOD_1_F95BBF29D7A05513_OFFSET UNITYSDK_OFFSET(0x17BA9140)
#define CLASS_1_6D71C04EE4F62B55_SET_CATSTATS_OFFSET UNITYSDK_OFFSET(0x17BABCA0)
#define CLASS_1_6D71C04EE4F62B55_SET_PLAYERSTATS_OFFSET UNITYSDK_OFFSET(0x17BABCC0)
#define CLASS_1_6D71C04EE4F62B55__CTOR_OFFSET UNITYSDK_OFFSET(0x17BA8620)

inline static constexpr unsigned int Class_1_6D71C04EE4F62B55_TypeDefinitionIndex = 35779;

class Class_1_6D71C04EE4F62B55 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_6D71C04EE4F62B55_Class_1_3A1B2E99409FD037*>* _PlayerStats_k__BackingField; // 0x10
	::System::String* Field_1_1; // 0x18
	::Class_2_F3C45F1FC7349B6E* Field_1_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_6D71C04EE4F62B55_Class_1_C249E433BCBD8541*>* _CatStats_k__BackingField; // 0x28

	::System::Void _ctor(::Class_2_F3C45F1FC7349B6E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_1_6D71C04EE4F62B55__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D71C04EE4F62B55_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_AE80CBC984AADFD5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D71C04EE4F62B55_METHOD_1_AE80CBC984AADFD5_OFFSET))(this);
	}

	::System::Void Method_1_4918C21D4C1473A5(::System::UInt32 a1, ::Class_1_6D71C04EE4F62B55_CatStatType a2, ::Class_1_6D71C04EE4F62B55_ModifyType a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_6D71C04EE4F62B55_CatStatType, ::Class_1_6D71C04EE4F62B55_ModifyType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6D71C04EE4F62B55_METHOD_1_4918C21D4C1473A5_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::UInt32 Method_1_7AFDCEBE215B2348(::System::UInt32 a1, ::Class_1_6D71C04EE4F62B55_CatStatType a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::Class_1_6D71C04EE4F62B55_CatStatType))((::PBYTE)hIl2Cpp + CLASS_1_6D71C04EE4F62B55_METHOD_1_7AFDCEBE215B2348_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5554C21C67DE0348(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6D71C04EE4F62B55_METHOD_1_5554C21C67DE0348_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_1_F95BBF29D7A05513(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6D71C04EE4F62B55_METHOD_1_F95BBF29D7A05513_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A61D2055CC5A69FE(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6D71C04EE4F62B55_METHOD_1_A61D2055CC5A69FE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D71C04EE4F62B55_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_E8C07C74D3D8F211(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_6D71C04EE4F62B55_METHOD_1_E8C07C74D3D8F211_OFFSET))(this, a1);
	}

	::System::Void Method_1_3CE3A20535BE55E6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6D71C04EE4F62B55_METHOD_1_3CE3A20535BE55E6_OFFSET))(this, a1);
	}

	::System::Void Method_1_2B9CF7B5107619CA(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6D71C04EE4F62B55_METHOD_1_2B9CF7B5107619CA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_96189EDEF38976A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D71C04EE4F62B55_METHOD_1_96189EDEF38976A6_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_6D71C04EE4F62B55_Class_1_C249E433BCBD8541*>* get_CatStats()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_6D71C04EE4F62B55_Class_1_C249E433BCBD8541*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D71C04EE4F62B55_GET_CATSTATS_OFFSET))(this);
	}

	::System::Void set_CatStats(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_6D71C04EE4F62B55_Class_1_C249E433BCBD8541*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_6D71C04EE4F62B55_Class_1_C249E433BCBD8541*>*))((::PBYTE)hIl2Cpp + CLASS_1_6D71C04EE4F62B55_SET_CATSTATS_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_6D71C04EE4F62B55_Class_1_3A1B2E99409FD037*>* get_PlayerStats()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_6D71C04EE4F62B55_Class_1_3A1B2E99409FD037*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D71C04EE4F62B55_GET_PLAYERSTATS_OFFSET))(this);
	}

	::System::Void set_PlayerStats(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_6D71C04EE4F62B55_Class_1_3A1B2E99409FD037*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_6D71C04EE4F62B55_Class_1_3A1B2E99409FD037*>*))((::PBYTE)hIl2Cpp + CLASS_1_6D71C04EE4F62B55_SET_PLAYERSTATS_OFFSET))(this, a1);
	}
};
