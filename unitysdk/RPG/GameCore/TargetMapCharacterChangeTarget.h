#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPCHARACTERCHANGETARGET_METHOD_3_289320A29465FF07_OFFSET UNITYSDK_OFFSET(0x1D0C1850)
#define RPG_GAMECORE_TARGETMAPCHARACTERCHANGETARGET_METHOD_3_4EB34172F8450AFB_OFFSET UNITYSDK_OFFSET(0x1D0C16B0)
#define RPG_GAMECORE_TARGETMAPCHARACTERCHANGETARGET_METHOD_3_70DB6BB9CD96D0FE_OFFSET UNITYSDK_OFFSET(0x1D0C1790)
#define RPG_GAMECORE_TARGETMAPCHARACTERCHANGETARGET_METHOD_3_DFC4266BD6155C2A_OFFSET UNITYSDK_OFFSET(0x1D0C1880)
#define RPG_GAMECORE_TARGETMAPCHARACTERCHANGETARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0C1780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapCharacterChangeTarget_TypeDefinitionIndex = 23123;

	class TargetMapCharacterChangeTarget : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Boolean IncludeSelf; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPCHARACTERCHANGETARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4EB34172F8450AFB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapCharacterChangeTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapCharacterChangeTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPCHARACTERCHANGETARGET_METHOD_3_4EB34172F8450AFB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_70DB6BB9CD96D0FE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapCharacterChangeTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapCharacterChangeTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPCHARACTERCHANGETARGET_METHOD_3_70DB6BB9CD96D0FE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_289320A29465FF07(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapCharacterChangeTarget*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapCharacterChangeTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPCHARACTERCHANGETARGET_METHOD_3_289320A29465FF07_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DFC4266BD6155C2A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapCharacterChangeTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapCharacterChangeTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPCHARACTERCHANGETARGET_METHOD_3_DFC4266BD6155C2A_OFFSET))(a1, a2);
		}
	};
}
