#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_9B16484D3F1D4AA0;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4E839C0B2E8A1A3F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDD7CAF0)
#define CLASS_3_4E839C0B2E8A1A3F__CTOR_OFFSET UNITYSDK_OFFSET(0xDD7CAC0)

inline static constexpr unsigned int Class_3_4E839C0B2E8A1A3F_TypeDefinitionIndex = 55753;

class Class_3_4E839C0B2E8A1A3F : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_9B16484D3F1D4AA0*>
{
public:
	// static const ::System::UInt32 CMGOKFBJJKA = 0x3; // 0x0

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_9B16484D3F1D4AA0* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_9B16484D3F1D4AA0*))((::PBYTE)hIl2Cpp + CLASS_3_4E839C0B2E8A1A3F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4E839C0B2E8A1A3F_ONTASKBEGIN_OFFSET))(this);
	}
};
