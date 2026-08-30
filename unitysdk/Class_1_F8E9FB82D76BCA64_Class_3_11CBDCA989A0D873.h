#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/FightServerLogLevel.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_1_F8E9FB82D76BCA64_CLASS_3_11CBDCA989A0D873_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C236090)
#define CLASS_1_F8E9FB82D76BCA64_CLASS_3_11CBDCA989A0D873_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C236110)
#define CLASS_1_F8E9FB82D76BCA64_CLASS_3_11CBDCA989A0D873_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C235D00)
#define CLASS_1_F8E9FB82D76BCA64_CLASS_3_11CBDCA989A0D873__CTOR_OFFSET UNITYSDK_OFFSET(0x1C236010)

inline static constexpr unsigned int Class_1_F8E9FB82D76BCA64_Class_3_11CBDCA989A0D873_TypeDefinitionIndex = 36268;

class Class_1_F8E9FB82D76BCA64_Class_3_11CBDCA989A0D873 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_F8E9FB82D76BCA64_CLASS_3_11CBDCA989A0D873__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::System::String* a1, ::RPG::Client::LittleGameShare::FightServerLogLevel a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::LittleGameShare::FightServerLogLevel))((::PBYTE)hIl2Cpp + CLASS_1_F8E9FB82D76BCA64_CLASS_3_11CBDCA989A0D873_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::System::String* a1, ::RPG::Client::LittleGameShare::FightServerLogLevel a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::RPG::Client::LittleGameShare::FightServerLogLevel, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F8E9FB82D76BCA64_CLASS_3_11CBDCA989A0D873_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_F8E9FB82D76BCA64_CLASS_3_11CBDCA989A0D873_ENDINVOKE_OFFSET))(this, a1);
	}
};
