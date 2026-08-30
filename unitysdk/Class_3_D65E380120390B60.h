#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_D65E380120390B60_METHOD_3_57A1D28F65E6799B_OFFSET UNITYSDK_OFFSET(0x1CFF9D40)
#define CLASS_3_D65E380120390B60_METHOD_3_FCE92D332F1E367F_OFFSET UNITYSDK_OFFSET(0x1CFF9CD0)
#define CLASS_3_D65E380120390B60__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFF9D20)

inline static constexpr unsigned int Class_3_D65E380120390B60_TypeDefinitionIndex = 23336;

class Class_3_D65E380120390B60 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* NIEFDEJOIID; // 0x18
	::RPG::GameCore::DynamicFloat* MIOOGEBNBGL; // 0x20
	::Il2CppArray<::System::String*>* MDLOPBMGFMP; // 0x28
	::RPG::GameCore::TargetEvaluator* LMHLJEKNHOK; // 0x30
	::System::Boolean DKKNBKPNJBN; // 0x38
	::System::Boolean FFOHNAEBLEK; // 0x39
	::RPG::GameCore::PropertyModifyFunction DEOCMFOJHAM; // 0x3C
	::RPG::GameCore::PropertyModifyFunction HJOALLKGNGP; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D65E380120390B60__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_FCE92D332F1E367F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_D65E380120390B60*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_D65E380120390B60*&))((::PBYTE)hIl2Cpp + CLASS_3_D65E380120390B60_METHOD_3_FCE92D332F1E367F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_57A1D28F65E6799B(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_D65E380120390B60* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_D65E380120390B60*))((::PBYTE)hIl2Cpp + CLASS_3_D65E380120390B60_METHOD_3_57A1D28F65E6799B_OFFSET))(a1, a2);
	}
};
