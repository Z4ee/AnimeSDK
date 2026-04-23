#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class AttachGlobalShield; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_164163E187B755A6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x119DBDB0)
#define CLASS_3_164163E187B755A6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x119DB920)
#define CLASS_3_164163E187B755A6__CTOR_OFFSET UNITYSDK_OFFSET(0x119DB830)
#define CLASS_3_164163E187B755A6___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x119DBE40)

inline static constexpr unsigned int Class_3_164163E187B755A6_TypeDefinitionIndex = 50607;

class Class_3_164163E187B755A6 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AttachGlobalShield*>
{
public:
	::Class_3_E21F6DE9B7FA4D05* Field_3_1; // 0x28
	::Class_3_E21F6DE9B7FA4D05* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AttachGlobalShield* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AttachGlobalShield*))((::PBYTE)hIl2Cpp + CLASS_3_164163E187B755A6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_164163E187B755A6_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_164163E187B755A6_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_164163E187B755A6___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
