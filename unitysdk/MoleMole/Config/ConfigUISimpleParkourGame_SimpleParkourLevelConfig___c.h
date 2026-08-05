#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUISimpleParkourGame_SerializableNodeConfig; }
namespace MoleMole::Config { class ConfigUISimpleParkourGame_SerializableWaveConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SIMPLEPARKOURLEVELCONFIG___C__CALCULATETOTALNODECOUNT_B__9_0_OFFSET UNITYSDK_OFFSET(0x1A4B9210)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SIMPLEPARKOURLEVELCONFIG___C__CALCULATETOTALNODECOUNT_B__9_1_OFFSET UNITYSDK_OFFSET(0x1A4B9230)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SIMPLEPARKOURLEVELCONFIG___C__CALCULATETOTALSCORE_B__8_0_OFFSET UNITYSDK_OFFSET(0x1A4B91F0)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SIMPLEPARKOURLEVELCONFIG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A4B91A0)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SIMPLEPARKOURLEVELCONFIG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4B91E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUISimpleParkourGame_SimpleParkourLevelConfig___c_TypeDefinitionIndex = 73975;

	class ConfigUISimpleParkourGame_SimpleParkourLevelConfig___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::MoleMole::Config::ConfigUISimpleParkourGame_SerializableWaveConfig*, ::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigUISimpleParkourGame_SerializableNodeConfig*>*>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::MoleMole::Config::ConfigUISimpleParkourGame_SerializableWaveConfig*, ::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigUISimpleParkourGame_SerializableNodeConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUISimpleParkourGame_SimpleParkourLevelConfig___c_TypeDefinitionIndex)->GetStaticField(0x3C980);
		}
		static ::MoleMole::Config::ConfigUISimpleParkourGame_SimpleParkourLevelConfig___c** StaticGet___9()
		{
			return (::MoleMole::Config::ConfigUISimpleParkourGame_SimpleParkourLevelConfig___c**)Il2CppClass::FromTypeDefinitionIndex(ConfigUISimpleParkourGame_SimpleParkourLevelConfig___c_TypeDefinitionIndex)->GetStaticField(0x3C988);
		}
		static ::System::Func_2<::MoleMole::Config::ConfigUISimpleParkourGame_SerializableNodeConfig*, ::System::Int32>** StaticGet___9__9_1()
		{
			return (::System::Func_2<::MoleMole::Config::ConfigUISimpleParkourGame_SerializableNodeConfig*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUISimpleParkourGame_SimpleParkourLevelConfig___c_TypeDefinitionIndex)->GetStaticField(0x3C990);
		}
		static ::System::Func_2<::MoleMole::Config::ConfigUISimpleParkourGame_SerializableWaveConfig*, ::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigUISimpleParkourGame_SerializableNodeConfig*>*>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::MoleMole::Config::ConfigUISimpleParkourGame_SerializableWaveConfig*, ::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigUISimpleParkourGame_SerializableNodeConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUISimpleParkourGame_SimpleParkourLevelConfig___c_TypeDefinitionIndex)->GetStaticField(0x3C998);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SIMPLEPARKOURLEVELCONFIG___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SIMPLEPARKOURLEVELCONFIG___C__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigUISimpleParkourGame_SerializableNodeConfig*>* _CalculateTotalScore_b__8_0(::MoleMole::Config::ConfigUISimpleParkourGame_SerializableWaveConfig* w)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigUISimpleParkourGame_SerializableNodeConfig*>*(*)(::PVOID, ::MoleMole::Config::ConfigUISimpleParkourGame_SerializableWaveConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SIMPLEPARKOURLEVELCONFIG___C__CALCULATETOTALSCORE_B__8_0_OFFSET))(this, w);
		}

		::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigUISimpleParkourGame_SerializableNodeConfig*>* _CalculateTotalNodeCount_b__9_0(::MoleMole::Config::ConfigUISimpleParkourGame_SerializableWaveConfig* w)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigUISimpleParkourGame_SerializableNodeConfig*>*(*)(::PVOID, ::MoleMole::Config::ConfigUISimpleParkourGame_SerializableWaveConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SIMPLEPARKOURLEVELCONFIG___C__CALCULATETOTALNODECOUNT_B__9_0_OFFSET))(this, w);
		}

		::System::Int32 _CalculateTotalNodeCount_b__9_1(::MoleMole::Config::ConfigUISimpleParkourGame_SerializableNodeConfig* n)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::Config::ConfigUISimpleParkourGame_SerializableNodeConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SIMPLEPARKOURLEVELCONFIG___C__CALCULATETOTALNODECOUNT_B__9_1_OFFSET))(this, n);
		}
	};
}
