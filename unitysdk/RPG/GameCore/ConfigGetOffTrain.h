#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CONFIGGETOFFTRAIN_METHOD_2_2BACCF8922F61283_OFFSET UNITYSDK_OFFSET(0x18833B90)
#define RPG_GAMECORE_CONFIGGETOFFTRAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x18833E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConfigGetOffTrain_TypeDefinitionIndex = 16010;

	class ConfigGetOffTrain : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* TrainName; // 0x10
		::System::UInt32 PathGroupID; // 0x18
		::System::UInt32 PathID; // 0x1C
		::System::UInt32 NodeIndex; // 0x20
		::System::UInt32 GetOffNumMin; // 0x24
		::System::UInt32 GetOffNumMax; // 0x28
		::System::Single GetOffTimeGap; // 0x2C
		::System::Single DelayTime; // 0x30
		::RPG::MVector3 Offset; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGGETOFFTRAIN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_2BACCF8922F61283(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConfigGetOffTrain*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConfigGetOffTrain*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGGETOFFTRAIN_METHOD_2_2BACCF8922F61283_OFFSET))(a1, a2);
		}
	};
}
