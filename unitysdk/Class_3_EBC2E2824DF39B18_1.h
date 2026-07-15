#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_D874BB0E60DFC8F8;
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_EBC2E2824DF39B18_1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15F014F0)
#define CLASS_3_EBC2E2824DF39B18_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15F014C0)

inline static constexpr unsigned int Class_3_EBC2E2824DF39B18_1_TypeDefinitionIndex = 56039;

class Class_3_EBC2E2824DF39B18_1 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_D874BB0E60DFC8F8*>
{
public:
	// static const ::System::String* Field_3_0; // 0x0
	// static const ::System::String* Field_3_1; // 0x0

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_D874BB0E60DFC8F8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_D874BB0E60DFC8F8*))((::PBYTE)hIl2Cpp + CLASS_3_EBC2E2824DF39B18_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EBC2E2824DF39B18_1_ONTASKBEGIN_OFFSET))(this);
	}
};
