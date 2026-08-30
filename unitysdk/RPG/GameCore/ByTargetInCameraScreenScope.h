#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CameraScreenScopeMode.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYTARGETINCAMERASCREENSCOPE_METHOD_4_09118BDE3FC85942_OFFSET UNITYSDK_OFFSET(0x1CDC5CE0)
#define RPG_GAMECORE_BYTARGETINCAMERASCREENSCOPE_METHOD_4_5D226B683BF578BA_OFFSET UNITYSDK_OFFSET(0x1CDC5D60)
#define RPG_GAMECORE_BYTARGETINCAMERASCREENSCOPE_METHOD_4_DD3CFE4E37B58CA0_OFFSET UNITYSDK_OFFSET(0x1CDC59B0)
#define RPG_GAMECORE_BYTARGETINCAMERASCREENSCOPE_METHOD_4_DFA61CC7FE0E979F_OFFSET UNITYSDK_OFFSET(0x1CDC58D0)
#define RPG_GAMECORE_BYTARGETINCAMERASCREENSCOPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDC5950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTargetInCameraScreenScope_TypeDefinitionIndex = 20019;

	class ByTargetInCameraScreenScope : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Single ScreenHeightDetectRatio; // 0x28
		::System::Single ScreenWidthDetectRatio; // 0x2C
		::System::Single CenterOffsetRatioX; // 0x30
		::System::Single CenterOffsetRatioY; // 0x34
		::RPG::GameCore::CameraScreenScopeMode ScopeMode; // 0x38
		::System::Boolean EnableBlockDetect; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETINCAMERASCREENSCOPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_DFA61CC7FE0E979F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetInCameraScreenScope*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetInCameraScreenScope*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETINCAMERASCREENSCOPE_METHOD_4_DFA61CC7FE0E979F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DD3CFE4E37B58CA0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetInCameraScreenScope* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetInCameraScreenScope*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETINCAMERASCREENSCOPE_METHOD_4_DD3CFE4E37B58CA0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_09118BDE3FC85942(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetInCameraScreenScope*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetInCameraScreenScope*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETINCAMERASCREENSCOPE_METHOD_4_09118BDE3FC85942_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5D226B683BF578BA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetInCameraScreenScope* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetInCameraScreenScope*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETINCAMERASCREENSCOPE_METHOD_4_5D226B683BF578BA_OFFSET))(a1, a2);
		}
	};
}
