#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D5DA62FC7DE2D532.h"
#include "unitysdk/RPG/GameCore/MapRotationVolumeState.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_64D890C466F37235;
class Class_2_20B6963C31BED713_Class_2_A6C83DE587736314;
class Class_2_2B9847232031B19F;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MapRotationVolumeConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_20B6963C31BED713_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15769660)
#define CLASS_2_20B6963C31BED713_METHOD_2_06F5F8BB049CE08F_OFFSET UNITYSDK_OFFSET(0x15768DF0)
#define CLASS_2_20B6963C31BED713_METHOD_2_08F129CA05AC8AD2_OFFSET UNITYSDK_OFFSET(0x1576ABF0)
#define CLASS_2_20B6963C31BED713_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x15769410)
#define CLASS_2_20B6963C31BED713_METHOD_2_4BCE9D2476E12939_OFFSET UNITYSDK_OFFSET(0x157691F0)
#define CLASS_2_20B6963C31BED713_METHOD_2_4C974D5D8C8F6AD0_OFFSET UNITYSDK_OFFSET(0x15769A60)
#define CLASS_2_20B6963C31BED713_METHOD_2_648A0173DD410CEE_OFFSET UNITYSDK_OFFSET(0x15769750)
#define CLASS_2_20B6963C31BED713_METHOD_2_79C4292A2866376F_OFFSET UNITYSDK_OFFSET(0x15768D10)
#define CLASS_2_20B6963C31BED713_METHOD_2_7C37C542A4C9BBDE_OFFSET UNITYSDK_OFFSET(0x1576ACA0)
#define CLASS_2_20B6963C31BED713_METHOD_2_7D5A1113A0454294_OFFSET UNITYSDK_OFFSET(0x15769450)
#define CLASS_2_20B6963C31BED713_METHOD_2_7EBE76BE89AD3EC0_1_OFFSET UNITYSDK_OFFSET(0x15769E40)
#define CLASS_2_20B6963C31BED713_METHOD_2_7EBE76BE89AD3EC0_OFFSET UNITYSDK_OFFSET(0x15769CE0)
#define CLASS_2_20B6963C31BED713_METHOD_2_98EFF476B0C91E90_OFFSET UNITYSDK_OFFSET(0x1576B2D0)
#define CLASS_2_20B6963C31BED713_METHOD_2_AA7E7D1E175DAB81_OFFSET UNITYSDK_OFFSET(0x1576B490)
#define CLASS_2_20B6963C31BED713_METHOD_2_ACB3BCFAC87F9E5E_OFFSET UNITYSDK_OFFSET(0x15769280)
#define CLASS_2_20B6963C31BED713_METHOD_2_BBDC983DA3516BF9_OFFSET UNITYSDK_OFFSET(0x1576A570)
#define CLASS_2_20B6963C31BED713_METHOD_2_C7447EE652028911_OFFSET UNITYSDK_OFFSET(0x1576B6B0)
#define CLASS_2_20B6963C31BED713_METHOD_2_CB1FAAB5082BB3FB_OFFSET UNITYSDK_OFFSET(0x157687F0)
#define CLASS_2_20B6963C31BED713_METHOD_2_CCD2FA65D8BEBFB9_OFFSET UNITYSDK_OFFSET(0x1576A9B0)
#define CLASS_2_20B6963C31BED713_METHOD_2_D0B02590F846487E_OFFSET UNITYSDK_OFFSET(0x1576B200)
#define CLASS_2_20B6963C31BED713_METHOD_2_D46B8ABFF6EDAE06_OFFSET UNITYSDK_OFFSET(0x1576AFA0)
#define CLASS_2_20B6963C31BED713_METHOD_2_F4660005520BFDF0_OFFSET UNITYSDK_OFFSET(0x1576AE40)
#define CLASS_2_20B6963C31BED713__CTOR_OFFSET UNITYSDK_OFFSET(0x1576B8D0)

inline static constexpr unsigned int Class_2_20B6963C31BED713_TypeDefinitionIndex = 60726;

