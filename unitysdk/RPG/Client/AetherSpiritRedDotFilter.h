#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AETHERSPIRITREDDOTFILTER_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xB2CE040)
#define RPG_CLIENT_AETHERSPIRITREDDOTFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2CDFA0)
#define RPG_CLIENT_AETHERSPIRITREDDOTFILTER_INIT_OFFSET UNITYSDK_OFFSET(0xB2CDF30)
#define RPG_CLIENT_AETHERSPIRITREDDOTFILTER_UPDATECANPROMOTEREDDOT_OFFSET UNITYSDK_OFFSET(0xB2CDD70)
#define RPG_CLIENT_AETHERSPIRITREDDOTFILTER_UPDATEISNEWREDDOT_OFFSET UNITYSDK_OFFSET(0xB2CDBB0)
#define RPG_CLIENT_AETHERSPIRITREDDOTFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0xB2CE420)
#define RPG_CLIENT_AETHERSPIRITREDDOTFILTER__ONUPDATEALLREDDOT_OFFSET UNITYSDK_OFFSET(0xB2CE320)
#define RPG_CLIENT_AETHERSPIRITREDDOTFILTER__ONUPDATECANPROMOTEREDDOT_OFFSET UNITYSDK_OFFSET(0xB2CE3D0)
#define RPG_CLIENT_AETHERSPIRITREDDOTFILTER__ONUPDATEISNEWREDDOT_OFFSET UNITYSDK_OFFSET(0xB2CE380)
#define RPG_CLIENT_AETHERSPIRITREDDOTFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xB2CE5A0)
#define RPG_CLIENT_AETHERSPIRITREDDOTFILTER___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2CE530)
#define RPG_CLIENT_AETHERSPIRITREDDOTFILTER___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xB2CE4C0)

namespace RPG::Client
{
	inline static constexpr unsigned int AetherSpiritRedDotFilter_TypeDefinitionIndex = 62467;

	class AetherSpiritRedDotFilter : public ::RPG::Client::BaseRedDotFilter
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* IsNewSpiritIdList; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* CanPromoteSpiritIdList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSPIRITREDDOTFILTER__CTOR_OFFSET))(this);
		}

		::System::Void UpdateIsNewRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSPIRITREDDOTFILTER_UPDATEISNEWREDDOT_OFFSET))(this);
		}

		::System::Void UpdateCanPromoteRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSPIRITREDDOTFILTER_UPDATECANPROMOTEREDDOT_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSPIRITREDDOTFILTER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSPIRITREDDOTFILTER_DISPOSE_OFFSET))(this);
		}

		::System::Void AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSPIRITREDDOTFILTER_ADDHANDLERS_OFFSET))(this);
		}

		::System::Void _OnUpdateAllRedDot(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSPIRITREDDOTFILTER__ONUPDATEALLREDDOT_OFFSET))(this, a1);
		}

		::System::Void _OnUpdateIsNewRedDot(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSPIRITREDDOTFILTER__ONUPDATEISNEWREDDOT_OFFSET))(this, a1);
		}

		::System::Void _OnUpdateCanPromoteRedDot(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSPIRITREDDOTFILTER__ONUPDATECANPROMOTEREDDOT_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSPIRITREDDOTFILTER___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSPIRITREDDOTFILTER___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSPIRITREDDOTFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET))(this);
		}
	};
}
