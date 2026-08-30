#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/ST_TargetPointType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_ST_BYDISTANCETOTARGET_METHOD_4_1CCEE9D74F80E571_OFFSET UNITYSDK_OFFSET(0x1DB33ED0)
#define RPG_GAMECORE_ST_BYDISTANCETOTARGET_METHOD_4_4650B8DBD2CDC8AA_OFFSET UNITYSDK_OFFSET(0x1DB34180)
#define RPG_GAMECORE_ST_BYDISTANCETOTARGET_METHOD_4_6000393AD29BC14D_OFFSET UNITYSDK_OFFSET(0x1DB341B0)
#define RPG_GAMECORE_ST_BYDISTANCETOTARGET_METHOD_4_D786ED28866E8B4F_OFFSET UNITYSDK_OFFSET(0x1DB33E90)
#define RPG_GAMECORE_ST_BYDISTANCETOTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB33EC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByDistanceToTarget_TypeDefinitionIndex = 19845;

	class ST_ByDistanceToTarget : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ST_TargetPointType TargetType; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x24
		::System::Boolean UseVariable; // 0x28
		::System::String* VariableName; // 0x30
		::System::Single CompareValue; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYDISTANCETOTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D786ED28866E8B4F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByDistanceToTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByDistanceToTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYDISTANCETOTARGET_METHOD_4_D786ED28866E8B4F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1CCEE9D74F80E571(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByDistanceToTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByDistanceToTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYDISTANCETOTARGET_METHOD_4_1CCEE9D74F80E571_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4650B8DBD2CDC8AA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByDistanceToTarget*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByDistanceToTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYDISTANCETOTARGET_METHOD_4_4650B8DBD2CDC8AA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6000393AD29BC14D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByDistanceToTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByDistanceToTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYDISTANCETOTARGET_METHOD_4_6000393AD29BC14D_OFFSET))(a1, a2);
		}
	};
}
