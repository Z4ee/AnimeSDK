#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AVATARREDDOTFILTER_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xB3946A0)
#define RPG_CLIENT_AVATARREDDOTFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB394610)
#define RPG_CLIENT_AVATARREDDOTFILTER_INIT_OFFSET UNITYSDK_OFFSET(0xB394150)
#define RPG_CLIENT_AVATARREDDOTFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0xB394C00)
#define RPG_CLIENT_AVATARREDDOTFILTER__ONNOTIFYADDNEWAVATAR_OFFSET UNITYSDK_OFFSET(0xB3948D0)
#define RPG_CLIENT_AVATARREDDOTFILTER__ONNOTIFYALL_OFFSET UNITYSDK_OFFSET(0xB394880)
#define RPG_CLIENT_AVATARREDDOTFILTER__ONNOTIFYONE_OFFSET UNITYSDK_OFFSET(0xB394A10)
#define RPG_CLIENT_AVATARREDDOTFILTER__UPDATEALLAVATAR_OFFSET UNITYSDK_OFFSET(0xB3941D0)
#define RPG_CLIENT_AVATARREDDOTFILTER__UPDATEAVATARREDDOT_OFFSET UNITYSDK_OFFSET(0xB394AD0)
#define RPG_CLIENT_AVATARREDDOTFILTER__UPDATEONEAVATAR_OFFSET UNITYSDK_OFFSET(0xB394990)
#define RPG_CLIENT_AVATARREDDOTFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xB394D00)
#define RPG_CLIENT_AVATARREDDOTFILTER___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB394CB0)
#define RPG_CLIENT_AVATARREDDOTFILTER___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xB394C60)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarRedDotFilter_TypeDefinitionIndex = 62471;

	class AvatarRedDotFilter : public ::RPG::Client::BaseRedDotFilter
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* RedDotAvatarIDs; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARREDDOTFILTER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARREDDOTFILTER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARREDDOTFILTER_DISPOSE_OFFSET))(this);
		}

		::System::Void AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARREDDOTFILTER_ADDHANDLERS_OFFSET))(this);
		}

		::System::Void _OnNotifyAll(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARREDDOTFILTER__ONNOTIFYALL_OFFSET))(this, a1);
		}

		::System::Void _OnNotifyAddNewAvatar(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARREDDOTFILTER__ONNOTIFYADDNEWAVATAR_OFFSET))(this, a1);
		}

		::System::Void _OnNotifyOne(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARREDDOTFILTER__ONNOTIFYONE_OFFSET))(this, a1);
		}

		::System::Void _UpdateAllAvatar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARREDDOTFILTER__UPDATEALLAVATAR_OFFSET))(this);
		}

		::System::Void _UpdateOneAvatar(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARREDDOTFILTER__UPDATEONEAVATAR_OFFSET))(this, a1);
		}

		::System::Void _UpdateAvatarRedDot(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARREDDOTFILTER__UPDATEAVATARREDDOT_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARREDDOTFILTER___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARREDDOTFILTER___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARREDDOTFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET))(this);
		}
	};
}
