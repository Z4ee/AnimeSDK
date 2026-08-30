#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D294488719556168;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_7EA45D2647F35CDD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC083A40)
#define CLASS_2_7EA45D2647F35CDD___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC083A80)
#define CLASS_2_7EA45D2647F35CDD___C___ONFIRSTTIMESETUPDRAWPILE_B__96_0_OFFSET UNITYSDK_OFFSET(0xC083A90)

inline static constexpr unsigned int Class_2_7EA45D2647F35CDD___c_TypeDefinitionIndex = 56181;

class Class_2_7EA45D2647F35CDD___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_1_D294488719556168*>** StaticGet___9__96_0()
	{
		return (::System::Comparison_1<::Class_1_D294488719556168*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7EA45D2647F35CDD___c_TypeDefinitionIndex)->GetStaticField(0xEB50);
	}
	static ::Class_2_7EA45D2647F35CDD___c** StaticGet___9()
	{
		return (::Class_2_7EA45D2647F35CDD___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7EA45D2647F35CDD___c_TypeDefinitionIndex)->GetStaticField(0xEB58);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_7EA45D2647F35CDD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EA45D2647F35CDD___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __OnFirstTimeSetupDrawPile_b__96_0(::Class_1_D294488719556168* a1, ::Class_1_D294488719556168* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_D294488719556168*, ::Class_1_D294488719556168*))((::PBYTE)hIl2Cpp + CLASS_2_7EA45D2647F35CDD___C___ONFIRSTTIMESETUPDRAWPILE_B__96_0_OFFSET))(this, a1, a2);
	}
};
