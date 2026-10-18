#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityPhotoExhibitionDetailData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONGROUPDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC57F020)
#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONGROUPDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC57F060)
#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONGROUPDATA___C__GETCURINPROGRESSDETAILDATA_B__1_0_OFFSET UNITYSDK_OFFSET(0xC57F070)
#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONGROUPDATA___C__GET_ISANYDETAILFINISHED_B__24_0_OFFSET UNITYSDK_OFFSET(0xC57F0B0)
#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONGROUPDATA___C__GET_ISFINISHED_B__22_0_OFFSET UNITYSDK_OFFSET(0xC57F090)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityPhotoExhibitionGroupData___c_TypeDefinitionIndex = 61728;

	class ActivityPhotoExhibitionGroupData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityPhotoExhibitionDetailData*>, ::System::Boolean>** StaticGet___9__22_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityPhotoExhibitionDetailData*>, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ActivityPhotoExhibitionGroupData___c_TypeDefinitionIndex)->GetStaticField(0x31000);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityPhotoExhibitionDetailData*>, ::System::Boolean>** StaticGet___9__24_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityPhotoExhibitionDetailData*>, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ActivityPhotoExhibitionGroupData___c_TypeDefinitionIndex)->GetStaticField(0x31008);
		}
		static ::RPG::Client::ActivityPhotoExhibitionGroupData___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityPhotoExhibitionGroupData___c**)Il2CppClass::FromTypeDefinitionIndex(ActivityPhotoExhibitionGroupData___c_TypeDefinitionIndex)->GetStaticField(0x31010);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityPhotoExhibitionDetailData*>, ::System::Boolean>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityPhotoExhibitionDetailData*>, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ActivityPhotoExhibitionGroupData___c_TypeDefinitionIndex)->GetStaticField(0x31018);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONGROUPDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONGROUPDATA___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetCurInProgressDetailData_b__1_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityPhotoExhibitionDetailData*> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityPhotoExhibitionDetailData*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONGROUPDATA___C__GETCURINPROGRESSDETAILDATA_B__1_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_IsFinished_b__22_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityPhotoExhibitionDetailData*> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityPhotoExhibitionDetailData*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONGROUPDATA___C__GET_ISFINISHED_B__22_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_IsAnyDetailFinished_b__24_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityPhotoExhibitionDetailData*> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityPhotoExhibitionDetailData*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONGROUPDATA___C__GET_ISANYDETAILFINISHED_B__24_0_OFFSET))(this, a1);
		}
	};
}
