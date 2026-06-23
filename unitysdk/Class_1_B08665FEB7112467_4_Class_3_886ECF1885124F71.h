#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_5CAB9AA46D466E98;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_1_B08665FEB7112467_4_CLASS_3_886ECF1885124F71_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14F3D920)
#define CLASS_1_B08665FEB7112467_4_CLASS_3_886ECF1885124F71_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14F3D960)
#define CLASS_1_B08665FEB7112467_4_CLASS_3_886ECF1885124F71_INVOKE_OFFSET UNITYSDK_OFFSET(0x14F3D3A0)
#define CLASS_1_B08665FEB7112467_4_CLASS_3_886ECF1885124F71__CTOR_OFFSET UNITYSDK_OFFSET(0x14F3D380)

inline static constexpr unsigned int Class_1_B08665FEB7112467_4_Class_3_886ECF1885124F71_TypeDefinitionIndex = 65213;

class Class_1_B08665FEB7112467_4_Class_3_886ECF1885124F71 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_B08665FEB7112467_4_CLASS_3_886ECF1885124F71__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Class_1_5CAB9AA46D466E98* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5CAB9AA46D466E98*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B08665FEB7112467_4_CLASS_3_886ECF1885124F71_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::Class_1_5CAB9AA46D466E98* a1, ::System::String* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_5CAB9AA46D466E98*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B08665FEB7112467_4_CLASS_3_886ECF1885124F71_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_B08665FEB7112467_4_CLASS_3_886ECF1885124F71_ENDINVOKE_OFFSET))(this, a1);
	}
};
