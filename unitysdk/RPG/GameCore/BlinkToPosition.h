#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BLINKTOPOSITION_METHOD_3_49F56242224536BA_OFFSET UNITYSDK_OFFSET(0x1870B4C0)
#define RPG_GAMECORE_BLINKTOPOSITION_METHOD_3_6DD9BBC870C213E1_OFFSET UNITYSDK_OFFSET(0x1870B3F0)
#define RPG_GAMECORE_BLINKTOPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1870B470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BlinkToPosition_TypeDefinitionIndex = 22079;

	class BlinkToPosition : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::MVector3 Offset; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLINKTOPOSITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6DD9BBC870C213E1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BlinkToPosition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BlinkToPosition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLINKTOPOSITION_METHOD_3_6DD9BBC870C213E1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_49F56242224536BA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BlinkToPosition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BlinkToPosition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLINKTOPOSITION_METHOD_3_49F56242224536BA_OFFSET))(a1, a2);
		}
	};
}
