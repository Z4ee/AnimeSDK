#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPPARTENTITY_METHOD_3_4BD36B6B85FE0207_OFFSET UNITYSDK_OFFSET(0x1D0C2A40)
#define RPG_GAMECORE_TARGETMAPPARTENTITY_METHOD_3_4DE7525F6B61A102_OFFSET UNITYSDK_OFFSET(0x1D0C2B10)
#define RPG_GAMECORE_TARGETMAPPARTENTITY_METHOD_3_8729121DA2CD857C_OFFSET UNITYSDK_OFFSET(0x1D0C2BF0)
#define RPG_GAMECORE_TARGETMAPPARTENTITY_METHOD_3_C097B59EEFDA0125_OFFSET UNITYSDK_OFFSET(0x1D0C2BC0)
#define RPG_GAMECORE_TARGETMAPPARTENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0C2B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapPartEntity_TypeDefinitionIndex = 23169;

	class TargetMapPartEntity : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Int32 PartID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPPARTENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4BD36B6B85FE0207(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapPartEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapPartEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPPARTENTITY_METHOD_3_4BD36B6B85FE0207_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4DE7525F6B61A102(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapPartEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapPartEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPPARTENTITY_METHOD_3_4DE7525F6B61A102_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C097B59EEFDA0125(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapPartEntity*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapPartEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPPARTENTITY_METHOD_3_C097B59EEFDA0125_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8729121DA2CD857C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapPartEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapPartEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPPARTENTITY_METHOD_3_8729121DA2CD857C_OFFSET))(a1, a2);
		}
	};
}
