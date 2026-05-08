#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_B08665FEB7112467_2_CLASS_3_286342E3AE987C56_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x13A2A670)
#define CLASS_1_B08665FEB7112467_2_CLASS_3_286342E3AE987C56_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x13A2A720)
#define CLASS_1_B08665FEB7112467_2_CLASS_3_286342E3AE987C56_INVOKE_OFFSET UNITYSDK_OFFSET(0x13A2A2F0)
#define CLASS_1_B08665FEB7112467_2_CLASS_3_286342E3AE987C56__CTOR_OFFSET UNITYSDK_OFFSET(0x13A2A2E0)

inline static constexpr unsigned int Class_1_B08665FEB7112467_2_Class_3_286342E3AE987C56_TypeDefinitionIndex = 55354;

class Class_1_B08665FEB7112467_2_Class_3_286342E3AE987C56 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_B08665FEB7112467_2_CLASS_3_286342E3AE987C56__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B08665FEB7112467_2_CLASS_3_286342E3AE987C56_INVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3, ::System::AsyncCallback* a4, ::System::Object* a5)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B08665FEB7112467_2_CLASS_3_286342E3AE987C56_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_B08665FEB7112467_2_CLASS_3_286342E3AE987C56_ENDINVOKE_OFFSET))(this, a1);
	}
};
