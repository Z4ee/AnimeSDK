#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimRandomBubbleTalkInfoGroup; }

#define CLASS_3_26F8D27CD2489C12_METHOD_3_0C897AFF22BC8629_OFFSET UNITYSDK_OFFSET(0x1B3BE800)
#define CLASS_3_26F8D27CD2489C12_METHOD_3_1FEC466530D44C17_OFFSET UNITYSDK_OFFSET(0x1B3BE7B0)
#define CLASS_3_26F8D27CD2489C12__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3BE7F0)

inline static constexpr unsigned int Class_3_26F8D27CD2489C12_TypeDefinitionIndex = 20683;

class Class_3_26F8D27CD2489C12 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::FiveDimRandomBubbleTalkInfoGroup*>* Field_3_0; // 0x18
	::System::Single Field_3_1; // 0x20
	::System::Boolean Field_3_2; // 0x24
	::System::Boolean Field_3_3; // 0x25
	::System::UInt32 Field_3_4; // 0x28

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
