#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_1A58F01F41846A1D_CLASS_3_2E0B75ED584BA963_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x13CE1FA0)
#define CLASS_3_1A58F01F41846A1D_CLASS_3_2E0B75ED584BA963_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x13CE2050)
#define CLASS_3_1A58F01F41846A1D_CLASS_3_2E0B75ED584BA963_INVOKE_OFFSET UNITYSDK_OFFSET(0x13CE1C60)
#define CLASS_3_1A58F01F41846A1D_CLASS_3_2E0B75ED584BA963__CTOR_OFFSET UNITYSDK_OFFSET(0x13CE1C40)

inline static constexpr unsigned int Class_3_1A58F01F41846A1D_Class_3_2E0B75ED584BA963_TypeDefinitionIndex = 48142;

class Class_3_1A58F01F41846A1D_Class_3_2E0B75ED584BA963 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_1A58F01F41846A1D_CLASS_3_2E0B75ED584BA963__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::UnityEngine::RaycastHit& a1, ::System::Single& a2, ::System::Single& a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RaycastHit&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_3_1A58F01F41846A1D_CLASS_3_2E0B75ED584BA963_INVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::IAsyncResult* BeginInvoke(::UnityEngine::RaycastHit& a1, ::System::Single& a2, ::System::Single& a3, ::System::AsyncCallback* a4, ::System::Object* a5)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::RaycastHit&, ::System::Single&, ::System::Single&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_1A58F01F41846A1D_CLASS_3_2E0B75ED584BA963_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void EndInvoke(::UnityEngine::RaycastHit& a1, ::System::Single& a2, ::System::Single& a3, ::System::IAsyncResult* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RaycastHit&, ::System::Single&, ::System::Single&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_1A58F01F41846A1D_CLASS_3_2E0B75ED584BA963_ENDINVOKE_OFFSET))(this, a1, a2, a3, a4);
	}
};
