#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityPhotoExhibitionDetailData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONGROUPDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9C3E910)
#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONGROUPDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9C3E950)
#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONGROUPDATA___C__GETCURINPROGRESSDETAILDATA_B__1_0_OFFSET UNITYSDK_OFFSET(0x9C3E960)
#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONGROUPDATA___C__GET_ISANYDETAILFINISHED_B__24_0_OFFSET UNITYSDK_OFFSET(0x9C3E9A0)
#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONGROUPDATA___C__GET_ISFINISHED_B__22_0_OFFSET UNITYSDK_OFFSET(0x9C3E980)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityPhotoExhibitionGroupData___c_TypeDefinitionIndex = 56929;

	class ActivityPhotoExhibitionGroupData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityPhotoExhibitionDetailData*>, ::System::Boolean>** StaticGet___9__24_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityPhotoExhibitionDetailData*>, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ActivityPhotoExhibitionGroupData___c_TypeDefinitionIndex)->GetStaticField(0x3C6C0);
		}
		static ::RPG::Client::ActivityPhotoExhibitionGroupData___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityPhotoExhibitionGroupData___c**)Il2CppClass::FromTypeDefinitionIndex(ActivityPhotoExhibitionGroupData___c_TypeDefinitionIndex)->GetStaticField(0x3C6C8);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityPhotoExhibitionDetailData*>, ::System::Boolean>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityPhotoExhibitionDetailData*>, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ActivityPhotoExhibitionGroupData___c_TypeDefinitionIndex)->GetStaticField(0x3C6D0);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityPhotoExhibitionDetailData*>, ::System::Boolean>** StaticGet___9__22_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityPhotoExhibitionDetailData*>, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ActivityPhotoExhibitionGroupData___c_TypeDefinitionIndex)->GetStaticField(0x3C6D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONGROUPDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONGROUPDATA___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetCurInProgressDetailData_b__1_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityPhotoExhibitionDetailData*> x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityPhotoExhibitionDetailData*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONGROUPDATA___C__GETCURINPROGRESSDETAILDATA_B__1_0_OFFSET))(this, x);
		}

		::System::Boolean _get_IsFinished_b__22_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityPhotoExhibitionDetailData*> x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityPhotoExhibitionDetailData*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONGROUPDATA___C__GET_ISFINISHED_B__22_0_OFFSET))(this, x);
		}

		::System::Boolean _get_IsAnyDetailFinished_b__24_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityPhotoExhibitionDetailData*> x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityPhotoExhibitionDetailData*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONGROUPDATA___C__GET_ISANYDETAILFINISHED_B__24_0_OFFSET))(this, x);
		}
	};
}
