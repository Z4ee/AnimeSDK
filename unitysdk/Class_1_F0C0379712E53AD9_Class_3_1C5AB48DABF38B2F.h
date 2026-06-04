#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::GameCore { class BattlePerformCaptureActor; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_F0C0379712E53AD9_CLASS_3_1C5AB48DABF38B2F_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA4F1950)
#define CLASS_1_F0C0379712E53AD9_CLASS_3_1C5AB48DABF38B2F_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA4F1990)
#define CLASS_1_F0C0379712E53AD9_CLASS_3_1C5AB48DABF38B2F_INVOKE_OFFSET UNITYSDK_OFFSET(0xA4F0E90)
#define CLASS_1_F0C0379712E53AD9_CLASS_3_1C5AB48DABF38B2F__CTOR_OFFSET UNITYSDK_OFFSET(0xA4F1860)

inline static constexpr unsigned int Class_1_F0C0379712E53AD9_Class_3_1C5AB48DABF38B2F_TypeDefinitionIndex = 53572;

class Class_1_F0C0379712E53AD9_Class_3_1C5AB48DABF38B2F : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_F0C0379712E53AD9_CLASS_3_1C5AB48DABF38B2F__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::GameEntity* Invoke(::RPG::GameCore::BattlePerformCaptureActor* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::BattlePerformCaptureActor*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_F0C0379712E53AD9_CLASS_3_1C5AB48DABF38B2F_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::RPG::GameCore::BattlePerformCaptureActor* a1, ::RPG::GameCore::GameEntity* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::BattlePerformCaptureActor*, ::RPG::GameCore::GameEntity*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F0C0379712E53AD9_CLASS_3_1C5AB48DABF38B2F_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::GameCore::GameEntity* EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_F0C0379712E53AD9_CLASS_3_1C5AB48DABF38B2F_ENDINVOKE_OFFSET))(this, a1);
	}
};
