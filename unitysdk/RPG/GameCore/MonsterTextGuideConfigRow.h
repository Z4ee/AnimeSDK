#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONSTERTEXTGUIDECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18B63C70)
#define RPG_GAMECORE_MONSTERTEXTGUIDECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18B64330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterTextGuideConfigRow_TypeDefinitionIndex = 13467;

	class MonsterTextGuideConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* ParameterList; // 0x10
		::System::UInt32 SkillID; // 0x18
		::System::UInt32 TextGuideID; // 0x1C
		::RPG::Client::TextID TextGuideDescription; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERTEXTGUIDECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MonsterTextGuideConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterTextGuideConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERTEXTGUIDECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
