#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_8CB2F7428CE7265C_CLASS_3_C6F994AA46CF31A2_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x10F50C10)
#define CLASS_1_8CB2F7428CE7265C_CLASS_3_C6F994AA46CF31A2_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x10F50CA0)
#define CLASS_1_8CB2F7428CE7265C_CLASS_3_C6F994AA46CF31A2_INVOKE_OFFSET UNITYSDK_OFFSET(0x10F508F0)
#define CLASS_1_8CB2F7428CE7265C_CLASS_3_C6F994AA46CF31A2__CTOR_OFFSET UNITYSDK_OFFSET(0x10F508D0)

inline static constexpr unsigned int Class_1_8CB2F7428CE7265C_Class_3_C6F994AA46CF31A2_TypeDefinitionIndex = 62556;

class Class_1_8CB2F7428CE7265C_Class_3_C6F994AA46CF31A2 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_8CB2F7428CE7265C_CLASS_3_C6F994AA46CF31A2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::UnityEngine::RaycastHit& a1, ::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RaycastHit&, ::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3))((::PBYTE)hIl2Cpp + CLASS_1_8CB2F7428CE7265C_CLASS_3_C6F994AA46CF31A2_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::UnityEngine::RaycastHit& a1, ::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3 a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::RaycastHit&, ::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_8CB2F7428CE7265C_CLASS_3_C6F994AA46CF31A2_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void EndInvoke(::UnityEngine::RaycastHit& a1, ::System::IAsyncResult* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RaycastHit&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_8CB2F7428CE7265C_CLASS_3_C6F994AA46CF31A2_ENDINVOKE_OFFSET))(this, a1, a2);
	}
};
