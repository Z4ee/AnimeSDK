#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_MEMBERTOMEMBERENTITYDATACONFIG_METHOD_2_0EE45C0A06337EE6_OFFSET UNITYSDK_OFFSET(0x1990BC90)
#define RPG_GAMECORE_MEMBERTOMEMBERENTITYDATACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1990BE10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MemberToMemberEntityDataConfig_TypeDefinitionIndex = 19597;

	class MemberToMemberEntityDataConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 SourceMemberInstanceID; // 0x10
		::System::UInt32 TargetMemberInstanceID; // 0x14
		::RPG::GameCore::DynamicString* SourceName; // 0x18
		::RPG::GameCore::DynamicString* TargetName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MEMBERTOMEMBERENTITYDATACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_0EE45C0A06337EE6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MemberToMemberEntityDataConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MemberToMemberEntityDataConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MEMBERTOMEMBERENTITYDATACONFIG_METHOD_2_0EE45C0A06337EE6_OFFSET))(a1, a2);
		}
	};
}
