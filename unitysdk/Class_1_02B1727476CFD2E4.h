#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigWindFieldProperty; }
namespace MoleMole::Config { class WindFieldConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_02B1727476CFD2E4_METHOD_1_49DFA39A30A44449_OFFSET UNITYSDK_OFFSET(0xD91D450)
#define CLASS_1_02B1727476CFD2E4_METHOD_1_502A81344CAEE4A4_OFFSET UNITYSDK_OFFSET(0xD91D360)
#define CLASS_1_02B1727476CFD2E4_METHOD_1_A881CC041F14022B_OFFSET UNITYSDK_OFFSET(0xD91D670)
#define CLASS_1_02B1727476CFD2E4_METHOD_1_EA3E618ADD1285C3_OFFSET UNITYSDK_OFFSET(0xD91D690)
#define CLASS_1_02B1727476CFD2E4_METHOD_1_EA6AF3E849CE5108_OFFSET UNITYSDK_OFFSET(0xD91D680)

inline static constexpr unsigned int Class_1_02B1727476CFD2E4_TypeDefinitionIndex = 60295;

class Class_1_02B1727476CFD2E4 : public ::System::Object
{
public:
	static ::MoleMole::Config::WindFieldConfig** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::WindFieldConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_02B1727476CFD2E4_TypeDefinitionIndex)->GetStaticField(0x4B2B0);
	}

	static ::System::Void Method_1_502A81344CAEE4A4(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_02B1727476CFD2E4_METHOD_1_502A81344CAEE4A4_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_A881CC041F14022B(::MoleMole::Config::WindFieldConfig* a1)
	{
		return ((::System::Void(*)(::MoleMole::Config::WindFieldConfig*))((::PBYTE)hIl2Cpp + CLASS_1_02B1727476CFD2E4_METHOD_1_A881CC041F14022B_OFFSET))(a1);
	}

	static ::System::Void Method_1_49DFA39A30A44449(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_02B1727476CFD2E4_METHOD_1_49DFA39A30A44449_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::WindFieldConfig* Method_1_EA6AF3E849CE5108()
	{
		return ((::MoleMole::Config::WindFieldConfig*(*)())((::PBYTE)hIl2Cpp + CLASS_1_02B1727476CFD2E4_METHOD_1_EA6AF3E849CE5108_OFFSET))();
	}

	static ::MoleMole::Config::ConfigWindFieldProperty* Method_1_EA3E618ADD1285C3(::System::String* a1)
	{
		return ((::MoleMole::Config::ConfigWindFieldProperty*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_02B1727476CFD2E4_METHOD_1_EA3E618ADD1285C3_OFFSET))(a1);
	}
};
