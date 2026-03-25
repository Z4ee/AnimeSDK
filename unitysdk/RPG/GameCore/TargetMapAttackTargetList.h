#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETMAPATTACKTARGETLIST_METHOD_3_1E99066141F67B4F_OFFSET UNITYSDK_OFFSET(0x177C1FF0)
#define RPG_GAMECORE_TARGETMAPATTACKTARGETLIST_METHOD_3_97CCA50E87341936_OFFSET UNITYSDK_OFFSET(0x177C20B0)
#define RPG_GAMECORE_TARGETMAPATTACKTARGETLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x177C2090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapAttackTargetList_TypeDefinitionIndex = 22294;

	class TargetMapAttackTargetList : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPATTACKTARGETLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1E99066141F67B4F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapAttackTargetList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapAttackTargetList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPATTACKTARGETLIST_METHOD_3_1E99066141F67B4F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_97CCA50E87341936(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapAttackTargetList* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapAttackTargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPATTACKTARGETLIST_METHOD_3_97CCA50E87341936_OFFSET))(a1, a2);
		}
	};
}
