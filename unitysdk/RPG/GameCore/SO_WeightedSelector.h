#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SOCompositeConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SOTaskConfig; }

#define RPG_GAMECORE_SO_WEIGHTEDSELECTOR_METHOD_5_4817C8930C453439_OFFSET UNITYSDK_OFFSET(0x1D4BB9F0)
#define RPG_GAMECORE_SO_WEIGHTEDSELECTOR_METHOD_5_7016A2634776035A_OFFSET UNITYSDK_OFFSET(0x1D4BDA80)
#define RPG_GAMECORE_SO_WEIGHTEDSELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4BB9E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SO_WeightedSelector_TypeDefinitionIndex = 19823;

	class SO_WeightedSelector : public ::RPG::GameCore::SOCompositeConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* Weights; // 0x28
		::Il2CppArray<::RPG::GameCore::SOTaskConfig*>* Tasks; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_WEIGHTEDSELECTOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_7016A2634776035A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SO_WeightedSelector*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SO_WeightedSelector*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_WEIGHTEDSELECTOR_METHOD_5_7016A2634776035A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_4817C8930C453439(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SO_WeightedSelector* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SO_WeightedSelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_WEIGHTEDSELECTOR_METHOD_5_4817C8930C453439_OFFSET))(a1, a2);
		}
	};
}
