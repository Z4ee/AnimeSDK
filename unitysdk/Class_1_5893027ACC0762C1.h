#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigGachaPerformMisc_ItemRarity.h"
#include "unitysdk/MoleMole/Config/ConfigGachaTvResultGroupEffects.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigGachaPerformanceEffects; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5893027ACC0762C1_METHOD_1_0947F577F1E5AE4F_OFFSET UNITYSDK_OFFSET(0xF51C290)
#define CLASS_1_5893027ACC0762C1_METHOD_1_1C2D6C0712B91C96_OFFSET UNITYSDK_OFFSET(0xF51C090)
#define CLASS_1_5893027ACC0762C1_METHOD_1_8E2C129DE4FC3609_OFFSET UNITYSDK_OFFSET(0xF51C380)
#define CLASS_1_5893027ACC0762C1_METHOD_1_BC6395240CF08F5C_OFFSET UNITYSDK_OFFSET(0xF51C540)
#define CLASS_1_5893027ACC0762C1_METHOD_1_EA625BAEEEE1DE9F_OFFSET UNITYSDK_OFFSET(0xF51C280)

inline static constexpr unsigned int Class_1_5893027ACC0762C1_TypeDefinitionIndex = 53562;

class Class_1_5893027ACC0762C1 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigGachaPerformanceEffects** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigGachaPerformanceEffects**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5893027ACC0762C1_TypeDefinitionIndex)->GetStaticField(0x364A0);
	}

	static ::MoleMole::Config::ConfigGachaTvResultGroupEffects Method_1_1C2D6C0712B91C96(::System::Int32 a1, ::MoleMole::Config::ConfigGachaPerformMisc_ItemRarity a2)
	{
		return ((::MoleMole::Config::ConfigGachaTvResultGroupEffects(*)(::System::Int32, ::MoleMole::Config::ConfigGachaPerformMisc_ItemRarity))((::PBYTE)hIl2Cpp + CLASS_1_5893027ACC0762C1_METHOD_1_1C2D6C0712B91C96_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EA625BAEEEE1DE9F(::MoleMole::Config::ConfigGachaPerformanceEffects* a1)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigGachaPerformanceEffects*))((::PBYTE)hIl2Cpp + CLASS_1_5893027ACC0762C1_METHOD_1_EA625BAEEEE1DE9F_OFFSET))(a1);
	}

	static ::System::Void Method_1_0947F577F1E5AE4F(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5893027ACC0762C1_METHOD_1_0947F577F1E5AE4F_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_8E2C129DE4FC3609(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_5893027ACC0762C1_METHOD_1_8E2C129DE4FC3609_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::ConfigGachaPerformanceEffects* Method_1_BC6395240CF08F5C()
	{
		return ((::MoleMole::Config::ConfigGachaPerformanceEffects*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5893027ACC0762C1_METHOD_1_BC6395240CF08F5C_OFFSET))();
	}
};
