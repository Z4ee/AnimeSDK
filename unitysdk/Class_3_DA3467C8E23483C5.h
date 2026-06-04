#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCoreEventType.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_A9BB9C9E4D3134C4;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_DA3467C8E23483C5_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18AA8360)
#define CLASS_3_DA3467C8E23483C5_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18AA83E0)
#define CLASS_3_DA3467C8E23483C5_INVOKE_OFFSET UNITYSDK_OFFSET(0x18AA8350)
#define CLASS_3_DA3467C8E23483C5__CTOR_OFFSET UNITYSDK_OFFSET(0x18AA82E0)

inline static constexpr unsigned int Class_3_DA3467C8E23483C5_TypeDefinitionIndex = 34965;

class Class_3_DA3467C8E23483C5 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_DA3467C8E23483C5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Invoke(::RPG::GameCore::CakeRaceCoreEventType a1, ::Class_1_A9BB9C9E4D3134C4* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CakeRaceCoreEventType, ::Class_1_A9BB9C9E4D3134C4*))((::PBYTE)hIl2Cpp + CLASS_3_DA3467C8E23483C5_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::RPG::GameCore::CakeRaceCoreEventType a1, ::Class_1_A9BB9C9E4D3134C4* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::CakeRaceCoreEventType, ::Class_1_A9BB9C9E4D3134C4*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_DA3467C8E23483C5_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_DA3467C8E23483C5_ENDINVOKE_OFFSET))(this, a1);
	}
};
