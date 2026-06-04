#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_0597192E98B9E538;
class Class_1_D93F8AE271D8A728;
namespace RPG::GameCore { class TaskConfig; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_6A87717AA962C7BB_CLASS_3_B0F0CB0D0E33BD72_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x189D49B0)
#define CLASS_1_6A87717AA962C7BB_CLASS_3_B0F0CB0D0E33BD72_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x189D49F0)
#define CLASS_1_6A87717AA962C7BB_CLASS_3_B0F0CB0D0E33BD72_INVOKE_OFFSET UNITYSDK_OFFSET(0x189D3670)
#define CLASS_1_6A87717AA962C7BB_CLASS_3_B0F0CB0D0E33BD72__CTOR_OFFSET UNITYSDK_OFFSET(0x189D48C0)

inline static constexpr unsigned int Class_1_6A87717AA962C7BB_Class_3_B0F0CB0D0E33BD72_TypeDefinitionIndex = 34615;

class Class_1_6A87717AA962C7BB_Class_3_B0F0CB0D0E33BD72 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_6A87717AA962C7BB_CLASS_3_B0F0CB0D0E33BD72__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_0597192E98B9E538* Invoke(::RPG::GameCore::TaskConfig* a1, ::Class_1_D93F8AE271D8A728* a2)
	{
		return ((::Class_1_0597192E98B9E538*(*)(::PVOID, ::RPG::GameCore::TaskConfig*, ::Class_1_D93F8AE271D8A728*))((::PBYTE)hIl2Cpp + CLASS_1_6A87717AA962C7BB_CLASS_3_B0F0CB0D0E33BD72_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::RPG::GameCore::TaskConfig* a1, ::Class_1_D93F8AE271D8A728* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::TaskConfig*, ::Class_1_D93F8AE271D8A728*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6A87717AA962C7BB_CLASS_3_B0F0CB0D0E33BD72_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_1_0597192E98B9E538* EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::Class_1_0597192E98B9E538*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_6A87717AA962C7BB_CLASS_3_B0F0CB0D0E33BD72_ENDINVOKE_OFFSET))(this, a1);
	}
};
