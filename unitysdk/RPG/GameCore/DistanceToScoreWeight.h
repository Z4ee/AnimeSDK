#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DISTANCETOSCOREWEIGHT_METHOD_2_DCCA9A50A79C7BA5_OFFSET UNITYSDK_OFFSET(0x196BD970)
#define RPG_GAMECORE_DISTANCETOSCOREWEIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0x196BDA80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DistanceToScoreWeight_TypeDefinitionIndex = 14864;

	class DistanceToScoreWeight : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single Distance; // 0x10
		::System::Single Weight; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISTANCETOSCOREWEIGHT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_DCCA9A50A79C7BA5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DistanceToScoreWeight*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DistanceToScoreWeight*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISTANCETOSCOREWEIGHT_METHOD_2_DCCA9A50A79C7BA5_OFFSET))(a1, a2);
		}
	};
}
