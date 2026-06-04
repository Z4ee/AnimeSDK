#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGraphComponent; }
namespace RPG::GameCore { class ShowMenu; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_5271428CFA7EAD9C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x144583D0)
#define CLASS_2_5271428CFA7EAD9C_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x14459990)
#define CLASS_2_5271428CFA7EAD9C_METHOD_2_0B84468CE6657ED4_OFFSET UNITYSDK_OFFSET(0x144595A0)
#define CLASS_2_5271428CFA7EAD9C_METHOD_2_8CA56FF24F45C9F3_OFFSET UNITYSDK_OFFSET(0x14458EC0)
#define CLASS_2_5271428CFA7EAD9C_METHOD_2_930073A6194C4594_OFFSET UNITYSDK_OFFSET(0x14459340)
#define CLASS_2_5271428CFA7EAD9C_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x14459950)
#define CLASS_2_5271428CFA7EAD9C_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14458AB0)
#define CLASS_2_5271428CFA7EAD9C_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x14459900)
#define CLASS_2_5271428CFA7EAD9C_METHOD_2_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x14458AF0)
#define CLASS_2_5271428CFA7EAD9C_ONSKIP_OFFSET UNITYSDK_OFFSET(0x14458E40)
#define CLASS_2_5271428CFA7EAD9C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14458490)
#define CLASS_2_5271428CFA7EAD9C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x14458D20)
#define CLASS_2_5271428CFA7EAD9C_TICK_OFFSET UNITYSDK_OFFSET(0x14458DE0)
#define CLASS_2_5271428CFA7EAD9C__CTOR_OFFSET UNITYSDK_OFFSET(0x144583C0)

inline static constexpr unsigned int Class_2_5271428CFA7EAD9C_TypeDefinitionIndex = 54814;

class Class_2_5271428CFA7EAD9C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::ShowMenu* Field_2_1; // 0x20
	::RPG::GameCore::LevelGraphComponent* Field_2_2; // 0x28
	::System::UInt32 Field_2_3; // 0x30
	::System::Int32 Field_2_4; // 0x34
	::System::Boolean Field_2_5; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowMenu* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowMenu*))((::PBYTE)hIl2Cpp + CLASS_2_5271428CFA7EAD9C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5271428CFA7EAD9C_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5271428CFA7EAD9C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5271428CFA7EAD9C_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5271428CFA7EAD9C_TICK_OFFSET))(this, a1);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5271428CFA7EAD9C_ONSKIP_OFFSET))(this);
	}

	::System::Void Method_2_8CA56FF24F45C9F3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5271428CFA7EAD9C_METHOD_2_8CA56FF24F45C9F3_OFFSET))(this, a1);
	}

	::System::Void Method_2_930073A6194C4594()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5271428CFA7EAD9C_METHOD_2_930073A6194C4594_OFFSET))(this);
	}

	::System::Void Method_2_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5271428CFA7EAD9C_METHOD_2_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5271428CFA7EAD9C_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5271428CFA7EAD9C_METHOD_2_E11AC65AA0DC2249_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5271428CFA7EAD9C_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_0B84468CE6657ED4(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_5271428CFA7EAD9C_METHOD_2_0B84468CE6657ED4_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5271428CFA7EAD9C_GET_FORCESKIP_OFFSET))(this);
	}
};
