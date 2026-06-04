#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKCOLONYMIRRORTAKENDIFF_METHOD_4_91F4E4D8AD46EEBE_OFFSET UNITYSDK_OFFSET(0x194F97C0)
#define RPG_GAMECORE_BYCHECKCOLONYMIRRORTAKENDIFF_METHOD_4_9EE6C2B23BFB02C6_OFFSET UNITYSDK_OFFSET(0x194F9840)
#define RPG_GAMECORE_BYCHECKCOLONYMIRRORTAKENDIFF_METHOD_4_D55C28E78A16DE65_OFFSET UNITYSDK_OFFSET(0x194F9680)
#define RPG_GAMECORE_BYCHECKCOLONYMIRRORTAKENDIFF_METHOD_4_EEC42EC65850BF4F_OFFSET UNITYSDK_OFFSET(0x194F95B0)
#define RPG_GAMECORE_BYCHECKCOLONYMIRRORTAKENDIFF__CTOR_OFFSET UNITYSDK_OFFSET(0x194F9630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckColonyMirrorTakenDiff_TypeDefinitionIndex = 20650;

	class ByCheckColonyMirrorTakenDiff : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCOLONYMIRRORTAKENDIFF__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_EEC42EC65850BF4F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckColonyMirrorTakenDiff*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckColonyMirrorTakenDiff*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCOLONYMIRRORTAKENDIFF_METHOD_4_EEC42EC65850BF4F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D55C28E78A16DE65(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckColonyMirrorTakenDiff* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckColonyMirrorTakenDiff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCOLONYMIRRORTAKENDIFF_METHOD_4_D55C28E78A16DE65_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_91F4E4D8AD46EEBE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckColonyMirrorTakenDiff*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckColonyMirrorTakenDiff*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCOLONYMIRRORTAKENDIFF_METHOD_4_91F4E4D8AD46EEBE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9EE6C2B23BFB02C6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckColonyMirrorTakenDiff* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckColonyMirrorTakenDiff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCOLONYMIRRORTAKENDIFF_METHOD_4_9EE6C2B23BFB02C6_OFFSET))(a1, a2);
		}
	};
}
