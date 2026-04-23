#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D1E0AD3915BCCF29_91;
namespace System { class String; }

#define RPG_CLIENT_PLANETFESPAMEVENTITEM_GET_AVATARICON_OFFSET UNITYSDK_OFFSET(0xAD36FF0)
#define RPG_CLIENT_PLANETFESPAMEVENTITEM_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0xAD36FA0)
#define RPG_CLIENT_PLANETFESPAMEVENTITEM_GET_ITEMICON_OFFSET UNITYSDK_OFFSET(0xAD37100)
#define RPG_CLIENT_PLANETFESPAMEVENTITEM_GET_LANDID_OFFSET UNITYSDK_OFFSET(0xAD37210)
#define RPG_CLIENT_PLANETFESPAMEVENTITEM_GET_LEFTNUM_OFFSET UNITYSDK_OFFSET(0xAD37410)
#define RPG_CLIENT_PLANETFESPAMEVENTITEM_GET_TOTALNUM_OFFSET UNITYSDK_OFFSET(0xAD373C0)
#define RPG_CLIENT_PLANETFESPAMEVENTITEM_REQUESTDELIVER_OFFSET UNITYSDK_OFFSET(0xAD36E90)
#define RPG_CLIENT_PLANETFESPAMEVENTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xAD36C20)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesPamEventItem_TypeDefinitionIndex = 61317;

	class PlanetFesPamEventItem : public ::System::Object
	{
	public:
		::Class_1_D1E0AD3915BCCF29_91* _Cargo; // 0x10

		::System::Void _ctor(::Class_1_D1E0AD3915BCCF29_91* cargo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_91*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPAMEVENTITEM__CTOR_OFFSET))(this, cargo);
		}

		::System::Void RequestDeliver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPAMEVENTITEM_REQUESTDELIVER_OFFSET))(this);
		}

		::System::String* get_AvatarIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPAMEVENTITEM_GET_AVATARICON_OFFSET))(this);
		}

		::System::String* get_ItemIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPAMEVENTITEM_GET_ITEMICON_OFFSET))(this);
		}

		::System::UInt32 get_LandID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPAMEVENTITEM_GET_LANDID_OFFSET))(this);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPAMEVENTITEM_GET_AVATARID_OFFSET))(this);
		}

		::System::UInt32 get_TotalNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPAMEVENTITEM_GET_TOTALNUM_OFFSET))(this);
		}

		::System::UInt32 get_LeftNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPAMEVENTITEM_GET_LEFTNUM_OFFSET))(this);
		}
	};
}
