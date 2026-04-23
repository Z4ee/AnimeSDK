#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ExpeditionGroupData; }
namespace RPG::Client { class ExpeditionHarvestData; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_EXPEDITIONMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA3112F0)
#define RPG_CLIENT_EXPEDITIONMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA311320)
#define RPG_CLIENT_EXPEDITIONMODULE___C__GETALLGROUPIDS_B__3_0_OFFSET UNITYSDK_OFFSET(0xA311390)
#define RPG_CLIENT_EXPEDITIONMODULE___C__PREPAREUNLOCKEDCONDITIONDATA_B__0_0_OFFSET UNITYSDK_OFFSET(0xA311330)
#define RPG_CLIENT_EXPEDITIONMODULE___C___REGISTERWAITSTORESHOWREDDOT_B__26_0_OFFSET UNITYSDK_OFFSET(0xA3113A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionModule___c_TypeDefinitionIndex = 58833;

	class ExpeditionModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ExpeditionGroupData*>, ::System::UInt32>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ExpeditionGroupData*>, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ExpeditionModule___c_TypeDefinitionIndex)->GetStaticField(0xD690);
		}
		static ::System::Func_2<::RPG::Client::ExpeditionHarvestData*, ::RPG::Client::Promises::IPromise*>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::RPG::Client::ExpeditionHarvestData*, ::RPG::Client::Promises::IPromise*>**)Il2CppClass::FromTypeDefinitionIndex(ExpeditionModule___c_TypeDefinitionIndex)->GetStaticField(0xD698);
		}
		static ::RPG::Client::ExpeditionModule___c** StaticGet___9()
		{
			return (::RPG::Client::ExpeditionModule___c**)Il2CppClass::FromTypeDefinitionIndex(ExpeditionModule___c_TypeDefinitionIndex)->GetStaticField(0xD6A0);
		}
		static ::System::Action** StaticGet___9__26_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ExpeditionModule___c_TypeDefinitionIndex)->GetStaticField(0xD6A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _PrepareUnlockedConditionData_b__0_0(::RPG::Client::ExpeditionHarvestData* x)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ExpeditionHarvestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE___C__PREPAREUNLOCKEDCONDITIONDATA_B__0_0_OFFSET))(this, x);
		}

		::System::UInt32 _GetAllGroupIds_b__3_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ExpeditionGroupData*> x)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ExpeditionGroupData*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE___C__GETALLGROUPIDS_B__3_0_OFFSET))(this, x);
		}

		::System::Void __RegisterWaitStoreShowReddot_b__26_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE___C___REGISTERWAITSTORESHOWREDDOT_B__26_0_OFFSET))(this);
		}
	};
}
