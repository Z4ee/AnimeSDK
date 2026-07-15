#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_4EA8E4A234CC4113_Struct_2_FAFDEB3CCCDB8966.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_4_D5299EFCCD69BF02;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4EA8E4A234CC4113_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1631A480)
#define CLASS_3_4EA8E4A234CC4113__CTOR_OFFSET UNITYSDK_OFFSET(0x1631A450)

inline static constexpr unsigned int Class_3_4EA8E4A234CC4113_TypeDefinitionIndex = 52913;

class Class_3_4EA8E4A234CC4113 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_4_D5299EFCCD69BF02*>
{
public:
	::Il2CppArray<::Class_3_4EA8E4A234CC4113_Struct_2_FAFDEB3CCCDB8966>* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_D5299EFCCD69BF02* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_D5299EFCCD69BF02*))((::PBYTE)hIl2Cpp + CLASS_3_4EA8E4A234CC4113__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4EA8E4A234CC4113_ONTASKBEGIN_OFFSET))(this);
	}
};
