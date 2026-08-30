#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHMODIFIEROWNER_METHOD_4_4D15A10B7139F3D3_OFFSET UNITYSDK_OFFSET(0x1D5AC5C0)
#define RPG_GAMECORE_TARGETFETCHMODIFIEROWNER_METHOD_4_5153A48FE10D1E17_OFFSET UNITYSDK_OFFSET(0x1D5AC4E0)
#define RPG_GAMECORE_TARGETFETCHMODIFIEROWNER_METHOD_4_B686C04EAF9390A6_OFFSET UNITYSDK_OFFSET(0x1D5AC560)
#define RPG_GAMECORE_TARGETFETCHMODIFIEROWNER_METHOD_4_D7891593DDBD6D26_OFFSET UNITYSDK_OFFSET(0x1D5AC5E0)
#define RPG_GAMECORE_TARGETFETCHMODIFIEROWNER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5AC550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchModifierOwner_TypeDefinitionIndex = 23633;

	class TargetFetchModifierOwner : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHMODIFIEROWNER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5153A48FE10D1E17(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchModifierOwner*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchModifierOwner*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHMODIFIEROWNER_METHOD_4_5153A48FE10D1E17_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B686C04EAF9390A6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchModifierOwner* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchModifierOwner*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHMODIFIEROWNER_METHOD_4_B686C04EAF9390A6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4D15A10B7139F3D3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchModifierOwner*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchModifierOwner*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHMODIFIEROWNER_METHOD_4_4D15A10B7139F3D3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D7891593DDBD6D26(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchModifierOwner* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchModifierOwner*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHMODIFIEROWNER_METHOD_4_D7891593DDBD6D26_OFFSET))(a1, a2);
		}
	};
}
