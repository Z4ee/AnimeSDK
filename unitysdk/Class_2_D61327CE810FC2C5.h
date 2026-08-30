#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_171F9D986BE70A7F.h"
#include "unitysdk/RPG/GameCore/FateContentParamType.h"

class Class_1_6CB9D8ECA6D8C71B;
namespace System { class String; }

#define CLASS_2_D61327CE810FC2C5_METHOD_2_D7F9E6355F164B8D_OFFSET UNITYSDK_OFFSET(0x18E2FD60)
#define CLASS_2_D61327CE810FC2C5_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x18E2FDC0)
#define CLASS_2_D61327CE810FC2C5_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18E2FE10)
#define CLASS_2_D61327CE810FC2C5__CTOR_OFFSET UNITYSDK_OFFSET(0x18E2FD50)

inline static constexpr unsigned int Class_2_D61327CE810FC2C5_TypeDefinitionIndex = 64203;

class Class_2_D61327CE810FC2C5 : public ::Class_1_171F9D986BE70A7F
{
public:
	::Class_1_6CB9D8ECA6D8C71B* COKDGBEABHP; // 0x10
	::RPG::GameCore::FateContentParamType KECDAFAFJFA; // 0x18

	::System::Void _ctor(::RPG::GameCore::FateContentParamType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateContentParamType))((::PBYTE)hIl2Cpp + CLASS_2_D61327CE810FC2C5__CTOR_OFFSET))(this, a1);
	}

	::System::Double Method_2_D7F9E6355F164B8D()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D61327CE810FC2C5_METHOD_2_D7F9E6355F164B8D_OFFSET))(this);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_6CB9D8ECA6D8C71B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6CB9D8ECA6D8C71B*))((::PBYTE)hIl2Cpp + CLASS_2_D61327CE810FC2C5_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D61327CE810FC2C5_TOSTRING_OFFSET))(this);
	}
};
