#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityPhotoExhibitionGroupData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19328090)
#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x193280D0)
#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONMODULE___C__HASANYAVAILABLEGROUPUNSEEN_B__6_0_OFFSET UNITYSDK_OFFSET(0x19328100)
#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONMODULE___C__HASANYGROUPREWARDCANTAKE_B__7_0_OFFSET UNITYSDK_OFFSET(0x193281B0)
#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONMODULE___C__ISFINISHALLGROUP_B__5_0_OFFSET UNITYSDK_OFFSET(0x193280E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityPhotoExhibitionModule___c_TypeDefinitionIndex = 58985;

	class ActivityPhotoExhibitionModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::ActivityPhotoExhibitionGroupData*, ::System::Boolean>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityPhotoExhibitionGroupData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ActivityPhotoExhibitionModule___c_TypeDefinitionIndex)->GetStaticField(0x46C90);
		}
		static ::System::Func_2<::RPG::Client::ActivityPhotoExhibitionGroupData*, ::System::Boolean>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityPhotoExhibitionGroupData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ActivityPhotoExhibitionModule___c_TypeDefinitionIndex)->GetStaticField(0x46C98);
		}
		static ::RPG::Client::ActivityPhotoExhibitionModule___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityPhotoExhibitionModule___c**)Il2CppClass::FromTypeDefinitionIndex(ActivityPhotoExhibitionModule___c_TypeDefinitionIndex)->GetStaticField(0x46CA0);
		}
		static ::System::Func_2<::RPG::Client::ActivityPhotoExhibitionGroupData*, ::System::Boolean>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityPhotoExhibitionGroupData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ActivityPhotoExhibitionModule___c_TypeDefinitionIndex)->GetStaticField(0x46CA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsFinishAllGroup_b__5_0(::RPG::Client::ActivityPhotoExhibitionGroupData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityPhotoExhibitionGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONMODULE___C__ISFINISHALLGROUP_B__5_0_OFFSET))(this, a1);
		}

		::System::Boolean _HasAnyAvailableGroupUnSeen_b__6_0(::RPG::Client::ActivityPhotoExhibitionGroupData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityPhotoExhibitionGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONMODULE___C__HASANYAVAILABLEGROUPUNSEEN_B__6_0_OFFSET))(this, a1);
		}

		::System::Boolean _HasAnyGroupRewardCanTake_b__7_0(::RPG::Client::ActivityPhotoExhibitionGroupData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityPhotoExhibitionGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONMODULE___C__HASANYGROUPREWARDCANTAKE_B__7_0_OFFSET))(this, a1);
		}
	};
}
