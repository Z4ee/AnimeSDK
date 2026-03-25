#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_DD584E66F5D339D3;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_D3C9853B824E1407_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x16602E80)
#define CLASS_3_D3C9853B824E1407_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x16602EC0)
#define CLASS_3_D3C9853B824E1407_INVOKE_OFFSET UNITYSDK_OFFSET(0x16602840)
#define CLASS_3_D3C9853B824E1407__CTOR_OFFSET UNITYSDK_OFFSET(0x16602820)

inline static constexpr unsigned int Class_3_D3C9853B824E1407_TypeDefinitionIndex = 28385;

class Class_3_D3C9853B824E1407 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_D3C9853B824E1407__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Class_1_DD584E66F5D339D3* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DD584E66F5D339D3*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_3_D3C9853B824E1407_INVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::IAsyncResult* BeginInvoke(::Class_1_DD584E66F5D339D3* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_DD584E66F5D339D3*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_D3C9853B824E1407_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_D3C9853B824E1407_ENDINVOKE_OFFSET))(this, a1);
	}
};
