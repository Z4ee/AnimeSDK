#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_LEVELAUDIENCEMEMBERCURVEINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A3C3D0)
#define RPG_GAMECORE_LEVELAUDIENCEMEMBERCURVEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18A3C550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelAudienceMemberCurveInfo_TypeDefinitionIndex = 16432;

	class LevelAudienceMemberCurveInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* PointAliasA; // 0x10
		::System::String* PointAliasB; // 0x18
		::RPG::MVector3 ForwardRotation; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAUDIENCEMEMBERCURVEINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelAudienceMemberCurveInfo*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelAudienceMemberCurveInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAUDIENCEMEMBERCURVEINFO_FROMBINARY_OFFSET))(array, val);
		}
	};
}
