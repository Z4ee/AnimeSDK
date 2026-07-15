#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class Type; }

#define CLASS_1_97ACD358CA0F37B1_CLASS_3_87B11B20E5D21B7A_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1601DCD0)
#define CLASS_1_97ACD358CA0F37B1_CLASS_3_87B11B20E5D21B7A_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1601DD10)
#define CLASS_1_97ACD358CA0F37B1_CLASS_3_87B11B20E5D21B7A_INVOKE_OFFSET UNITYSDK_OFFSET(0x160183C0)
#define CLASS_1_97ACD358CA0F37B1_CLASS_3_87B11B20E5D21B7A__CTOR_OFFSET UNITYSDK_OFFSET(0x1601DBE0)

inline static constexpr unsigned int Class_1_97ACD358CA0F37B1_Class_3_87B11B20E5D21B7A_TypeDefinitionIndex = 64905;

class Class_1_97ACD358CA0F37B1_Class_3_87B11B20E5D21B7A : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_97ACD358CA0F37B1_CLASS_3_87B11B20E5D21B7A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::System::Type* a1, ::System::Object* a2, ::Class_1_7A22A3DBEEDD1F80* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Object*, ::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_97ACD358CA0F37B1_CLASS_3_87B11B20E5D21B7A_INVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::IAsyncResult* BeginInvoke(::System::Type* a1, ::System::Object* a2, ::Class_1_7A22A3DBEEDD1F80* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Type*, ::System::Object*, ::Class_1_7A22A3DBEEDD1F80*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_97ACD358CA0F37B1_CLASS_3_87B11B20E5D21B7A_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_97ACD358CA0F37B1_CLASS_3_87B11B20E5D21B7A_ENDINVOKE_OFFSET))(this, a1);
	}
};
