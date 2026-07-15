#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_TARGETMAPDUMMYENTITY_METHOD_3_0E92A3CA73FDA2CA_OFFSET UNITYSDK_OFFSET(0x1D0C2270)
#define RPG_GAMECORE_TARGETMAPDUMMYENTITY_METHOD_3_1B4DD42217238D08_OFFSET UNITYSDK_OFFSET(0x1D0C23C0)
#define RPG_GAMECORE_TARGETMAPDUMMYENTITY_METHOD_3_627856C01D5E9B6D_OFFSET UNITYSDK_OFFSET(0x1D0C2390)
#define RPG_GAMECORE_TARGETMAPDUMMYENTITY_METHOD_3_9EAF4775263B4C25_OFFSET UNITYSDK_OFFSET(0x1D0C2230)
#define RPG_GAMECORE_TARGETMAPDUMMYENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0C2260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapDummyEntity_TypeDefinitionIndex = 23180;

	class TargetMapDummyEntity : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::String* DummyEntityName; // 0x10
		::System::Boolean AutoCreate; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDUMMYENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9EAF4775263B4C25(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapDummyEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapDummyEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDUMMYENTITY_METHOD_3_9EAF4775263B4C25_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0E92A3CA73FDA2CA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapDummyEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapDummyEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDUMMYENTITY_METHOD_3_0E92A3CA73FDA2CA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_627856C01D5E9B6D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapDummyEntity*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapDummyEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDUMMYENTITY_METHOD_3_627856C01D5E9B6D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1B4DD42217238D08(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapDummyEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapDummyEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDUMMYENTITY_METHOD_3_1B4DD42217238D08_OFFSET))(a1, a2);
		}
	};
}
