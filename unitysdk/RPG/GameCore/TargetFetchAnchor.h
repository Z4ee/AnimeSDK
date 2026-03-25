#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHANCHOR_METHOD_4_4439081E18438D62_OFFSET UNITYSDK_OFFSET(0x177BD1B0)
#define RPG_GAMECORE_TARGETFETCHANCHOR_METHOD_4_57F7E1633B2877D8_OFFSET UNITYSDK_OFFSET(0x177B2950)
#define RPG_GAMECORE_TARGETFETCHANCHOR__CTOR_OFFSET UNITYSDK_OFFSET(0x177B2900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAnchor_TypeDefinitionIndex = 22148;

	class TargetFetchAnchor : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 GroupInstanceID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHANCHOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_4439081E18438D62(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAnchor*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAnchor*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHANCHOR_METHOD_4_4439081E18438D62_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_57F7E1633B2877D8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAnchor* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAnchor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHANCHOR_METHOD_4_57F7E1633B2877D8_OFFSET))(a1, a2);
		}
	};
}
