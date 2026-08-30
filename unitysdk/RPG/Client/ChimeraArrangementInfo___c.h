#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHIMERAARRANGEMENTINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C1B3710)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1B3740)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO___C___FILTERARRANGEMENTBYDEATH_B__55_0_OFFSET UNITYSDK_OFFSET(0x1C1B3760)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO___C___SYNCARRANGEDCOMMON_B__50_0_OFFSET UNITYSDK_OFFSET(0x1C1B3750)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraArrangementInfo___c_TypeDefinitionIndex = 63466;

	class ChimeraArrangementInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__50_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraArrangementInfo___c_TypeDefinitionIndex)->GetStaticField(0x52960);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__55_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraArrangementInfo___c_TypeDefinitionIndex)->GetStaticField(0x52968);
		}
		static ::RPG::Client::ChimeraArrangementInfo___c** StaticGet___9()
		{
			return (::RPG::Client::ChimeraArrangementInfo___c**)Il2CppClass::FromTypeDefinitionIndex(ChimeraArrangementInfo___c_TypeDefinitionIndex)->GetStaticField(0x52970);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __SyncArrangedCommon_b__50_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO___C___SYNCARRANGEDCOMMON_B__50_0_OFFSET))(this, a1);
		}

		::System::Boolean __FilterArrangementByDeath_b__55_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO___C___FILTERARRANGEMENTBYDEATH_B__55_0_OFFSET))(this, a1);
		}
	};
}
