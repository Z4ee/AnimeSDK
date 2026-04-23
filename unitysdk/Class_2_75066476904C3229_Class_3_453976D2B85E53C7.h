#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_F31A7EC67A3AEEF7.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_2_75066476904C3229_CLASS_3_453976D2B85E53C7_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x12A4A890)
#define CLASS_2_75066476904C3229_CLASS_3_453976D2B85E53C7_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x12A4A960)
#define CLASS_2_75066476904C3229_CLASS_3_453976D2B85E53C7_INVOKE_OFFSET UNITYSDK_OFFSET(0x12A37DC0)
#define CLASS_2_75066476904C3229_CLASS_3_453976D2B85E53C7__CTOR_OFFSET UNITYSDK_OFFSET(0x12A4A870)

inline static constexpr unsigned int Class_2_75066476904C3229_Class_3_453976D2B85E53C7_TypeDefinitionIndex = 70670;

class Class_2_75066476904C3229_Class_3_453976D2B85E53C7 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_2_75066476904C3229_CLASS_3_453976D2B85E53C7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Struct_2_F31A7EC67A3AEEF7& a1, ::UnityEngine::Vector3& a2, ::System::Boolean& a3, ::System::Boolean& a4)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_F31A7EC67A3AEEF7&, ::UnityEngine::Vector3&, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_2_75066476904C3229_CLASS_3_453976D2B85E53C7_INVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::IAsyncResult* BeginInvoke(::Struct_2_F31A7EC67A3AEEF7& a1, ::UnityEngine::Vector3& a2, ::System::Boolean& a3, ::System::Boolean& a4, ::System::AsyncCallback* a5, ::System::Object* a6)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Struct_2_F31A7EC67A3AEEF7&, ::UnityEngine::Vector3&, ::System::Boolean&, ::System::Boolean&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_75066476904C3229_CLASS_3_453976D2B85E53C7_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void EndInvoke(::Struct_2_F31A7EC67A3AEEF7& a1, ::UnityEngine::Vector3& a2, ::System::Boolean& a3, ::System::Boolean& a4, ::System::IAsyncResult* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_F31A7EC67A3AEEF7&, ::UnityEngine::Vector3&, ::System::Boolean&, ::System::Boolean&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_2_75066476904C3229_CLASS_3_453976D2B85E53C7_ENDINVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
