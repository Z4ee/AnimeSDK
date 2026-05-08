#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C5527D115E3A4384.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class SerilizedBounds; }
namespace MoleMole { class UIThreeDMapElement_LocalPlayerContext; }
namespace MoleMole::Battle { class Entity; }

#define CLASS_3_12A3AC5F578BFE26_METHOD_3_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0x1139AB70)
#define CLASS_3_12A3AC5F578BFE26_METHOD_3_1B37A84876315E07_OFFSET UNITYSDK_OFFSET(0x1139B460)
#define CLASS_3_12A3AC5F578BFE26_METHOD_3_1C298FA6BB9350FA_OFFSET UNITYSDK_OFFSET(0x1139A7E0)
#define CLASS_3_12A3AC5F578BFE26_METHOD_3_52F53464E42975CF_OFFSET UNITYSDK_OFFSET(0x1139C4D0)
#define CLASS_3_12A3AC5F578BFE26_METHOD_3_66CC9828DB1F478F_OFFSET UNITYSDK_OFFSET(0x1139A9D0)
#define CLASS_3_12A3AC5F578BFE26_METHOD_3_6E6682ED9FD6F719_OFFSET UNITYSDK_OFFSET(0x1139C560)
#define CLASS_3_12A3AC5F578BFE26_METHOD_3_7F8A507975D1E019_OFFSET UNITYSDK_OFFSET(0x1139A750)
#define CLASS_3_12A3AC5F578BFE26_METHOD_3_823422828276EFD9_OFFSET UNITYSDK_OFFSET(0x1139B320)
#define CLASS_3_12A3AC5F578BFE26_METHOD_3_83E9D75146743E78_OFFSET UNITYSDK_OFFSET(0x1139C520)
#define CLASS_3_12A3AC5F578BFE26_METHOD_3_BB2928BEC244DEB7_OFFSET UNITYSDK_OFFSET(0x1139C4A0)
#define CLASS_3_12A3AC5F578BFE26_METHOD_3_DAD17F595B040FAB_OFFSET UNITYSDK_OFFSET(0x1139B330)
#define CLASS_3_12A3AC5F578BFE26_METHOD_3_F434636093AEB743_OFFSET UNITYSDK_OFFSET(0x1139AD10)
#define CLASS_3_12A3AC5F578BFE26_METHOD_3_F87C737EC20497CB_OFFSET UNITYSDK_OFFSET(0x1139ADF0)
#define CLASS_3_12A3AC5F578BFE26__CTOR_OFFSET UNITYSDK_OFFSET(0x1139B2C0)

inline static constexpr unsigned int Class_3_12A3AC5F578BFE26_TypeDefinitionIndex = 37946;

class Class_3_12A3AC5F578BFE26 : public ::Class_2_C5527D115E3A4384<::MoleMole::UIThreeDMapElement_LocalPlayerContext*>
{
public:
	::MoleMole::SerilizedBounds* Field_3_4; // 0x70
	::MoleMole::Battle::Entity* Field_3_0; // 0x78
	::UnityEngine::Vector3 Field_3_1; // 0x80
	::UnityEngine::Vector3 Field_3_2; // 0x8C
	::System::Single Field_3_3; // 0x98
	::System::Boolean Field_3_5; // 0x9C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_12A3AC5F578BFE26__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_7F8A507975D1E019(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_3_12A3AC5F578BFE26_METHOD_3_7F8A507975D1E019_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_1C298FA6BB9350FA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_12A3AC5F578BFE26_METHOD_3_1C298FA6BB9350FA_OFFSET))(this);
	}

	::System::Void Method_3_66CC9828DB1F478F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_12A3AC5F578BFE26_METHOD_3_66CC9828DB1F478F_OFFSET))(this);
	}

	::System::Void Method_3_092CD57850778EFC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_12A3AC5F578BFE26_METHOD_3_092CD57850778EFC_OFFSET))(this);
	}

	::System::Void Method_3_F434636093AEB743(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_12A3AC5F578BFE26_METHOD_3_F434636093AEB743_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_823422828276EFD9(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_12A3AC5F578BFE26_METHOD_3_823422828276EFD9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_DAD17F595B040FAB(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_12A3AC5F578BFE26_METHOD_3_DAD17F595B040FAB_OFFSET))(this, a1);
	}

	::System::Void Method_3_F87C737EC20497CB(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_12A3AC5F578BFE26_METHOD_3_F87C737EC20497CB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_BB2928BEC244DEB7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_12A3AC5F578BFE26_METHOD_3_BB2928BEC244DEB7_OFFSET))(this);
	}

	::System::Void Method_3_52F53464E42975CF(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_3_12A3AC5F578BFE26_METHOD_3_52F53464E42975CF_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_83E9D75146743E78()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_12A3AC5F578BFE26_METHOD_3_83E9D75146743E78_OFFSET))(this);
	}

	::System::Void Method_3_6E6682ED9FD6F719()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_12A3AC5F578BFE26_METHOD_3_6E6682ED9FD6F719_OFFSET))(this);
	}

	::System::Void Method_3_1B37A84876315E07(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_12A3AC5F578BFE26_METHOD_3_1B37A84876315E07_OFFSET))(this, a1, a2, a3);
	}
};
