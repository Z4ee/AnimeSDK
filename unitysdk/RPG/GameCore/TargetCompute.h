#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetComputeType.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETCOMPUTE_METHOD_4_26C6BE61109C062C_OFFSET UNITYSDK_OFFSET(0x19CF3110)
#define RPG_GAMECORE_TARGETCOMPUTE_METHOD_4_4E39517CDACCD2BD_OFFSET UNITYSDK_OFFSET(0x19CF2ED0)
#define RPG_GAMECORE_TARGETCOMPUTE_METHOD_4_5FD5776D84528999_OFFSET UNITYSDK_OFFSET(0x19CF2F90)
#define RPG_GAMECORE_TARGETCOMPUTE_METHOD_4_D4CA5EEC80E4BE09_OFFSET UNITYSDK_OFFSET(0x19CF30A0)
#define RPG_GAMECORE_TARGETCOMPUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x19CF2F40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetCompute_TypeDefinitionIndex = 22579;

	class TargetCompute : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::TargetComputeType ComputeType; // 0x10
		::Il2CppArray<::RPG::GameCore::TargetEvaluator*>* Targets; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETCOMPUTE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_4E39517CDACCD2BD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetCompute*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetCompute*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETCOMPUTE_METHOD_4_4E39517CDACCD2BD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5FD5776D84528999(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetCompute* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetCompute*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETCOMPUTE_METHOD_4_5FD5776D84528999_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D4CA5EEC80E4BE09(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetCompute*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetCompute*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETCOMPUTE_METHOD_4_D4CA5EEC80E4BE09_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_26C6BE61109C062C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetCompute* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetCompute*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETCOMPUTE_METHOD_4_26C6BE61109C062C_OFFSET))(a1, a2);
		}
	};
}
