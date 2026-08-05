#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_1_B08665FEB7112467_2_CLASS_3_90EEADDEAE6DE849_1_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x148D1990)
#define CLASS_1_B08665FEB7112467_2_CLASS_3_90EEADDEAE6DE849_1_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x148D1A00)
#define CLASS_1_B08665FEB7112467_2_CLASS_3_90EEADDEAE6DE849_1_INVOKE_OFFSET UNITYSDK_OFFSET(0x148D1690)
#define CLASS_1_B08665FEB7112467_2_CLASS_3_90EEADDEAE6DE849_1__CTOR_OFFSET UNITYSDK_OFFSET(0x148D1670)

inline static constexpr unsigned int Class_1_B08665FEB7112467_2_Class_3_90EEADDEAE6DE849_1_TypeDefinitionIndex = 63730;

class Class_1_B08665FEB7112467_2_Class_3_90EEADDEAE6DE849_1 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_B08665FEB7112467_2_CLASS_3_90EEADDEAE6DE849_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* Invoke(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B08665FEB7112467_2_CLASS_3_90EEADDEAE6DE849_1_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B08665FEB7112467_2_CLASS_3_90EEADDEAE6DE849_1_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::String* EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_B08665FEB7112467_2_CLASS_3_90EEADDEAE6DE849_1_ENDINVOKE_OFFSET))(this, a1);
	}
};
