#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_551EEA7FD721AFFE.h"
#include "unitysdk/Struct_2_F9DC4B527765B8A0.h"
#include "unitysdk/System/Object.h"

class Class_1_41CD7473973817CA;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_139779B4AD4540D7_GET_BATTLERELICINFOS_OFFSET UNITYSDK_OFFSET(0x1146CF20)
#define CLASS_1_139779B4AD4540D7_GET_SPECIALRELICDATA_OFFSET UNITYSDK_OFFSET(0x1146CF40)
#define CLASS_1_139779B4AD4540D7_METHOD_1_1E02AF59343DE447_OFFSET UNITYSDK_OFFSET(0x1146DE90)
#define CLASS_1_139779B4AD4540D7_METHOD_1_7F29568EA964E563_OFFSET UNITYSDK_OFFSET(0x1146DA60)
#define CLASS_1_139779B4AD4540D7_METHOD_1_8B605602E226AA75_OFFSET UNITYSDK_OFFSET(0x1146E9D0)
#define CLASS_1_139779B4AD4540D7_METHOD_1_8D956ADCE45678D8_OFFSET UNITYSDK_OFFSET(0x1146DA10)
#define CLASS_1_139779B4AD4540D7_METHOD_1_99BBB94F0C5AD8BC_OFFSET UNITYSDK_OFFSET(0x1146CFA0)
#define CLASS_1_139779B4AD4540D7_METHOD_1_9BDA556E026C864A_OFFSET UNITYSDK_OFFSET(0x1146EED0)
#define CLASS_1_139779B4AD4540D7_METHOD_1_9F8F85BA5EA1113D_OFFSET UNITYSDK_OFFSET(0x1146CF90)
#define CLASS_1_139779B4AD4540D7_METHOD_1_A070318D665D0DAC_OFFSET UNITYSDK_OFFSET(0x1146DF30)
#define CLASS_1_139779B4AD4540D7_METHOD_1_AB651E89A20B83C0_OFFSET UNITYSDK_OFFSET(0x1146EB70)
#define CLASS_1_139779B4AD4540D7_METHOD_1_B6D17EAC719C29E2_OFFSET UNITYSDK_OFFSET(0x1146CF80)
#define CLASS_1_139779B4AD4540D7_METHOD_1_E9C6867952A4A931_1_OFFSET UNITYSDK_OFFSET(0x1146CF70)
#define CLASS_1_139779B4AD4540D7_METHOD_1_E9C6867952A4A931_OFFSET UNITYSDK_OFFSET(0x1146CF60)
#define CLASS_1_139779B4AD4540D7_METHOD_1_F63FE1AA9633F811_OFFSET UNITYSDK_OFFSET(0x1146CFF0)
#define CLASS_1_139779B4AD4540D7_METHOD_1_F91838C7F95A08B4_OFFSET UNITYSDK_OFFSET(0x1146ED10)
#define CLASS_1_139779B4AD4540D7_SET_BATTLERELICINFOS_OFFSET UNITYSDK_OFFSET(0x1146CF30)
#define CLASS_1_139779B4AD4540D7_SET_SPECIALRELICDATA_OFFSET UNITYSDK_OFFSET(0x1146CF50)
#define CLASS_1_139779B4AD4540D7__CTOR_OFFSET UNITYSDK_OFFSET(0x1146E800)

inline static constexpr unsigned int Class_1_139779B4AD4540D7_TypeDefinitionIndex = 45154;

