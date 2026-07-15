#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_3_3B91E9B720B814BB_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x155A45E0)
#define CLASS_3_3B91E9B720B814BB_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x155A4660)
#define CLASS_3_3B91E9B720B814BB_INVOKE_OFFSET UNITYSDK_OFFSET(0x155A45C0)
#define CLASS_3_3B91E9B720B814BB__CTOR_OFFSET UNITYSDK_OFFSET(0x155A4540)

inline static constexpr unsigned int Class_3_3B91E9B720B814BB_TypeDefinitionIndex = 56893;

class Class_3_3B91E9B720B814BB : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_3B91E9B720B814BB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Invoke(::System::String*& a1, ::RPG::Client::ByteHash16& a2, ::System::Int64& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::RPG::Client::ByteHash16&, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_3_3B91E9B720B814BB_INVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::IAsyncResult* BeginInvoke(::System::String*& a1, ::RPG::Client::ByteHash16& a2, ::System::Int64& a3, ::System::AsyncCallback* a4, ::System::Object* a5)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*&, ::RPG::Client::ByteHash16&, ::System::Int64&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_3B91E9B720B814BB_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean EndInvoke(::System::String*& a1, ::RPG::Client::ByteHash16& a2, ::System::Int64& a3, ::System::IAsyncResult* a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::RPG::Client::ByteHash16&, ::System::Int64&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_3B91E9B720B814BB_ENDINVOKE_OFFSET))(this, a1, a2, a3, a4);
	}
};
