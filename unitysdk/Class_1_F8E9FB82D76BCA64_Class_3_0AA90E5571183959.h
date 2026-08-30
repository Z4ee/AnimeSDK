#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/MsgRetcode.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_F8E9FB82D76BCA64_CLASS_3_0AA90E5571183959_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C235D90)
#define CLASS_1_F8E9FB82D76BCA64_CLASS_3_0AA90E5571183959_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C235DE0)
#define CLASS_1_F8E9FB82D76BCA64_CLASS_3_0AA90E5571183959_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C235D80)
#define CLASS_1_F8E9FB82D76BCA64_CLASS_3_0AA90E5571183959__CTOR_OFFSET UNITYSDK_OFFSET(0x1C235D10)

inline static constexpr unsigned int Class_1_F8E9FB82D76BCA64_Class_3_0AA90E5571183959_TypeDefinitionIndex = 36271;

class Class_1_F8E9FB82D76BCA64_Class_3_0AA90E5571183959 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_F8E9FB82D76BCA64_CLASS_3_0AA90E5571183959__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::Client::LittleGameShare::MsgRetcode Invoke(::System::UInt32 a1)
	{
		return ((::RPG::Client::LittleGameShare::MsgRetcode(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F8E9FB82D76BCA64_CLASS_3_0AA90E5571183959_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::System::UInt32 a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F8E9FB82D76BCA64_CLASS_3_0AA90E5571183959_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::LittleGameShare::MsgRetcode EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::RPG::Client::LittleGameShare::MsgRetcode(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_F8E9FB82D76BCA64_CLASS_3_0AA90E5571183959_ENDINVOKE_OFFSET))(this, a1);
	}
};