class Class_1_139779B4AD4540D7 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint>* Field_1_4; // 0x10
	::Il2CppArray<::Struct_2_551EEA7FD721AFFE>* _BattleRelicInfos_k__BackingField; // 0x18
	::Class_1_41CD7473973817CA* _SpecialRelicData_k__BackingField; // 0x20
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint>* Field_1_3; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_F9DC4B527765B8A0>* Field_1_5; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_1_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_139779B4AD4540D7__CTOR_OFFSET))(this);
	}

	::Il2CppArray<::Struct_2_551EEA7FD721AFFE>* get_BattleRelicInfos()
	{
		return ((::Il2CppArray<::Struct_2_551EEA7FD721AFFE>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_139779B4AD4540D7_GET_BATTLERELICINFOS_OFFSET))(this);
	}

	::System::Void set_BattleRelicInfos(::Il2CppArray<::Struct_2_551EEA7FD721AFFE>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Struct_2_551EEA7FD721AFFE>*))((::PBYTE)hIl2Cpp + CLASS_1_139779B4AD4540D7_SET_BATTLERELICINFOS_OFFSET))(this, value);
	}

	::Class_1_41CD7473973817CA* get_SpecialRelicData()
	{
		return ((::Class_1_41CD7473973817CA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_139779B4AD4540D7_GET_SPECIALRELICDATA_OFFSET))(this);
	}

	::System::Void set_SpecialRelicData(::Class_1_41CD7473973817CA* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_41CD7473973817CA*))((::PBYTE)hIl2Cpp + CLASS_1_139779B4AD4540D7_SET_SPECIALRELICDATA_OFFSET))(this, value);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint>* Method_1_E9C6867952A4A931()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_139779B4AD4540D7_METHOD_1_E9C6867952A4A931_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint>* Method_1_E9C6867952A4A931_1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_139779B4AD4540D7_METHOD_1_E9C6867952A4A931_1_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_F9DC4B527765B8A0>* Method_1_B6D17EAC719C29E2()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_F9DC4B527765B8A0>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_139779B4AD4540D7_METHOD_1_B6D17EAC719C29E2_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Method_1_9F8F85BA5EA1113D()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_139779B4AD4540D7_METHOD_1_9F8F85BA5EA1113D_OFFSET))(this);
	}

	::System::Void Method_1_99BBB94F0C5AD8BC(::Il2CppArray<::Struct_2_551EEA7FD721AFFE>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Struct_2_551EEA7FD721AFFE>*))((::PBYTE)hIl2Cpp + CLASS_1_139779B4AD4540D7_METHOD_1_99BBB94F0C5AD8BC_OFFSET))(this, a1);
	}

	::System::Void Method_1_8D956ADCE45678D8(::Class_1_41CD7473973817CA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_41CD7473973817CA*))((::PBYTE)hIl2Cpp + CLASS_1_139779B4AD4540D7_METHOD_1_8D956ADCE45678D8_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_1E02AF59343DE447(::System::String* a1, ::System::Int32 a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_139779B4AD4540D7_METHOD_1_1E02AF59343DE447_OFFSET))(this, a1, a2);
	}

	::Class_1_139779B4AD4540D7* Method_1_A070318D665D0DAC()
	{
		return ((::Class_1_139779B4AD4540D7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_139779B4AD4540D7_METHOD_1_A070318D665D0DAC_OFFSET))(this);
	}

	::System::Void Method_1_F63FE1AA9633F811()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_139779B4AD4540D7_METHOD_1_F63FE1AA9633F811_OFFSET))(this);
	}

	::System::Void Method_1_AB651E89A20B83C0(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_139779B4AD4540D7_METHOD_1_AB651E89A20B83C0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8B605602E226AA75(::RPG::GameCore::AvatarPropertyType a1, ::RPG::GameCore::FixPoint a2, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_139779B4AD4540D7_METHOD_1_8B605602E226AA75_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_F91838C7F95A08B4(::RPG::GameCore::AvatarPropertyType a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_139779B4AD4540D7_METHOD_1_F91838C7F95A08B4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9BDA556E026C864A(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_139779B4AD4540D7_METHOD_1_9BDA556E026C864A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7F29568EA964E563()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_139779B4AD4540D7_METHOD_1_7F29568EA964E563_OFFSET))(this);
	}
};
