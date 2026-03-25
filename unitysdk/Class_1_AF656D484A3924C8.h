#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_370;
namespace RPG::GameCore { class AvatarSkillRowData; }
namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_AF656D484A3924C8_METHOD_1_820F2FB974304981_OFFSET UNITYSDK_OFFSET(0x105E9B10)
#define CLASS_1_AF656D484A3924C8_METHOD_1_D1431B58D4F01479_OFFSET UNITYSDK_OFFSET(0x105E98F0)
#define CLASS_1_AF656D484A3924C8__CTOR_OFFSET UNITYSDK_OFFSET(0x105E9830)

inline static constexpr unsigned int Class_1_AF656D484A3924C8_TypeDefinitionIndex = 50905;

class Class_1_AF656D484A3924C8 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_370* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::GameCore::AvatarSkillRowData*>* Field_1_1; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_370* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_370*))((::PBYTE)hIl2Cpp + CLASS_1_AF656D484A3924C8__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::ICharacterSkillRowData* Method_1_D1431B58D4F01479(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AF656D484A3924C8_METHOD_1_D1431B58D4F01479_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_820F2FB974304981(::RPG::GameCore::ICharacterSkillRowData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ICharacterSkillRowData*))((::PBYTE)hIl2Cpp + CLASS_1_AF656D484A3924C8_METHOD_1_820F2FB974304981_OFFSET))(this, a1);
	}
};
