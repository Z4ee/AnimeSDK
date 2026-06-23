#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_3.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"

class Class_1_43BD383C98B4C0C5_25;
class Class_1_C376DB68B1C74261;
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define CLASS_3_9F37BDF31FE12888_METHOD_3_1C1D8F032CA6010E_OFFSET UNITYSDK_OFFSET(0x167E6C30)
#define CLASS_3_9F37BDF31FE12888_METHOD_3_4E98D430D174B628_OFFSET UNITYSDK_OFFSET(0x167E6530)
#define CLASS_3_9F37BDF31FE12888_METHOD_3_6F73A40265D5B980_OFFSET UNITYSDK_OFFSET(0x167E66B0)
#define CLASS_3_9F37BDF31FE12888_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x167E6BA0)
#define CLASS_3_9F37BDF31FE12888_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x167E6B00)
#define CLASS_3_9F37BDF31FE12888_METHOD_3_DB67EEFB041425EC_OFFSET UNITYSDK_OFFSET(0x167E69D0)
#define CLASS_3_9F37BDF31FE12888_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x167E6520)
#define CLASS_3_9F37BDF31FE12888__CTOR_OFFSET UNITYSDK_OFFSET(0x167E6AA0)

inline static constexpr unsigned int Class_3_9F37BDF31FE12888_TypeDefinitionIndex = 86808;

class Class_3_9F37BDF31FE12888 : public ::Class_2_A48F3719AA1CF200_3
{
public:
	::UnityEngine::Animation* Field_3_2; // 0x28
	::System::String* Field_3_0; // 0x30
	::System::String* Field_3_1; // 0x38
	::Foundation::Coroutine::CoroutineHandle Field_3_3; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9F37BDF31FE12888__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9F37BDF31FE12888_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_3_4E98D430D174B628(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_25* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_C376DB68B1C74261* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_25*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_C376DB68B1C74261*))((::PBYTE)hIl2Cpp + CLASS_3_9F37BDF31FE12888_METHOD_3_4E98D430D174B628_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_6F73A40265D5B980()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9F37BDF31FE12888_METHOD_3_6F73A40265D5B980_OFFSET))(this);
	}

	::System::Void Method_3_DB67EEFB041425EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9F37BDF31FE12888_METHOD_3_DB67EEFB041425EC_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9F37BDF31FE12888_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9F37BDF31FE12888_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_3_1C1D8F032CA6010E(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_25* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_C376DB68B1C74261* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_25*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_C376DB68B1C74261*))((::PBYTE)hIl2Cpp + CLASS_3_9F37BDF31FE12888_METHOD_3_1C1D8F032CA6010E_OFFSET))(this, a1, a2, a3, a4);
	}
};
