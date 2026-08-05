#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0FE4ABC043BDF8EF_Struct_2_0839504A496058D2.h"
#include "unitysdk/Foundation/FTuple_1.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_3_0FE4ABC043BDF8EF;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_0FE4ABC043BDF8EF_CLASS_3_A66AC8B2EA4BD941_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1252DF10)
#define CLASS_3_0FE4ABC043BDF8EF_CLASS_3_A66AC8B2EA4BD941_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1252DFA0)
#define CLASS_3_0FE4ABC043BDF8EF_CLASS_3_A66AC8B2EA4BD941_INVOKE_OFFSET UNITYSDK_OFFSET(0x1252DAE0)
#define CLASS_3_0FE4ABC043BDF8EF_CLASS_3_A66AC8B2EA4BD941__CTOR_OFFSET UNITYSDK_OFFSET(0x1252DAC0)

inline static constexpr unsigned int Class_3_0FE4ABC043BDF8EF_Class_3_A66AC8B2EA4BD941_TypeDefinitionIndex = 77150;

class Class_3_0FE4ABC043BDF8EF_Class_3_A66AC8B2EA4BD941 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_0FE4ABC043BDF8EF_CLASS_3_A66AC8B2EA4BD941__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Class_3_0FE4ABC043BDF8EF_Struct_2_0839504A496058D2 a1, ::Foundation::FTuple_1<::Class_3_0FE4ABC043BDF8EF*>& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_0FE4ABC043BDF8EF_Struct_2_0839504A496058D2, ::Foundation::FTuple_1<::Class_3_0FE4ABC043BDF8EF*>&))((::PBYTE)hIl2Cpp + CLASS_3_0FE4ABC043BDF8EF_CLASS_3_A66AC8B2EA4BD941_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::Class_3_0FE4ABC043BDF8EF_Struct_2_0839504A496058D2 a1, ::Foundation::FTuple_1<::Class_3_0FE4ABC043BDF8EF*>& a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_3_0FE4ABC043BDF8EF_Struct_2_0839504A496058D2, ::Foundation::FTuple_1<::Class_3_0FE4ABC043BDF8EF*>&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_0FE4ABC043BDF8EF_CLASS_3_A66AC8B2EA4BD941_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void EndInvoke(::Foundation::FTuple_1<::Class_3_0FE4ABC043BDF8EF*>& a1, ::System::IAsyncResult* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::FTuple_1<::Class_3_0FE4ABC043BDF8EF*>&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_0FE4ABC043BDF8EF_CLASS_3_A66AC8B2EA4BD941_ENDINVOKE_OFFSET))(this, a1, a2);
	}
};
