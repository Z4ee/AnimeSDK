#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class RtCreateTrigger; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2C5AD437E9FDF62C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11DDB4C0)
#define CLASS_3_2C5AD437E9FDF62C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11DDB530)
#define CLASS_3_2C5AD437E9FDF62C__CTOR_OFFSET UNITYSDK_OFFSET(0x11DDB420)
#define CLASS_3_2C5AD437E9FDF62C___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11DDBCE0)

inline static constexpr unsigned int Class_3_2C5AD437E9FDF62C_TypeDefinitionIndex = 49613;

class Class_3_2C5AD437E9FDF62C : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RtCreateTrigger*>
{
public:
	::Class_3_E21F6DE9B7FA4D05* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtCreateTrigger* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtCreateTrigger*))((::PBYTE)hIl2Cpp + CLASS_3_2C5AD437E9FDF62C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C5AD437E9FDF62C_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C5AD437E9FDF62C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C5AD437E9FDF62C___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
