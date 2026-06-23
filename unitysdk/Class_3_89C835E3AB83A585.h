#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_7F4F3EA24347D9DD.h"
#include "unitysdk/Struct_2_CAB3EC81D84469DF.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_2_785FDC7D0DA58280;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_89C835E3AB83A585_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B394670)
#define CLASS_3_89C835E3AB83A585_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B394740)
#define CLASS_3_89C835E3AB83A585_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B393E30)
#define CLASS_3_89C835E3AB83A585__CTOR_OFFSET UNITYSDK_OFFSET(0x1B393E10)

inline static constexpr unsigned int Class_3_89C835E3AB83A585_TypeDefinitionIndex = 28956;

class Class_3_89C835E3AB83A585 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_89C835E3AB83A585__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Invoke(::Class_2_785FDC7D0DA58280* a1, ::Struct_2_7F4F3EA24347D9DD a2, ::Struct_2_CAB3EC81D84469DF a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_785FDC7D0DA58280*, ::Struct_2_7F4F3EA24347D9DD, ::Struct_2_CAB3EC81D84469DF, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_89C835E3AB83A585_INVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::IAsyncResult* BeginInvoke(::Class_2_785FDC7D0DA58280* a1, ::Struct_2_7F4F3EA24347D9DD a2, ::Struct_2_CAB3EC81D84469DF a3, ::System::Boolean a4, ::System::AsyncCallback* a5, ::System::Object* a6)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_2_785FDC7D0DA58280*, ::Struct_2_7F4F3EA24347D9DD, ::Struct_2_CAB3EC81D84469DF, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_89C835E3AB83A585_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_89C835E3AB83A585_ENDINVOKE_OFFSET))(this, a1);
	}
};
