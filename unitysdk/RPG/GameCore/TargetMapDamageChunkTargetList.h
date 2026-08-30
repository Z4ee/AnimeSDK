#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPDAMAGECHUNKTARGETLIST_METHOD_3_64E9812DAF2B6A94_OFFSET UNITYSDK_OFFSET(0x1E1BC180)
#define RPG_GAMECORE_TARGETMAPDAMAGECHUNKTARGETLIST_METHOD_3_87F8983D39A6305A_OFFSET UNITYSDK_OFFSET(0x1E1BC0E0)
#define RPG_GAMECORE_TARGETMAPDAMAGECHUNKTARGETLIST_METHOD_3_ABFE25E34E925698_OFFSET UNITYSDK_OFFSET(0x1E1BC140)
#define RPG_GAMECORE_TARGETMAPDAMAGECHUNKTARGETLIST_METHOD_3_E719706569F4D27B_OFFSET UNITYSDK_OFFSET(0x1E1BC040)
#define RPG_GAMECORE_TARGETMAPDAMAGECHUNKTARGETLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1BC0D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapDamageChunkTargetList_TypeDefinitionIndex = 23748;

	class TargetMapDamageChunkTargetList : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDAMAGECHUNKTARGETLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E719706569F4D27B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapDamageChunkTargetList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapDamageChunkTargetList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDAMAGECHUNKTARGETLIST_METHOD_3_E719706569F4D27B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_87F8983D39A6305A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapDamageChunkTargetList* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapDamageChunkTargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDAMAGECHUNKTARGETLIST_METHOD_3_87F8983D39A6305A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ABFE25E34E925698(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapDamageChunkTargetList*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapDamageChunkTargetList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDAMAGECHUNKTARGETLIST_METHOD_3_ABFE25E34E925698_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_64E9812DAF2B6A94(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapDamageChunkTargetList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapDamageChunkTargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDAMAGECHUNKTARGETLIST_METHOD_3_64E9812DAF2B6A94_OFFSET))(a1, a2);
		}
	};
}
