#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FetchAdvNPCData; }

#define RPG_GAMECORE_TARGETFETCHADVNPC_METHOD_4_D2F57EE6F3B5DE23_OFFSET UNITYSDK_OFFSET(0x18EE2130)
#define RPG_GAMECORE_TARGETFETCHADVNPC_METHOD_4_EC7371A63C487918_OFFSET UNITYSDK_OFFSET(0x18ED92C0)
#define RPG_GAMECORE_TARGETFETCHADVNPC__CTOR_OFFSET UNITYSDK_OFFSET(0x18ED9270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAdvNPC_TypeDefinitionIndex = 22857;

	class TargetFetchAdvNPC : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::Il2CppArray<::RPG::GameCore::FetchAdvNPCData*>* MultiGroupFetch; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVNPC__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D2F57EE6F3B5DE23(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvNPC*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvNPC*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVNPC_METHOD_4_D2F57EE6F3B5DE23_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EC7371A63C487918(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvNPC* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvNPC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVNPC_METHOD_4_EC7371A63C487918_OFFSET))(a1, a2);
		}
	};
}
