#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/PropInteractMode.h"

class Class_0_16E4307DCC419505_382;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGraph; }
namespace RPG::GameCore { class LevelGraphConfig; }
namespace RPG::GameCore { class StartPropInteractMode; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_E983E0DD6F10A02E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x127E6510)
#define CLASS_2_E983E0DD6F10A02E_METHOD_2_01109DD29CB4D216_OFFSET UNITYSDK_OFFSET(0x127E6BB0)
#define CLASS_2_E983E0DD6F10A02E_METHOD_2_06A3D1CB6C457A1C_OFFSET UNITYSDK_OFFSET(0x127E61E0)
#define CLASS_2_E983E0DD6F10A02E_METHOD_2_3CAD92CFB876DBF6_OFFSET UNITYSDK_OFFSET(0x127E6570)
#define CLASS_2_E983E0DD6F10A02E_METHOD_2_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0x127E6C60)
#define CLASS_2_E983E0DD6F10A02E_METHOD_2_768380A2287B1B50_OFFSET UNITYSDK_OFFSET(0x127E6320)
#define CLASS_2_E983E0DD6F10A02E_METHOD_2_7C798DF2D7BB7252_OFFSET UNITYSDK_OFFSET(0x127E6B70)
#define CLASS_2_E983E0DD6F10A02E_METHOD_2_DAEB67F34AF80609_OFFSET UNITYSDK_OFFSET(0x127E69D0)
#define CLASS_2_E983E0DD6F10A02E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x127E66E0)
#define CLASS_2_E983E0DD6F10A02E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x127E6B20)
#define CLASS_2_E983E0DD6F10A02E_TICK_OFFSET UNITYSDK_OFFSET(0x127E6620)
#define CLASS_2_E983E0DD6F10A02E__CTOR_OFFSET UNITYSDK_OFFSET(0x127E61D0)

inline static constexpr unsigned int Class_2_E983E0DD6F10A02E_TypeDefinitionIndex = 54142;

class Class_2_E983E0DD6F10A02E : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::LevelGraph* Field_2_3; // 0x18
	::RPG::GameCore::GameEntity* Field_2_0; // 0x20
	::RPG::GameCore::TaskContext* Field_2_1; // 0x28
	::RPG::GameCore::StartPropInteractMode* Field_2_2; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StartPropInteractMode* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StartPropInteractMode*))((::PBYTE)hIl2Cpp + CLASS_2_E983E0DD6F10A02E__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_2_06A3D1CB6C457A1C(::RPG::GameCore::LevelGraphConfig* a1, ::RPG::GameCore::PropInteractMode a2, ::RPG::GameCore::TaskConfig* a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::LevelGraphConfig*, ::RPG::GameCore::PropInteractMode, ::RPG::GameCore::TaskConfig*))((::PBYTE)hIl2Cpp + CLASS_2_E983E0DD6F10A02E_METHOD_2_06A3D1CB6C457A1C_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_2_768380A2287B1B50(::Il2CppArray<::RPG::GameCore::TaskConfig*>* a1, ::RPG::GameCore::PropInteractMode a2, ::RPG::GameCore::TaskConfig* a3)
	{
		return ((::System::Void(*)(::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::RPG::GameCore::PropInteractMode, ::RPG::GameCore::TaskConfig*))((::PBYTE)hIl2Cpp + CLASS_2_E983E0DD6F10A02E_METHOD_2_768380A2287B1B50_OFFSET))(a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E983E0DD6F10A02E_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E983E0DD6F10A02E_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E983E0DD6F10A02E_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E983E0DD6F10A02E_ONTASKRESET_OFFSET))(this);
	}

	::RPG::GameCore::TaskConfig* Method_2_7C798DF2D7BB7252()
	{
		return ((::RPG::GameCore::TaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E983E0DD6F10A02E_METHOD_2_7C798DF2D7BB7252_OFFSET))(this);
	}

	::System::Void Method_2_DAEB67F34AF80609()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E983E0DD6F10A02E_METHOD_2_DAEB67F34AF80609_OFFSET))(this);
	}

	::System::Void Method_2_01109DD29CB4D216()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E983E0DD6F10A02E_METHOD_2_01109DD29CB4D216_OFFSET))(this);
	}

	::System::Void Method_2_3CAD92CFB876DBF6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E983E0DD6F10A02E_METHOD_2_3CAD92CFB876DBF6_OFFSET))(this);
	}

	::System::Void Method_2_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_E983E0DD6F10A02E_METHOD_2_5B0531D5B96D6B96_OFFSET))(this, a1);
	}
};
