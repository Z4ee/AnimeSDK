#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_ED823159C0D529ED_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x17DBB960)
#define CLASS_3_ED823159C0D529ED_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x17DBB9F0)
#define CLASS_3_ED823159C0D529ED_INVOKE_OFFSET UNITYSDK_OFFSET(0x17DBB5D0)
#define CLASS_3_ED823159C0D529ED__CTOR_OFFSET UNITYSDK_OFFSET(0x17DBB5B0)

inline static constexpr unsigned int Class_3_ED823159C0D529ED_TypeDefinitionIndex = 34024;

class Class_3_ED823159C0D529ED : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_ED823159C0D529ED__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::System::UInt32 a1, ::System::Boolean a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_ED823159C0D529ED_INVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::IAsyncResult* BeginInvoke(::System::UInt32 a1, ::System::Boolean a2, ::System::Int32 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_ED823159C0D529ED_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_ED823159C0D529ED_ENDINVOKE_OFFSET))(this, a1);
	}
};
