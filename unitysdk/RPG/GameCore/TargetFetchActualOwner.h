#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHACTUALOWNER_METHOD_3_2E1D81AA84DF008F_OFFSET UNITYSDK_OFFSET(0x18EE19B0)
#define RPG_GAMECORE_TARGETFETCHACTUALOWNER_METHOD_3_ACB94AD031885676_OFFSET UNITYSDK_OFFSET(0x18EE1A70)
#define RPG_GAMECORE_TARGETFETCHACTUALOWNER__CTOR_OFFSET UNITYSDK_OFFSET(0x18EE1A50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchActualOwner_TypeDefinitionIndex = 22957;

	class TargetFetchActualOwner : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHACTUALOWNER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2E1D81AA84DF008F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchActualOwner*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchActualOwner*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHACTUALOWNER_METHOD_3_2E1D81AA84DF008F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ACB94AD031885676(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchActualOwner* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchActualOwner*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHACTUALOWNER_METHOD_3_ACB94AD031885676_OFFSET))(a1, a2);
		}
	};
}
