#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGSKILLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x170888B0)
#define RPG_GAMECORE_CHENLINGSKILLROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17088A10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingSkillRow_TypeDefinitionIndex = 10335;

	class ChenLingSkillRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* SkillParamList; // 0x10
		::System::String* SkillJsonConfig; // 0x18
		::System::UInt32 ID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGSKILLROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChenLingSkillRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingSkillRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGSKILLROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
