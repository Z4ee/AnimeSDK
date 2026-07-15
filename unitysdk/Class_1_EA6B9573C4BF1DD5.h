#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_87FCA8A012E1D4A7.h"
#include "unitysdk/Struct_2_F9DC4B527765B8A0.h"
#include "unitysdk/System/Object.h"

class Class_1_41CD7473973817CA;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_EA6B9573C4BF1DD5_GET_BATTLERELICINFOS_OFFSET UNITYSDK_OFFSET(0x16592910)
#define CLASS_1_EA6B9573C4BF1DD5_GET_SPECIALRELICDATA_OFFSET UNITYSDK_OFFSET(0x16592930)
#define CLASS_1_EA6B9573C4BF1DD5_METHOD_1_090E13986872606E_OFFSET UNITYSDK_OFFSET(0x165936D0)
#define CLASS_1_EA6B9573C4BF1DD5_METHOD_1_146E6E50FAF07D8F_OFFSET UNITYSDK_OFFSET(0x165929E0)
#define CLASS_1_EA6B9573C4BF1DD5_METHOD_1_230F5E8DE365AF28_OFFSET UNITYSDK_OFFSET(0x16593FE0)
#define CLASS_1_EA6B9573C4BF1DD5_METHOD_1_299B62F0A20DC2F9_OFFSET UNITYSDK_OFFSET(0x16594300)
#define CLASS_1_EA6B9573C4BF1DD5_METHOD_1_2DCDFF29E7FDDAA8_OFFSET UNITYSDK_OFFSET(0x165931D0)
#define CLASS_1_EA6B9573C4BF1DD5_METHOD_1_3194F2A670D3800F_OFFSET UNITYSDK_OFFSET(0x16592990)
#define CLASS_1_EA6B9573C4BF1DD5_METHOD_1_5AD7EA9F1126DF19_OFFSET UNITYSDK_OFFSET(0x16594490)
#define CLASS_1_EA6B9573C4BF1DD5_METHOD_1_6AAD238639E15501_OFFSET UNITYSDK_OFFSET(0x16594160)
#define CLASS_1_EA6B9573C4BF1DD5_METHOD_1_8524EB88A02E4DF3_OFFSET UNITYSDK_OFFSET(0x165935F0)
#define CLASS_1_EA6B9573C4BF1DD5_METHOD_1_8D956ADCE45678D8_OFFSET UNITYSDK_OFFSET(0x16593180)
#define CLASS_1_EA6B9573C4BF1DD5_METHOD_1_9F8F85BA5EA1113D_OFFSET UNITYSDK_OFFSET(0x16592980)
#define CLASS_1_EA6B9573C4BF1DD5_METHOD_1_B6D17EAC719C29E2_OFFSET UNITYSDK_OFFSET(0x16592970)
#define CLASS_1_EA6B9573C4BF1DD5_METHOD_1_E9C6867952A4A931_1_OFFSET UNITYSDK_OFFSET(0x16592960)
#define CLASS_1_EA6B9573C4BF1DD5_METHOD_1_E9C6867952A4A931_OFFSET UNITYSDK_OFFSET(0x16592950)
#define CLASS_1_EA6B9573C4BF1DD5_SET_BATTLERELICINFOS_OFFSET UNITYSDK_OFFSET(0x16592920)
#define CLASS_1_EA6B9573C4BF1DD5_SET_SPECIALRELICDATA_OFFSET UNITYSDK_OFFSET(0x16592940)
#define CLASS_1_EA6B9573C4BF1DD5__CTOR_OFFSET UNITYSDK_OFFSET(0x16588220)

inline static constexpr unsigned int Class_1_EA6B9573C4BF1DD5_TypeDefinitionIndex = 53789;

