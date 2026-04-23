#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define SROPTIONSPROPERTYCHANGED_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8E527B0)
#define SROPTIONSPROPERTYCHANGED_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8E527F0)
#define SROPTIONSPROPERTYCHANGED_INVOKE_OFFSET UNITYSDK_OFFSET(0x8E52000)
#define SROPTIONSPROPERTYCHANGED__CTOR_OFFSET UNITYSDK_OFFSET(0x8E52790)

inline static constexpr unsigned int SROptionsPropertyChanged_TypeDefinitionIndex = 40927;

class SROptionsPropertyChanged : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SROPTIONSPROPERTYCHANGED__CTOR_OFFSET))(this, object, method);
	}

	::System::Void Invoke(::System::Object* sender, ::System::String* propertyName)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SROPTIONSPROPERTYCHANGED_INVOKE_OFFSET))(this, sender, propertyName);
	}

	::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::String* propertyName, ::System::AsyncCallback* callback, ::System::Object* object)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SROPTIONSPROPERTYCHANGED_BEGININVOKE_OFFSET))(this, sender, propertyName, callback, object);
	}

	::System::Void EndInvoke(::System::IAsyncResult* result)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SROPTIONSPROPERTYCHANGED_ENDINVOKE_OFFSET))(this, result);
	}
};
