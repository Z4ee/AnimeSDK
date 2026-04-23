#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_22ABCAA2560F52EB_Struct_2_FAFDEB3CCCDB8966.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_4_D5299EFCCD69BF02;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_22ABCAA2560F52EB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11194830)
#define CLASS_3_22ABCAA2560F52EB__CTOR_OFFSET UNITYSDK_OFFSET(0x11194800)

inline static constexpr unsigned int Class_3_22ABCAA2560F52EB_TypeDefinitionIndex = 51097;

class Class_3_22ABCAA2560F52EB : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_4_D5299EFCCD69BF02*>
{
public:
	::Il2CppArray<::Class_3_22ABCAA2560F52EB_Struct_2_FAFDEB3CCCDB8966>* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_D5299EFCCD69BF02* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_D5299EFCCD69BF02*))((::PBYTE)hIl2Cpp + CLASS_3_22ABCAA2560F52EB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_22ABCAA2560F52EB_ONTASKBEGIN_OFFSET))(this);
	}
};
