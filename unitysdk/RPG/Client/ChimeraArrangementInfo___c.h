#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHIMERAARRANGEMENTINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9FF74D0)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9FF7500)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO___C___FILTERARRANGEMENTBYDEATH_B__55_0_OFFSET UNITYSDK_OFFSET(0x9FF7520)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO___C___SYNCARRANGEDCOMMON_B__50_0_OFFSET UNITYSDK_OFFSET(0x9FF7510)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraArrangementInfo___c_TypeDefinitionIndex = 58412;

	class ChimeraArrangementInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__50_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraArrangementInfo___c_TypeDefinitionIndex)->GetStaticField(0x54400);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__55_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraArrangementInfo___c_TypeDefinitionIndex)->GetStaticField(0x54408);
		}
		static ::RPG::Client::ChimeraArrangementInfo___c** StaticGet___9()
		{
			return (::RPG::Client::ChimeraArrangementInfo___c**)Il2CppClass::FromTypeDefinitionIndex(ChimeraArrangementInfo___c_TypeDefinitionIndex)->GetStaticField(0x54410);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __SyncArrangedCommon_b__50_0(::System::UInt32 seat)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO___C___SYNCARRANGEDCOMMON_B__50_0_OFFSET))(this, seat);
		}

		::System::Boolean __FilterArrangementByDeath_b__55_0(::System::UInt32 seat)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO___C___FILTERARRANGEMENTBYDEATH_B__55_0_OFFSET))(this, seat);
		}
	};
}
