#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapNpcDef; }
namespace RPG::Client { class TrainVisitorInfo; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_TRAINMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE23F9A0)
#define RPG_CLIENT_TRAINMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE23F9D0)
#define RPG_CLIENT_TRAINMODULE___C__GETUNSEENVISITORIDLIST_B__37_1_OFFSET UNITYSDK_OFFSET(0xE23FA10)
#define RPG_CLIENT_TRAINMODULE___C__ISVISITORONTRAIN_B__23_0_OFFSET UNITYSDK_OFFSET(0xE23F9E0)
#define RPG_CLIENT_TRAINMODULE___C__REFRESHREWARDREDDOT_B__39_0_OFFSET UNITYSDK_OFFSET(0xE23FA30)

namespace RPG::Client
{
	inline static constexpr unsigned int TrainModule___c_TypeDefinitionIndex = 68146;

	class TrainModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::MapNpcDef*, ::System::Boolean>** StaticGet___9__23_0()
		{
			return (::System::Func_2<::RPG::Client::MapNpcDef*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(TrainModule___c_TypeDefinitionIndex)->GetStaticField(0x5A5E0);
		}
		static ::System::Func_2<::RPG::Client::TrainVisitorInfo*, ::System::Boolean>** StaticGet___9__39_0()
		{
			return (::System::Func_2<::RPG::Client::TrainVisitorInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(TrainModule___c_TypeDefinitionIndex)->GetStaticField(0x5A5E8);
		}
		static ::RPG::Client::TrainModule___c** StaticGet___9()
		{
			return (::RPG::Client::TrainModule___c**)Il2CppClass::FromTypeDefinitionIndex(TrainModule___c_TypeDefinitionIndex)->GetStaticField(0x5A5F0);
		}
		static ::System::Func_2<::RPG::Client::TrainVisitorInfo*, ::System::UInt32>** StaticGet___9__37_1()
		{
			return (::System::Func_2<::RPG::Client::TrainVisitorInfo*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(TrainModule___c_TypeDefinitionIndex)->GetStaticField(0x5A5F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsVisitorOnTrain_b__23_0(::RPG::Client::MapNpcDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE___C__ISVISITORONTRAIN_B__23_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetUnseenVisitorIDList_b__37_1(::RPG::Client::TrainVisitorInfo* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::TrainVisitorInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE___C__GETUNSEENVISITORIDLIST_B__37_1_OFFSET))(this, a1);
		}

		::System::Boolean _RefreshRewardRedDot_b__39_0(::RPG::Client::TrainVisitorInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TrainVisitorInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE___C__REFRESHREWARDREDDOT_B__39_0_OFFSET))(this, a1);
		}
	};
}
