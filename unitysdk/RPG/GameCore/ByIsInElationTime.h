#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYISINELATIONTIME_METHOD_4_721BF12B1EA14222_OFFSET UNITYSDK_OFFSET(0x1702FBF0)
#define RPG_GAMECORE_BYISINELATIONTIME_METHOD_4_B3A97AA292D987C8_OFFSET UNITYSDK_OFFSET(0x1702FB20)
#define RPG_GAMECORE_BYISINELATIONTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x1702FBA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsInElationTime_TypeDefinitionIndex = 20796;

	class ByIsInElationTime : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINELATIONTIME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B3A97AA292D987C8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsInElationTime*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsInElationTime*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINELATIONTIME_METHOD_4_B3A97AA292D987C8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_721BF12B1EA14222(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsInElationTime* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsInElationTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINELATIONTIME_METHOD_4_721BF12B1EA14222_OFFSET))(a1, a2);
		}
	};
}
