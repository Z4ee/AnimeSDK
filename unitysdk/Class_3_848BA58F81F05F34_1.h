#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_848BA58F81F05F34_1_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x156B3520)
#define CLASS_3_848BA58F81F05F34_1_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x156B35B0)
#define CLASS_3_848BA58F81F05F34_1_INVOKE_OFFSET UNITYSDK_OFFSET(0x156B3210)
#define CLASS_3_848BA58F81F05F34_1__CTOR_OFFSET UNITYSDK_OFFSET(0x156895D0)

inline static constexpr unsigned int Class_3_848BA58F81F05F34_1_TypeDefinitionIndex = 81878;

class Class_3_848BA58F81F05F34_1 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_848BA58F81F05F34_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_848BA58F81F05F34_1_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::System::UInt32 a1, ::System::UInt32 a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_848BA58F81F05F34_1_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_848BA58F81F05F34_1_ENDINVOKE_OFFSET))(this, a1);
	}
};
