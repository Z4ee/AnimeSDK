#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_EFFECTMODIFYDATA_METHOD_2_5D3E56C701A1EA19_OFFSET UNITYSDK_OFFSET(0x1D603080)
#define RPG_GAMECORE_EFFECTMODIFYDATA_METHOD_2_688945F9DE8F799F_OFFSET UNITYSDK_OFFSET(0x1D602E70)
#define RPG_GAMECORE_EFFECTMODIFYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D603070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EffectModifyData_TypeDefinitionIndex = 20266;

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

		static ::System::Void Method_2_688945F9DE8F799F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EffectModifyData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EffectModifyData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTMODIFYDATA_METHOD_2_688945F9DE8F799F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_5D3E56C701A1EA19(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::EffectModifyData*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::EffectModifyData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTMODIFYDATA_METHOD_2_5D3E56C701A1EA19_OFFSET))(a1, a2);
		}
	};
}
