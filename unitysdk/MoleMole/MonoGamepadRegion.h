#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_9F36F0CF0780ECE5.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/MonoGamepadModule.h"
#include "unitysdk/MoleMole/MonoGamepadRegion_ManagedModuleConfig.h"

#define MOLEMOLE_MONOGAMEPADREGION_ADDMODULE_OFFSET UNITYSDK_OFFSET(0x16201130)
#define MOLEMOLE_MONOGAMEPADREGION_CLEARMODULES_OFFSET UNITYSDK_OFFSET(0x16201540)
#define MOLEMOLE_MONOGAMEPADREGION_METHOD_6_0943098B945A3BE1_OFFSET UNITYSDK_OFFSET(0x16200BD0)
#define MOLEMOLE_MONOGAMEPADREGION_METHOD_6_3C37862761792B91_OFFSET UNITYSDK_OFFSET(0x162009E0)
#define MOLEMOLE_MONOGAMEPADREGION_METHOD_6_4F36FF0A94BB4979_OFFSET UNITYSDK_OFFSET(0x16200C90)
#define MOLEMOLE_MONOGAMEPADREGION_METHOD_6_BA1A377B18A273A8_OFFSET UNITYSDK_OFFSET(0x16200C40)
#define MOLEMOLE_MONOGAMEPADREGION_METHOD_6_BBB2DE33CBFA5128_OFFSET UNITYSDK_OFFSET(0x162010C0)
#define MOLEMOLE_MONOGAMEPADREGION_REFRESHMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x16201680)
#define MOLEMOLE_MONOGAMEPADREGION_REMOVEMODULE_OFFSET UNITYSDK_OFFSET(0x162013E0)
#define MOLEMOLE_MONOGAMEPADREGION__CTOR_OFFSET UNITYSDK_OFFSET(0x16201710)
#define MOLEMOLE_MONOGAMEPADREGION___BASE_LOGICEVENTTONAVDIR_OFFSET UNITYSDK_OFFSET(0x16201790)
#define MOLEMOLE_MONOGAMEPADREGION___BASE_ONMODULEAWAKE_OFFSET UNITYSDK_OFFSET(0x16201820)
#define MOLEMOLE_MONOGAMEPADREGION___BASE_ONMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x162018B0)
#define MOLEMOLE_MONOGAMEPADREGION___BASE_ONMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x162018C0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadRegion_TypeDefinitionIndex = 62223;

	class MonoGamepadRegion : public ::MoleMole::MonoGamepadModule
	{
	public:
		::Il2CppArray<::MoleMole::MonoGamepadRegion_ManagedModuleConfig>* _managedModules; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADREGION__CTOR_OFFSET))(this);
		}

		::System::Void Method_6_3C37862761792B91()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADREGION_METHOD_6_3C37862761792B91_OFFSET))(this);
		}

		::Enum_3_9F36F0CF0780ECE5 Method_6_0943098B945A3BE1(::MoleMole::InputLogicEventType a1)
		{
			return ((::Enum_3_9F36F0CF0780ECE5(*)(::PVOID, ::MoleMole::InputLogicEventType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADREGION_METHOD_6_0943098B945A3BE1_OFFSET))(this, a1);
		}

		::System::Void Method_6_BA1A377B18A273A8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADREGION_METHOD_6_BA1A377B18A273A8_OFFSET))(this);
		}

		::System::Void Method_6_BBB2DE33CBFA5128(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADREGION_METHOD_6_BBB2DE33CBFA5128_OFFSET))(this, a1, a2);
		}

		::System::Void AddModule(::MoleMole::MonoGamepadRegion_ManagedModuleConfig a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadRegion_ManagedModuleConfig))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADREGION_ADDMODULE_OFFSET))(this, a1);
		}

		::System::Void RemoveModule(::MoleMole::MonoGamepadRegion_ManagedModuleConfig a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadRegion_ManagedModuleConfig))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADREGION_REMOVEMODULE_OFFSET))(this, a1);
		}

		::System::Void ClearModules()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADREGION_CLEARMODULES_OFFSET))(this);
		}

		::System::Void RefreshModuleFocus(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADREGION_REFRESHMODULEFOCUS_OFFSET))(this, a1);
		}

		::Enum_3_9F36F0CF0780ECE5 __base_LogicEventToNavDir(::MoleMole::InputLogicEventType a1)
		{
			return ((::Enum_3_9F36F0CF0780ECE5(*)(::PVOID, ::MoleMole::InputLogicEventType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADREGION___BASE_LOGICEVENTTONAVDIR_OFFSET))(this, a1);
		}

		::System::Void __base_OnModuleAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADREGION___BASE_ONMODULEAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnModuleFocus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADREGION___BASE_ONMODULEFOCUS_OFFSET))(this);
		}

		::System::Void __base_OnModuleLostFocus(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADREGION___BASE_ONMODULELOSTFOCUS_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_4F36FF0A94BB4979(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADREGION_METHOD_6_4F36FF0A94BB4979_OFFSET))(this, a1, a2);
		}
	};
}
