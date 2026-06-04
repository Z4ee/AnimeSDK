#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_TARGETMAPDUMMYENTITY_METHOD_3_0E92A3CA73FDA2CA_OFFSET UNITYSDK_OFFSET(0x19D135E0)
#define RPG_GAMECORE_TARGETMAPDUMMYENTITY_METHOD_3_10B0C5D771BFD6C6_OFFSET UNITYSDK_OFFSET(0x19D13750)
#define RPG_GAMECORE_TARGETMAPDUMMYENTITY_METHOD_3_89C3916FAACC2C53_OFFSET UNITYSDK_OFFSET(0x19D13700)
#define RPG_GAMECORE_TARGETMAPDUMMYENTITY_METHOD_3_B4B4F337E8EFF897_OFFSET UNITYSDK_OFFSET(0x19D13570)
#define RPG_GAMECORE_TARGETMAPDUMMYENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x19D135C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapDummyEntity_TypeDefinitionIndex = 22713;

	class TargetMapDummyEntity : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::String* DummyEntityName; // 0x10
		::System::Boolean AutoCreate; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDUMMYENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B4B4F337E8EFF897(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapDummyEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapDummyEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDUMMYENTITY_METHOD_3_B4B4F337E8EFF897_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0E92A3CA73FDA2CA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapDummyEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapDummyEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDUMMYENTITY_METHOD_3_0E92A3CA73FDA2CA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_89C3916FAACC2C53(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapDummyEntity*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapDummyEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDUMMYENTITY_METHOD_3_89C3916FAACC2C53_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_10B0C5D771BFD6C6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapDummyEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapDummyEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDUMMYENTITY_METHOD_3_10B0C5D771BFD6C6_OFFSET))(a1, a2);
		}
	};
}
