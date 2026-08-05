#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BCD429A58B158433.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3E06C0E106D554CB_CLASS_3_87FD32FC84AF03AF_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BB705B0)
#define CLASS_1_3E06C0E106D554CB_CLASS_3_87FD32FC84AF03AF_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BB70650)
#define CLASS_1_3E06C0E106D554CB_CLASS_3_87FD32FC84AF03AF_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BB700C0)
#define CLASS_1_3E06C0E106D554CB_CLASS_3_87FD32FC84AF03AF__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB700A0)

inline static constexpr unsigned int Class_1_3E06C0E106D554CB_Class_3_87FD32FC84AF03AF_TypeDefinitionIndex = 44280;

class Class_1_3E06C0E106D554CB_Class_3_87FD32FC84AF03AF : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_3E06C0E106D554CB_CLASS_3_87FD32FC84AF03AF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::Struct_2_BCD429A58B158433 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*, ::Struct_2_BCD429A58B158433))((::PBYTE)hIl2Cpp + CLASS_1_3E06C0E106D554CB_CLASS_3_87FD32FC84AF03AF_INVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::Struct_2_BCD429A58B158433 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*, ::Struct_2_BCD429A58B158433, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3E06C0E106D554CB_CLASS_3_87FD32FC84AF03AF_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_3E06C0E106D554CB_CLASS_3_87FD32FC84AF03AF_ENDINVOKE_OFFSET))(this, a1);
	}
};
