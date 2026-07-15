#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_43BD383C98B4C0C5_17;
class Class_1_D8BECDCE48063EC7;
namespace RPG::GameCore { class DiceCombatAIEffectEvaluatorConfig; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_D3DAB503F7B52B97_CLASS_3_8F5B7FD3EC83C653_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x17B35B70)
#define CLASS_1_D3DAB503F7B52B97_CLASS_3_8F5B7FD3EC83C653_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x17B35BB0)
#define CLASS_1_D3DAB503F7B52B97_CLASS_3_8F5B7FD3EC83C653_INVOKE_OFFSET UNITYSDK_OFFSET(0x17B350E0)
#define CLASS_1_D3DAB503F7B52B97_CLASS_3_8F5B7FD3EC83C653__CTOR_OFFSET UNITYSDK_OFFSET(0x17B35A80)

inline static constexpr unsigned int Class_1_D3DAB503F7B52B97_Class_3_8F5B7FD3EC83C653_TypeDefinitionIndex = 34676;

class Class_1_D3DAB503F7B52B97_Class_3_8F5B7FD3EC83C653 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_D3DAB503F7B52B97_CLASS_3_8F5B7FD3EC83C653__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_43BD383C98B4C0C5_17* Invoke(::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig* a1, ::Class_1_D8BECDCE48063EC7* a2)
	{
		return ((::Class_1_43BD383C98B4C0C5_17*(*)(::PVOID, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig*, ::Class_1_D8BECDCE48063EC7*))((::PBYTE)hIl2Cpp + CLASS_1_D3DAB503F7B52B97_CLASS_3_8F5B7FD3EC83C653_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig* a1, ::Class_1_D8BECDCE48063EC7* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig*, ::Class_1_D8BECDCE48063EC7*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D3DAB503F7B52B97_CLASS_3_8F5B7FD3EC83C653_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_1_43BD383C98B4C0C5_17* EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::Class_1_43BD383C98B4C0C5_17*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_D3DAB503F7B52B97_CLASS_3_8F5B7FD3EC83C653_ENDINVOKE_OFFSET))(this, a1);
	}
};
