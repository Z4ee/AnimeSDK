#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E4CE4FBD525B8590.h"
#include "unitysdk/MoleMole/ESettingPlatform.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigCoopVFXQualitySetting; }
namespace MoleMole::Config { class CoopVFXConfig; }

#define CLASS_1_C4E30342E83288D5_METHOD_1_1DB784163F7E1902_OFFSET UNITYSDK_OFFSET(0x1226A8C0)
#define CLASS_1_C4E30342E83288D5_METHOD_1_36E15DA17A36554D_OFFSET UNITYSDK_OFFSET(0x1226A650)
#define CLASS_1_C4E30342E83288D5_METHOD_1_6FC023F46578ADA0_OFFSET UNITYSDK_OFFSET(0x1226A0F0)
#define CLASS_1_C4E30342E83288D5_METHOD_1_895E1070BE098C86_OFFSET UNITYSDK_OFFSET(0x1226A800)
#define CLASS_1_C4E30342E83288D5_METHOD_1_D0C294E776D34A4F_OFFSET UNITYSDK_OFFSET(0x1226A090)
#define CLASS_1_C4E30342E83288D5_METHOD_1_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x1226A470)
#define CLASS_1_C4E30342E83288D5_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x1226A010)
#define CLASS_1_C4E30342E83288D5__CCTOR_OFFSET UNITYSDK_OFFSET(0x12269FF0)

inline static constexpr unsigned int Class_1_C4E30342E83288D5_TypeDefinitionIndex = 38347;

class Class_1_C4E30342E83288D5 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigCoopVFXQualitySetting** StaticGet_Field_1_1()
	{
		return (::MoleMole::Config::ConfigCoopVFXQualitySetting**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C4E30342E83288D5_TypeDefinitionIndex)->GetStaticField(0x442D0);
	}
	static ::MoleMole::Config::CoopVFXConfig** StaticGet_Field_1_2()
	{
		return (::MoleMole::Config::CoopVFXConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C4E30342E83288D5_TypeDefinitionIndex)->GetStaticField(0x442D8);
	}
	static ::Enum_3_E4CE4FBD525B8590* StaticGet_Field_1_0()
	{
		return (::Enum_3_E4CE4FBD525B8590*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C4E30342E83288D5_TypeDefinitionIndex)->GetStaticField(0x103F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C4E30342E83288D5__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C4E30342E83288D5_METHOD_1_F730968E2645E14B_OFFSET))();
	}

	static ::System::Void Method_1_D0C294E776D34A4F(::MoleMole::Config::CoopVFXConfig* a1)
	{
		return ((::System::Void(*)(::MoleMole::Config::CoopVFXConfig*))((::PBYTE)hIl2Cpp + CLASS_1_C4E30342E83288D5_METHOD_1_D0C294E776D34A4F_OFFSET))(a1);
	}

	static ::MoleMole::Config::CoopVFXConfig* Method_1_6FC023F46578ADA0(::Enum_3_E4CE4FBD525B8590 a1)
	{
		return ((::MoleMole::Config::CoopVFXConfig*(*)(::Enum_3_E4CE4FBD525B8590))((::PBYTE)hIl2Cpp + CLASS_1_C4E30342E83288D5_METHOD_1_6FC023F46578ADA0_OFFSET))(a1);
	}

	static ::System::Void Method_1_895E1070BE098C86(::Enum_3_E4CE4FBD525B8590 a1)
	{
		return ((::System::Void(*)(::Enum_3_E4CE4FBD525B8590))((::PBYTE)hIl2Cpp + CLASS_1_C4E30342E83288D5_METHOD_1_895E1070BE098C86_OFFSET))(a1);
	}

	static ::System::Void Method_1_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C4E30342E83288D5_METHOD_1_EDFD49C942C75D6C_OFFSET))();
	}

	static ::System::Boolean Method_1_36E15DA17A36554D(::MoleMole::ESettingPlatform a1, ::Enum_3_E4CE4FBD525B8590 a2, ::MoleMole::Config::CoopVFXConfig*& a3)
	{
		return ((::System::Boolean(*)(::MoleMole::ESettingPlatform, ::Enum_3_E4CE4FBD525B8590, ::MoleMole::Config::CoopVFXConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_C4E30342E83288D5_METHOD_1_36E15DA17A36554D_OFFSET))(a1, a2, a3);
	}

	static ::MoleMole::Config::CoopVFXConfig* Method_1_1DB784163F7E1902()
	{
		return ((::MoleMole::Config::CoopVFXConfig*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C4E30342E83288D5_METHOD_1_1DB784163F7E1902_OFFSET))();
	}
};
