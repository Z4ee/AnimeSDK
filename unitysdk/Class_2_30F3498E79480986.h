#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_41E07A9DDAB7FC78.h"
#include "unitysdk/Enum_3_75A1C8C41006A504.h"

class Class_1_10F56A639581CEB1_14;
class Class_1_359E211E5CA0A213;
class Class_1_66D6A0360B93D27A_1;
class Class_1_8844A4E6AE686D5C_6;
class Class_1_D17272E82AE804C2_457;
namespace RPG::Client { class GridFightAugmentEffectData; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_2_30F3498E79480986_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x16DDC0C0)
#define CLASS_2_30F3498E79480986_UPDATEADDFORGE_OFFSET UNITYSDK_OFFSET(0x16DDC800)
#define CLASS_2_30F3498E79480986_UPDATEADDITEM_OFFSET UNITYSDK_OFFSET(0x16DDC720)
#define CLASS_2_30F3498E79480986_UPDATEADDROLE_OFFSET UNITYSDK_OFFSET(0x16DDC640)
#define CLASS_2_30F3498E79480986_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x16DDCB70)
#define CLASS_2_30F3498E79480986_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x16DDC190)
#define CLASS_2_30F3498E79480986_UPDATECOIN_OFFSET UNITYSDK_OFFSET(0x16DDC550)
#define CLASS_2_30F3498E79480986_UPDATEITEM_OFFSET UNITYSDK_OFFSET(0x16DDC790)
#define CLASS_2_30F3498E79480986_UPDATELEVELANDEXP_OFFSET UNITYSDK_OFFSET(0x16DDC5C0)
#define CLASS_2_30F3498E79480986_UPDATEORB_OFFSET UNITYSDK_OFFSET(0x16DDC6B0)
#define CLASS_2_30F3498E79480986_UPDATEREMOVEROLE_OFFSET UNITYSDK_OFFSET(0x16DDC8E0)
#define CLASS_2_30F3498E79480986_UPDATESHOP_OFFSET UNITYSDK_OFFSET(0x16DDC870)
#define CLASS_2_30F3498E79480986__CTOR_OFFSET UNITYSDK_OFFSET(0x16DDCD50)

inline static constexpr unsigned int Class_2_30F3498E79480986_TypeDefinitionIndex = 61465;

class Class_2_30F3498E79480986 : public ::Class_1_41E07A9DDAB7FC78
{
public:
	::RPG::Client::GridFightAugmentEffectData* Field_2_0; // 0x10

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

	::System::Void UpdateAddRole(::Class_1_66D6A0360B93D27A_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_66D6A0360B93D27A_1*))((::PBYTE)hIl2Cpp + CLASS_2_30F3498E79480986_UPDATEADDROLE_OFFSET))(this, a1);
	}

	::System::Void UpdateOrb(::Class_1_D17272E82AE804C2_457* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_457*))((::PBYTE)hIl2Cpp + CLASS_2_30F3498E79480986_UPDATEORB_OFFSET))(this, a1);
	}

	::System::Void UpdateAddItem(::Class_1_8844A4E6AE686D5C_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8844A4E6AE686D5C_6*))((::PBYTE)hIl2Cpp + CLASS_2_30F3498E79480986_UPDATEADDITEM_OFFSET))(this, a1);
	}

	::System::Void UpdateItem(::Class_1_8844A4E6AE686D5C_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8844A4E6AE686D5C_6*))((::PBYTE)hIl2Cpp + CLASS_2_30F3498E79480986_UPDATEITEM_OFFSET))(this, a1);
	}

	::System::Void UpdateAddForge(::Class_1_10F56A639581CEB1_14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_10F56A639581CEB1_14*))((::PBYTE)hIl2Cpp + CLASS_2_30F3498E79480986_UPDATEADDFORGE_OFFSET))(this, a1);
	}

	::System::Void UpdateShop(::Class_1_359E211E5CA0A213* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_359E211E5CA0A213*))((::PBYTE)hIl2Cpp + CLASS_2_30F3498E79480986_UPDATESHOP_OFFSET))(this, a1);
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
