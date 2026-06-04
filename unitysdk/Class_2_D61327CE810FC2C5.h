#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_171F9D986BE70A7F.h"
#include "unitysdk/RPG/GameCore/FateContentParamType.h"

class Class_1_6CB9D8ECA6D8C71B;
namespace System { class String; }

#define CLASS_2_D61327CE810FC2C5_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0xA53BB70)
#define CLASS_2_D61327CE810FC2C5_METHOD_2_FAA803CD1B57CA72_OFFSET UNITYSDK_OFFSET(0xA53BB10)
#define CLASS_2_D61327CE810FC2C5_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA53BBC0)
#define CLASS_2_D61327CE810FC2C5__CTOR_OFFSET UNITYSDK_OFFSET(0xA53BB00)
#define CLASS_2_D61327CE810FC2C5___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA53BC70)

inline static constexpr unsigned int Class_2_D61327CE810FC2C5_TypeDefinitionIndex = 59937;

class Class_2_D61327CE810FC2C5 : public ::Class_1_171F9D986BE70A7F
{
public:
	::Class_1_6CB9D8ECA6D8C71B* Field_2_0; // 0x10
	::RPG::GameCore::FateContentParamType Field_2_1; // 0x18

	::System::Void _ctor(::RPG::GameCore::FateContentParamType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateContentParamType))((::PBYTE)hIl2Cpp + CLASS_2_D61327CE810FC2C5__CTOR_OFFSET))(this, a1);
	}

	::System::Double Method_2_FAA803CD1B57CA72()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D61327CE810FC2C5_METHOD_2_FAA803CD1B57CA72_OFFSET))(this);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_6CB9D8ECA6D8C71B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6CB9D8ECA6D8C71B*))((::PBYTE)hIl2Cpp + CLASS_2_D61327CE810FC2C5_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D61327CE810FC2C5_TOSTRING_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D61327CE810FC2C5___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
