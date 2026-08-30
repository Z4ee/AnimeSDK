#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPPARTOWNERENTITY_METHOD_3_1D583101E07D74E3_OFFSET UNITYSDK_OFFSET(0x1E1BCE10)
#define RPG_GAMECORE_TARGETMAPPARTOWNERENTITY_METHOD_3_2DCF552AEDD8DA59_OFFSET UNITYSDK_OFFSET(0x1E1BCEF0)
#define RPG_GAMECORE_TARGETMAPPARTOWNERENTITY_METHOD_3_2F7F2E2C6FA5B48C_OFFSET UNITYSDK_OFFSET(0x1E1BCF10)
#define RPG_GAMECORE_TARGETMAPPARTOWNERENTITY_METHOD_3_7F63DC0307A52E62_OFFSET UNITYSDK_OFFSET(0x1E1BCE90)
#define RPG_GAMECORE_TARGETMAPPARTOWNERENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1BCE80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapPartOwnerEntity_TypeDefinitionIndex = 23750;

	class TargetMapPartOwnerEntity : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPPARTOWNERENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1D583101E07D74E3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapPartOwnerEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapPartOwnerEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPPARTOWNERENTITY_METHOD_3_1D583101E07D74E3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7F63DC0307A52E62(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapPartOwnerEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapPartOwnerEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPPARTOWNERENTITY_METHOD_3_7F63DC0307A52E62_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2DCF552AEDD8DA59(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapPartOwnerEntity*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapPartOwnerEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPPARTOWNERENTITY_METHOD_3_2DCF552AEDD8DA59_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2F7F2E2C6FA5B48C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapPartOwnerEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapPartOwnerEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPPARTOWNERENTITY_METHOD_3_2F7F2E2C6FA5B48C_OFFSET))(a1, a2);
		}
	};
}
