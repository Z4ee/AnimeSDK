#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPBETWEENENTITY_METHOD_3_32689386B9330DC7_OFFSET UNITYSDK_OFFSET(0x1D0C11E0)
#define RPG_GAMECORE_TARGETMAPBETWEENENTITY_METHOD_3_49B0D05DE5CA543C_OFFSET UNITYSDK_OFFSET(0x1D0C12E0)
#define RPG_GAMECORE_TARGETMAPBETWEENENTITY_METHOD_3_93EC175E71EFBC56_OFFSET UNITYSDK_OFFSET(0x1D0C1280)
#define RPG_GAMECORE_TARGETMAPBETWEENENTITY_METHOD_3_C8BD60CC28903178_OFFSET UNITYSDK_OFFSET(0x1D0C1320)
#define RPG_GAMECORE_TARGETMAPBETWEENENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0C1270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapBetweenEntity_TypeDefinitionIndex = 23173;

	class TargetMapBetweenEntity : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPBETWEENENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_32689386B9330DC7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapBetweenEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapBetweenEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPBETWEENENTITY_METHOD_3_32689386B9330DC7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_93EC175E71EFBC56(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapBetweenEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapBetweenEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPBETWEENENTITY_METHOD_3_93EC175E71EFBC56_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_49B0D05DE5CA543C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapBetweenEntity*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapBetweenEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPBETWEENENTITY_METHOD_3_49B0D05DE5CA543C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C8BD60CC28903178(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapBetweenEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapBetweenEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPBETWEENENTITY_METHOD_3_C8BD60CC28903178_OFFSET))(a1, a2);
		}
	};
}
