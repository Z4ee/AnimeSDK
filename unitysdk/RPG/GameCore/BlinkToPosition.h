#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BLINKTOPOSITION_METHOD_3_69F2410CA5BD0E97_OFFSET UNITYSDK_OFFSET(0x1D46E450)
#define RPG_GAMECORE_BLINKTOPOSITION_METHOD_3_6C351F4C9015EBF6_OFFSET UNITYSDK_OFFSET(0x1D46E3B0)
#define RPG_GAMECORE_BLINKTOPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D46E410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BlinkToPosition_TypeDefinitionIndex = 23134;

	class BlinkToPosition : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::MVector3 Offset; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLINKTOPOSITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6C351F4C9015EBF6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BlinkToPosition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BlinkToPosition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLINKTOPOSITION_METHOD_3_6C351F4C9015EBF6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_69F2410CA5BD0E97(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BlinkToPosition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BlinkToPosition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLINKTOPOSITION_METHOD_3_69F2410CA5BD0E97_OFFSET))(a1, a2);
		}
	};
}
