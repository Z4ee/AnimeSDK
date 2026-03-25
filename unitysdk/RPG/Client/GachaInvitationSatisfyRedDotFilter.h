#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"
#include "unitysdk/RPG/GameCore/GachaType.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GACHAINVITATIONSATISFYREDDOTFILTER_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x9750130)
#define RPG_CLIENT_GACHAINVITATIONSATISFYREDDOTFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9750090)
#define RPG_CLIENT_GACHAINVITATIONSATISFYREDDOTFILTER_INIT_OFFSET UNITYSDK_OFFSET(0x974FA70)
#define RPG_CLIENT_GACHAINVITATIONSATISFYREDDOTFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x97507B0)
#define RPG_CLIENT_GACHAINVITATIONSATISFYREDDOTFILTER__ISINVITATIONSATISFY_OFFSET UNITYSDK_OFFSET(0x974FF90)
#define RPG_CLIENT_GACHAINVITATIONSATISFYREDDOTFILTER__ONDOGACHA_OFFSET UNITYSDK_OFFSET(0x97503F0)
#define RPG_CLIENT_GACHAINVITATIONSATISFYREDDOTFILTER__ONEXCHANGEGACHACEILING_OFFSET UNITYSDK_OFFSET(0x9750340)
#define RPG_CLIENT_GACHAINVITATIONSATISFYREDDOTFILTER__ONGETGACHAINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x9750530)
#define RPG_CLIENT_GACHAINVITATIONSATISFYREDDOTFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x97508F0)
#define RPG_CLIENT_GACHAINVITATIONSATISFYREDDOTFILTER___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9750870)
#define RPG_CLIENT_GACHAINVITATIONSATISFYREDDOTFILTER___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x97507F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GachaInvitationSatisfyRedDotFilter_TypeDefinitionIndex = 54383;

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

		::System::Void _OnExchangeGachaCeiling(::System::UInt16 cmd, ::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAINVITATIONSATISFYREDDOTFILTER__ONEXCHANGEGACHACEILING_OFFSET))(this, cmd, arg);
		}

		::System::Void _OnDoGacha(::System::UInt16 cmd, ::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAINVITATIONSATISFYREDDOTFILTER__ONDOGACHA_OFFSET))(this, cmd, arg);
		}

		::System::Void _OnGetGachaInfoScRsp(::System::UInt16 cmd, ::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAINVITATIONSATISFYREDDOTFILTER__ONGETGACHAINFOSCRSP_OFFSET))(this, cmd, arg);
		}

		::System::Boolean _IsInvitationSatisfy(::RPG::GameCore::GachaType gachaType)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GachaType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAINVITATIONSATISFYREDDOTFILTER__ISINVITATIONSATISFY_OFFSET))(this, gachaType);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAINVITATIONSATISFYREDDOTFILTER___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAINVITATIONSATISFYREDDOTFILTER___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAINVITATIONSATISFYREDDOTFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET))(this);
		}
	};
}
