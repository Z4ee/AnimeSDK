#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDanmuContentData.h"

namespace RPG::GameCore { class IdleLiveImgDanmuRow; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEIMAGECONTENTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9B66C00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEIMAGECONTENTDATA_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x9B66BE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEIMAGECONTENTDATA_SET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x9B66BF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEIMAGECONTENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9B66CD0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveImageContentData_TypeDefinitionIndex = 69406;

	class IdleLiveImageContentData : public ::RPG::Client::ActivityIdleLive::IdleLiveDanmuContentData
	{
	public:
		::System::String* _ImagePath_k__BackingField; // 0x18

		::System::Void _ctor(::RPG::GameCore::IdleLiveImgDanmuRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveImgDanmuRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEIMAGECONTENTDATA__CTOR_OFFSET))(this, row);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEIMAGECONTENTDATA_GET_IMAGEPATH_OFFSET))(this);
		}

		::System::Void set_ImagePath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEIMAGECONTENTDATA_SET_IMAGEPATH_OFFSET))(this, value);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveImageContentData* Create(::System::UInt32 imgDanmuId)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveImageContentData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEIMAGECONTENTDATA_CREATE_OFFSET))(imgDanmuId);
		}
	};
}
