#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/TacticsRefreshResult.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_E3E37125DAA7A899;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_581354BFC44CDCA9_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x17CC4000)
#define CLASS_3_581354BFC44CDCA9_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x17CC40A0)
#define CLASS_3_581354BFC44CDCA9_INVOKE_OFFSET UNITYSDK_OFFSET(0x17CC3C70)
#define CLASS_3_581354BFC44CDCA9__CTOR_OFFSET UNITYSDK_OFFSET(0x17CC3C50)

inline static constexpr unsigned int Class_3_581354BFC44CDCA9_TypeDefinitionIndex = 34047;

class Class_3_581354BFC44CDCA9 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_581354BFC44CDCA9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::System::UInt32 a1, ::RPG::LittleGameShare::DiceCombatCore::TacticsRefreshResult a2, ::Class_1_E3E37125DAA7A899* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::LittleGameShare::DiceCombatCore::TacticsRefreshResult, ::Class_1_E3E37125DAA7A899*))((::PBYTE)hIl2Cpp + CLASS_3_581354BFC44CDCA9_INVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::IAsyncResult* BeginInvoke(::System::UInt32 a1, ::RPG::LittleGameShare::DiceCombatCore::TacticsRefreshResult a2, ::Class_1_E3E37125DAA7A899* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::RPG::LittleGameShare::DiceCombatCore::TacticsRefreshResult, ::Class_1_E3E37125DAA7A899*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_581354BFC44CDCA9_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_581354BFC44CDCA9_ENDINVOKE_OFFSET))(this, a1);
	}
};
