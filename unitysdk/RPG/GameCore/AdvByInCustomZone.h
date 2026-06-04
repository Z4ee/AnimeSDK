#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_ADVBYINCUSTOMZONE_METHOD_4_7AD276F2CF1E156A_OFFSET UNITYSDK_OFFSET(0x1941B760)
#define RPG_GAMECORE_ADVBYINCUSTOMZONE_METHOD_4_9E7088E2144032D1_OFFSET UNITYSDK_OFFSET(0x1941B470)
#define RPG_GAMECORE_ADVBYINCUSTOMZONE_METHOD_4_B4D85E953F186AE9_OFFSET UNITYSDK_OFFSET(0x1941B7E0)
#define RPG_GAMECORE_ADVBYINCUSTOMZONE_METHOD_4_C162C7C2FEF38DE9_OFFSET UNITYSDK_OFFSET(0x1941B540)
#define RPG_GAMECORE_ADVBYINCUSTOMZONE__CTOR_OFFSET UNITYSDK_OFFSET(0x1941B4F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByInCustomZone_TypeDefinitionIndex = 18897;

	class AdvByInCustomZone : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::String* CustomZoneName; // 0x28
		::System::Boolean ReturnArtUnload; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYINCUSTOMZONE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9E7088E2144032D1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByInCustomZone*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByInCustomZone*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYINCUSTOMZONE_METHOD_4_9E7088E2144032D1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C162C7C2FEF38DE9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByInCustomZone* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByInCustomZone*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYINCUSTOMZONE_METHOD_4_C162C7C2FEF38DE9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7AD276F2CF1E156A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByInCustomZone*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByInCustomZone*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYINCUSTOMZONE_METHOD_4_7AD276F2CF1E156A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B4D85E953F186AE9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByInCustomZone* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByInCustomZone*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYINCUSTOMZONE_METHOD_4_B4D85E953F186AE9_OFFSET))(a1, a2);
		}
	};
}
