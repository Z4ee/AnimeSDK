#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigViewObjectTraitBase; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_ZENKOVQUESTSUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x114A0600)
#define MOLEMOLE_ZENKOVQUESTSUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x114A0640)
#define MOLEMOLE_ZENKOVQUESTSUBSYSTEM___C__HANDLESETEVACUATIONDATA_B__7_0_OFFSET UNITYSDK_OFFSET(0x114A0650)
#define MOLEMOLE_ZENKOVQUESTSUBSYSTEM___C__PROCESSEVACUATIONTIPS_B__16_0_OFFSET UNITYSDK_OFFSET(0x114A06A0)
#define MOLEMOLE_ZENKOVQUESTSUBSYSTEM___C__PROCESSEVACUATIONTIPS_B__16_1_OFFSET UNITYSDK_OFFSET(0x114A06F0)

namespace MoleMole
{
	inline static constexpr unsigned int ZenkovQuestSubSystem___c_TypeDefinitionIndex = 54626;

	class ZenkovQuestSubSystem___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::MoleMole::Config::ConfigViewObjectTraitBase*, ::System::Boolean>** StaticGet___9__16_0()
		{
			return (::System::Func_2<::MoleMole::Config::ConfigViewObjectTraitBase*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ZenkovQuestSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x49370);
		}
		static ::System::Func_2<::MoleMole::Config::ConfigViewObjectTraitBase*, ::System::Boolean>** StaticGet___9__16_1()
		{
			return (::System::Func_2<::MoleMole::Config::ConfigViewObjectTraitBase*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ZenkovQuestSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x49378);
		}
		static ::MoleMole::ZenkovQuestSubSystem___c** StaticGet___9()
		{
			return (::MoleMole::ZenkovQuestSubSystem___c**)Il2CppClass::FromTypeDefinitionIndex(ZenkovQuestSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x49380);
		}
		static ::System::Func_2<::MoleMole::Config::ConfigViewObjectTraitBase*, ::System::Boolean>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::MoleMole::Config::ConfigViewObjectTraitBase*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ZenkovQuestSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x49388);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTSUBSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTSUBSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _HandleSetEvacuationData_b__7_0(::MoleMole::Config::ConfigViewObjectTraitBase* t)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigViewObjectTraitBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTSUBSYSTEM___C__HANDLESETEVACUATIONDATA_B__7_0_OFFSET))(this, t);
		}

		::System::Boolean _ProcessEvacuationTips_b__16_0(::MoleMole::Config::ConfigViewObjectTraitBase* t)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigViewObjectTraitBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTSUBSYSTEM___C__PROCESSEVACUATIONTIPS_B__16_0_OFFSET))(this, t);
		}

		::System::Boolean _ProcessEvacuationTips_b__16_1(::MoleMole::Config::ConfigViewObjectTraitBase* t)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigViewObjectTraitBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTSUBSYSTEM___C__PROCESSEVACUATIONTIPS_B__16_1_OFFSET))(this, t);
		}
	};
}
