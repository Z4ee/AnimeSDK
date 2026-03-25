#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D5DA62FC7DE2D532.h"
#include "unitysdk/RPG/GameCore/MapRotationVolumeState.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_64D890C466F37235;
class Class_2_36C95D73718D07B1;
class Class_2_624AFA55756E2453_Class_2_A6C83DE587736314;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MapRotationVolumeConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_624AFA55756E2453_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8BF65A0)
#define CLASS_2_624AFA55756E2453_METHOD_2_012F5209D5FA3F65_OFFSET UNITYSDK_OFFSET(0x8BF83F0)
#define CLASS_2_624AFA55756E2453_METHOD_2_049D0CDAB05162F1_OFFSET UNITYSDK_OFFSET(0x8BF6380)
#define CLASS_2_624AFA55756E2453_METHOD_2_229828D6EDE2C964_OFFSET UNITYSDK_OFFSET(0x8BF6060)
#define CLASS_2_624AFA55756E2453_METHOD_2_30961CFB1800EE34_1_OFFSET UNITYSDK_OFFSET(0x8BF6DF0)
#define CLASS_2_624AFA55756E2453_METHOD_2_30961CFB1800EE34_OFFSET UNITYSDK_OFFSET(0x8BF6C20)
#define CLASS_2_624AFA55756E2453_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x8BF6340)
#define CLASS_2_624AFA55756E2453_METHOD_2_4358B7A5A0106CB5_OFFSET UNITYSDK_OFFSET(0x8BF8190)
#define CLASS_2_624AFA55756E2453_METHOD_2_5507A1784CF3F491_OFFSET UNITYSDK_OFFSET(0x8BF7DD0)
#define CLASS_2_624AFA55756E2453_METHOD_2_79C4292A2866376F_OFFSET UNITYSDK_OFFSET(0x8BF5B40)
#define CLASS_2_624AFA55756E2453_METHOD_2_7CFE092F91703EAB_OFFSET UNITYSDK_OFFSET(0x8BF6940)
#define CLASS_2_624AFA55756E2453_METHOD_2_8BEBF3CCF49EF055_OFFSET UNITYSDK_OFFSET(0x8BF7A30)
#define CLASS_2_624AFA55756E2453_METHOD_2_8CA56FF24F45C9F3_OFFSET UNITYSDK_OFFSET(0x8BF86E0)
#define CLASS_2_624AFA55756E2453_METHOD_2_8E0256CE8E8AD06D_OFFSET UNITYSDK_OFFSET(0x8BF6680)
#define CLASS_2_624AFA55756E2453_METHOD_2_BD6B6387E2D758F6_OFFSET UNITYSDK_OFFSET(0x8BF5C20)
#define CLASS_2_624AFA55756E2453_METHOD_2_CB1FAAB5082BB3FB_OFFSET UNITYSDK_OFFSET(0x8BF55F0)
#define CLASS_2_624AFA55756E2453_METHOD_2_E2CDB6B22CCEBA97_OFFSET UNITYSDK_OFFSET(0x8BF8C10)
#define CLASS_2_624AFA55756E2453_METHOD_2_E609BA7BAD47184E_OFFSET UNITYSDK_OFFSET(0x8BF6150)
#define CLASS_2_624AFA55756E2453_METHOD_2_EDC93C4FBEAE48C7_OFFSET UNITYSDK_OFFSET(0x8BF7560)
#define CLASS_2_624AFA55756E2453_METHOD_2_EDDD1B285B468C3C_OFFSET UNITYSDK_OFFSET(0x8BF7FE0)
#define CLASS_2_624AFA55756E2453_METHOD_2_F3B1A708876271A6_OFFSET UNITYSDK_OFFSET(0x8BF8970)
#define CLASS_2_624AFA55756E2453_METHOD_2_FB412E022C7694AA_OFFSET UNITYSDK_OFFSET(0x8BF84C0)
#define CLASS_2_624AFA55756E2453_METHOD_2_FCE63DE40639C1D8_OFFSET UNITYSDK_OFFSET(0x8BF7CC0)
#define CLASS_2_624AFA55756E2453__CTOR_OFFSET UNITYSDK_OFFSET(0x8BF8C00)
#define CLASS_2_624AFA55756E2453___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8BF8C80)

inline static constexpr unsigned int Class_2_624AFA55756E2453_TypeDefinitionIndex = 49109;

