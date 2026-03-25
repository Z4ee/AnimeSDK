#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::GameCore { class BattlePerformCaptureActor; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_8FDC5D7AC7567D61_CLASS_3_1C5AB48DABF38B2F_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x116F3D00)
#define CLASS_1_8FDC5D7AC7567D61_CLASS_3_1C5AB48DABF38B2F_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x116F3D40)
#define CLASS_1_8FDC5D7AC7567D61_CLASS_3_1C5AB48DABF38B2F_INVOKE_OFFSET UNITYSDK_OFFSET(0x116F2F60)
#define CLASS_1_8FDC5D7AC7567D61_CLASS_3_1C5AB48DABF38B2F__CTOR_OFFSET UNITYSDK_OFFSET(0x116F3CE0)

inline static constexpr unsigned int Class_1_8FDC5D7AC7567D61_Class_3_1C5AB48DABF38B2F_TypeDefinitionIndex = 46197;

class Class_1_8FDC5D7AC7567D61_Class_3_1C5AB48DABF38B2F : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_8FDC5D7AC7567D61_CLASS_3_1C5AB48DABF38B2F__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::GameEntity* Invoke(::RPG::GameCore::BattlePerformCaptureActor* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::BattlePerformCaptureActor*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8FDC5D7AC7567D61_CLASS_3_1C5AB48DABF38B2F_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::RPG::GameCore::BattlePerformCaptureActor* a1, ::RPG::GameCore::GameEntity* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::BattlePerformCaptureActor*, ::RPG::GameCore::GameEntity*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_8FDC5D7AC7567D61_CLASS_3_1C5AB48DABF38B2F_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::GameCore::GameEntity* EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_8FDC5D7AC7567D61_CLASS_3_1C5AB48DABF38B2F_ENDINVOKE_OFFSET))(this, a1);
	}
};
