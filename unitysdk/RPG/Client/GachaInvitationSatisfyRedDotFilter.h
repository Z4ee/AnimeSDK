#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"
#include "unitysdk/RPG/GameCore/GachaType.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GACHAINVITATIONSATISFYREDDOTFILTER_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xD08A490)
#define RPG_CLIENT_GACHAINVITATIONSATISFYREDDOTFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD08A400)
#define RPG_CLIENT_GACHAINVITATIONSATISFYREDDOTFILTER_INIT_OFFSET UNITYSDK_OFFSET(0xD089CE0)
#define RPG_CLIENT_GACHAINVITATIONSATISFYREDDOTFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0xD08AB40)
#define RPG_CLIENT_GACHAINVITATIONSATISFYREDDOTFILTER__ISINVITATIONSATISFY_OFFSET UNITYSDK_OFFSET(0xD08A300)
#define RPG_CLIENT_GACHAINVITATIONSATISFYREDDOTFILTER__ONDOGACHA_OFFSET UNITYSDK_OFFSET(0xD08A6A0)
#define RPG_CLIENT_GACHAINVITATIONSATISFYREDDOTFILTER__ONEXCHANGEGACHACEILING_OFFSET UNITYSDK_OFFSET(0xD08A5F0)
#define RPG_CLIENT_GACHAINVITATIONSATISFYREDDOTFILTER__ONGETGACHAINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xD08A840)

namespace RPG::Client
{
	inline static constexpr unsigned int GachaInvitationSatisfyRedDotFilter_TypeDefinitionIndex = 66838;

	class GachaInvitationSatisfyRedDotFilter : public ::RPG::Client::BaseRedDotFilter
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::GachaType>* RedDotGachaTypes; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAINVITATIONSATISFYREDDOTFILTER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAINVITATIONSATISFYREDDOTFILTER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAINVITATIONSATISFYREDDOTFILTER_DISPOSE_OFFSET))(this);
		}

		::System::Void AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAINVITATIONSATISFYREDDOTFILTER_ADDHANDLERS_OFFSET))(this);
		}

		::System::Void _OnExchangeGachaCeiling(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAINVITATIONSATISFYREDDOTFILTER__ONEXCHANGEGACHACEILING_OFFSET))(this, a1, a2);
		}

		::System::Void _OnDoGacha(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAINVITATIONSATISFYREDDOTFILTER__ONDOGACHA_OFFSET))(this, a1, a2);
		}

		::System::Void _OnGetGachaInfoScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAINVITATIONSATISFYREDDOTFILTER__ONGETGACHAINFOSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Boolean _IsInvitationSatisfy(::RPG::GameCore::GachaType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GachaType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAINVITATIONSATISFYREDDOTFILTER__ISINVITATIONSATISFY_OFFSET))(this, a1);
		}
	};
}
