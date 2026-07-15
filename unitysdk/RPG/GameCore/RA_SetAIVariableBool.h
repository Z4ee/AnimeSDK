#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ReactionTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RA_SETAIVARIABLEBOOL_METHOD_4_6D23C85EE214B863_OFFSET UNITYSDK_OFFSET(0x1B9B0080)
#define RPG_GAMECORE_RA_SETAIVARIABLEBOOL_METHOD_4_C6CB2528826C27FC_OFFSET UNITYSDK_OFFSET(0x1B9B0040)
#define RPG_GAMECORE_RA_SETAIVARIABLEBOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9B0070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RA_SetAIVariableBool_TypeDefinitionIndex = 19267;

	class RA_SetAIVariableBool : public ::RPG::GameCore::ReactionTaskConfig
	{
	public:
		::System::String* Name; // 0x18
		::System::Boolean Value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_SETAIVARIABLEBOOL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C6CB2528826C27FC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RA_SetAIVariableBool*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RA_SetAIVariableBool*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_SETAIVARIABLEBOOL_METHOD_4_C6CB2528826C27FC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6D23C85EE214B863(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RA_SetAIVariableBool* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RA_SetAIVariableBool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_SETAIVARIABLEBOOL_METHOD_4_6D23C85EE214B863_OFFSET))(a1, a2);
		}
	};
}
