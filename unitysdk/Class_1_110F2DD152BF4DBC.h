#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/Config/EVariantElement.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigBuffMisc; }
namespace MoleMole::Config { class ConfigFrozenBuff; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_110F2DD152BF4DBC_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x109C4550)
#define CLASS_1_110F2DD152BF4DBC_METHOD_1_37841FA695EAEAEC_OFFSET UNITYSDK_OFFSET(0x109C4370)
#define CLASS_1_110F2DD152BF4DBC_METHOD_1_66DB97A0251F0FC7_OFFSET UNITYSDK_OFFSET(0x109C4470)
#define CLASS_1_110F2DD152BF4DBC_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0x109C4760)
#define CLASS_1_110F2DD152BF4DBC_METHOD_1_D35F896B53610416_OFFSET UNITYSDK_OFFSET(0x109C4530)
#define CLASS_1_110F2DD152BF4DBC_METHOD_1_E83707D0A7972175_OFFSET UNITYSDK_OFFSET(0x109C4540)

inline static constexpr unsigned int Class_1_110F2DD152BF4DBC_TypeDefinitionIndex = 51097;

class Class_1_110F2DD152BF4DBC : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigBuffMisc** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigBuffMisc**)Il2CppClass::FromTypeDefinitionIndex(Class_1_110F2DD152BF4DBC_TypeDefinitionIndex)->GetStaticField(0x341B0);
	}

	static ::MoleMole::Config::ConfigFrozenBuff* Method_1_37841FA695EAEAEC(::MoleMole::Config::EVariantElement a1)
	{
		return ((::MoleMole::Config::ConfigFrozenBuff*(*)(::MoleMole::Config::EVariantElement))((::PBYTE)hIl2Cpp + CLASS_1_110F2DD152BF4DBC_METHOD_1_37841FA695EAEAEC_OFFSET))(a1);
	}

	static ::System::Single Method_1_66DB97A0251F0FC7(::MoleMole::Config::DamageElementType a1, ::MoleMole::Config::EVariantElement a2)
	{
		return ((::System::Single(*)(::MoleMole::Config::DamageElementType, ::MoleMole::Config::EVariantElement))((::PBYTE)hIl2Cpp + CLASS_1_110F2DD152BF4DBC_METHOD_1_66DB97A0251F0FC7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D35F896B53610416(::MoleMole::Config::ConfigBuffMisc* a1)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigBuffMisc*))((::PBYTE)hIl2Cpp + CLASS_1_110F2DD152BF4DBC_METHOD_1_D35F896B53610416_OFFSET))(a1);
	}

	static ::MoleMole::Config::ConfigBuffMisc* Method_1_E83707D0A7972175()
	{
		return ((::MoleMole::Config::ConfigBuffMisc*(*)())((::PBYTE)hIl2Cpp + CLASS_1_110F2DD152BF4DBC_METHOD_1_E83707D0A7972175_OFFSET))();
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_110F2DD152BF4DBC_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_110F2DD152BF4DBC_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}
};