class Class_1_EA6B9573C4BF1DD5 : public ::System::Object
{
public:
	::Class_1_41CD7473973817CA* _SpecialRelicData_k__BackingField; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint>* Field_1_1; // 0x18
	::Il2CppArray<::Struct_2_87FCA8A012E1D4A7>* _BattleRelicInfos_k__BackingField; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_F9DC4B527765B8A0>* Field_1_3; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_1_4; // 0x30
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint>* Field_1_5; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA6B9573C4BF1DD5__CTOR_OFFSET))(this);
	}

	::Il2CppArray<::Struct_2_87FCA8A012E1D4A7>* get_BattleRelicInfos()
	{
		return ((::Il2CppArray<::Struct_2_87FCA8A012E1D4A7>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA6B9573C4BF1DD5_GET_BATTLERELICINFOS_OFFSET))(this);
	}

	::System::Void set_BattleRelicInfos(::Il2CppArray<::Struct_2_87FCA8A012E1D4A7>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Struct_2_87FCA8A012E1D4A7>*))((::PBYTE)hIl2Cpp + CLASS_1_EA6B9573C4BF1DD5_SET_BATTLERELICINFOS_OFFSET))(this, a1);
	}

	::Class_1_41CD7473973817CA* get_SpecialRelicData()
	{
		return ((::Class_1_41CD7473973817CA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA6B9573C4BF1DD5_GET_SPECIALRELICDATA_OFFSET))(this);
	}

	::System::Void set_SpecialRelicData(::Class_1_41CD7473973817CA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_41CD7473973817CA*))((::PBYTE)hIl2Cpp + CLASS_1_EA6B9573C4BF1DD5_SET_SPECIALRELICDATA_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint>* Method_1_E9C6867952A4A931()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA6B9573C4BF1DD5_METHOD_1_E9C6867952A4A931_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint>* Method_1_E9C6867952A4A931_1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA6B9573C4BF1DD5_METHOD_1_E9C6867952A4A931_1_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_F9DC4B527765B8A0>* Method_1_B6D17EAC719C29E2()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_F9DC4B527765B8A0>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA6B9573C4BF1DD5_METHOD_1_B6D17EAC719C29E2_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Method_1_9F8F85BA5EA1113D()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA6B9573C4BF1DD5_METHOD_1_9F8F85BA5EA1113D_OFFSET))(this);
	}

	::System::Void Method_1_3194F2A670D3800F(::Il2CppArray<::Struct_2_87FCA8A012E1D4A7>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Struct_2_87FCA8A012E1D4A7>*))((::PBYTE)hIl2Cpp + CLASS_1_EA6B9573C4BF1DD5_METHOD_1_3194F2A670D3800F_OFFSET))(this, a1);
	}

	::System::Void Method_1_8D956ADCE45678D8(::Class_1_41CD7473973817CA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_41CD7473973817CA*))((::PBYTE)hIl2Cpp + CLASS_1_EA6B9573C4BF1DD5_METHOD_1_8D956ADCE45678D8_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_8524EB88A02E4DF3(::System::String* a1, ::System::Int32 a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EA6B9573C4BF1DD5_METHOD_1_8524EB88A02E4DF3_OFFSET))(this, a1, a2);
	}

	::Class_1_EA6B9573C4BF1DD5* Method_1_090E13986872606E()
	{
		return ((::Class_1_EA6B9573C4BF1DD5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA6B9573C4BF1DD5_METHOD_1_090E13986872606E_OFFSET))(this);
	}

	::System::Void Method_1_146E6E50FAF07D8F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA6B9573C4BF1DD5_METHOD_1_146E6E50FAF07D8F_OFFSET))(this);
	}

	::System::Void Method_1_6AAD238639E15501(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EA6B9573C4BF1DD5_METHOD_1_6AAD238639E15501_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_230F5E8DE365AF28(::RPG::GameCore::AvatarPropertyType a1, ::RPG::GameCore::FixPoint a2, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_EA6B9573C4BF1DD5_METHOD_1_230F5E8DE365AF28_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_299B62F0A20DC2F9(::RPG::GameCore::AvatarPropertyType a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_EA6B9573C4BF1DD5_METHOD_1_299B62F0A20DC2F9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5AD7EA9F1126DF19(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EA6B9573C4BF1DD5_METHOD_1_5AD7EA9F1126DF19_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2DCDFF29E7FDDAA8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA6B9573C4BF1DD5_METHOD_1_2DCDFF29E7FDDAA8_OFFSET))(this);
	}
};
