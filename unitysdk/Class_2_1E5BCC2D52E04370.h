#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/Struct_2_D3027B1CDFF61281.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitHeliobusChallengeExitNotify; }
namespace System { class Object; }

#define CLASS_2_1E5BCC2D52E04370_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB7A2650)
#define CLASS_2_1E5BCC2D52E04370_METHOD_2_87E0654B98D0D63C_OFFSET UNITYSDK_OFFSET(0xB7A2810)
#define CLASS_2_1E5BCC2D52E04370_METHOD_2_E94EA76DD62C72A9_OFFSET UNITYSDK_OFFSET(0xB7A28B0)
#define CLASS_2_1E5BCC2D52E04370_METHOD_2_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0xB7A2B70)
#define CLASS_2_1E5BCC2D52E04370_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB7A26F0)
#define CLASS_2_1E5BCC2D52E04370_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB7A2A50)
#define CLASS_2_1E5BCC2D52E04370_TICK_OFFSET UNITYSDK_OFFSET(0xB7A2AA0)
#define CLASS_2_1E5BCC2D52E04370__CTOR_OFFSET UNITYSDK_OFFSET(0xB7A2520)

inline static constexpr unsigned int Class_2_1E5BCC2D52E04370_TypeDefinitionIndex = 54305;

class Class_2_1E5BCC2D52E04370 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WaitHeliobusChallengeExitNotify* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::Struct_2_D3027B1CDFF61281 Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitHeliobusChallengeExitNotify* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitHeliobusChallengeExitNotify*))((::PBYTE)hIl2Cpp + CLASS_2_1E5BCC2D52E04370__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1E5BCC2D52E04370_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1E5BCC2D52E04370_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1E5BCC2D52E04370_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1E5BCC2D52E04370_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_87E0654B98D0D63C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1E5BCC2D52E04370_METHOD_2_87E0654B98D0D63C_OFFSET))(this);
	}

	::System::Void Method_2_E94EA76DD62C72A9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_1E5BCC2D52E04370_METHOD_2_E94EA76DD62C72A9_OFFSET))(this, a1);
	}

	::System::Void Method_2_F0BD65B017F2AC0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1E5BCC2D52E04370_METHOD_2_F0BD65B017F2AC0B_OFFSET))(this);
	}
};
