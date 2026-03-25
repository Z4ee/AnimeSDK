#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingEffectType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGEFFECTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17084F50)
#define RPG_GAMECORE_CHENLINGEFFECTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x170851E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingEffectRow_TypeDefinitionIndex = 10331;

	class ChenLingEffectRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ParamList; // 0x10
		::System::UInt32 Param4; // 0x18
		::System::UInt32 ID; // 0x1C
		::System::UInt32 Param1; // 0x20
		::System::UInt32 Param3; // 0x24
		::System::UInt32 Param2; // 0x28
		::RPG::GameCore::ChenLingEffectType EffectType; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGEFFECTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChenLingEffectRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingEffectRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGEFFECTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
