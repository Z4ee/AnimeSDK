#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AIVariable; }
namespace System { class String; }

#define RPG_GAMECORE_ADVRUNSTATETREE_METHOD_3_A91ADF6A9D44E2D0_OFFSET UNITYSDK_OFFSET(0x1CB9E200)
#define RPG_GAMECORE_ADVRUNSTATETREE_METHOD_3_DCAE7DF04E4D70BD_OFFSET UNITYSDK_OFFSET(0x1CB9E1C0)
#define RPG_GAMECORE_ADVRUNSTATETREE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB9E1F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvRunStateTree_TypeDefinitionIndex = 19775;

	class AdvRunStateTree : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* AIPath; // 0x18
		::System::Boolean EnableRun; // 0x20
		::Il2CppArray<::RPG::GameCore::AIVariable*>* OverrideVariableList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVRUNSTATETREE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DCAE7DF04E4D70BD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvRunStateTree*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvRunStateTree*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVRUNSTATETREE_METHOD_3_DCAE7DF04E4D70BD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A91ADF6A9D44E2D0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvRunStateTree* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvRunStateTree*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVRUNSTATETREE_METHOD_3_A91ADF6A9D44E2D0_OFFSET))(a1, a2);
		}
	};
}
