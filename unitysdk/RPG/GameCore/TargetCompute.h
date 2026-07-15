#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetComputeType.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETCOMPUTE_METHOD_4_0F30F2E6655A8E77_OFFSET UNITYSDK_OFFSET(0x1B44D7E0)
#define RPG_GAMECORE_TARGETCOMPUTE_METHOD_4_95CF1DF861241F4B_OFFSET UNITYSDK_OFFSET(0x1B44D790)
#define RPG_GAMECORE_TARGETCOMPUTE_METHOD_4_9B2C725DE2ACDDA8_OFFSET UNITYSDK_OFFSET(0x1B44D5E0)
#define RPG_GAMECORE_TARGETCOMPUTE_METHOD_4_D80294825193200E_OFFSET UNITYSDK_OFFSET(0x1B44D640)
#define RPG_GAMECORE_TARGETCOMPUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B44D630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetCompute_TypeDefinitionIndex = 23042;

	class TargetCompute : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::TargetComputeType ComputeType; // 0x10
		::Il2CppArray<::RPG::GameCore::TargetEvaluator*>* Targets; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETCOMPUTE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9B2C725DE2ACDDA8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetCompute*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetCompute*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETCOMPUTE_METHOD_4_9B2C725DE2ACDDA8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D80294825193200E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetCompute* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetCompute*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETCOMPUTE_METHOD_4_D80294825193200E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_95CF1DF861241F4B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetCompute*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetCompute*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETCOMPUTE_METHOD_4_95CF1DF861241F4B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0F30F2E6655A8E77(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetCompute* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetCompute*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETCOMPUTE_METHOD_4_0F30F2E6655A8E77_OFFSET))(a1, a2);
		}
	};
}
