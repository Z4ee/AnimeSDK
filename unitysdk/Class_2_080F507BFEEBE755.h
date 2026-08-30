#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_41E07A9DDAB7FC78.h"
#include "unitysdk/Enum_3_75A1C8C41006A504.h"

class Class_1_10F56A639581CEB1_12;
class Class_1_190BB2A3D431BCD2_1;
class Class_1_8844A4E6AE686D5C_6;
class Class_1_D17272E82AE804C2_470;
namespace RPG::Client { class GridFightPortalEffectData; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_2_080F507BFEEBE755_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x170C52C0)
#define CLASS_2_080F507BFEEBE755_UPDATEADDFORGE_OFFSET UNITYSDK_OFFSET(0x170C57C0)
#define CLASS_2_080F507BFEEBE755_UPDATEADDITEM_OFFSET UNITYSDK_OFFSET(0x170C56E0)
#define CLASS_2_080F507BFEEBE755_UPDATEADDROLE_OFFSET UNITYSDK_OFFSET(0x170C5600)
#define CLASS_2_080F507BFEEBE755_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x170C5830)
#define CLASS_2_080F507BFEEBE755_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x170C5310)
#define CLASS_2_080F507BFEEBE755_UPDATECOIN_OFFSET UNITYSDK_OFFSET(0x170C5510)
#define CLASS_2_080F507BFEEBE755_UPDATEITEM_OFFSET UNITYSDK_OFFSET(0x170C5750)
#define CLASS_2_080F507BFEEBE755_UPDATELEVELANDEXP_OFFSET UNITYSDK_OFFSET(0x170C5580)
#define CLASS_2_080F507BFEEBE755_UPDATEORB_OFFSET UNITYSDK_OFFSET(0x170C5670)
#define CLASS_2_080F507BFEEBE755__CTOR_OFFSET UNITYSDK_OFFSET(0x170C58E0)

inline static constexpr unsigned int Class_2_080F507BFEEBE755_TypeDefinitionIndex = 64452;

class Class_2_080F507BFEEBE755 : public ::Class_1_41E07A9DDAB7FC78
{
public:
	::RPG::Client::GridFightPortalEffectData* FNGKPEFHFBO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_080F507BFEEBE755__CTOR_OFFSET))(this);
	}

	::System::Boolean IsConcernedWith(::Enum_3_75A1C8C41006A504 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A1C8C41006A504))((::PBYTE)hIl2Cpp + CLASS_2_080F507BFEEBE755_ISCONCERNEDWITH_OFFSET))(this, a1);
	}

	::System::Void UpdateBefore(::Enum_3_75A1C8C41006A504 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A1C8C41006A504, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_080F507BFEEBE755_UPDATEBEFORE_OFFSET))(this, a1, a2);
	}

	::System::Void UpdateCoin(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_080F507BFEEBE755_UPDATECOIN_OFFSET))(this, a1);
	}

	::System::Void UpdateLevelAndExp(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_080F507BFEEBE755_UPDATELEVELANDEXP_OFFSET))(this, a1, a2);
	}

	::System::Void UpdateAddRole(::Class_1_190BB2A3D431BCD2_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_190BB2A3D431BCD2_1*))((::PBYTE)hIl2Cpp + CLASS_2_080F507BFEEBE755_UPDATEADDROLE_OFFSET))(this, a1);
	}

	::System::Void UpdateOrb(::Class_1_D17272E82AE804C2_470* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_470*))((::PBYTE)hIl2Cpp + CLASS_2_080F507BFEEBE755_UPDATEORB_OFFSET))(this, a1);
	}

	::System::Void UpdateAddItem(::Class_1_8844A4E6AE686D5C_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8844A4E6AE686D5C_6*))((::PBYTE)hIl2Cpp + CLASS_2_080F507BFEEBE755_UPDATEADDITEM_OFFSET))(this, a1);
	}

	::System::Void UpdateItem(::Class_1_8844A4E6AE686D5C_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8844A4E6AE686D5C_6*))((::PBYTE)hIl2Cpp + CLASS_2_080F507BFEEBE755_UPDATEITEM_OFFSET))(this, a1);
	}

	::System::Void UpdateAddForge(::Class_1_10F56A639581CEB1_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_10F56A639581CEB1_12*))((::PBYTE)hIl2Cpp + CLASS_2_080F507BFEEBE755_UPDATEADDFORGE_OFFSET))(this, a1);
	}

	::System::Void UpdateAfter(::Enum_3_75A1C8C41006A504 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A1C8C41006A504))((::PBYTE)hIl2Cpp + CLASS_2_080F507BFEEBE755_UPDATEAFTER_OFFSET))(this, a1);
	}
};
