#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3B2BE9E387F8673D.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_B3C02EB4F05E94C2_CLASS_3_9A1ADE0F4CE714BA_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x161E8EF0)
#define CLASS_1_B3C02EB4F05E94C2_CLASS_3_9A1ADE0F4CE714BA_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x161E8F60)
#define CLASS_1_B3C02EB4F05E94C2_CLASS_3_9A1ADE0F4CE714BA_INVOKE_OFFSET UNITYSDK_OFFSET(0x161E8EE0)
#define CLASS_1_B3C02EB4F05E94C2_CLASS_3_9A1ADE0F4CE714BA__CTOR_OFFSET UNITYSDK_OFFSET(0x161E8E70)

inline static constexpr unsigned int Class_1_B3C02EB4F05E94C2_Class_3_9A1ADE0F4CE714BA_TypeDefinitionIndex = 59216;

class Class_1_B3C02EB4F05E94C2_Class_3_9A1ADE0F4CE714BA : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_B3C02EB4F05E94C2_CLASS_3_9A1ADE0F4CE714BA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Struct_2_3B2BE9E387F8673D& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3B2BE9E387F8673D&))((::PBYTE)hIl2Cpp + CLASS_1_B3C02EB4F05E94C2_CLASS_3_9A1ADE0F4CE714BA_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::Struct_2_3B2BE9E387F8673D& a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Struct_2_3B2BE9E387F8673D&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B3C02EB4F05E94C2_CLASS_3_9A1ADE0F4CE714BA_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void EndInvoke(::Struct_2_3B2BE9E387F8673D& a1, ::System::IAsyncResult* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3B2BE9E387F8673D&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_B3C02EB4F05E94C2_CLASS_3_9A1ADE0F4CE714BA_ENDINVOKE_OFFSET))(this, a1, a2);
	}
};
