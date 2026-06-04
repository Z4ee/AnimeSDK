#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D5DA62FC7DE2D532.h"
#include "unitysdk/RPG/GameCore/MapRotationVolumeState.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_64D890C466F37235;
class Class_2_27A6FCAF93534BC1_Class_2_A6C83DE587736314;
class Class_2_36C95D73718D07B1;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MapRotationVolumeConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_27A6FCAF93534BC1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1392BF10)
#define CLASS_2_27A6FCAF93534BC1_METHOD_2_195BD2B917EA8DE8_OFFSET UNITYSDK_OFFSET(0x1392E020)
#define CLASS_2_27A6FCAF93534BC1_METHOD_2_25DC2EA107F250C9_OFFSET UNITYSDK_OFFSET(0x1392CEA0)
#define CLASS_2_27A6FCAF93534BC1_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1392BCA0)
#define CLASS_2_27A6FCAF93534BC1_METHOD_2_4BCE9D2476E12939_OFFSET UNITYSDK_OFFSET(0x1392BA30)
#define CLASS_2_27A6FCAF93534BC1_METHOD_2_51C16AFE1AF9EBE7_OFFSET UNITYSDK_OFFSET(0x1392D5E0)
#define CLASS_2_27A6FCAF93534BC1_METHOD_2_612BBFC8DECD1069_OFFSET UNITYSDK_OFFSET(0x1392BAE0)
#define CLASS_2_27A6FCAF93534BC1_METHOD_2_648A0173DD410CEE_OFFSET UNITYSDK_OFFSET(0x1392C030)
#define CLASS_2_27A6FCAF93534BC1_METHOD_2_79C4292A2866376F_OFFSET UNITYSDK_OFFSET(0x1392B530)
#define CLASS_2_27A6FCAF93534BC1_METHOD_2_7CFE092F91703EAB_OFFSET UNITYSDK_OFFSET(0x1392C330)
#define CLASS_2_27A6FCAF93534BC1_METHOD_2_80B76CA3BC860A58_OFFSET UNITYSDK_OFFSET(0x1392DDD0)
#define CLASS_2_27A6FCAF93534BC1_METHOD_2_8CD1A6D1096A6CB7_OFFSET UNITYSDK_OFFSET(0x1392E280)
#define CLASS_2_27A6FCAF93534BC1_METHOD_2_98EFF476B0C91E90_OFFSET UNITYSDK_OFFSET(0x1392DC10)
#define CLASS_2_27A6FCAF93534BC1_METHOD_2_A51990588927C70C_OFFSET UNITYSDK_OFFSET(0x1392B610)
#define CLASS_2_27A6FCAF93534BC1_METHOD_2_A6E930F1EA74B089_1_OFFSET UNITYSDK_OFFSET(0x1392C760)
#define CLASS_2_27A6FCAF93534BC1_METHOD_2_A6E930F1EA74B089_OFFSET UNITYSDK_OFFSET(0x1392C5D0)
#define CLASS_2_27A6FCAF93534BC1_METHOD_2_B7F154EC7969C5DB_OFFSET UNITYSDK_OFFSET(0x1392D510)
#define CLASS_2_27A6FCAF93534BC1_METHOD_2_CB1FAAB5082BB3FB_OFFSET UNITYSDK_OFFSET(0x1392B020)
#define CLASS_2_27A6FCAF93534BC1_METHOD_2_D0B02590F846487E_OFFSET UNITYSDK_OFFSET(0x1392DB40)
#define CLASS_2_27A6FCAF93534BC1_METHOD_2_D46B8ABFF6EDAE06_OFFSET UNITYSDK_OFFSET(0x1392D910)
#define CLASS_2_27A6FCAF93534BC1_METHOD_2_DA3628DA1C2AAF6F_OFFSET UNITYSDK_OFFSET(0x1392BCE0)
#define CLASS_2_27A6FCAF93534BC1_METHOD_2_F0C5BA821C8BCE78_OFFSET UNITYSDK_OFFSET(0x1392D310)
#define CLASS_2_27A6FCAF93534BC1_METHOD_2_F4660005520BFDF0_OFFSET UNITYSDK_OFFSET(0x1392D7B0)
#define CLASS_2_27A6FCAF93534BC1__CTOR_OFFSET UNITYSDK_OFFSET(0x1392E270)
#define CLASS_2_27A6FCAF93534BC1___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1392E2E0)

inline static constexpr unsigned int Class_2_27A6FCAF93534BC1_TypeDefinitionIndex = 56659;

