#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MonsterStrengthType.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_7339E2B0B6BCD798_CLASS_3_690B4E0207F7991E_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x154B2270)
#define CLASS_3_7339E2B0B6BCD798_CLASS_3_690B4E0207F7991E_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x154B2340)
#define CLASS_3_7339E2B0B6BCD798_CLASS_3_690B4E0207F7991E_INVOKE_OFFSET UNITYSDK_OFFSET(0x154B1ED0)
#define CLASS_3_7339E2B0B6BCD798_CLASS_3_690B4E0207F7991E__CTOR_OFFSET UNITYSDK_OFFSET(0x154B1EB0)

inline static constexpr unsigned int Class_3_7339E2B0B6BCD798_Class_3_690B4E0207F7991E_TypeDefinitionIndex = 80063;

class Class_3_7339E2B0B6BCD798_Class_3_690B4E0207F7991E : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_7339E2B0B6BCD798_CLASS_3_690B4E0207F7991E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::System::UInt32 a1, ::System::Int32 a2, ::MoleMole::Config::MonsterStrengthType a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::MoleMole::Config::MonsterStrengthType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_7339E2B0B6BCD798_CLASS_3_690B4E0207F7991E_INVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::IAsyncResult* BeginInvoke(::System::UInt32 a1, ::System::Int32 a2, ::MoleMole::Config::MonsterStrengthType a3, ::System::Boolean a4, ::System::AsyncCallback* a5, ::System::Object* a6)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::System::Int32, ::MoleMole::Config::MonsterStrengthType, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_7339E2B0B6BCD798_CLASS_3_690B4E0207F7991E_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_7339E2B0B6BCD798_CLASS_3_690B4E0207F7991E_ENDINVOKE_OFFSET))(this, a1);
	}
};
