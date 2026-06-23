#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EtherEyesObjectType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEtherEyes; }
namespace MoleMole::Config { class EtherEyesObjectTypeDefaultConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_DC66303BD13D3AA5_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x1CC14CC0)
#define CLASS_1_DC66303BD13D3AA5_METHOD_1_3D3EAB578B9C533D_OFFSET UNITYSDK_OFFSET(0x1CC14F20)
#define CLASS_1_DC66303BD13D3AA5_METHOD_1_62432F558F78AF95_OFFSET UNITYSDK_OFFSET(0x1CC14ED0)
#define CLASS_1_DC66303BD13D3AA5_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0x1CC15080)

inline static constexpr unsigned int Class_1_DC66303BD13D3AA5_TypeDefinitionIndex = 72786;

class Class_1_DC66303BD13D3AA5 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigEtherEyes** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigEtherEyes**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DC66303BD13D3AA5_TypeDefinitionIndex)->GetStaticField(0x387C0);
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_DC66303BD13D3AA5_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::ConfigEtherEyes* Method_1_62432F558F78AF95()
	{
		return ((::MoleMole::Config::ConfigEtherEyes*(*)())((::PBYTE)hIl2Cpp + CLASS_1_DC66303BD13D3AA5_METHOD_1_62432F558F78AF95_OFFSET))();
	}

	static ::MoleMole::Config::EtherEyesObjectTypeDefaultConfig* Method_1_3D3EAB578B9C533D(::MoleMole::Config::EtherEyesObjectType a1)
	{
		return ((::MoleMole::Config::EtherEyesObjectTypeDefaultConfig*(*)(::MoleMole::Config::EtherEyesObjectType))((::PBYTE)hIl2Cpp + CLASS_1_DC66303BD13D3AA5_METHOD_1_3D3EAB578B9C533D_OFFSET))(a1);
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DC66303BD13D3AA5_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}
};