class Class_2_27A6FCAF93534BC1 : public ::Class_1_D5DA62FC7DE2D532
{
public:
	::Class_2_36C95D73718D07B1* Field_2_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::Class_2_27A6FCAF93534BC1_Class_2_A6C83DE587736314*>* Field_2_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_27A6FCAF93534BC1_Class_2_A6C83DE587736314*>* Field_2_2; // 0x20
	::Class_1_64D890C466F37235* Field_2_3; // 0x28
	::System::Boolean Field_2_4; // 0x30
	::System::Nullable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>> Field_2_5; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27A6FCAF93534BC1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CB1FAAB5082BB3FB(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_27A6FCAF93534BC1_METHOD_2_CB1FAAB5082BB3FB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_4BCE9D2476E12939(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_27A6FCAF93534BC1_METHOD_2_4BCE9D2476E12939_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27A6FCAF93534BC1_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_2_DA3628DA1C2AAF6F(::Class_1_64D890C466F37235* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_64D890C466F37235*))((::PBYTE)hIl2Cpp + CLASS_2_27A6FCAF93534BC1_METHOD_2_DA3628DA1C2AAF6F_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27A6FCAF93534BC1_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_648A0173DD410CEE(::System::UInt32 a1, ::System::UInt32 a2, ::System::String* a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_27A6FCAF93534BC1_METHOD_2_648A0173DD410CEE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_7CFE092F91703EAB(::System::UInt32 a1, ::System::UInt32 a2, ::System::String* a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_27A6FCAF93534BC1_METHOD_2_7CFE092F91703EAB_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_A6E930F1EA74B089(::System::UInt32 a1, ::System::UInt32 a2, ::System::Action_1<::RPG::GameCore::MapRotationVolumeState>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Action_1<::RPG::GameCore::MapRotationVolumeState>*))((::PBYTE)hIl2Cpp + CLASS_2_27A6FCAF93534BC1_METHOD_2_A6E930F1EA74B089_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_A6E930F1EA74B089_1(::System::UInt32 a1, ::System::UInt32 a2, ::System::Action_1<::RPG::GameCore::MapRotationVolumeState>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Action_1<::RPG::GameCore::MapRotationVolumeState>*))((::PBYTE)hIl2Cpp + CLASS_2_27A6FCAF93534BC1_METHOD_2_A6E930F1EA74B089_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_A51990588927C70C(::System::UInt32 a1, ::System::UInt32 a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_27A6FCAF93534BC1_METHOD_2_A51990588927C70C_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_25DC2EA107F250C9(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_27A6FCAF93534BC1_METHOD_2_25DC2EA107F250C9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F0C5BA821C8BCE78(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_27A6FCAF93534BC1_METHOD_2_F0C5BA821C8BCE78_OFFSET))(this, a1);
	}

	::RPG::GameCore::MapRotationVolumeState Method_2_B7F154EC7969C5DB(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::MapRotationVolumeState(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_27A6FCAF93534BC1_METHOD_2_B7F154EC7969C5DB_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_51C16AFE1AF9EBE7(::System::UInt32 a1, ::System::UInt32 a2, ::System::Single& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_27A6FCAF93534BC1_METHOD_2_51C16AFE1AF9EBE7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_F4660005520BFDF0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_27A6FCAF93534BC1_METHOD_2_F4660005520BFDF0_OFFSET))(this, a1);
	}

	::System::Void Method_2_D46B8ABFF6EDAE06(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_27A6FCAF93534BC1_METHOD_2_D46B8ABFF6EDAE06_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_612BBFC8DECD1069(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_27A6FCAF93534BC1_METHOD_2_612BBFC8DECD1069_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D0B02590F846487E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_27A6FCAF93534BC1_METHOD_2_D0B02590F846487E_OFFSET))(this, a1);
	}

	::System::Void Method_2_80B76CA3BC860A58(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_27A6FCAF93534BC1_METHOD_2_80B76CA3BC860A58_OFFSET))(this, a1);
	}

	::System::Void Method_2_98EFF476B0C91E90(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_27A6FCAF93534BC1_METHOD_2_98EFF476B0C91E90_OFFSET))(this, a1);
	}

	::System::Nullable_1<::System::ValueTuple_3<::System::UInt32, ::System::UInt32, ::System::Single>> Method_2_195BD2B917EA8DE8()
	{
		return ((::System::Nullable_1<::System::ValueTuple_3<::System::UInt32, ::System::UInt32, ::System::Single>>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27A6FCAF93534BC1_METHOD_2_195BD2B917EA8DE8_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::GameCore::MapRotationVolumeConfig*>* Method_2_79C4292A2866376F()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::GameCore::MapRotationVolumeConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27A6FCAF93534BC1_METHOD_2_79C4292A2866376F_OFFSET))(this);
	}

	::System::Void Method_2_8CD1A6D1096A6CB7(::Class_1_64D890C466F37235* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_64D890C466F37235*))((::PBYTE)hIl2Cpp + CLASS_2_27A6FCAF93534BC1_METHOD_2_8CD1A6D1096A6CB7_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27A6FCAF93534BC1___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
