#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/Class_2_B3AFD97860C380C7_Struct_2_7570EC6852BF10B5.h"

namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B3AFD97860C380C7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x156B3AD0)
#define CLASS_2_B3AFD97860C380C7_METHOD_2_09A10F5CD917CB8F_OFFSET UNITYSDK_OFFSET(0x156B3B20)
#define CLASS_2_B3AFD97860C380C7_METHOD_2_857F27E039AE217B_OFFSET UNITYSDK_OFFSET(0x156B3E20)
#define CLASS_2_B3AFD97860C380C7_METHOD_2_CDA0A9914149BD0D_OFFSET UNITYSDK_OFFSET(0x156B3FC0)
#define CLASS_2_B3AFD97860C380C7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x156B3D70)
#define CLASS_2_B3AFD97860C380C7_TICK_OFFSET UNITYSDK_OFFSET(0x156B3DC0)
#define CLASS_2_B3AFD97860C380C7__CTOR_OFFSET UNITYSDK_OFFSET(0x156B3A20)

inline static constexpr unsigned int Class_2_B3AFD97860C380C7_TypeDefinitionIndex = 53599;

class Class_2_B3AFD97860C380C7 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::Collections::Generic::List_1<::Class_2_B3AFD97860C380C7_Struct_2_7570EC6852BF10B5>* GBKJPHPEECD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_2_B3AFD97860C380C7__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3AFD97860C380C7_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3AFD97860C380C7_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B3AFD97860C380C7_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_857F27E039AE217B(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_B3AFD97860C380C7_METHOD_2_857F27E039AE217B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_09A10F5CD917CB8F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3AFD97860C380C7_METHOD_2_09A10F5CD917CB8F_OFFSET))(this);
	}

	::System::Void Method_2_CDA0A9914149BD0D(::Il2CppArray<::RPG::GameCore::TaskConfig*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3AFD97860C380C7_METHOD_2_CDA0A9914149BD0D_OFFSET))(this, a1);
	}
};
