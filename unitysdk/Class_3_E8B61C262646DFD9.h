#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/TacticsBuyFinishResult.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_E8B61C262646DFD9_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x17D8AA30)
#define CLASS_3_E8B61C262646DFD9_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x17D8AAA0)
#define CLASS_3_E8B61C262646DFD9_INVOKE_OFFSET UNITYSDK_OFFSET(0x17D8A740)
#define CLASS_3_E8B61C262646DFD9__CTOR_OFFSET UNITYSDK_OFFSET(0x17D8A720)

inline static constexpr unsigned int Class_3_E8B61C262646DFD9_TypeDefinitionIndex = 34049;

class Class_3_E8B61C262646DFD9 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_E8B61C262646DFD9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::RPG::LittleGameShare::DiceCombatCore::TacticsBuyFinishResult a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::LittleGameShare::DiceCombatCore::TacticsBuyFinishResult))((::PBYTE)hIl2Cpp + CLASS_3_E8B61C262646DFD9_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::RPG::LittleGameShare::DiceCombatCore::TacticsBuyFinishResult a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::LittleGameShare::DiceCombatCore::TacticsBuyFinishResult, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_E8B61C262646DFD9_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_E8B61C262646DFD9_ENDINVOKE_OFFSET))(this, a1);
	}
};
