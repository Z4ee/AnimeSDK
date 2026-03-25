#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityBenefitLuckyKoiInfo.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_1_2827A08E633A7795_4;
namespace RPG::Client { class ActivityBenefitDailyInfo; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYBENEFITMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8EF3570)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8EF35A0)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE___C__GETFIRSTSELECTTABINDEX_B__6_0_OFFSET UNITYSDK_OFFSET(0x8EF35B0)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE___C__GETFIRSTSELECTTABINDEX_B__6_1_OFFSET UNITYSDK_OFFSET(0x8EF35C0)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE___C__GETFIRSTSELECTTABINDEX_B__6_2_OFFSET UNITYSDK_OFFSET(0x8EF35D0)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE___C__GETLUCKYKOIINFOLIST_B__25_0_OFFSET UNITYSDK_OFFSET(0x8EF35E0)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE___C__GETLUCKYKOIINFOLIST_B__25_1_OFFSET UNITYSDK_OFFSET(0x8EF35F0)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE___C__GETLUCKYKOIINFOLIST_B__25_2_OFFSET UNITYSDK_OFFSET(0x8EF3600)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE___C__GETLUCKYKOIINFOLIST_B__25_3_OFFSET UNITYSDK_OFFSET(0x8EF3610)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityBenefitModule___c_TypeDefinitionIndex = 49797;

	class ActivityBenefitModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityBenefitDailyInfo*>, ::RPG::Client::ActivityBenefitDailyInfo*>** StaticGet___9__6_2()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityBenefitDailyInfo*>, ::RPG::Client::ActivityBenefitDailyInfo*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityBenefitModule___c_TypeDefinitionIndex)->GetStaticField(0x28B00);
		}
		static ::RPG::Client::ActivityBenefitModule___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityBenefitModule___c**)Il2CppClass::FromTypeDefinitionIndex(ActivityBenefitModule___c_TypeDefinitionIndex)->GetStaticField(0x28B08);
		}
		static ::System::Func_2<::Class_1_2827A08E633A7795_4*, ::RPG::Client::ActivityBenefitLuckyKoiInfo>** StaticGet___9__25_3()
		{
			return (::System::Func_2<::Class_1_2827A08E633A7795_4*, ::RPG::Client::ActivityBenefitLuckyKoiInfo>**)Il2CppClass::FromTypeDefinitionIndex(ActivityBenefitModule___c_TypeDefinitionIndex)->GetStaticField(0x28B10);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityBenefitDailyInfo*>, ::RPG::Client::ActivityBenefitDailyInfo*>** StaticGet___9__25_2()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityBenefitDailyInfo*>, ::RPG::Client::ActivityBenefitDailyInfo*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityBenefitModule___c_TypeDefinitionIndex)->GetStaticField(0x28B18);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityBenefitDailyInfo*>, ::System::UInt32>** StaticGet___9__6_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityBenefitDailyInfo*>, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ActivityBenefitModule___c_TypeDefinitionIndex)->GetStaticField(0x28B20);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityBenefitDailyInfo*>, ::System::UInt32>** StaticGet___9__25_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityBenefitDailyInfo*>, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ActivityBenefitModule___c_TypeDefinitionIndex)->GetStaticField(0x28B28);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityBenefitDailyInfo*>, ::System::UInt32>** StaticGet___9__25_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityBenefitDailyInfo*>, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ActivityBenefitModule___c_TypeDefinitionIndex)->GetStaticField(0x28B30);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityBenefitDailyInfo*>, ::System::UInt32>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityBenefitDailyInfo*>, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ActivityBenefitModule___c_TypeDefinitionIndex)->GetStaticField(0x28B38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetFirstSelectTabIndex_b__6_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityBenefitDailyInfo*> e)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityBenefitDailyInfo*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE___C__GETFIRSTSELECTTABINDEX_B__6_0_OFFSET))(this, e);
		}

		::System::UInt32 _GetFirstSelectTabIndex_b__6_1(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityBenefitDailyInfo*> pair)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityBenefitDailyInfo*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE___C__GETFIRSTSELECTTABINDEX_B__6_1_OFFSET))(this, pair);
		}

		::RPG::Client::ActivityBenefitDailyInfo* _GetFirstSelectTabIndex_b__6_2(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityBenefitDailyInfo*> pair)
		{
			return ((::RPG::Client::ActivityBenefitDailyInfo*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityBenefitDailyInfo*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE___C__GETFIRSTSELECTTABINDEX_B__6_2_OFFSET))(this, pair);
		}

		::System::UInt32 _GetLuckyKoiInfoList_b__25_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityBenefitDailyInfo*> e)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityBenefitDailyInfo*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE___C__GETLUCKYKOIINFOLIST_B__25_0_OFFSET))(this, e);
		}

		::System::UInt32 _GetLuckyKoiInfoList_b__25_1(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityBenefitDailyInfo*> pair)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityBenefitDailyInfo*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE___C__GETLUCKYKOIINFOLIST_B__25_1_OFFSET))(this, pair);
		}

		::RPG::Client::ActivityBenefitDailyInfo* _GetLuckyKoiInfoList_b__25_2(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityBenefitDailyInfo*> pair)
		{
			return ((::RPG::Client::ActivityBenefitDailyInfo*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityBenefitDailyInfo*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE___C__GETLUCKYKOIINFOLIST_B__25_2_OFFSET))(this, pair);
		}

		::RPG::Client::ActivityBenefitLuckyKoiInfo _GetLuckyKoiInfoList_b__25_3(::Class_1_2827A08E633A7795_4* e)
		{
			return ((::RPG::Client::ActivityBenefitLuckyKoiInfo(*)(::PVOID, ::Class_1_2827A08E633A7795_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE___C__GETLUCKYKOIINFOLIST_B__25_3_OFFSET))(this, e);
		}
	};
}
