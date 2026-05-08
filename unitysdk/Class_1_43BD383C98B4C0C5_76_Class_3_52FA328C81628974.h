#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_688FBF6C0FC439E7_Class_0_16E7307DCC43CB2C_9;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_1_43BD383C98B4C0C5_76_CLASS_3_52FA328C81628974_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18E12B90)
#define CLASS_1_43BD383C98B4C0C5_76_CLASS_3_52FA328C81628974_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18E12C10)
#define CLASS_1_43BD383C98B4C0C5_76_CLASS_3_52FA328C81628974_INVOKE_OFFSET UNITYSDK_OFFSET(0x18E12850)
#define CLASS_1_43BD383C98B4C0C5_76_CLASS_3_52FA328C81628974__CTOR_OFFSET UNITYSDK_OFFSET(0x18E12840)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_76_Class_3_52FA328C81628974_TypeDefinitionIndex = 55198;

class Class_1_43BD383C98B4C0C5_76_Class_3_52FA328C81628974 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_76_CLASS_3_52FA328C81628974__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_688FBF6C0FC439E7_Class_0_16E7307DCC43CB2C_9* Invoke(::System::Int32 a1, ::System::String* a2)
	{
		return ((::Class_1_688FBF6C0FC439E7_Class_0_16E7307DCC43CB2C_9*(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_76_CLASS_3_52FA328C81628974_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::System::String* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_76_CLASS_3_52FA328C81628974_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_1_688FBF6C0FC439E7_Class_0_16E7307DCC43CB2C_9* EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::Class_1_688FBF6C0FC439E7_Class_0_16E7307DCC43CB2C_9*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_76_CLASS_3_52FA328C81628974_ENDINVOKE_OFFSET))(this, a1);
	}
};
