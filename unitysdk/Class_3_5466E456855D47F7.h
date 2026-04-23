#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimRandomBubbleTalkInfoGroup; }

#define CLASS_3_5466E456855D47F7_METHOD_3_620F752B8758282A_OFFSET UNITYSDK_OFFSET(0x18551710)
#define CLASS_3_5466E456855D47F7_METHOD_3_B291FB5C41D58000_OFFSET UNITYSDK_OFFSET(0x185517B0)
#define CLASS_3_5466E456855D47F7__CTOR_OFFSET UNITYSDK_OFFSET(0x18551770)

inline static constexpr unsigned int Class_3_5466E456855D47F7_TypeDefinitionIndex = 20369;

class Class_3_5466E456855D47F7 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::FiveDimRandomBubbleTalkInfoGroup*>* Field_3_0; // 0x18
	::System::UInt32 Field_3_4; // 0x20
	::System::Boolean Field_3_3; // 0x24
	::System::Boolean Field_3_1; // 0x25
	::System::Single Field_3_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5466E456855D47F7__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_620F752B8758282A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_5466E456855D47F7*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_5466E456855D47F7*&))((::PBYTE)hIl2Cpp + CLASS_3_5466E456855D47F7_METHOD_3_620F752B8758282A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B291FB5C41D58000(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_5466E456855D47F7* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_5466E456855D47F7*))((::PBYTE)hIl2Cpp + CLASS_3_5466E456855D47F7_METHOD_3_B291FB5C41D58000_OFFSET))(a1, a2);
	}
};
