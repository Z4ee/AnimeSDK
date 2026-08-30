#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FinishActionType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_FINISHACTIONCONFIG_METHOD_2_BA4AB032F01B3ABE_OFFSET UNITYSDK_OFFSET(0x1D09ABE0)
#define RPG_GAMECORE_FINISHACTIONCONFIG_METHOD_2_CD7DBDD509ADD030_OFFSET UNITYSDK_OFFSET(0x1D09AD70)
#define RPG_GAMECORE_FINISHACTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D09AD60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FinishActionConfig_TypeDefinitionIndex = 18790;

	class FinishActionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FinishActionType FinishActionType; // 0x10
		::Il2CppArray<::System::UInt32>* FinishActionPara; // 0x18
		::Il2CppArray<::System::String*>* FinishActionParaString; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHACTIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_BA4AB032F01B3ABE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FinishActionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FinishActionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHACTIONCONFIG_METHOD_2_BA4AB032F01B3ABE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_CD7DBDD509ADD030(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FinishActionConfig*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FinishActionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHACTIONCONFIG_METHOD_2_CD7DBDD509ADD030_OFFSET))(a1, a2);
		}
	};
}
