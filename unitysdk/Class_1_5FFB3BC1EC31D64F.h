#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_649;
class Class_1_AE0CA897D782D638;
namespace RPG::Client { class EquipmentItemData; }
namespace RPG::Client { class IAvatarInfoProvider; }

#define CLASS_1_5FFB3BC1EC31D64F_METHOD_1_30673AE7BB904A52_OFFSET UNITYSDK_OFFSET(0x8A46F00)
#define CLASS_1_5FFB3BC1EC31D64F_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x8A46C70)
#define CLASS_1_5FFB3BC1EC31D64F_METHOD_1_C07857C8BE98FA3C_OFFSET UNITYSDK_OFFSET(0x8A46AA0)
#define CLASS_1_5FFB3BC1EC31D64F_METHOD_1_F1C5FA07A3F633C5_OFFSET UNITYSDK_OFFSET(0x8A46CC0)
#define CLASS_1_5FFB3BC1EC31D64F__CTOR_OFFSET UNITYSDK_OFFSET(0x8A46FD0)
#define CLASS_1_5FFB3BC1EC31D64F__SETDATA_B__0_0_OFFSET UNITYSDK_OFFSET(0x8A46FE0)

inline static constexpr unsigned int Class_1_5FFB3BC1EC31D64F_TypeDefinitionIndex = 53249;

class Class_1_5FFB3BC1EC31D64F : public ::System::Object
{
public:
	::RPG::Client::EquipmentItemData* Field_1_2; // 0x10
	::RPG::Client::IAvatarInfoProvider* Field_1_0; // 0x18
	::Class_1_AE0CA897D782D638* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FFB3BC1EC31D64F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C07857C8BE98FA3C(::RPG::Client::IAvatarInfoProvider* a1, ::Class_1_AE0CA897D782D638* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*, ::Class_1_AE0CA897D782D638*))((::PBYTE)hIl2Cpp + CLASS_1_5FFB3BC1EC31D64F_METHOD_1_C07857C8BE98FA3C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FFB3BC1EC31D64F_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_649* Method_1_F1C5FA07A3F633C5()
	{
		return ((::Class_0_16E4307DCC419505_649*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FFB3BC1EC31D64F_METHOD_1_F1C5FA07A3F633C5_OFFSET))(this);
	}

	::System::Int32 Method_1_30673AE7BB904A52(::RPG::Client::EquipmentItemData* a1, ::RPG::Client::EquipmentItemData* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::EquipmentItemData*, ::RPG::Client::EquipmentItemData*))((::PBYTE)hIl2Cpp + CLASS_1_5FFB3BC1EC31D64F_METHOD_1_30673AE7BB904A52_OFFSET))(this, a1, a2);
	}

	::System::Boolean _SetData_b__0_0(::RPG::Client::EquipmentItemData* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::EquipmentItemData*))((::PBYTE)hIl2Cpp + CLASS_1_5FFB3BC1EC31D64F__SETDATA_B__0_0_OFFSET))(this, x);
	}
};
