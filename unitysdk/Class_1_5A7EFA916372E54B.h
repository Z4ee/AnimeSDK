#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/VideoQuality.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigVideoQualitySetting; }
namespace System { class String; }

#define CLASS_1_5A7EFA916372E54B_METHOD_1_49E70F20D17090F2_OFFSET UNITYSDK_OFFSET(0x16B173D0)
#define CLASS_1_5A7EFA916372E54B_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x16B17380)
#define CLASS_1_5A7EFA916372E54B_METHOD_1_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x16B17730)
#define CLASS_1_5A7EFA916372E54B__CCTOR_OFFSET UNITYSDK_OFFSET(0x16B17370)

inline static constexpr unsigned int Class_1_5A7EFA916372E54B_TypeDefinitionIndex = 57009;

class Class_1_5A7EFA916372E54B : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigVideoQualitySetting** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigVideoQualitySetting**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5A7EFA916372E54B_TypeDefinitionIndex)->GetStaticField(0x441C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5A7EFA916372E54B__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5A7EFA916372E54B_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::MoleMole::Config::VideoQuality Method_1_49E70F20D17090F2(::System::String* a1, ::MoleMole::Config::VideoQuality a2)
	{
		return ((::MoleMole::Config::VideoQuality(*)(::System::String*, ::MoleMole::Config::VideoQuality))((::PBYTE)hIl2Cpp + CLASS_1_5A7EFA916372E54B_METHOD_1_49E70F20D17090F2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_97D83E4CB3B11935()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5A7EFA916372E54B_METHOD_1_97D83E4CB3B11935_OFFSET))();
	}
};
