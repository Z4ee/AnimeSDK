#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0106C133B17575D7.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define STRUCT_2_0106C133B17575D7_CLASS_3_E51BD9B0169CD8A4_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x196415F0)
#define STRUCT_2_0106C133B17575D7_CLASS_3_E51BD9B0169CD8A4_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19641660)
#define STRUCT_2_0106C133B17575D7_CLASS_3_E51BD9B0169CD8A4_INVOKE_OFFSET UNITYSDK_OFFSET(0x19641300)
#define STRUCT_2_0106C133B17575D7_CLASS_3_E51BD9B0169CD8A4__CTOR_OFFSET UNITYSDK_OFFSET(0x196412E0)

inline static constexpr unsigned int Struct_2_0106C133B17575D7_Class_3_E51BD9B0169CD8A4_TypeDefinitionIndex = 46927;

class Struct_2_0106C133B17575D7_Class_3_E51BD9B0169CD8A4 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + STRUCT_2_0106C133B17575D7_CLASS_3_E51BD9B0169CD8A4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Struct_2_0106C133B17575D7 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_0106C133B17575D7))((::PBYTE)hIl2Cpp + STRUCT_2_0106C133B17575D7_CLASS_3_E51BD9B0169CD8A4_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::Struct_2_0106C133B17575D7 a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Struct_2_0106C133B17575D7, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_0106C133B17575D7_CLASS_3_E51BD9B0169CD8A4_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + STRUCT_2_0106C133B17575D7_CLASS_3_E51BD9B0169CD8A4_ENDINVOKE_OFFSET))(this, a1);
	}
};
