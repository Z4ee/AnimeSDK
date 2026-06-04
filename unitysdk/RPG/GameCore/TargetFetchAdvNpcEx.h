#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
#include "unitysdk/RPG/GameCore/TargetFetchAdvNpcFetchType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class FetchAdvNPCDataEx; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHADVNPCEX_METHOD_4_201A31293351DF6B_OFFSET UNITYSDK_OFFSET(0x19CF57E0)
#define RPG_GAMECORE_TARGETFETCHADVNPCEX_METHOD_4_C126435DE3ECF21F_OFFSET UNITYSDK_OFFSET(0x19D091C0)
#define RPG_GAMECORE_TARGETFETCHADVNPCEX_METHOD_4_CB316132353DB67E_OFFSET UNITYSDK_OFFSET(0x19D09230)
#define RPG_GAMECORE_TARGETFETCHADVNPCEX_METHOD_4_F7272A96584EC90C_OFFSET UNITYSDK_OFFSET(0x19D037F0)
#define RPG_GAMECORE_TARGETFETCHADVNPCEX__CTOR_OFFSET UNITYSDK_OFFSET(0x19CF5790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAdvNpcEx_TypeDefinitionIndex = 22560;

	class TargetFetchAdvNpcEx : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::TargetFetchAdvNpcFetchType FetchType; // 0x10
		::RPG::GameCore::DynamicString* SingleNpcKey; // 0x18
		::RPG::GameCore::FetchAdvNPCDataEx* SingleNpcID; // 0x20
		::RPG::GameCore::DynamicString* SingleUniqueName; // 0x28
		::RPG::GameCore::DynamicFloat* NpcIDInOwnerGroup; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVNPCEX__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C126435DE3ECF21F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvNpcEx*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvNpcEx*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVNPCEX_METHOD_4_C126435DE3ECF21F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_201A31293351DF6B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvNpcEx* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvNpcEx*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVNPCEX_METHOD_4_201A31293351DF6B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F7272A96584EC90C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvNpcEx*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvNpcEx*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVNPCEX_METHOD_4_F7272A96584EC90C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CB316132353DB67E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvNpcEx* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvNpcEx*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVNPCEX_METHOD_4_CB316132353DB67E_OFFSET))(a1, a2);
		}
	};
}
