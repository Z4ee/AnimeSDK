#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournBuildRefDataItem; }
namespace System { class Exception; }

#define CLASS_1_2AE9FC3995804AA7_CLEAR_OFFSET UNITYSDK_OFFSET(0xEA6C550)
#define CLASS_1_2AE9FC3995804AA7_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEA6C5A0)
#define CLASS_1_2AE9FC3995804AA7_METHOD_1_2136DD2AD5F6ABF7_OFFSET UNITYSDK_OFFSET(0xEA6DA70)
#define CLASS_1_2AE9FC3995804AA7_METHOD_1_775C28A7650D5CEE_OFFSET UNITYSDK_OFFSET(0xEA6C6C0)
#define CLASS_1_2AE9FC3995804AA7_METHOD_1_8E916205602E40BA_OFFSET UNITYSDK_OFFSET(0xEA6C5F0)
#define CLASS_1_2AE9FC3995804AA7_METHOD_1_E4EAF91E9D508FBA_OFFSET UNITYSDK_OFFSET(0xEA6C500)
#define CLASS_1_2AE9FC3995804AA7__CTOR_OFFSET UNITYSDK_OFFSET(0xEA6E200)

inline static constexpr unsigned int Class_1_2AE9FC3995804AA7_TypeDefinitionIndex = 55061;

class Class_1_2AE9FC3995804AA7 : public ::System::Object
{
public:
	::RPG::GameCore::RogueTournMode Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AE9FC3995804AA7__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E4EAF91E9D508FBA(::RPG::GameCore::RogueTournMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournMode))((::PBYTE)hIl2Cpp + CLASS_1_2AE9FC3995804AA7_METHOD_1_E4EAF91E9D508FBA_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AE9FC3995804AA7_CLEAR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AE9FC3995804AA7_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_8E916205602E40BA(::RPG::Client::IRogueTournBuildRefDataItem* a1, ::System::Exception*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefDataItem*, ::System::Exception*&))((::PBYTE)hIl2Cpp + CLASS_1_2AE9FC3995804AA7_METHOD_1_8E916205602E40BA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_775C28A7650D5CEE(::RPG::Client::IRogueTournBuildRefDataItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + CLASS_1_2AE9FC3995804AA7_METHOD_1_775C28A7650D5CEE_OFFSET))(this, a1);
	}

	::System::Void Method_1_2136DD2AD5F6ABF7(::RPG::Client::IRogueTournBuildRefDataItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + CLASS_1_2AE9FC3995804AA7_METHOD_1_2136DD2AD5F6ABF7_OFFSET))(this, a1);
	}
};
