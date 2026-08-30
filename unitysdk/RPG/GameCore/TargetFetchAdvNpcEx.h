#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
#include "unitysdk/RPG/GameCore/TargetFetchAdvNpcFetchType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class FetchAdvNPCDataEx; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHADVNPCEX_METHOD_4_201A31293351DF6B_OFFSET UNITYSDK_OFFSET(0x1D5A5630)
#define RPG_GAMECORE_TARGETFETCHADVNPCEX_METHOD_4_795EBDABA2FFB809_OFFSET UNITYSDK_OFFSET(0x1D5A57F0)
#define RPG_GAMECORE_TARGETFETCHADVNPCEX_METHOD_4_7F7C413B92FDA50E_OFFSET UNITYSDK_OFFSET(0x1D5A55F0)
#define RPG_GAMECORE_TARGETFETCHADVNPCEX_METHOD_4_FCD275E76F541AFF_OFFSET UNITYSDK_OFFSET(0x1D5A57C0)
#define RPG_GAMECORE_TARGETFETCHADVNPCEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A5620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAdvNpcEx_TypeDefinitionIndex = 23603;

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

		static ::System::Void Method_4_7F7C413B92FDA50E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvNpcEx*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvNpcEx*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVNPCEX_METHOD_4_7F7C413B92FDA50E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_201A31293351DF6B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvNpcEx* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvNpcEx*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVNPCEX_METHOD_4_201A31293351DF6B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FCD275E76F541AFF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvNpcEx*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvNpcEx*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVNPCEX_METHOD_4_FCD275E76F541AFF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_795EBDABA2FFB809(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvNpcEx* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvNpcEx*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVNPCEX_METHOD_4_795EBDABA2FFB809_OFFSET))(a1, a2);
		}
	};
}
