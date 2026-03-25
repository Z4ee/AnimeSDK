#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define RPG_CLIENT_MATCHTHREEV2UICOUNTER_ADDCOUNT_OFFSET UNITYSDK_OFFSET(0x9B6E7D0)
#define RPG_CLIENT_MATCHTHREEV2UICOUNTER_CLEAR_OFFSET UNITYSDK_OFFSET(0x9B60470)
#define RPG_CLIENT_MATCHTHREEV2UICOUNTER_CREATE_OFFSET UNITYSDK_OFFSET(0x9B5FC30)
#define RPG_CLIENT_MATCHTHREEV2UICOUNTER_SUBCOUNT_OFFSET UNITYSDK_OFFSET(0x9B6E9A0)
#define RPG_CLIENT_MATCHTHREEV2UICOUNTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x9B6EF90)
#define RPG_CLIENT_MATCHTHREEV2UICOUNTER__CTOR_OFFSET UNITYSDK_OFFSET(0x9B6E770)
#define RPG_CLIENT_MATCHTHREEV2UICOUNTER__GETBGMSTATEBYUINAME_OFFSET UNITYSDK_OFFSET(0x9B6EAA0)
#define RPG_CLIENT_MATCHTHREEV2UICOUNTER__GETNEXTBGMSTATE_OFFSET UNITYSDK_OFFSET(0x9B6EBC0)
#define RPG_CLIENT_MATCHTHREEV2UICOUNTER__STARTBGM_OFFSET UNITYSDK_OFFSET(0x9B6ECC0)
#define RPG_CLIENT_MATCHTHREEV2UICOUNTER__STOPBGM_OFFSET UNITYSDK_OFFSET(0x9B6EE20)
#define RPG_CLIENT_MATCHTHREEV2UICOUNTER__TRYSTARTBGM_OFFSET UNITYSDK_OFFSET(0x9B6E860)
#define RPG_CLIENT_MATCHTHREEV2UICOUNTER__TRYSTOPBGM_OFFSET UNITYSDK_OFFSET(0x9B6EB10)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2UICounter_TypeDefinitionIndex = 53677;

	class MatchThreeV2UICounter : public ::System::Object
	{
	public:
		static ::System::String** StaticGet__BGM_STATE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeV2UICounter_TypeDefinitionIndex)->GetStaticField(0x302E0);
		}
		::System::String* _CurrentBgmState; // 0x10
		::System::Collections::Generic::Stack_1<::System::String*>* _UIStack; // 0x18

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

		::System::Void AddCount(::System::String* uiName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2UICOUNTER_ADDCOUNT_OFFSET))(this, uiName);
		}

		::System::Void SubCount(::System::String* uiName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2UICOUNTER_SUBCOUNT_OFFSET))(this, uiName);
		}

		::System::String* _GetBgmStateByUIName(::System::String* uiName)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2UICOUNTER__GETBGMSTATEBYUINAME_OFFSET))(this, uiName);
		}

		::System::String* _GetNextBgmState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2UICOUNTER__GETNEXTBGMSTATE_OFFSET))(this);
		}

		::System::Void _TryStartBgm()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2UICOUNTER__TRYSTARTBGM_OFFSET))(this);
		}

		::System::Void _StartBgm(::System::String* bgmState)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2UICOUNTER__STARTBGM_OFFSET))(this, bgmState);
		}

		::System::Void _TryStopBgm(::System::String* bgmState)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2UICOUNTER__TRYSTOPBGM_OFFSET))(this, bgmState);
		}

		::System::Void _StopBgm(::System::String* bgmState)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2UICOUNTER__STOPBGM_OFFSET))(this, bgmState);
		}
	};
}
