#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_EFFECTMODIFYDATA_METHOD_2_3D89A14728373C7D_OFFSET UNITYSDK_OFFSET(0x196D5660)
#define RPG_GAMECORE_EFFECTMODIFYDATA_METHOD_2_556C152397FF3202_OFFSET UNITYSDK_OFFSET(0x196D54D0)
#define RPG_GAMECORE_EFFECTMODIFYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x196D5650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EffectModifyData_TypeDefinitionIndex = 19127;

	class EffectModifyData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* SubObjectPath; // 0x10
		::RPG::GameCore::TargetEvaluator* ReferenceTargetType; // 0x18
		::RPG::MVector3 Position; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTMODIFYDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_556C152397FF3202(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EffectModifyData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EffectModifyData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTMODIFYDATA_METHOD_2_556C152397FF3202_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_3D89A14728373C7D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::EffectModifyData*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::EffectModifyData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTMODIFYDATA_METHOD_2_3D89A14728373C7D_OFFSET))(a1, a2);
		}
	};
}
