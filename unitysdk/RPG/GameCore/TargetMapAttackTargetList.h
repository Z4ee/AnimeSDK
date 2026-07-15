#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPATTACKTARGETLIST_METHOD_3_443D0165800D8958_OFFSET UNITYSDK_OFFSET(0x1D0C0F30)
#define RPG_GAMECORE_TARGETMAPATTACKTARGETLIST_METHOD_3_97CCA50E87341936_OFFSET UNITYSDK_OFFSET(0x1D0C0EB0)
#define RPG_GAMECORE_TARGETMAPATTACKTARGETLIST_METHOD_3_B8DC8929DBD5A7E5_OFFSET UNITYSDK_OFFSET(0x1D0C0F10)
#define RPG_GAMECORE_TARGETMAPATTACKTARGETLIST_METHOD_3_FF9A74797650E9A7_OFFSET UNITYSDK_OFFSET(0x1D0C0E30)
#define RPG_GAMECORE_TARGETMAPATTACKTARGETLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0C0EA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapAttackTargetList_TypeDefinitionIndex = 23167;

	class TargetMapAttackTargetList : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPATTACKTARGETLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FF9A74797650E9A7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapAttackTargetList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapAttackTargetList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPATTACKTARGETLIST_METHOD_3_FF9A74797650E9A7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_97CCA50E87341936(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapAttackTargetList* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapAttackTargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPATTACKTARGETLIST_METHOD_3_97CCA50E87341936_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B8DC8929DBD5A7E5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapAttackTargetList*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapAttackTargetList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPATTACKTARGETLIST_METHOD_3_B8DC8929DBD5A7E5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_443D0165800D8958(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapAttackTargetList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapAttackTargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPATTACKTARGETLIST_METHOD_3_443D0165800D8958_OFFSET))(a1, a2);
		}
	};
}
