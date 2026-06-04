#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/PropInteractMode.h"

class Class_0_16E4307DCC419505_401;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGraph; }
namespace RPG::GameCore { class LevelGraphConfig; }
namespace RPG::GameCore { class StartPropInteractMode; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_E983E0DD6F10A02E_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAD5ED10)
#define CLASS_2_E983E0DD6F10A02E_METHOD_2_06A3D1CB6C457A1C_OFFSET UNITYSDK_OFFSET(0xAD5E9C0)
#define CLASS_2_E983E0DD6F10A02E_METHOD_2_0EF345F8F1CF4181_OFFSET UNITYSDK_OFFSET(0xAD5F480)
#define CLASS_2_E983E0DD6F10A02E_METHOD_2_3CAD92CFB876DBF6_OFFSET UNITYSDK_OFFSET(0xAD5F3C0)
#define CLASS_2_E983E0DD6F10A02E_METHOD_2_7C798DF2D7BB7252_OFFSET UNITYSDK_OFFSET(0xAD5F380)
#define CLASS_2_E983E0DD6F10A02E_METHOD_2_8748B4D2F048DE7F_OFFSET UNITYSDK_OFFSET(0xAD5EAF0)
#define CLASS_2_E983E0DD6F10A02E_METHOD_2_8CA05BCD86E125DF_OFFSET UNITYSDK_OFFSET(0xAD5ED70)
#define CLASS_2_E983E0DD6F10A02E_METHOD_2_9AB55F553C4AC6E8_OFFSET UNITYSDK_OFFSET(0xAD5F1E0)
#define CLASS_2_E983E0DD6F10A02E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAD5EEF0)
#define CLASS_2_E983E0DD6F10A02E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xAD5F330)
#define CLASS_2_E983E0DD6F10A02E_TICK_OFFSET UNITYSDK_OFFSET(0xAD5EE30)
#define CLASS_2_E983E0DD6F10A02E__CTOR_OFFSET UNITYSDK_OFFSET(0xAD5E9B0)

inline static constexpr unsigned int Class_2_E983E0DD6F10A02E_TypeDefinitionIndex = 54868;

class Class_2_E983E0DD6F10A02E : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::GameEntity* Field_2_1; // 0x20
	::RPG::GameCore::LevelGraph* Field_2_2; // 0x28
	::RPG::GameCore::StartPropInteractMode* Field_2_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StartPropInteractMode* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StartPropInteractMode*))((::PBYTE)hIl2Cpp + CLASS_2_E983E0DD6F10A02E__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_2_06A3D1CB6C457A1C(::RPG::GameCore::LevelGraphConfig* a1, ::RPG::GameCore::PropInteractMode a2, ::RPG::GameCore::TaskConfig* a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::LevelGraphConfig*, ::RPG::GameCore::PropInteractMode, ::RPG::GameCore::TaskConfig*))((::PBYTE)hIl2Cpp + CLASS_2_E983E0DD6F10A02E_METHOD_2_06A3D1CB6C457A1C_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_2_8748B4D2F048DE7F(::Il2CppArray<::RPG::GameCore::TaskConfig*>* a1, ::RPG::GameCore::PropInteractMode a2, ::RPG::GameCore::TaskConfig* a3)
	{
		return ((::System::Void(*)(::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::RPG::GameCore::PropInteractMode, ::RPG::GameCore::TaskConfig*))((::PBYTE)hIl2Cpp + CLASS_2_E983E0DD6F10A02E_METHOD_2_8748B4D2F048DE7F_OFFSET))(a1, a2, a3);
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

	::System::Void Method_2_9AB55F553C4AC6E8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E983E0DD6F10A02E_METHOD_2_9AB55F553C4AC6E8_OFFSET))(this);
	}

	::System::Void Method_2_3CAD92CFB876DBF6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E983E0DD6F10A02E_METHOD_2_3CAD92CFB876DBF6_OFFSET))(this);
	}

	::System::Void Method_2_8CA05BCD86E125DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E983E0DD6F10A02E_METHOD_2_8CA05BCD86E125DF_OFFSET))(this);
	}

	::System::Void Method_2_0EF345F8F1CF4181(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_E983E0DD6F10A02E_METHOD_2_0EF345F8F1CF4181_OFFSET))(this, a1);
	}
};
