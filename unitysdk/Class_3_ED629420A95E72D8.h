#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SubMissionState.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class MapDef; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_ED629420A95E72D8_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xDE45480)
#define CLASS_3_ED629420A95E72D8_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xDE454E0)
#define CLASS_3_ED629420A95E72D8_INVOKE_OFFSET UNITYSDK_OFFSET(0xDE45470)
#define CLASS_3_ED629420A95E72D8__CTOR_OFFSET UNITYSDK_OFFSET(0xDE45400)

inline static constexpr unsigned int Class_3_ED629420A95E72D8_TypeDefinitionIndex = 58020;

class Class_3_ED629420A95E72D8 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_ED629420A95E72D8__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::SubMissionState Invoke(::System::UInt32 a1, ::RPG::Client::MapDef* a2)
	{
		return ((::RPG::GameCore::SubMissionState(*)(::PVOID, ::System::UInt32, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_3_ED629420A95E72D8_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::System::UInt32 a1, ::RPG::Client::MapDef* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::RPG::Client::MapDef*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_ED629420A95E72D8_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::GameCore::SubMissionState EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::RPG::GameCore::SubMissionState(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_ED629420A95E72D8_ENDINVOKE_OFFSET))(this, a1);
	}
};