class Class_2_624AFA55756E2453 : public ::Class_1_D5DA62FC7DE2D532
{
public:
	::Class_1_64D890C466F37235* Field_2_3; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::Class_2_624AFA55756E2453_Class_2_A6C83DE587736314*>* Field_2_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_624AFA55756E2453_Class_2_A6C83DE587736314*>* Field_2_1; // 0x20
	::Class_2_36C95D73718D07B1* Field_2_4; // 0x28
	::System::Nullable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>> Field_2_2; // 0x30
	::System::Boolean Field_2_5; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_624AFA55756E2453__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CB1FAAB5082BB3FB(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_624AFA55756E2453_METHOD_2_CB1FAAB5082BB3FB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_229828D6EDE2C964(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_624AFA55756E2453_METHOD_2_229828D6EDE2C964_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_624AFA55756E2453_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_2_049D0CDAB05162F1(::Class_1_64D890C466F37235* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_64D890C466F37235*))((::PBYTE)hIl2Cpp + CLASS_2_624AFA55756E2453_METHOD_2_049D0CDAB05162F1_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_624AFA55756E2453_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_8E0256CE8E8AD06D(::System::UInt32 a1, ::System::UInt32 a2, ::System::String* a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_624AFA55756E2453_METHOD_2_8E0256CE8E8AD06D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_7CFE092F91703EAB(::System::UInt32 a1, ::System::UInt32 a2, ::System::String* a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_624AFA55756E2453_METHOD_2_7CFE092F91703EAB_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_30961CFB1800EE34(::System::UInt32 a1, ::System::UInt32 a2, ::System::Action_1<::RPG::GameCore::MapRotationVolumeState>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Action_1<::RPG::GameCore::MapRotationVolumeState>*))((::PBYTE)hIl2Cpp + CLASS_2_624AFA55756E2453_METHOD_2_30961CFB1800EE34_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_30961CFB1800EE34_1(::System::UInt32 a1, ::System::UInt32 a2, ::System::Action_1<::RPG::GameCore::MapRotationVolumeState>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Action_1<::RPG::GameCore::MapRotationVolumeState>*))((::PBYTE)hIl2Cpp + CLASS_2_624AFA55756E2453_METHOD_2_30961CFB1800EE34_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_BD6B6387E2D758F6(::System::UInt32 a1, ::System::UInt32 a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_624AFA55756E2453_METHOD_2_BD6B6387E2D758F6_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_EDC93C4FBEAE48C7(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_624AFA55756E2453_METHOD_2_EDC93C4FBEAE48C7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8BEBF3CCF49EF055(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_624AFA55756E2453_METHOD_2_8BEBF3CCF49EF055_OFFSET))(this, a1);
	}

	::RPG::GameCore::MapRotationVolumeState Method_2_FCE63DE40639C1D8(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::MapRotationVolumeState(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_624AFA55756E2453_METHOD_2_FCE63DE40639C1D8_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_5507A1784CF3F491(::System::UInt32 a1, ::System::UInt32 a2, ::System::Single& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_624AFA55756E2453_METHOD_2_5507A1784CF3F491_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_EDDD1B285B468C3C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_624AFA55756E2453_METHOD_2_EDDD1B285B468C3C_OFFSET))(this, a1);
	}

	::System::Void Method_2_4358B7A5A0106CB5(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_624AFA55756E2453_METHOD_2_4358B7A5A0106CB5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E609BA7BAD47184E(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_624AFA55756E2453_METHOD_2_E609BA7BAD47184E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_012F5209D5FA3F65(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_624AFA55756E2453_METHOD_2_012F5209D5FA3F65_OFFSET))(this, a1);
	}

	::System::Void Method_2_8CA56FF24F45C9F3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_624AFA55756E2453_METHOD_2_8CA56FF24F45C9F3_OFFSET))(this, a1);
	}

	::System::Void Method_2_FB412E022C7694AA(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_624AFA55756E2453_METHOD_2_FB412E022C7694AA_OFFSET))(this, a1);
	}

	::System::Nullable_1<::System::ValueTuple_3<::System::UInt32, ::System::UInt32, ::System::Single>> Method_2_F3B1A708876271A6()
	{
		return ((::System::Nullable_1<::System::ValueTuple_3<::System::UInt32, ::System::UInt32, ::System::Single>>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_624AFA55756E2453_METHOD_2_F3B1A708876271A6_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::GameCore::MapRotationVolumeConfig*>* Method_2_79C4292A2866376F()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::GameCore::MapRotationVolumeConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_624AFA55756E2453_METHOD_2_79C4292A2866376F_OFFSET))(this);
	}

	::System::Void Method_2_E2CDB6B22CCEBA97(::Class_1_64D890C466F37235* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_64D890C466F37235*))((::PBYTE)hIl2Cpp + CLASS_2_624AFA55756E2453_METHOD_2_E2CDB6B22CCEBA97_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_624AFA55756E2453___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
