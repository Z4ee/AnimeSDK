#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BC950E36747FB4C9.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_394;
class Class_0_16E4307DCC419505_395;
class Class_0_16E4307DCC419505_396;
namespace RPG::GameCore { class AvatarSkillRowData; }
namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_2EFA8D701961CF68_METHOD_1_5ED513CD348CDF82_OFFSET UNITYSDK_OFFSET(0xA9E5EA0)
#define CLASS_1_2EFA8D701961CF68_METHOD_1_6F0EEAFC1D990F83_OFFSET UNITYSDK_OFFSET(0xA9E5CA0)
#define CLASS_1_2EFA8D701961CF68__CTOR_OFFSET UNITYSDK_OFFSET(0xA9E5B60)

inline static constexpr unsigned int Class_1_2EFA8D701961CF68_TypeDefinitionIndex = 58600;

class Class_1_2EFA8D701961CF68 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_396* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_394* Field_1_1; // 0x18
	::Class_0_16E4307DCC419505_395* Field_1_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::GameCore::AvatarSkillRowData*>* Field_1_3; // 0x28
	::Struct_2_BC950E36747FB4C9 Field_1_4; // 0x30

	::System::Void _ctor(::Struct_2_BC950E36747FB4C9& a1, ::Class_0_16E4307DCC419505_396* a2, ::Class_0_16E4307DCC419505_394* a3, ::Class_0_16E4307DCC419505_395* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BC950E36747FB4C9&, ::Class_0_16E4307DCC419505_396*, ::Class_0_16E4307DCC419505_394*, ::Class_0_16E4307DCC419505_395*))((::PBYTE)hIl2Cpp + CLASS_1_2EFA8D701961CF68__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::GameCore::ICharacterSkillRowData* Method_1_6F0EEAFC1D990F83(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2EFA8D701961CF68_METHOD_1_6F0EEAFC1D990F83_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5ED513CD348CDF82(::RPG::GameCore::ICharacterSkillRowData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ICharacterSkillRowData*))((::PBYTE)hIl2Cpp + CLASS_1_2EFA8D701961CF68_METHOD_1_5ED513CD348CDF82_OFFSET))(this, a1);
	}
};
