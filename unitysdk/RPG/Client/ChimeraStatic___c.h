#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicValue; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHIMERASTATIC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x93D5170)
#define RPG_CLIENT_CHIMERASTATIC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x93D51B0)
#define RPG_CLIENT_CHIMERASTATIC___C__GETRESIDENTREWARDQUESTIDS_B__71_0_OFFSET UNITYSDK_OFFSET(0x93D51C0)
#define RPG_CLIENT_CHIMERASTATIC___C__STARTPAUSEGAMEPERFORMANCE_B__73_0_OFFSET UNITYSDK_OFFSET(0x93D5220)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraStatic___c_TypeDefinitionIndex = 51488;

	class ChimeraStatic___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__73_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ChimeraStatic___c_TypeDefinitionIndex)->GetStaticField(0x47690);
		}
		static ::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>** StaticGet___9__71_0()
		{
			return (::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraStatic___c_TypeDefinitionIndex)->GetStaticField(0x47698);
		}
		static ::RPG::Client::ChimeraStatic___c** StaticGet___9()
		{
			return (::RPG::Client::ChimeraStatic___c**)Il2CppClass::FromTypeDefinitionIndex(ChimeraStatic___c_TypeDefinitionIndex)->GetStaticField(0x476A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetResidentRewardQuestIDs_b__71_0(::RPG::GameCore::DynamicValue* e)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC___C__GETRESIDENTREWARDQUESTIDS_B__71_0_OFFSET))(this, e);
		}

		::System::Void _StartPauseGamePerformance_b__73_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC___C__STARTPAUSEGAMEPERFORMANCE_B__73_0_OFFSET))(this);
		}
	};
}