class Class_2_20B6963C31BED713 : public ::Class_1_D5DA62FC7DE2D532
{
public:
	::Class_1_64D890C466F37235* KGCNPIEDOCA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::Class_2_20B6963C31BED713_Class_2_A6C83DE587736314*>* LJKIOJAJOMN; // 0x18
	::Class_2_2B9847232031B19F* BAMECAHHEKC; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_20B6963C31BED713_Class_2_A6C83DE587736314*>* AKGOFPGKIKA; // 0x28
	::System::Boolean KJPMJPLEHHF; // 0x30
	::System::Nullable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>> FKCLGOHFADC; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20B6963C31BED713__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CB1FAAB5082BB3FB(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_20B6963C31BED713_METHOD_2_CB1FAAB5082BB3FB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_4BCE9D2476E12939(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_20B6963C31BED713_METHOD_2_4BCE9D2476E12939_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20B6963C31BED713_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_2_7D5A1113A0454294(::Class_1_64D890C466F37235* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_64D890C466F37235*))((::PBYTE)hIl2Cpp + CLASS_2_20B6963C31BED713_METHOD_2_7D5A1113A0454294_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20B6963C31BED713_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_648A0173DD410CEE(::System::UInt32 a1, ::System::UInt32 a2, ::System::String* a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_20B6963C31BED713_METHOD_2_648A0173DD410CEE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_4C974D5D8C8F6AD0(::System::UInt32 a1, ::System::UInt32 a2, ::System::String* a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_20B6963C31BED713_METHOD_2_4C974D5D8C8F6AD0_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_7EBE76BE89AD3EC0(::System::UInt32 a1, ::System::UInt32 a2, ::System::Action_1<::RPG::GameCore::MapRotationVolumeState>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Action_1<::RPG::GameCore::MapRotationVolumeState>*))((::PBYTE)hIl2Cpp + CLASS_2_20B6963C31BED713_METHOD_2_7EBE76BE89AD3EC0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_7EBE76BE89AD3EC0_1(::System::UInt32 a1, ::System::UInt32 a2, ::System::Action_1<::RPG::GameCore::MapRotationVolumeState>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Action_1<::RPG::GameCore::MapRotationVolumeState>*))((::PBYTE)hIl2Cpp + CLASS_2_20B6963C31BED713_METHOD_2_7EBE76BE89AD3EC0_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_06F5F8BB049CE08F(::System::UInt32 a1, ::System::UInt32 a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_20B6963C31BED713_METHOD_2_06F5F8BB049CE08F_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_BBDC983DA3516BF9(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_20B6963C31BED713_METHOD_2_BBDC983DA3516BF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CCD2FA65D8BEBFB9(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_20B6963C31BED713_METHOD_2_CCD2FA65D8BEBFB9_OFFSET))(this, a1);
	}

	::RPG::GameCore::MapRotationVolumeState Method_2_08F129CA05AC8AD2(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::MapRotationVolumeState(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_20B6963C31BED713_METHOD_2_08F129CA05AC8AD2_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_7C37C542A4C9BBDE(::System::UInt32 a1, ::System::UInt32 a2, ::System::Single& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_20B6963C31BED713_METHOD_2_7C37C542A4C9BBDE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_F4660005520BFDF0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_20B6963C31BED713_METHOD_2_F4660005520BFDF0_OFFSET))(this, a1);
	}

	::System::Void Method_2_D46B8ABFF6EDAE06(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_20B6963C31BED713_METHOD_2_D46B8ABFF6EDAE06_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_ACB3BCFAC87F9E5E(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_20B6963C31BED713_METHOD_2_ACB3BCFAC87F9E5E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D0B02590F846487E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_20B6963C31BED713_METHOD_2_D0B02590F846487E_OFFSET))(this, a1);
	}

	::System::Void Method_2_AA7E7D1E175DAB81(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_20B6963C31BED713_METHOD_2_AA7E7D1E175DAB81_OFFSET))(this, a1);
	}

	::System::Void Method_2_98EFF476B0C91E90(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_20B6963C31BED713_METHOD_2_98EFF476B0C91E90_OFFSET))(this, a1);
	}

	::System::Nullable_1<::System::ValueTuple_3<::System::UInt32, ::System::UInt32, ::System::Single>> Method_2_C7447EE652028911()
	{
		return ((::System::Nullable_1<::System::ValueTuple_3<::System::UInt32, ::System::UInt32, ::System::Single>>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20B6963C31BED713_METHOD_2_C7447EE652028911_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::GameCore::MapRotationVolumeConfig*>* Method_2_79C4292A2866376F()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::GameCore::MapRotationVolumeConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20B6963C31BED713_METHOD_2_79C4292A2866376F_OFFSET))(this);
	}
};
