#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_118_Struct_2_0A33320B2F65B0F7.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_9EC03A9F7918F95D_CLASS_3_8A15F387AB2587C6_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18EFF580)
#define CLASS_1_9EC03A9F7918F95D_CLASS_3_8A15F387AB2587C6_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18EFF5F0)
#define CLASS_1_9EC03A9F7918F95D_CLASS_3_8A15F387AB2587C6_INVOKE_OFFSET UNITYSDK_OFFSET(0x18EFF460)
#define CLASS_1_9EC03A9F7918F95D_CLASS_3_8A15F387AB2587C6__CTOR_OFFSET UNITYSDK_OFFSET(0x18EFF510)

inline static constexpr unsigned int Class_1_9EC03A9F7918F95D_Class_3_8A15F387AB2587C6_TypeDefinitionIndex = 49443;

class Class_1_9EC03A9F7918F95D_Class_3_8A15F387AB2587C6 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_9EC03A9F7918F95D_CLASS_3_8A15F387AB2587C6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Class_1_43BD383C98B4C0C5_118_Struct_2_0A33320B2F65B0F7 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_118_Struct_2_0A33320B2F65B0F7))((::PBYTE)hIl2Cpp + CLASS_1_9EC03A9F7918F95D_CLASS_3_8A15F387AB2587C6_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::Class_1_43BD383C98B4C0C5_118_Struct_2_0A33320B2F65B0F7 a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_118_Struct_2_0A33320B2F65B0F7, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9EC03A9F7918F95D_CLASS_3_8A15F387AB2587C6_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_9EC03A9F7918F95D_CLASS_3_8A15F387AB2587C6_ENDINVOKE_OFFSET))(this, a1);
	}
};
