#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_41E07A9DDAB7FC78.h"
#include "unitysdk/Enum_3_75A1C8C41006A504.h"

class Class_1_10F56A639581CEB1_12;
class Class_1_190BB2A3D431BCD2_1;
class Class_1_8844A4E6AE686D5C_6;
class Class_1_AC819B79CD1B6B62;
class Class_1_D17272E82AE804C2_470;
namespace RPG::Client { class GridFightAugmentEffectData; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_2_30F3498E79480986_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0xBE17BF0)
#define CLASS_2_30F3498E79480986_UPDATEADDFORGE_OFFSET UNITYSDK_OFFSET(0xBE18330)
#define CLASS_2_30F3498E79480986_UPDATEADDITEM_OFFSET UNITYSDK_OFFSET(0xBE18250)
#define CLASS_2_30F3498E79480986_UPDATEADDROLE_OFFSET UNITYSDK_OFFSET(0xBE18170)
#define CLASS_2_30F3498E79480986_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0xBE186A0)
#define CLASS_2_30F3498E79480986_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0xBE17CC0)
#define CLASS_2_30F3498E79480986_UPDATECOIN_OFFSET UNITYSDK_OFFSET(0xBE18080)
#define CLASS_2_30F3498E79480986_UPDATEITEM_OFFSET UNITYSDK_OFFSET(0xBE182C0)
#define CLASS_2_30F3498E79480986_UPDATELEVELANDEXP_OFFSET UNITYSDK_OFFSET(0xBE180F0)
#define CLASS_2_30F3498E79480986_UPDATEORB_OFFSET UNITYSDK_OFFSET(0xBE181E0)
#define CLASS_2_30F3498E79480986_UPDATEREMOVEROLE_OFFSET UNITYSDK_OFFSET(0xBE18410)
#define CLASS_2_30F3498E79480986_UPDATESHOP_OFFSET UNITYSDK_OFFSET(0xBE183A0)
#define CLASS_2_30F3498E79480986__CTOR_OFFSET UNITYSDK_OFFSET(0xBE18880)

inline static constexpr unsigned int Class_2_30F3498E79480986_TypeDefinitionIndex = 64449;

class Class_2_30F3498E79480986 : public ::Class_1_41E07A9DDAB7FC78
{
public:
	::RPG::Client::GridFightAugmentEffectData* FNGKPEFHFBO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_30F3498E79480986__CTOR_OFFSET))(this);
	}

	::System::Boolean IsConcernedWith(::Enum_3_75A1C8C41006A504 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A1C8C41006A504))((::PBYTE)hIl2Cpp + CLASS_2_30F3498E79480986_ISCONCERNEDWITH_OFFSET))(this, a1);
	}

	::System::Void UpdateBefore(::Enum_3_75A1C8C41006A504 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A1C8C41006A504, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_30F3498E79480986_UPDATEBEFORE_OFFSET))(this, a1, a2);
	}

	::System::Void UpdateCoin(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_30F3498E79480986_UPDATECOIN_OFFSET))(this, a1);
	}

	::System::Void UpdateLevelAndExp(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_30F3498E79480986_UPDATELEVELANDEXP_OFFSET))(this, a1, a2);
	}

	::System::Void UpdateAddRole(::Class_1_190BB2A3D431BCD2_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_190BB2A3D431BCD2_1*))((::PBYTE)hIl2Cpp + CLASS_2_30F3498E79480986_UPDATEADDROLE_OFFSET))(this, a1);
	}

	::System::Void UpdateOrb(::Class_1_D17272E82AE804C2_470* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_470*))((::PBYTE)hIl2Cpp + CLASS_2_30F3498E79480986_UPDATEORB_OFFSET))(this, a1);
	}

	::System::Void UpdateAddItem(::Class_1_8844A4E6AE686D5C_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8844A4E6AE686D5C_6*))((::PBYTE)hIl2Cpp + CLASS_2_30F3498E79480986_UPDATEADDITEM_OFFSET))(this, a1);
	}

	::System::Void UpdateItem(::Class_1_8844A4E6AE686D5C_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8844A4E6AE686D5C_6*))((::PBYTE)hIl2Cpp + CLASS_2_30F3498E79480986_UPDATEITEM_OFFSET))(this, a1);
	}

	::System::Void UpdateAddForge(::Class_1_10F56A639581CEB1_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_10F56A639581CEB1_12*))((::PBYTE)hIl2Cpp + CLASS_2_30F3498E79480986_UPDATEADDFORGE_OFFSET))(this, a1);
	}

	::System::Void UpdateShop(::Class_1_AC819B79CD1B6B62* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AC819B79CD1B6B62*))((::PBYTE)hIl2Cpp + CLASS_2_30F3498E79480986_UPDATESHOP_OFFSET))(this, a1);
	}

	::System::Void UpdateRemoveRole(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_30F3498E79480986_UPDATEREMOVEROLE_OFFSET))(this, a1);
	}

	::System::Void UpdateAfter(::Enum_3_75A1C8C41006A504 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A1C8C41006A504))((::PBYTE)hIl2Cpp + CLASS_2_30F3498E79480986_UPDATEAFTER_OFFSET))(this, a1);
	}
};
