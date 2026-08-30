#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_VE_FACTORGROUP_METHOD_3_17EA2DF4BBB00E34_OFFSET UNITYSDK_OFFSET(0x1D62BE30)
#define RPG_GAMECORE_VE_FACTORGROUP_METHOD_3_1C4115E8560D9086_OFFSET UNITYSDK_OFFSET(0x1D62BC00)
#define RPG_GAMECORE_VE_FACTORGROUP_METHOD_3_9BED9ABE98A70F52_OFFSET UNITYSDK_OFFSET(0x1D62BE00)
#define RPG_GAMECORE_VE_FACTORGROUP_METHOD_3_D978056F5283E957_OFFSET UNITYSDK_OFFSET(0x1D62BC40)
#define RPG_GAMECORE_VE_FACTORGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D62BC30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_FactorGroup_TypeDefinitionIndex = 23771;

	class VE_FactorGroup : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::System::String* GroupName; // 0x20
		::System::String* ParamString; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_FACTORGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1C4115E8560D9086(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_FactorGroup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_FactorGroup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_FACTORGROUP_METHOD_3_1C4115E8560D9086_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D978056F5283E957(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_FactorGroup* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_FactorGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_FACTORGROUP_METHOD_3_D978056F5283E957_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9BED9ABE98A70F52(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_FactorGroup*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_FactorGroup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_FACTORGROUP_METHOD_3_9BED9ABE98A70F52_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_17EA2DF4BBB00E34(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_FactorGroup* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_FactorGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_FACTORGROUP_METHOD_3_17EA2DF4BBB00E34_OFFSET))(a1, a2);
		}
	};
}
