#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class PlanetFesPlaySpinAnim; }
namespace RPG::GameCore { class PlanetFesAnimComposite; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_1843F34CD870B329_METHOD_3_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0xB2C0F00)
#define CLASS_3_1843F34CD870B329_METHOD_3_4B16404ED490414F_OFFSET UNITYSDK_OFFSET(0xB2C0D70)
#define CLASS_3_1843F34CD870B329_METHOD_3_4EED4B4A60EC4E72_OFFSET UNITYSDK_OFFSET(0xB2C1680)
#define CLASS_3_1843F34CD870B329_METHOD_3_56E601D7AD29E007_OFFSET UNITYSDK_OFFSET(0xB2C1250)
#define CLASS_3_1843F34CD870B329_METHOD_3_78C62398E94F0FB1_OFFSET UNITYSDK_OFFSET(0xB2C1140)
#define CLASS_3_1843F34CD870B329_METHOD_3_C706B1EC6D2E1C64_OFFSET UNITYSDK_OFFSET(0xB2C0710)
#define CLASS_3_1843F34CD870B329_METHOD_3_F95ABB82B718075E_OFFSET UNITYSDK_OFFSET(0xB2C1330)
#define CLASS_3_1843F34CD870B329_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB2C05B0)
#define CLASS_3_1843F34CD870B329_TICK_OFFSET UNITYSDK_OFFSET(0xB2C1610)
#define CLASS_3_1843F34CD870B329__CTOR_OFFSET UNITYSDK_OFFSET(0xB2C0560)
#define CLASS_3_1843F34CD870B329___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xB2C17A0)

inline static constexpr unsigned int Class_3_1843F34CD870B329_TypeDefinitionIndex = 54455;

class Class_3_1843F34CD870B329 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::Client::PlanetFesPlaySpinAnim*>
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_3_0; // 0x28
	::RPG::Client::TextID Field_3_1; // 0x30
	::System::UInt32 Field_3_2; // 0x40
	::System::Single Field_3_3; // 0x44

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::PlanetFesPlaySpinAnim* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::PlanetFesPlaySpinAnim*))((::PBYTE)hIl2Cpp + CLASS_3_1843F34CD870B329__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1843F34CD870B329_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_C706B1EC6D2E1C64()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1843F34CD870B329_METHOD_3_C706B1EC6D2E1C64_OFFSET))(this);
	}

	::RPG::GameCore::PlanetFesAnimComposite* Method_3_F95ABB82B718075E(::System::Collections::Generic::List_1<::RPG::GameCore::PlanetFesAnimComposite*>* a1)
	{
		return ((::RPG::GameCore::PlanetFesAnimComposite*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::PlanetFesAnimComposite*>*))((::PBYTE)hIl2Cpp + CLASS_3_1843F34CD870B329_METHOD_3_F95ABB82B718075E_OFFSET))(this, a1);
	}

	::System::Void Method_3_4B16404ED490414F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1843F34CD870B329_METHOD_3_4B16404ED490414F_OFFSET))(this);
	}

	::System::Void Method_3_2C95AFAD0256302F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1843F34CD870B329_METHOD_3_2C95AFAD0256302F_OFFSET))(this);
	}

	::System::Void Method_3_78C62398E94F0FB1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1843F34CD870B329_METHOD_3_78C62398E94F0FB1_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_1843F34CD870B329_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_4EED4B4A60EC4E72()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1843F34CD870B329_METHOD_3_4EED4B4A60EC4E72_OFFSET))(this);
	}

	::System::Boolean Method_3_56E601D7AD29E007(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_1843F34CD870B329_METHOD_3_56E601D7AD29E007_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_1843F34CD870B329___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}
};
