#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimatorParameterType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PUZZLEANIMATORPARAM_METHOD_2_E4BC8DB2433BE707_OFFSET UNITYSDK_OFFSET(0x18C7EDD0)
#define RPG_GAMECORE_PUZZLEANIMATORPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x18C7EFA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PuzzleAnimatorParam_TypeDefinitionIndex = 21099;

	class PuzzleAnimatorParam : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* AnimatorPath; // 0x10
		::System::String* ParamName; // 0x18
		::RPG::GameCore::AnimatorParameterType ParamType; // 0x20
		::System::Single ParamValue; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PUZZLEANIMATORPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E4BC8DB2433BE707(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PuzzleAnimatorParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PuzzleAnimatorParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PUZZLEANIMATORPARAM_METHOD_2_E4BC8DB2433BE707_OFFSET))(a1, a2);
		}
	};
}
