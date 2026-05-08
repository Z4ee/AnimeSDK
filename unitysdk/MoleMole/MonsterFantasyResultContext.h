#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIHollowHollowLayerResultDialogContext.h"

class Class_3_48A3D3A34C52331D_39;
namespace MoleMole { class UILevelResultPageContext; }

#define MOLEMOLE_MONSTERFANTASYRESULTCONTEXT_EXITGAME_OFFSET UNITYSDK_OFFSET(0x13EAD190)
#define MOLEMOLE_MONSTERFANTASYRESULTCONTEXT_GOBACK_OFFSET UNITYSDK_OFFSET(0x13EAD5C0)
#define MOLEMOLE_MONSTERFANTASYRESULTCONTEXT_GOCURRENT_OFFSET UNITYSDK_OFFSET(0x13EAD620)
#define MOLEMOLE_MONSTERFANTASYRESULTCONTEXT_GONEXT_OFFSET UNITYSDK_OFFSET(0x13EAD290)
#define MOLEMOLE_MONSTERFANTASYRESULTCONTEXT_HANDLERESPONSE_OFFSET UNITYSDK_OFFSET(0x13EACF80)
#define MOLEMOLE_MONSTERFANTASYRESULTCONTEXT_INITDATA_OFFSET UNITYSDK_OFFSET(0x13EACC80)
#define MOLEMOLE_MONSTERFANTASYRESULTCONTEXT_REQRESTART_OFFSET UNITYSDK_OFFSET(0x13EACDD0)
#define MOLEMOLE_MONSTERFANTASYRESULTCONTEXT_RESTART_OFFSET UNITYSDK_OFFSET(0x13EACF20)
#define MOLEMOLE_MONSTERFANTASYRESULTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13EACC00)

namespace MoleMole
{
	inline static constexpr unsigned int MonsterFantasyResultContext_TypeDefinitionIndex = 38108;

	class MonsterFantasyResultContext : public ::MoleMole::UIHollowHollowLayerResultDialogContext
	{
	public:
		::System::Boolean isWin; // 0x40
		::System::Int32 chapterLevelId; // 0x44

		::System::Void _ctor(::MoleMole::UILevelResultPageContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UILevelResultPageContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERFANTASYRESULTCONTEXT__CTOR_OFFSET))(this, context);
		}

		::System::Void InitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERFANTASYRESULTCONTEXT_INITDATA_OFFSET))(this);
		}

		::System::Void ReqRestart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERFANTASYRESULTCONTEXT_REQRESTART_OFFSET))(this);
		}

		::System::Void Restart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERFANTASYRESULTCONTEXT_RESTART_OFFSET))(this);
		}

		static ::System::Void HandleResponse(::Class_3_48A3D3A34C52331D_39* msg)
		{
			return ((::System::Void(*)(::Class_3_48A3D3A34C52331D_39*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERFANTASYRESULTCONTEXT_HANDLERESPONSE_OFFSET))(msg);
		}

		static ::System::Void ExitGame()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERFANTASYRESULTCONTEXT_EXITGAME_OFFSET))();
		}

		::System::Void GoNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERFANTASYRESULTCONTEXT_GONEXT_OFFSET))(this);
		}

		::System::Void GoBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERFANTASYRESULTCONTEXT_GOBACK_OFFSET))(this);
		}

		::System::Void GoCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERFANTASYRESULTCONTEXT_GOCURRENT_OFFSET))(this);
		}
	};
}
