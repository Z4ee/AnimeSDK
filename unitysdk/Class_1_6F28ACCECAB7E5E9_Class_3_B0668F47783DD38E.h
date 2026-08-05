#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_6F28ACCECAB7E5E9;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_6F28ACCECAB7E5E9_CLASS_3_B0668F47783DD38E_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x150862A0)
#define CLASS_1_6F28ACCECAB7E5E9_CLASS_3_B0668F47783DD38E_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15086320)
#define CLASS_1_6F28ACCECAB7E5E9_CLASS_3_B0668F47783DD38E_INVOKE_OFFSET UNITYSDK_OFFSET(0x15085CE0)
#define CLASS_1_6F28ACCECAB7E5E9_CLASS_3_B0668F47783DD38E__CTOR_OFFSET UNITYSDK_OFFSET(0x15085CC0)

inline static constexpr unsigned int Class_1_6F28ACCECAB7E5E9_Class_3_B0668F47783DD38E_TypeDefinitionIndex = 80049;

class Class_1_6F28ACCECAB7E5E9_Class_3_B0668F47783DD38E : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_6F28ACCECAB7E5E9_CLASS_3_B0668F47783DD38E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Class_1_6F28ACCECAB7E5E9* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6F28ACCECAB7E5E9*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6F28ACCECAB7E5E9_CLASS_3_B0668F47783DD38E_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::Class_1_6F28ACCECAB7E5E9* a1, ::System::Single a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_6F28ACCECAB7E5E9*, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6F28ACCECAB7E5E9_CLASS_3_B0668F47783DD38E_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_6F28ACCECAB7E5E9_CLASS_3_B0668F47783DD38E_ENDINVOKE_OFFSET))(this, a1);
	}
};
