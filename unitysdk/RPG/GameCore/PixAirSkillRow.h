#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PIXAIRSKILLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B4CE8A0)
#define RPG_GAMECORE_PIXAIRSKILLROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4CEAA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirSkillRow_TypeDefinitionIndex = 11691;

	class PixAirSkillRow : public ::System::Object
	{
	public:
		::System::String* JsonConfig; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* SkillParams; // 0x18
		::System::UInt32 ID; // 0x20
		::RPG::Client::TextID Desc; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRSKILLROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PixAirSkillRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PixAirSkillRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRSKILLROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
