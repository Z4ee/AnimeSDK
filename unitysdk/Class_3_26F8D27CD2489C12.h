#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimRandomBubbleTalkInfoGroup; }

#define CLASS_3_26F8D27CD2489C12_METHOD_3_0C897AFF22BC8629_OFFSET UNITYSDK_OFFSET(0x1C857850)
#define CLASS_3_26F8D27CD2489C12_METHOD_3_1FEC466530D44C17_OFFSET UNITYSDK_OFFSET(0x1C857800)
#define CLASS_3_26F8D27CD2489C12__CTOR_OFFSET UNITYSDK_OFFSET(0x1C857840)

inline static constexpr unsigned int Class_3_26F8D27CD2489C12_TypeDefinitionIndex = 21237;

class Class_3_26F8D27CD2489C12 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::FiveDimRandomBubbleTalkInfoGroup*>* JDJDBKFDIPB; // 0x18
	::System::Single OKILLMNGPGB; // 0x20
	::System::UInt32 AHGIENEMKFI; // 0x24
	::System::Boolean BNIMJJNOLAI; // 0x28
	::System::Boolean LHPMNOHBIMI; // 0x29

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_26F8D27CD2489C12__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_1FEC466530D44C17(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_26F8D27CD2489C12*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_26F8D27CD2489C12*&))((::PBYTE)hIl2Cpp + CLASS_3_26F8D27CD2489C12_METHOD_3_1FEC466530D44C17_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_0C897AFF22BC8629(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_26F8D27CD2489C12* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_26F8D27CD2489C12*))((::PBYTE)hIl2Cpp + CLASS_3_26F8D27CD2489C12_METHOD_3_0C897AFF22BC8629_OFFSET))(a1, a2);
	}
};
