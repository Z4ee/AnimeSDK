#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PckPatchPlatform; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PCKPATCHCONFIG_METHOD_2_1C6C2CB1A420ED2B_OFFSET UNITYSDK_OFFSET(0x199EBE50)
#define RPG_GAMECORE_PCKPATCHCONFIG_METHOD_2_F077A5A499DF57B3_OFFSET UNITYSDK_OFFSET(0x199EBD40)
#define RPG_GAMECORE_PCKPATCHCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x199EBE40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PckPatchConfig_TypeDefinitionIndex = 15575;

	class PckPatchConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::PckPatchPlatform*>* Incrementals; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PCKPATCHCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F077A5A499DF57B3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PckPatchConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PckPatchConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PCKPATCHCONFIG_METHOD_2_F077A5A499DF57B3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_1C6C2CB1A420ED2B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::PckPatchConfig*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::PckPatchConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PCKPATCHCONFIG_METHOD_2_1C6C2CB1A420ED2B_OFFSET))(a1, a2);
		}
	};
}
