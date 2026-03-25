#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LoopRewindSnapSection; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETLOOPREWINDSNAPSECTION_METHOD_3_1343E13F2CDCE893_OFFSET UNITYSDK_OFFSET(0x176D41B0)
#define RPG_GAMECORE_SETLOOPREWINDSNAPSECTION_METHOD_3_4CCDFACD013453B4_OFFSET UNITYSDK_OFFSET(0x176D4230)
#define RPG_GAMECORE_SETLOOPREWINDSNAPSECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x176D4200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetLoopRewindSnapSection_TypeDefinitionIndex = 18952;

	class SetLoopRewindSnapSection : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::Il2CppArray<::RPG::GameCore::LoopRewindSnapSection*>* SnapConfig; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSnapStart; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSnapFinish; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLOOPREWINDSNAPSECTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1343E13F2CDCE893(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetLoopRewindSnapSection*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetLoopRewindSnapSection*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLOOPREWINDSNAPSECTION_METHOD_3_1343E13F2CDCE893_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4CCDFACD013453B4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetLoopRewindSnapSection* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetLoopRewindSnapSection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLOOPREWINDSNAPSECTION_METHOD_3_4CCDFACD013453B4_OFFSET))(a1, a2);
		}
	};
}
