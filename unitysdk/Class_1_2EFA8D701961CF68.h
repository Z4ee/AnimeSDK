#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BC950E36747FB4C9.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_540;
class Class_0_16E4307DCC419505_541;
class Class_0_16E4307DCC419505_542;
namespace RPG::GameCore { class AvatarSkillRowData; }
namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_2EFA8D701961CF68_METHOD_1_4A1199D0FAE13929_OFFSET UNITYSDK_OFFSET(0xBC0A5B0)
#define CLASS_1_2EFA8D701961CF68_METHOD_1_6F0EEAFC1D990F83_OFFSET UNITYSDK_OFFSET(0xBC0A3B0)
#define CLASS_1_2EFA8D701961CF68__CTOR_OFFSET UNITYSDK_OFFSET(0xBC0A270)

inline static constexpr unsigned int Class_1_2EFA8D701961CF68_TypeDefinitionIndex = 62635;

class Class_1_2EFA8D701961CF68 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_541* NOFADOEHCCJ; // 0x10
	::Class_0_16E4307DCC419505_542* IHFNBHEIIAI; // 0x18
	::Class_0_16E4307DCC419505_540* GOHMGCHLKLM; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::GameCore::AvatarSkillRowData*>* PFBKNEFKOLB; // 0x28
	::Struct_2_BC950E36747FB4C9 ODMGLBEOBDP; // 0x30

	::System::Void _ctor(::Struct_2_BC950E36747FB4C9& a1, ::Class_0_16E4307DCC419505_542* a2, ::Class_0_16E4307DCC419505_540* a3, ::Class_0_16E4307DCC419505_541* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BC950E36747FB4C9&, ::Class_0_16E4307DCC419505_542*, ::Class_0_16E4307DCC419505_540*, ::Class_0_16E4307DCC419505_541*))((::PBYTE)hIl2Cpp + CLASS_1_2EFA8D701961CF68__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::GameCore::ICharacterSkillRowData* Method_1_6F0EEAFC1D990F83(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2EFA8D701961CF68_METHOD_1_6F0EEAFC1D990F83_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4A1199D0FAE13929(::RPG::GameCore::ICharacterSkillRowData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ICharacterSkillRowData*))((::PBYTE)hIl2Cpp + CLASS_1_2EFA8D701961CF68_METHOD_1_4A1199D0FAE13929_OFFSET))(this, a1);
	}
};
