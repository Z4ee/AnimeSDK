#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_68C34B5C1C40C2FF;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TurnInsertActionUIConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_83EA74218EFDDF83_METHOD_3_0C897AFF22BC8629_OFFSET UNITYSDK_OFFSET(0x1D0AFEB0)
#define CLASS_3_83EA74218EFDDF83_METHOD_3_BA57C68CB1B6BDFC_OFFSET UNITYSDK_OFFSET(0x1D0DD8A0)
#define CLASS_3_83EA74218EFDDF83__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0AFDF0)

inline static constexpr unsigned int Class_3_83EA74218EFDDF83_TypeDefinitionIndex = 22358;

class Class_3_83EA74218EFDDF83 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* MAGLCBLICBG; // 0x18
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
	::RPG::GameCore::JsonEnum* AGOHEFBOPNO; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicString*>* BGCBMIGIAMM; // 0x30
	::Class_2_68C34B5C1C40C2FF* IHHIHDEHBIJ; // 0x38
	::Il2CppArray<::RPG::GameCore::DynamicString*>* PJGLPMGOLPK; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* FMCJJBALBEN; // 0x48
	::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* HMOBDKGBECE; // 0x50
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* OMFLDIGGPHC; // 0x58
	::RPG::GameCore::DynamicFloat* CKLLHFKPACB; // 0x60
	::RPG::GameCore::TurnInsertActionUIConfig* OLOKHEMMGOH; // 0x68
	::RPG::GameCore::TargetEvaluator* MAGHKLPOJJJ; // 0x70
	::System::Boolean LENIKLCJOHE; // 0x78
	::System::Boolean LGKDFBLIOBP; // 0x79

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_83EA74218EFDDF83__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_BA57C68CB1B6BDFC(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_83EA74218EFDDF83*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_83EA74218EFDDF83*&))((::PBYTE)hIl2Cpp + CLASS_3_83EA74218EFDDF83_METHOD_3_BA57C68CB1B6BDFC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_0C897AFF22BC8629(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_83EA74218EFDDF83* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_83EA74218EFDDF83*))((::PBYTE)hIl2Cpp + CLASS_3_83EA74218EFDDF83_METHOD_3_0C897AFF22BC8629_OFFSET))(a1, a2);
	}
};
