#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERIDGROUPCONFIG_METHOD_2_9D698FE406A73A8A_OFFSET UNITYSDK_OFFSET(0x1B724790)
#define RPG_GAMECORE_CHARACTERIDGROUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7248B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterIDGroupConfig_TypeDefinitionIndex = 16452;

	class CharacterIDGroupConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Group; // 0x10
		::Il2CppArray<::System::UInt32>* IDList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERIDGROUPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9D698FE406A73A8A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterIDGroupConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterIDGroupConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERIDGROUPCONFIG_METHOD_2_9D698FE406A73A8A_OFFSET))(a1, a2);
		}
	};
}
