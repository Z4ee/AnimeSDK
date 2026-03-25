#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETCONCAT_METHOD_4_4C0D9FF96DA62EA7_OFFSET UNITYSDK_OFFSET(0x177AD4F0)
#define RPG_GAMECORE_TARGETCONCAT_METHOD_4_C8151DD4FBD16C23_OFFSET UNITYSDK_OFFSET(0x177AD430)
#define RPG_GAMECORE_TARGETCONCAT__CTOR_OFFSET UNITYSDK_OFFSET(0x177AD4A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetConcat_TypeDefinitionIndex = 22171;

	class TargetConcat : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::Il2CppArray<::RPG::GameCore::TargetEvaluator*>* Targets; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETCONCAT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C8151DD4FBD16C23(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetConcat*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetConcat*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETCONCAT_METHOD_4_C8151DD4FBD16C23_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4C0D9FF96DA62EA7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetConcat* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetConcat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETCONCAT_METHOD_4_4C0D9FF96DA62EA7_OFFSET))(a1, a2);
		}
	};
}
