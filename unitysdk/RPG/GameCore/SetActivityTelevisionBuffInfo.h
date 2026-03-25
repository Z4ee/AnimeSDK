#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_SETACTIVITYTELEVISIONBUFFINFO_METHOD_3_6E99B8A12CD5A5D6_OFFSET UNITYSDK_OFFSET(0x176A4D10)
#define RPG_GAMECORE_SETACTIVITYTELEVISIONBUFFINFO_METHOD_3_CF05392FA4E06924_OFFSET UNITYSDK_OFFSET(0x176A4E30)
#define RPG_GAMECORE_SETACTIVITYTELEVISIONBUFFINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x176A4DB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetActivityTelevisionBuffInfo_TypeDefinitionIndex = 21473;

	class SetActivityTelevisionBuffInfo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* BuffID; // 0x18
		::RPG::GameCore::DynamicFloat* Count; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETACTIVITYTELEVISIONBUFFINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6E99B8A12CD5A5D6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetActivityTelevisionBuffInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetActivityTelevisionBuffInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETACTIVITYTELEVISIONBUFFINFO_METHOD_3_6E99B8A12CD5A5D6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CF05392FA4E06924(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetActivityTelevisionBuffInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetActivityTelevisionBuffInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETACTIVITYTELEVISIONBUFFINFO_METHOD_3_CF05392FA4E06924_OFFSET))(a1, a2);
		}
	};
}
