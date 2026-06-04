#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPPARTENTITY_METHOD_3_26D5D6C61215A57E_OFFSET UNITYSDK_OFFSET(0x19D13D40)
#define RPG_GAMECORE_TARGETMAPPARTENTITY_METHOD_3_4DE7525F6B61A102_OFFSET UNITYSDK_OFFSET(0x19D13E60)
#define RPG_GAMECORE_TARGETMAPPARTENTITY_METHOD_3_62D3F9127AD76493_OFFSET UNITYSDK_OFFSET(0x19D13F10)
#define RPG_GAMECORE_TARGETMAPPARTENTITY_METHOD_3_DFE8CA3E548D791A_OFFSET UNITYSDK_OFFSET(0x19D13F60)
#define RPG_GAMECORE_TARGETMAPPARTENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x19D13E40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapPartEntity_TypeDefinitionIndex = 22702;

	class TargetMapPartEntity : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Int32 PartID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPPARTENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_26D5D6C61215A57E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapPartEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapPartEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPPARTENTITY_METHOD_3_26D5D6C61215A57E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4DE7525F6B61A102(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapPartEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapPartEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPPARTENTITY_METHOD_3_4DE7525F6B61A102_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_62D3F9127AD76493(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapPartEntity*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapPartEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPPARTENTITY_METHOD_3_62D3F9127AD76493_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DFE8CA3E548D791A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapPartEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapPartEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPPARTENTITY_METHOD_3_DFE8CA3E548D791A_OFFSET))(a1, a2);
		}
	};
}
