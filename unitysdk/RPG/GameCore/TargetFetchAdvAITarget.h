#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHADVAITARGET_METHOD_4_14B9DE76B950689C_OFFSET UNITYSDK_OFFSET(0x1B44E970)
#define RPG_GAMECORE_TARGETFETCHADVAITARGET_METHOD_4_2FF3F5180B061BCC_OFFSET UNITYSDK_OFFSET(0x1B44E8F0)
#define RPG_GAMECORE_TARGETFETCHADVAITARGET_METHOD_4_3B3D4F3326AD21E9_OFFSET UNITYSDK_OFFSET(0x1B44E950)
#define RPG_GAMECORE_TARGETFETCHADVAITARGET_METHOD_4_8AB207D8330C6A61_OFFSET UNITYSDK_OFFSET(0x1B44E870)
#define RPG_GAMECORE_TARGETFETCHADVAITARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1B44E8E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAdvAITarget_TypeDefinitionIndex = 23063;

	class TargetFetchAdvAITarget : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVAITARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8AB207D8330C6A61(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvAITarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvAITarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVAITARGET_METHOD_4_8AB207D8330C6A61_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2FF3F5180B061BCC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvAITarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvAITarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVAITARGET_METHOD_4_2FF3F5180B061BCC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3B3D4F3326AD21E9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvAITarget*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvAITarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVAITARGET_METHOD_4_3B3D4F3326AD21E9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_14B9DE76B950689C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvAITarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvAITarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVAITARGET_METHOD_4_14B9DE76B950689C_OFFSET))(a1, a2);
		}
	};
}
