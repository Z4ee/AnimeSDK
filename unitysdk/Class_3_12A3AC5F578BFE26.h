#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_22A27517C270DC2B.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class SerilizedBounds; }
namespace MoleMole { class UIThreeDMapElement_LocalPlayerContext; }
namespace MoleMole::Battle { class Entity; }

#define CLASS_3_12A3AC5F578BFE26_METHOD_3_10B63366FA27F87D_OFFSET UNITYSDK_OFFSET(0x164B08C0)
#define CLASS_3_12A3AC5F578BFE26_METHOD_3_1B37A84876315E07_OFFSET UNITYSDK_OFFSET(0x164AF940)
#define CLASS_3_12A3AC5F578BFE26_METHOD_3_1C298FA6BB9350FA_OFFSET UNITYSDK_OFFSET(0x164AEF30)
#define CLASS_3_12A3AC5F578BFE26_METHOD_3_3E058A8B3089DC74_OFFSET UNITYSDK_OFFSET(0x164AEEA0)
#define CLASS_3_12A3AC5F578BFE26_METHOD_3_823422828276EFD9_OFFSET UNITYSDK_OFFSET(0x164AF930)
#define CLASS_3_12A3AC5F578BFE26_METHOD_3_96FC20189A102FEF_OFFSET UNITYSDK_OFFSET(0x164B0840)
#define CLASS_3_12A3AC5F578BFE26_METHOD_3_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0x164AF120)
#define CLASS_3_12A3AC5F578BFE26_METHOD_3_BB2928BEC244DEB7_OFFSET UNITYSDK_OFFSET(0x164B0800)
#define CLASS_3_12A3AC5F578BFE26_METHOD_3_C8E2469222842786_OFFSET UNITYSDK_OFFSET(0x164B0880)
#define CLASS_3_12A3AC5F578BFE26_METHOD_3_DAD17F595B040FAB_OFFSET UNITYSDK_OFFSET(0x164B0910)
#define CLASS_3_12A3AC5F578BFE26_METHOD_3_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0x164AF2B0)
#define CLASS_3_12A3AC5F578BFE26_METHOD_3_F434636093AEB743_OFFSET UNITYSDK_OFFSET(0x164AF450)
#define CLASS_3_12A3AC5F578BFE26_METHOD_3_F87C737EC20497CB_OFFSET UNITYSDK_OFFSET(0x164AF520)
#define CLASS_3_12A3AC5F578BFE26__CTOR_OFFSET UNITYSDK_OFFSET(0x164AF8D0)

inline static constexpr unsigned int Class_3_12A3AC5F578BFE26_TypeDefinitionIndex = 85469;

class Class_3_12A3AC5F578BFE26 : public ::Class_2_22A27517C270DC2B<::MoleMole::UIThreeDMapElement_LocalPlayerContext*>
{
public:
	::MoleMole::Battle::Entity* Field_3_1; // 0x70
	::MoleMole::SerilizedBounds* Field_3_5; // 0x78
	::System::Boolean Field_3_4; // 0x80
	::UnityEngine::Vector3 Field_3_7; // 0x84
	::UnityEngine::Vector3 Field_3_0; // 0x90
	::System::Single Field_3_6; // 0x9C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_12A3AC5F578BFE26__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_3E058A8B3089DC74(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_3_12A3AC5F578BFE26_METHOD_3_3E058A8B3089DC74_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_1C298FA6BB9350FA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_12A3AC5F578BFE26_METHOD_3_1C298FA6BB9350FA_OFFSET))(this);
	}

	::System::Void Method_3_B43C848B078B3C34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_12A3AC5F578BFE26_METHOD_3_B43C848B078B3C34_OFFSET))(this);
	}

	::System::Void Method_3_EAD10B3E55E2C4C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_12A3AC5F578BFE26_METHOD_3_EAD10B3E55E2C4C5_OFFSET))(this);
	}

	::System::Void Method_3_F434636093AEB743(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_12A3AC5F578BFE26_METHOD_3_F434636093AEB743_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_823422828276EFD9(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_12A3AC5F578BFE26_METHOD_3_823422828276EFD9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_F87C737EC20497CB(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_12A3AC5F578BFE26_METHOD_3_F87C737EC20497CB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_BB2928BEC244DEB7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_12A3AC5F578BFE26_METHOD_3_BB2928BEC244DEB7_OFFSET))(this);
	}

	::System::Boolean Method_3_96FC20189A102FEF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_12A3AC5F578BFE26_METHOD_3_96FC20189A102FEF_OFFSET))(this);
	}

	::System::Void Method_3_C8E2469222842786()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_12A3AC5F578BFE26_METHOD_3_C8E2469222842786_OFFSET))(this);
	}

	::System::Void Method_3_10B63366FA27F87D(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_3_12A3AC5F578BFE26_METHOD_3_10B63366FA27F87D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_DAD17F595B040FAB(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_12A3AC5F578BFE26_METHOD_3_DAD17F595B040FAB_OFFSET))(this, a1);
	}

	::System::Void Method_3_1B37A84876315E07(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_12A3AC5F578BFE26_METHOD_3_1B37A84876315E07_OFFSET))(this, a1, a2, a3);
	}
};
