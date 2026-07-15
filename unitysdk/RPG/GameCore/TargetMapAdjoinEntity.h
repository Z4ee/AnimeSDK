#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdjoinType.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
#include "unitysdk/RPG/GameCore/TeamMemberCountingOption.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPADJOINENTITY_METHOD_3_3794874F3A54ACA7_OFFSET UNITYSDK_OFFSET(0x1D0BFC00)
#define RPG_GAMECORE_TARGETMAPADJOINENTITY_METHOD_3_DCCAF6D535829D72_OFFSET UNITYSDK_OFFSET(0x1D0BFC50)
#define RPG_GAMECORE_TARGETMAPADJOINENTITY_METHOD_3_E2352EAB62E7469A_OFFSET UNITYSDK_OFFSET(0x1D0BFE70)
#define RPG_GAMECORE_TARGETMAPADJOINENTITY_METHOD_3_E4FB343633A3F1C7_OFFSET UNITYSDK_OFFSET(0x1D0BFEB0)
#define RPG_GAMECORE_TARGETMAPADJOINENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0BFC40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapAdjoinEntity_TypeDefinitionIndex = 23163;

	class TargetMapAdjoinEntity : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::RPG::GameCore::AdjoinType SideType; // 0x10
		::RPG::GameCore::AliveStateMask AliveType; // 0x12
		::System::Boolean IncludeAllRows; // 0x14
		::System::Int32 AdjoinCount; // 0x18
		::RPG::GameCore::TeamMemberCountingOption CountingOption; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPADJOINENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3794874F3A54ACA7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapAdjoinEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapAdjoinEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPADJOINENTITY_METHOD_3_3794874F3A54ACA7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DCCAF6D535829D72(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapAdjoinEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapAdjoinEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPADJOINENTITY_METHOD_3_DCCAF6D535829D72_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E2352EAB62E7469A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapAdjoinEntity*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapAdjoinEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPADJOINENTITY_METHOD_3_E2352EAB62E7469A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E4FB343633A3F1C7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapAdjoinEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapAdjoinEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPADJOINENTITY_METHOD_3_E4FB343633A3F1C7_OFFSET))(a1, a2);
		}
	};
}
