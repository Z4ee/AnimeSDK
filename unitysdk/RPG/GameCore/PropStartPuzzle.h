#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPSTARTPUZZLE_METHOD_3_42F11ABCDDB38EE2_OFFSET UNITYSDK_OFFSET(0x19A9B5B0)
#define RPG_GAMECORE_PROPSTARTPUZZLE_METHOD_3_D57A6FB1FC6CB6D1_OFFSET UNITYSDK_OFFSET(0x19A9B700)
#define RPG_GAMECORE_PROPSTARTPUZZLE__CTOR_OFFSET UNITYSDK_OFFSET(0x19A9B670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropStartPuzzle_TypeDefinitionIndex = 20761;

	class PropStartPuzzle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnStart; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTARTPUZZLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_42F11ABCDDB38EE2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropStartPuzzle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropStartPuzzle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTARTPUZZLE_METHOD_3_42F11ABCDDB38EE2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D57A6FB1FC6CB6D1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropStartPuzzle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropStartPuzzle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTARTPUZZLE_METHOD_3_D57A6FB1FC6CB6D1_OFFSET))(a1, a2);
		}
	};
}
