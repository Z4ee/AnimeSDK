#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_3_089C45BC8048A9A8;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_07B1DD2301FF5169_METHOD_3_8572C3A917DD41CA_OFFSET UNITYSDK_OFFSET(0x1A7EA490)
#define CLASS_3_07B1DD2301FF5169_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A7EA2F0)
#define CLASS_3_07B1DD2301FF5169__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7EA2B0)

inline static constexpr unsigned int Class_3_07B1DD2301FF5169_TypeDefinitionIndex = 55268;

class Class_3_07B1DD2301FF5169 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_089C45BC8048A9A8*>
{
public:
	::RPG::GameCore::StringHash APGMNHCMEAC; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_089C45BC8048A9A8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_089C45BC8048A9A8*))((::PBYTE)hIl2Cpp + CLASS_3_07B1DD2301FF5169__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_07B1DD2301FF5169_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::GameCore::StringHash Method_3_8572C3A917DD41CA()
	{
		return ((::RPG::GameCore::StringHash(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_07B1DD2301FF5169_METHOD_3_8572C3A917DD41CA_OFFSET))(this);
	}
};
