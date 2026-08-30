#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelAudienceMemberCurveInfo; }
namespace RPG::GameCore { class LevelAudienceMemberRendererInfo; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELAUDIENCEMEMBERINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D1C9600)
#define RPG_GAMECORE_LEVELAUDIENCEMEMBERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1C9AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelAudienceMemberInfo_TypeDefinitionIndex = 17132;

	class LevelAudienceMemberInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Identity; // 0x10
		::System::String* ClipGroupName; // 0x18
		::System::String* AudienceLayoutConfig; // 0x20
		::System::String* AudienceStanceConfig; // 0x28
		::Il2CppArray<::RPG::MVector2>* ExcludeAreaRange; // 0x30
		::System::Boolean UseCollider; // 0x38
		::System::UInt32 LayoutCurveRef; // 0x3C
		::Il2CppArray<::RPG::GameCore::LevelAudienceMemberCurveInfo*>* LayoutCurveInfo; // 0x40
		::Il2CppArray<::RPG::GameCore::LevelAudienceMemberRendererInfo*>* MemberRendererInfo; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAUDIENCEMEMBERINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelAudienceMemberInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelAudienceMemberInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAUDIENCEMEMBERINFO_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
