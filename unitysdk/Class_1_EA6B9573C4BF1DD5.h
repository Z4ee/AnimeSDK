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

#define CLASS_1_EA6B9573C4BF1DD5_GET_BATTLERELICINFOS_OFFSET UNITYSDK_OFFSET(0x17F396C0)
#define CLASS_1_EA6B9573C4BF1DD5_GET_SPECIALRELICDATA_OFFSET UNITYSDK_OFFSET(0x17F396E0)
#define CLASS_1_EA6B9573C4BF1DD5_METHOD_1_146E6E50FAF07D8F_OFFSET UNITYSDK_OFFSET(0x17F39790)
#define CLASS_1_EA6B9573C4BF1DD5_METHOD_1_230F5E8DE365AF28_OFFSET UNITYSDK_OFFSET(0x17F3ADB0)
#define CLASS_1_EA6B9573C4BF1DD5_METHOD_1_299B62F0A20DC2F9_OFFSET UNITYSDK_OFFSET(0x17F3B0D0)
#define CLASS_1_EA6B9573C4BF1DD5_METHOD_1_2DCDFF29E7FDDAA8_OFFSET UNITYSDK_OFFSET(0x17F39F80)
#define CLASS_1_EA6B9573C4BF1DD5_METHOD_1_3194F2A670D3800F_OFFSET UNITYSDK_OFFSET(0x17F39740)
#define CLASS_1_EA6B9573C4BF1DD5_METHOD_1_600F21A3B717E2D0_OFFSET UNITYSDK_OFFSET(0x17F3B260)
#define CLASS_1_EA6B9573C4BF1DD5_METHOD_1_8524EB88A02E4DF3_OFFSET UNITYSDK_OFFSET(0x17F3A3A0)
#define CLASS_1_EA6B9573C4BF1DD5_METHOD_1_8D956ADCE45678D8_OFFSET UNITYSDK_OFFSET(0x17F39F30)
#define CLASS_1_EA6B9573C4BF1DD5_METHOD_1_9F8F85BA5EA1113D_OFFSET UNITYSDK_OFFSET(0x17F39730)
#define CLASS_1_EA6B9573C4BF1DD5_METHOD_1_A0BBF33D521FD575_OFFSET UNITYSDK_OFFSET(0x17F3A480)
#define CLASS_1_EA6B9573C4BF1DD5_METHOD_1_AB651E89A20B83C0_OFFSET UNITYSDK_OFFSET(0x17F3AF30)
#define CLASS_1_EA6B9573C4BF1DD5_METHOD_1_B6D17EAC719C29E2_OFFSET UNITYSDK_OFFSET(0x17F39720)
#define CLASS_1_EA6B9573C4BF1DD5_METHOD_1_E9C6867952A4A931_1_OFFSET UNITYSDK_OFFSET(0x17F39710)
#define CLASS_1_EA6B9573C4BF1DD5_METHOD_1_E9C6867952A4A931_OFFSET UNITYSDK_OFFSET(0x17F39700)
#define CLASS_1_EA6B9573C4BF1DD5_SET_BATTLERELICINFOS_OFFSET UNITYSDK_OFFSET(0x17F396D0)
#define CLASS_1_EA6B9573C4BF1DD5_SET_SPECIALRELICDATA_OFFSET UNITYSDK_OFFSET(0x17F396F0)
#define CLASS_1_EA6B9573C4BF1DD5__CTOR_OFFSET UNITYSDK_OFFSET(0x17F2F190)

inline static constexpr unsigned int Class_1_EA6B9573C4BF1DD5_TypeDefinitionIndex = 56509;

class Class_1_EA6B9573C4BF1DD5 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint>* DLOINOGKOKN; // 0x10
	::Class_1_41CD7473973817CA* _SpecialRelicData_k__BackingField; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* CHGBEMPCPIG; // 0x20
	::Il2CppArray<::Struct_2_87FCA8A012E1D4A7>* _BattleRelicInfos_k__BackingField; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_F9DC4B527765B8A0>* AKLGLFLMOFL; // 0x30
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint>* DNBPHLHLBIL; // 0x38

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

	::Class_1_EA6B9573C4BF1DD5* Method_1_A0BBF33D521FD575()
	{
		return ((::Class_1_EA6B9573C4BF1DD5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA6B9573C4BF1DD5_METHOD_1_A0BBF33D521FD575_OFFSET))(this);
	}

	::System::Void Method_1_146E6E50FAF07D8F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA6B9573C4BF1DD5_METHOD_1_146E6E50FAF07D8F_OFFSET))(this);
	}

	::System::Void Method_1_AB651E89A20B83C0(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EA6B9573C4BF1DD5_METHOD_1_AB651E89A20B83C0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_230F5E8DE365AF28(::RPG::GameCore::AvatarPropertyType a1, ::RPG::GameCore::FixPoint a2, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_EA6B9573C4BF1DD5_METHOD_1_230F5E8DE365AF28_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_299B62F0A20DC2F9(::RPG::GameCore::AvatarPropertyType a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_EA6B9573C4BF1DD5_METHOD_1_299B62F0A20DC2F9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_600F21A3B717E2D0(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EA6B9573C4BF1DD5_METHOD_1_600F21A3B717E2D0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2DCDFF29E7FDDAA8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA6B9573C4BF1DD5_METHOD_1_2DCDFF29E7FDDAA8_OFFSET))(this);
	}
};
