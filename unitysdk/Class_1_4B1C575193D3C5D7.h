#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigGachaPerformanceLights; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_4B1C575193D3C5D7_METHOD_1_49DFA39A30A44449_OFFSET UNITYSDK_OFFSET(0x1337C340)
#define CLASS_1_4B1C575193D3C5D7_METHOD_1_502A81344CAEE4A4_OFFSET UNITYSDK_OFFSET(0x1337C250)
#define CLASS_1_4B1C575193D3C5D7_METHOD_1_88051A3E248D4B62_OFFSET UNITYSDK_OFFSET(0x1337C240)
#define CLASS_1_4B1C575193D3C5D7_METHOD_1_8DE092A68CA81B19_OFFSET UNITYSDK_OFFSET(0x1337C560)

inline static constexpr unsigned int Class_1_4B1C575193D3C5D7_TypeDefinitionIndex = 54026;

class Class_1_4B1C575193D3C5D7 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigGachaPerformanceLights** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigGachaPerformanceLights**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4B1C575193D3C5D7_TypeDefinitionIndex)->GetStaticField(0x38940);
	}

	static ::System::Void Method_1_88051A3E248D4B62(::MoleMole::Config::ConfigGachaPerformanceLights* a1)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigGachaPerformanceLights*))((::PBYTE)hIl2Cpp + CLASS_1_4B1C575193D3C5D7_METHOD_1_88051A3E248D4B62_OFFSET))(a1);
	}

	static ::System::Void Method_1_502A81344CAEE4A4(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4B1C575193D3C5D7_METHOD_1_502A81344CAEE4A4_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Config::ConfigGachaPerformanceLights* Method_1_8DE092A68CA81B19()
	{
		return ((::MoleMole::Config::ConfigGachaPerformanceLights*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4B1C575193D3C5D7_METHOD_1_8DE092A68CA81B19_OFFSET))();
	}

	static ::System::Void Method_1_49DFA39A30A44449(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_4B1C575193D3C5D7_METHOD_1_49DFA39A30A44449_OFFSET))(a1, a2);
	}
};
