#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"
#include "unitysdk/RPG/GameCore/ValueGroupComputeType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VE_GROUP_METHOD_3_20EB88CDB4310F3C_OFFSET UNITYSDK_OFFSET(0x19E400A0)
#define RPG_GAMECORE_VE_GROUP_METHOD_3_5A3FFA54DD350DA7_OFFSET UNITYSDK_OFFSET(0x19E40280)
#define RPG_GAMECORE_VE_GROUP_METHOD_3_7E99D8658F852276_OFFSET UNITYSDK_OFFSET(0x19E402B0)
#define RPG_GAMECORE_VE_GROUP_METHOD_3_D6933F22CF56C049_OFFSET UNITYSDK_OFFSET(0x19E40060)
#define RPG_GAMECORE_VE_GROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x19E40090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_Group_TypeDefinitionIndex = 22720;

	class VE_Group : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::RPG::GameCore::ValueGroupComputeType ComputeType; // 0x20
		::Il2CppArray<::RPG::GameCore::ValueEvaluatorConfig*>* Values; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_GROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D6933F22CF56C049(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_Group*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_Group*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_GROUP_METHOD_3_D6933F22CF56C049_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_20EB88CDB4310F3C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_Group* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_Group*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_GROUP_METHOD_3_20EB88CDB4310F3C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5A3FFA54DD350DA7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_Group*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_Group*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_GROUP_METHOD_3_5A3FFA54DD350DA7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7E99D8658F852276(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_Group* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_Group*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_GROUP_METHOD_3_7E99D8658F852276_OFFSET))(a1, a2);
		}
	};
}
