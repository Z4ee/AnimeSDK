#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_3.h"
#include "unitysdk/MoleMole/Config/ConfigSetSection_Order.h"

class Class_1_43BD383C98B4C0C5_25;
class Class_1_C376DB68B1C74261;
class Class_1_E5B7864412CDC074;
class Class_2_F5737224A0253470;
class Class_5_FCAF801AC482D3B5;
namespace MoleMole { class UIHollowChessboard3DModelController; }
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }
namespace System { class String; }

#define CLASS_3_F78D134D9EB09E5B_METHOD_3_1C1D8F032CA6010E_OFFSET UNITYSDK_OFFSET(0x1558C030)
#define CLASS_3_F78D134D9EB09E5B_METHOD_3_33F3DD05385CAF15_OFFSET UNITYSDK_OFFSET(0x1558BE80)
#define CLASS_3_F78D134D9EB09E5B_METHOD_3_4783115219892EE4_OFFSET UNITYSDK_OFFSET(0x1558BF40)
#define CLASS_3_F78D134D9EB09E5B_METHOD_3_CC9338786C773E16_OFFSET UNITYSDK_OFFSET(0x1558BC10)
#define CLASS_3_F78D134D9EB09E5B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1558BE30)
#define CLASS_3_F78D134D9EB09E5B__CTOR_OFFSET UNITYSDK_OFFSET(0x1558BE20)

inline static constexpr unsigned int Class_3_F78D134D9EB09E5B_TypeDefinitionIndex = 64053;

class Class_3_F78D134D9EB09E5B : public ::Class_2_A48F3719AA1CF200_3
{
public:
	static ::System::String** StaticGet_Field_3_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F78D134D9EB09E5B_TypeDefinitionIndex)->GetStaticField(0x32410);
	}
	static ::System::String** StaticGet_Field_3_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F78D134D9EB09E5B_TypeDefinitionIndex)->GetStaticField(0x32418);
	}
	::MoleMole::UIHollowChessboard3DModelController* Field_3_2; // 0x28
	::Class_2_F5737224A0253470* Field_3_4; // 0x30
	::Class_1_E5B7864412CDC074* Field_3_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F78D134D9EB09E5B__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F78D134D9EB09E5B__CCTOR_OFFSET))();
	}

	::System::Void Method_3_CC9338786C773E16(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_25* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_C376DB68B1C74261* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_25*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_C376DB68B1C74261*))((::PBYTE)hIl2Cpp + CLASS_3_F78D134D9EB09E5B_METHOD_3_CC9338786C773E16_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_5_FCAF801AC482D3B5* Method_3_33F3DD05385CAF15()
	{
		return ((::Class_5_FCAF801AC482D3B5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F78D134D9EB09E5B_METHOD_3_33F3DD05385CAF15_OFFSET))(this);
	}

	::System::Void Method_3_1C1D8F032CA6010E(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_25* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_C376DB68B1C74261* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_25*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_C376DB68B1C74261*))((::PBYTE)hIl2Cpp + CLASS_3_F78D134D9EB09E5B_METHOD_3_1C1D8F032CA6010E_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_5_FCAF801AC482D3B5* Method_3_4783115219892EE4(::MoleMole::Config::ConfigSetSection_Order a1)
	{
		return ((::Class_5_FCAF801AC482D3B5*(*)(::PVOID, ::MoleMole::Config::ConfigSetSection_Order))((::PBYTE)hIl2Cpp + CLASS_3_F78D134D9EB09E5B_METHOD_3_4783115219892EE4_OFFSET))(this, a1);
	}
};
