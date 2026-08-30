#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolveBuildFeatureType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRIGGEREVOLVEBUILDFEATURE_METHOD_3_07252C0DD45CC917_OFFSET UNITYSDK_OFFSET(0x1D5FEC60)
#define RPG_GAMECORE_TRIGGEREVOLVEBUILDFEATURE_METHOD_3_BF588B0F6A6CE522_OFFSET UNITYSDK_OFFSET(0x1D5FEC20)
#define RPG_GAMECORE_TRIGGEREVOLVEBUILDFEATURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5FEC50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerEvolveBuildFeature_TypeDefinitionIndex = 22270;

	class TriggerEvolveBuildFeature : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::EvolveBuildFeatureType Feature; // 0x18
		::System::Boolean IsRevert; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREVOLVEBUILDFEATURE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BF588B0F6A6CE522(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerEvolveBuildFeature*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerEvolveBuildFeature*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREVOLVEBUILDFEATURE_METHOD_3_BF588B0F6A6CE522_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_07252C0DD45CC917(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerEvolveBuildFeature* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerEvolveBuildFeature*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREVOLVEBUILDFEATURE_METHOD_3_07252C0DD45CC917_OFFSET))(a1, a2);
		}
	};
}
