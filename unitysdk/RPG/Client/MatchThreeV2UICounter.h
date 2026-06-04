#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define RPG_CLIENT_MATCHTHREEV2UICOUNTER_ADDCOUNT_OFFSET UNITYSDK_OFFSET(0xBFB2AF0)
#define RPG_CLIENT_MATCHTHREEV2UICOUNTER_CLEAR_OFFSET UNITYSDK_OFFSET(0xBFA3390)
#define RPG_CLIENT_MATCHTHREEV2UICOUNTER_CREATE_OFFSET UNITYSDK_OFFSET(0xBFA2AE0)
#define RPG_CLIENT_MATCHTHREEV2UICOUNTER_SUBCOUNT_OFFSET UNITYSDK_OFFSET(0xBFB2CC0)
#define RPG_CLIENT_MATCHTHREEV2UICOUNTER__CCTOR_OFFSET UNITYSDK_OFFSET(0xBFB32B0)
#define RPG_CLIENT_MATCHTHREEV2UICOUNTER__CTOR_OFFSET UNITYSDK_OFFSET(0xBFB2A90)
#define RPG_CLIENT_MATCHTHREEV2UICOUNTER__GETBGMSTATEBYUINAME_OFFSET UNITYSDK_OFFSET(0xBFB2DC0)
#define RPG_CLIENT_MATCHTHREEV2UICOUNTER__GETNEXTBGMSTATE_OFFSET UNITYSDK_OFFSET(0xBFB2EE0)
#define RPG_CLIENT_MATCHTHREEV2UICOUNTER__STARTBGM_OFFSET UNITYSDK_OFFSET(0xBFB2FE0)
#define RPG_CLIENT_MATCHTHREEV2UICOUNTER__STOPBGM_OFFSET UNITYSDK_OFFSET(0xBFB3140)
#define RPG_CLIENT_MATCHTHREEV2UICOUNTER__TRYSTARTBGM_OFFSET UNITYSDK_OFFSET(0xBFB2B80)
#define RPG_CLIENT_MATCHTHREEV2UICOUNTER__TRYSTOPBGM_OFFSET UNITYSDK_OFFSET(0xBFB2E30)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2UICounter_TypeDefinitionIndex = 61755;

	class MatchThreeV2UICounter : public ::System::Object
	{
	public:
		static ::System::String** StaticGet__BGM_STATE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeV2UICounter_TypeDefinitionIndex)->GetStaticField(0x57110);
		}
		::System::Collections::Generic::Stack_1<::System::String*>* _UIStack; // 0x10
		::System::String* _CurrentBgmState; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2UICOUNTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2UICOUNTER__CCTOR_OFFSET))();
		}

		static ::RPG::Client::MatchThreeV2UICounter* Create()
		{
			return ((::RPG::Client::MatchThreeV2UICounter*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2UICOUNTER_CREATE_OFFSET))();
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2UICOUNTER_CLEAR_OFFSET))(this);
		}

		::System::Void AddCount(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2UICOUNTER_ADDCOUNT_OFFSET))(this, a1);
		}

		::System::Void SubCount(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2UICOUNTER_SUBCOUNT_OFFSET))(this, a1);
		}

		::System::String* _GetBgmStateByUIName(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2UICOUNTER__GETBGMSTATEBYUINAME_OFFSET))(this, a1);
		}

		::System::String* _GetNextBgmState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2UICOUNTER__GETNEXTBGMSTATE_OFFSET))(this);
		}

		::System::Void _TryStartBgm()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2UICOUNTER__TRYSTARTBGM_OFFSET))(this);
		}

		::System::Void _StartBgm(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2UICOUNTER__STARTBGM_OFFSET))(this, a1);
		}

		::System::Void _TryStopBgm(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2UICOUNTER__TRYSTOPBGM_OFFSET))(this, a1);
		}

		::System::Void _StopBgm(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2UICOUNTER__STOPBGM_OFFSET))(this, a1);
		}
	};
}
