#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RetargetPerSequence; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B153CA762917031F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9A02AE0)
#define CLASS_2_B153CA762917031F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9A02B50)
#define CLASS_2_B153CA762917031F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x9A03090)
#define CLASS_2_B153CA762917031F_TICK_OFFSET UNITYSDK_OFFSET(0x9A030E0)
#define CLASS_2_B153CA762917031F__CTOR_OFFSET UNITYSDK_OFFSET(0x9A028C0)

inline static constexpr unsigned int Class_2_B153CA762917031F_TypeDefinitionIndex = 51007;

class Class_2_B153CA762917031F : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_0; // 0x18
	::System::Collections::Generic::List_1<::Class_3_E21F6DE9B7FA4D05*>* Field_2_1; // 0x20
	::RPG::GameCore::RetargetPerSequence* Field_2_2; // 0x28
	::RPG::GameCore::TaskContext* Field_2_3; // 0x30
	::Class_1_5F51D4049EA87B7B* Field_2_4; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RetargetPerSequence* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RetargetPerSequence*))((::PBYTE)hIl2Cpp + CLASS_2_B153CA762917031F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B153CA762917031F_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B153CA762917031F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B153CA762917031F_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B153CA762917031F_TICK_OFFSET))(this, a1);
	}
};
