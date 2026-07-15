#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_DBCE1D6F45BA29F0;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_47673724FF3DE6A7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF17FA60)
#define CLASS_3_47673724FF3DE6A7__CTOR_OFFSET UNITYSDK_OFFSET(0xF17FA30)

inline static constexpr unsigned int Class_3_47673724FF3DE6A7_TypeDefinitionIndex = 50392;

class Class_3_47673724FF3DE6A7 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_DBCE1D6F45BA29F0*>
{
public:
	::Class_3_DBCE1D6F45BA29F0* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_DBCE1D6F45BA29F0* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_DBCE1D6F45BA29F0*))((::PBYTE)hIl2Cpp + CLASS_3_47673724FF3DE6A7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_47673724FF3DE6A7_ONTASKBEGIN_OFFSET))(this);
	}
};
