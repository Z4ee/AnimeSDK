#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONDETAILDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9C3D880)
#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONDETAILDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9C3D8C0)
#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONDETAILDATA___C__GET__ISANYTASKOPTIONFINISH_B__21_0_OFFSET UNITYSDK_OFFSET(0x9C3D8D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityPhotoExhibitionDetailData___c_TypeDefinitionIndex = 56927;

	class ActivityPhotoExhibitionDetailData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__21_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ActivityPhotoExhibitionDetailData___c_TypeDefinitionIndex)->GetStaticField(0x3C690);
		}
		static ::RPG::Client::ActivityPhotoExhibitionDetailData___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityPhotoExhibitionDetailData___c**)Il2CppClass::FromTypeDefinitionIndex(ActivityPhotoExhibitionDetailData___c_TypeDefinitionIndex)->GetStaticField(0x3C698);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONDETAILDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONDETAILDATA___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get__IsAnyTaskOptionFinish_b__21_0(::System::UInt32 x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONDETAILDATA___C__GET__ISANYTASKOPTIONFINISH_B__21_0_OFFSET))(this, x);
		}
	};
}
