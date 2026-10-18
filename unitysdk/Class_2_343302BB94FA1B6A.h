#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGraphComponent; }
namespace RPG::GameCore { class ShowMenu; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_343302BB94FA1B6A_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2D6700)
#define CLASS_2_343302BB94FA1B6A_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xB2D7CA0)
#define CLASS_2_343302BB94FA1B6A_METHOD_2_65443EAFE85AA139_OFFSET UNITYSDK_OFFSET(0xB2D7900)
#define CLASS_2_343302BB94FA1B6A_METHOD_2_8CA56FF24F45C9F3_OFFSET UNITYSDK_OFFSET(0xB2D71B0)
#define CLASS_2_343302BB94FA1B6A_METHOD_2_930073A6194C4594_OFFSET UNITYSDK_OFFSET(0xB2D7630)
#define CLASS_2_343302BB94FA1B6A_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xB2D7C60)
#define CLASS_2_343302BB94FA1B6A_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB2D6DA0)
#define CLASS_2_343302BB94FA1B6A_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0xB2D7C10)
#define CLASS_2_343302BB94FA1B6A_METHOD_2_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0xB2D6DE0)
#define CLASS_2_343302BB94FA1B6A_ONSKIP_OFFSET UNITYSDK_OFFSET(0xB2D7130)
#define CLASS_2_343302BB94FA1B6A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB2D67C0)
#define CLASS_2_343302BB94FA1B6A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB2D7010)
#define CLASS_2_343302BB94FA1B6A_TICK_OFFSET UNITYSDK_OFFSET(0xB2D70D0)
#define CLASS_2_343302BB94FA1B6A__CTOR_OFFSET UNITYSDK_OFFSET(0xB2D66F0)

inline static constexpr unsigned int Class_2_343302BB94FA1B6A_TypeDefinitionIndex = 58672;

class Class_2_343302BB94FA1B6A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::ShowMenu* OFKGLJOAMLD; // 0x20
	::RPG::GameCore::LevelGraphComponent* JBCGBIOECCL; // 0x28
	::System::UInt32 EGOCAOIFKBB; // 0x30
	::System::Int32 JMBKEMHBFLE; // 0x34
	::System::Boolean FMICDIJAHGE; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowMenu* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowMenu*))((::PBYTE)hIl2Cpp + CLASS_2_343302BB94FA1B6A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_343302BB94FA1B6A_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_343302BB94FA1B6A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_343302BB94FA1B6A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_343302BB94FA1B6A_TICK_OFFSET))(this, a1);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_343302BB94FA1B6A_ONSKIP_OFFSET))(this);
	}

	::System::Void Method_2_8CA56FF24F45C9F3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_343302BB94FA1B6A_METHOD_2_8CA56FF24F45C9F3_OFFSET))(this, a1);
	}

	::System::Void Method_2_930073A6194C4594()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_343302BB94FA1B6A_METHOD_2_930073A6194C4594_OFFSET))(this);
	}

	::System::Void Method_2_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_343302BB94FA1B6A_METHOD_2_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_343302BB94FA1B6A_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_343302BB94FA1B6A_METHOD_2_E11AC65AA0DC2249_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_343302BB94FA1B6A_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_65443EAFE85AA139(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_343302BB94FA1B6A_METHOD_2_65443EAFE85AA139_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_343302BB94FA1B6A_GET_FORCESKIP_OFFSET))(this);
	}
};
