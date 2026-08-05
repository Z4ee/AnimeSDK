#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EBCA2A4357C4C8BF_290.h"
#include "unitysdk/Share/EAffixLevel.h"
#include "unitysdk/Share/EArcanaType.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_968.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_11995F30C0EF4036_2_METHOD_2_6B4964DB47EED0BC_OFFSET UNITYSDK_OFFSET(0x176FF790)
#define CLASS_2_11995F30C0EF4036_2_METHOD_2_A3D94657D95A2B5E_OFFSET UNITYSDK_OFFSET(0x176FF510)
#define CLASS_2_11995F30C0EF4036_2_METHOD_2_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x176FF520)
#define CLASS_2_11995F30C0EF4036_2_METHOD_2_E84F19001ABFA9DF_OFFSET UNITYSDK_OFFSET(0x176FF570)
#define CLASS_2_11995F30C0EF4036_2__CTOR_OFFSET UNITYSDK_OFFSET(0x176FF500)

inline static constexpr unsigned int Class_2_11995F30C0EF4036_2_TypeDefinitionIndex = 16667;

class Class_2_11995F30C0EF4036_2 : public ::Class_1_EBCA2A4357C4C8BF_290
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_2_0; // 0x58

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_968 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_968, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_11995F30C0EF4036_2__CTOR_OFFSET))(this, a1, a2);
	}

	::Share::EAffixLevel Method_2_A3D94657D95A2B5E()
	{
		return ((::Share::EAffixLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_11995F30C0EF4036_2_METHOD_2_A3D94657D95A2B5E_OFFSET))(this);
	}

	::System::Void Method_2_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_11995F30C0EF4036_2_METHOD_2_DE52BD42C4B0B772_OFFSET))(this);
	}

	::Share::EArcanaType Method_2_6B4964DB47EED0BC()
	{
		return ((::Share::EArcanaType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_11995F30C0EF4036_2_METHOD_2_6B4964DB47EED0BC_OFFSET))(this);
	}

	::System::Void Method_2_E84F19001ABFA9DF(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_11995F30C0EF4036_2_METHOD_2_E84F19001ABFA9DF_OFFSET))(this, a1);
	}
};
