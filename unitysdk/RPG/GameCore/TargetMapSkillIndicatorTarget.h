#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPSKILLINDICATORTARGET_METHOD_3_7317338E88E5174D_OFFSET UNITYSDK_OFFSET(0x1D0C3330)
#define RPG_GAMECORE_TARGETMAPSKILLINDICATORTARGET_METHOD_3_73983B5BEC62008A_OFFSET UNITYSDK_OFFSET(0x1D0C3430)
#define RPG_GAMECORE_TARGETMAPSKILLINDICATORTARGET_METHOD_3_8E60D20B81ACC3D7_OFFSET UNITYSDK_OFFSET(0x1D0C3410)
#define RPG_GAMECORE_TARGETMAPSKILLINDICATORTARGET_METHOD_3_B501871CBD6F1EE8_OFFSET UNITYSDK_OFFSET(0x1D0C33B0)
#define RPG_GAMECORE_TARGETMAPSKILLINDICATORTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0C33A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapSkillIndicatorTarget_TypeDefinitionIndex = 23178;

	class TargetMapSkillIndicatorTarget : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLINDICATORTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7317338E88E5174D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapSkillIndicatorTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapSkillIndicatorTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLINDICATORTARGET_METHOD_3_7317338E88E5174D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B501871CBD6F1EE8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapSkillIndicatorTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapSkillIndicatorTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLINDICATORTARGET_METHOD_3_B501871CBD6F1EE8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8E60D20B81ACC3D7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSkillIndicatorTarget*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSkillIndicatorTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLINDICATORTARGET_METHOD_3_8E60D20B81ACC3D7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_73983B5BEC62008A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSkillIndicatorTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSkillIndicatorTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLINDICATORTARGET_METHOD_3_73983B5BEC62008A_OFFSET))(a1, a2);
		}
	};
}
