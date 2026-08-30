#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/TacticsDiscardResult.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_E3E37125DAA7A899;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_F1A485BFEEAD6208_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B283010)
#define CLASS_3_F1A485BFEEAD6208_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B2830D0)
#define CLASS_3_F1A485BFEEAD6208_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B282FE0)
#define CLASS_3_F1A485BFEEAD6208__CTOR_OFFSET UNITYSDK_OFFSET(0x1B282F70)

inline static constexpr unsigned int Class_3_F1A485BFEEAD6208_TypeDefinitionIndex = 35573;

class Class_3_F1A485BFEEAD6208 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_F1A485BFEEAD6208__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::System::UInt32 a1, ::System::Int32 a2, ::RPG::LittleGameShare::DiceCombatCore::TacticsDiscardResult a3, ::Class_1_E3E37125DAA7A899* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::RPG::LittleGameShare::DiceCombatCore::TacticsDiscardResult, ::Class_1_E3E37125DAA7A899*))((::PBYTE)hIl2Cpp + CLASS_3_F1A485BFEEAD6208_INVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::IAsyncResult* BeginInvoke(::System::UInt32 a1, ::System::Int32 a2, ::RPG::LittleGameShare::DiceCombatCore::TacticsDiscardResult a3, ::Class_1_E3E37125DAA7A899* a4, ::System::AsyncCallback* a5, ::System::Object* a6)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::System::Int32, ::RPG::LittleGameShare::DiceCombatCore::TacticsDiscardResult, ::Class_1_E3E37125DAA7A899*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_F1A485BFEEAD6208_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_F1A485BFEEAD6208_ENDINVOKE_OFFSET))(this, a1);
	}
};
