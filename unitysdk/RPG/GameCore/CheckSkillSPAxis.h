#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConsiderationAxisConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHECKSKILLSPAXIS_METHOD_3_A1117912C80D3523_OFFSET UNITYSDK_OFFSET(0x187DB830)
#define RPG_GAMECORE_CHECKSKILLSPAXIS_METHOD_3_A39B80486D5EAB44_OFFSET UNITYSDK_OFFSET(0x187DB7F0)
#define RPG_GAMECORE_CHECKSKILLSPAXIS__CTOR_OFFSET UNITYSDK_OFFSET(0x187DB820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CheckSkillSPAxis_TypeDefinitionIndex = 14672;

	class CheckSkillSPAxis : public ::RPG::GameCore::ConsiderationAxisConfig
	{
	public:
		::System::String* SkillName; // 0x10
		::RPG::GameCore::FixPoint CheckScore; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKSKILLSPAXIS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A39B80486D5EAB44(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CheckSkillSPAxis*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CheckSkillSPAxis*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKSKILLSPAXIS_METHOD_3_A39B80486D5EAB44_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A1117912C80D3523(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CheckSkillSPAxis* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CheckSkillSPAxis*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKSKILLSPAXIS_METHOD_3_A1117912C80D3523_OFFSET))(a1, a2);
		}
	};
}
