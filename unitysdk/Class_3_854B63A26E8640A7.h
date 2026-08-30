#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_854B63A26E8640A7_METHOD_3_14F2FC46FC687955_OFFSET UNITYSDK_OFFSET(0x1D32C6C0)
#define CLASS_3_854B63A26E8640A7_METHOD_3_41307200E9DE3ABB_OFFSET UNITYSDK_OFFSET(0x1D32C800)
#define CLASS_3_854B63A26E8640A7__CTOR_OFFSET UNITYSDK_OFFSET(0x1D32C770)

inline static constexpr unsigned int Class_3_854B63A26E8640A7_TypeDefinitionIndex = 22357;

class Class_3_854B63A26E8640A7 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* MAGLCBLICBG; // 0x18
	::System::String* BCKBHPNAMKJ; // 0x20
	::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* HMOBDKGBECE; // 0x28
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x30
	::RPG::GameCore::DynamicFloat* CKLLHFKPACB; // 0x38
	::RPG::GameCore::DynamicString* GEIGNKLEOBD; // 0x40
	::RPG::GameCore::TargetEvaluator* MAGHKLPOJJJ; // 0x48
	::RPG::GameCore::JsonEnum* PPLIJIOLFNL; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_854B63A26E8640A7__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_14F2FC46FC687955(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_854B63A26E8640A7*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_854B63A26E8640A7*&))((::PBYTE)hIl2Cpp + CLASS_3_854B63A26E8640A7_METHOD_3_14F2FC46FC687955_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_41307200E9DE3ABB(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_854B63A26E8640A7* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_854B63A26E8640A7*))((::PBYTE)hIl2Cpp + CLASS_3_854B63A26E8640A7_METHOD_3_41307200E9DE3ABB_OFFSET))(a1, a2);
	}
};
