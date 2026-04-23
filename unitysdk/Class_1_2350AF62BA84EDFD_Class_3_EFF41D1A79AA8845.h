#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_2350AF62BA84EDFD;
class Class_1_2670985A37556FEA;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2350AF62BA84EDFD_CLASS_3_EFF41D1A79AA8845_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x10AF7E10)
#define CLASS_1_2350AF62BA84EDFD_CLASS_3_EFF41D1A79AA8845_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x10AF7E50)
#define CLASS_1_2350AF62BA84EDFD_CLASS_3_EFF41D1A79AA8845_INVOKE_OFFSET UNITYSDK_OFFSET(0x10AF7850)
#define CLASS_1_2350AF62BA84EDFD_CLASS_3_EFF41D1A79AA8845__CTOR_OFFSET UNITYSDK_OFFSET(0x10AF7830)

inline static constexpr unsigned int Class_1_2350AF62BA84EDFD_Class_3_EFF41D1A79AA8845_TypeDefinitionIndex = 60131;

class Class_1_2350AF62BA84EDFD_Class_3_EFF41D1A79AA8845 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_2350AF62BA84EDFD_CLASS_3_EFF41D1A79AA8845__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* Invoke(::System::Collections::Generic::List_1<::Class_1_2670985A37556FEA*>* a1, ::Class_1_2350AF62BA84EDFD* a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_2670985A37556FEA*>*, ::Class_1_2350AF62BA84EDFD*))((::PBYTE)hIl2Cpp + CLASS_1_2350AF62BA84EDFD_CLASS_3_EFF41D1A79AA8845_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::System::Collections::Generic::List_1<::Class_1_2670985A37556FEA*>* a1, ::Class_1_2350AF62BA84EDFD* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_2670985A37556FEA*>*, ::Class_1_2350AF62BA84EDFD*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2350AF62BA84EDFD_CLASS_3_EFF41D1A79AA8845_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::String* EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_2350AF62BA84EDFD_CLASS_3_EFF41D1A79AA8845_ENDINVOKE_OFFSET))(this, a1);
	}
};
