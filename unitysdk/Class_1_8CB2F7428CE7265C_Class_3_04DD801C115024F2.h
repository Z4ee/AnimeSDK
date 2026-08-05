#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_8CB2F7428CE7265C_CLASS_3_04DD801C115024F2_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11B29B20)
#define CLASS_1_8CB2F7428CE7265C_CLASS_3_04DD801C115024F2_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x11B29B90)
#define CLASS_1_8CB2F7428CE7265C_CLASS_3_04DD801C115024F2_INVOKE_OFFSET UNITYSDK_OFFSET(0x11B29830)
#define CLASS_1_8CB2F7428CE7265C_CLASS_3_04DD801C115024F2__CTOR_OFFSET UNITYSDK_OFFSET(0x11B29810)

inline static constexpr unsigned int Class_1_8CB2F7428CE7265C_Class_3_04DD801C115024F2_TypeDefinitionIndex = 62555;

class Class_1_8CB2F7428CE7265C_Class_3_04DD801C115024F2 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_8CB2F7428CE7265C_CLASS_3_04DD801C115024F2__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3 Invoke(::UnityEngine::RaycastHit& a1)
	{
		return ((::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3(*)(::PVOID, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_1_8CB2F7428CE7265C_CLASS_3_04DD801C115024F2_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::UnityEngine::RaycastHit& a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::RaycastHit&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_8CB2F7428CE7265C_CLASS_3_04DD801C115024F2_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3 EndInvoke(::UnityEngine::RaycastHit& a1, ::System::IAsyncResult* a2)
	{
		return ((::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3(*)(::PVOID, ::UnityEngine::RaycastHit&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_8CB2F7428CE7265C_CLASS_3_04DD801C115024F2_ENDINVOKE_OFFSET))(this, a1, a2);
	}
};
