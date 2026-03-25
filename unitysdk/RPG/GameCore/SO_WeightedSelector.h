#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SOCompositeConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SOTaskConfig; }

#define RPG_GAMECORE_SO_WEIGHTEDSELECTOR_METHOD_5_001179FAA73A97B9_OFFSET UNITYSDK_OFFSET(0x1767B020)
#define RPG_GAMECORE_SO_WEIGHTEDSELECTOR_METHOD_5_BBF933EB5BB388A5_OFFSET UNITYSDK_OFFSET(0x1767D4C0)
#define RPG_GAMECORE_SO_WEIGHTEDSELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1767AFF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SO_WeightedSelector_TypeDefinitionIndex = 18331;

	class SO_WeightedSelector : public ::RPG::GameCore::SOCompositeConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* Weights; // 0x28
		::Il2CppArray<::RPG::GameCore::SOTaskConfig*>* Tasks; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_WEIGHTEDSELECTOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_BBF933EB5BB388A5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SO_WeightedSelector*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SO_WeightedSelector*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_WEIGHTEDSELECTOR_METHOD_5_BBF933EB5BB388A5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_001179FAA73A97B9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SO_WeightedSelector* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SO_WeightedSelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_WEIGHTEDSELECTOR_METHOD_5_001179FAA73A97B9_OFFSET))(a1, a2);
		}
	};
}
