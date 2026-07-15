#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightEquipCategory.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_425;
class Class_1_0F040833AFEDF4F6;
class Class_1_10F56A639581CEB1_2;
class Class_1_15DDFAAE3B5FD6E0;
class Class_1_1C6D038ACA57B217;
class Class_1_22B8FDC4E33ACC56;
class Class_1_2AEC7C4C0F203579;
class Class_1_48AADA497C3F117F;
class Class_1_915C39CA84CCD8CF;
class Class_1_A6B0B39A319DDDE2_1;
class Class_1_C9DFE5EE7107C629;
class Class_1_D17272E82AE804C2_29;
class Class_1_D17272E82AE804C2_30;
class Class_1_D17272E82AE804C2_31;
class Class_1_D17272E82AE804C2_32;
class Class_3_07C3C4D2990C49EE;
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_34CD5A7B272AF994_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15599A00)
#define CLASS_1_34CD5A7B272AF994_METHOD_1_06F5E059FFC46C91_OFFSET UNITYSDK_OFFSET(0x15599480)
#define CLASS_1_34CD5A7B272AF994_METHOD_1_09C3DBB624A973FC_1_OFFSET UNITYSDK_OFFSET(0x1559F6A0)
#define CLASS_1_34CD5A7B272AF994_METHOD_1_09C3DBB624A973FC_OFFSET UNITYSDK_OFFSET(0x1559F5B0)
#define CLASS_1_34CD5A7B272AF994_METHOD_1_09DA5ED950396F79_OFFSET UNITYSDK_OFFSET(0x1559DDC0)
#define CLASS_1_34CD5A7B272AF994_METHOD_1_1283EC0876EAAACF_OFFSET UNITYSDK_OFFSET(0x15599C60)
#define CLASS_1_34CD5A7B272AF994_METHOD_1_1738AC084BAAAEA3_OFFSET UNITYSDK_OFFSET(0x1559F2F0)
#define CLASS_1_34CD5A7B272AF994_METHOD_1_19FB5FBEA9EA66CD_OFFSET UNITYSDK_OFFSET(0x15598940)
#define CLASS_1_34CD5A7B272AF994_METHOD_1_2064C5CB156C4F21_OFFSET UNITYSDK_OFFSET(0x1559E860)
#define CLASS_1_34CD5A7B272AF994_METHOD_1_2314B25840D94866_OFFSET UNITYSDK_OFFSET(0x1559E0F0)
#define CLASS_1_34CD5A7B272AF994_METHOD_1_2D4CF3F599766D29_OFFSET UNITYSDK_OFFSET(0x1559A850)
#define CLASS_1_34CD5A7B272AF994_METHOD_1_34DD004E4967BA2D_1_OFFSET UNITYSDK_OFFSET(0x1559C820)
#define CLASS_1_34CD5A7B272AF994_METHOD_1_34DD004E4967BA2D_OFFSET UNITYSDK_OFFSET(0x1559BF30)
#define CLASS_1_34CD5A7B272AF994_METHOD_1_3560EEEF9C8CB03E_OFFSET UNITYSDK_OFFSET(0x1559F1F0)
#define CLASS_1_34CD5A7B272AF994_METHOD_1_4599A9E4AD0CB3A5_1_OFFSET UNITYSDK_OFFSET(0x1559C610)
#define CLASS_1_34CD5A7B272AF994_METHOD_1_4599A9E4AD0CB3A5_OFFSET UNITYSDK_OFFSET(0x1559EFE0)
#define CLASS_1_34CD5A7B272AF994_METHOD_1_6307BE8AC3426D62_OFFSET UNITYSDK_OFFSET(0x1559A0B0)
#define CLASS_1_34CD5A7B272AF994_METHOD_1_71C3196E6B24EF59_OFFSET UNITYSDK_OFFSET(0x1559B890)
#define CLASS_1_34CD5A7B272AF994_METHOD_1_74E8775EA2E80F8A_OFFSET UNITYSDK_OFFSET(0x15599390)
#define CLASS_1_34CD5A7B272AF994_METHOD_1_8309535CC9426C2A_1_OFFSET UNITYSDK_OFFSET(0x1559F710)
#define CLASS_1_34CD5A7B272AF994_METHOD_1_8309535CC9426C2A_OFFSET UNITYSDK_OFFSET(0x1559F620)
#define CLASS_1_34CD5A7B272AF994_METHOD_1_87AE8E5B65D5A260_OFFSET UNITYSDK_OFFSET(0x15599F80)
#define CLASS_1_34CD5A7B272AF994_METHOD_1_8CD12EA1949D27B0_OFFSET UNITYSDK_OFFSET(0x1559F520)
#define CLASS_1_34CD5A7B272AF994_METHOD_1_9BD03B540786A4F4_1_OFFSET UNITYSDK_OFFSET(0x1559D660)
#define CLASS_1_34CD5A7B272AF994_METHOD_1_9BD03B540786A4F4_OFFSET UNITYSDK_OFFSET(0x1559CF00)
#define CLASS_1_34CD5A7B272AF994_METHOD_1_9CC14AB056DFABFC_1_OFFSET UNITYSDK_OFFSET(0x15598BC0)
#define CLASS_1_34CD5A7B272AF994_METHOD_1_9CC14AB056DFABFC_OFFSET UNITYSDK_OFFSET(0x15598B80)
#define CLASS_1_34CD5A7B272AF994_METHOD_1_9DA840964E8B2EBC_OFFSET UNITYSDK_OFFSET(0x1559A510)
#define CLASS_1_34CD5A7B272AF994_METHOD_1_A3624D9FA1040D8D_OFFSET UNITYSDK_OFFSET(0x15598B40)
#define CLASS_1_34CD5A7B272AF994_METHOD_1_AC0F8B2123B5D010_OFFSET UNITYSDK_OFFSET(0x15599320)
#define CLASS_1_34CD5A7B272AF994_METHOD_1_DB8E8E75B685B975_OFFSET UNITYSDK_OFFSET(0x15599C10)
#define CLASS_1_34CD5A7B272AF994_METHOD_1_DEDB2E108A5AE952_OFFSET UNITYSDK_OFFSET(0x1559F3D0)
#define CLASS_1_34CD5A7B272AF994_METHOD_1_E495EFFB22D4AFAB_OFFSET UNITYSDK_OFFSET(0x15599690)
#define CLASS_1_34CD5A7B272AF994_METHOD_1_E7ACE86AF89160D5_OFFSET UNITYSDK_OFFSET(0x15598C00)
#define CLASS_1_34CD5A7B272AF994_METHOD_1_F7EDA528D89DF793_OFFSET UNITYSDK_OFFSET(0x15598ED0)
#define CLASS_1_34CD5A7B272AF994__CTOR_OFFSET UNITYSDK_OFFSET(0x15598080)

inline static constexpr unsigned int Class_1_34CD5A7B272AF994_TypeDefinitionIndex = 55042;

class Class_1_34CD5A7B272AF994 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_1C6D038ACA57B217*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_1C6D038ACA57B217*>* Field_1_1; // 0x18
	::RPG::GameCore::GameEntity* Field_1_2; // 0x20
	::Class_3_07C3C4D2990C49EE* Field_1_3; // 0x28
	::Class_1_22B8FDC4E33ACC56* Field_1_4; // 0x30
	::RPG::GameCore::GameEntity* Field_1_5; // 0x38
	::System::Collections::Generic::List_1<::Class_1_915C39CA84CCD8CF*>* Field_1_6; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_1C6D038ACA57B217*>* Field_1_7; // 0x48
	::RPG::GameCore::TurnBasedGameMode* Field_1_8; // 0x50
	::Class_1_1C6D038ACA57B217* Field_1_9; // 0x58
	::System::Boolean Field_1_10; // 0x60
	::System::UInt32 Field_1_11; // 0x64
	::RPG::GameCore::FixPoint Field_1_12; // 0x68
	::RPG::GameCore::FixPoint Field_1_13; // 0x70

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_34CD5A7B272AF994__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_19FB5FBEA9EA66CD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34CD5A7B272AF994_METHOD_1_19FB5FBEA9EA66CD_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_1C6D038ACA57B217*>* Method_1_A3624D9FA1040D8D()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_1C6D038ACA57B217*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34CD5A7B272AF994_METHOD_1_A3624D9FA1040D8D_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_1C6D038ACA57B217*>* Method_1_9CC14AB056DFABFC()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_1C6D038ACA57B217*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34CD5A7B272AF994_METHOD_1_9CC14AB056DFABFC_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_1C6D038ACA57B217*>* Method_1_9CC14AB056DFABFC_1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_1C6D038ACA57B217*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34CD5A7B272AF994_METHOD_1_9CC14AB056DFABFC_1_OFFSET))(this);
	}

	::System::Void Method_1_E7ACE86AF89160D5(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_1_34CD5A7B272AF994_METHOD_1_E7ACE86AF89160D5_OFFSET))(this, a1);
	}

	::System::Void Method_1_F7EDA528D89DF793(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_1_34CD5A7B272AF994_METHOD_1_F7EDA528D89DF793_OFFSET))(this, a1);
	}

	::System::Void Method_1_74E8775EA2E80F8A(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_1_34CD5A7B272AF994_METHOD_1_74E8775EA2E80F8A_OFFSET))(this, a1);
	}

	::System::Void Method_1_06F5E059FFC46C91(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_1_34CD5A7B272AF994_METHOD_1_06F5E059FFC46C91_OFFSET))(this, a1);
	}

	::System::Void Method_1_E495EFFB22D4AFAB(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_1_34CD5A7B272AF994_METHOD_1_E495EFFB22D4AFAB_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34CD5A7B272AF994_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_DB8E8E75B685B975(::Class_3_07C3C4D2990C49EE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_07C3C4D2990C49EE*))((::PBYTE)hIl2Cpp + CLASS_1_34CD5A7B272AF994_METHOD_1_DB8E8E75B685B975_OFFSET))(this, a1);
	}

	::System::Void Method_1_87AE8E5B65D5A260(::RPG::GameCore::TurnBasedModifierInstance* a1, ::Class_3_07C3C4D2990C49EE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::Class_3_07C3C4D2990C49EE*))((::PBYTE)hIl2Cpp + CLASS_1_34CD5A7B272AF994_METHOD_1_87AE8E5B65D5A260_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6307BE8AC3426D62(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::GridFightEquipCategory a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::GridFightEquipCategory))((::PBYTE)hIl2Cpp + CLASS_1_34CD5A7B272AF994_METHOD_1_6307BE8AC3426D62_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_AC0F8B2123B5D010(::Class_1_1C6D038ACA57B217* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1C6D038ACA57B217*))((::PBYTE)hIl2Cpp + CLASS_1_34CD5A7B272AF994_METHOD_1_AC0F8B2123B5D010_OFFSET))(this, a1);
	}

	::System::Void Method_1_1283EC0876EAAACF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34CD5A7B272AF994_METHOD_1_1283EC0876EAAACF_OFFSET))(this);
	}

	::System::Boolean Method_1_9DA840964E8B2EBC(::System::UInt32 a1, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Double>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Double>*))((::PBYTE)hIl2Cpp + CLASS_1_34CD5A7B272AF994_METHOD_1_9DA840964E8B2EBC_OFFSET))(this, a1, a2);
	}

	::Class_1_A6B0B39A319DDDE2_1* Method_1_2D4CF3F599766D29()
	{
		return ((::Class_1_A6B0B39A319DDDE2_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34CD5A7B272AF994_METHOD_1_2D4CF3F599766D29_OFFSET))(this);
	}

	static ::System::Boolean Method_1_71C3196E6B24EF59(::Class_1_2AEC7C4C0F203579* a1, ::Class_1_2AEC7C4C0F203579* a2)
	{
		return ((::System::Boolean(*)(::Class_1_2AEC7C4C0F203579*, ::Class_1_2AEC7C4C0F203579*))((::PBYTE)hIl2Cpp + CLASS_1_34CD5A7B272AF994_METHOD_1_71C3196E6B24EF59_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4599A9E4AD0CB3A5(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_10F56A639581CEB1_2*>* a1, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_10F56A639581CEB1_2*>* a2)
	{
		return ((::System::Void(*)(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_10F56A639581CEB1_2*>*, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_10F56A639581CEB1_2*>*))((::PBYTE)hIl2Cpp + CLASS_1_34CD5A7B272AF994_METHOD_1_4599A9E4AD0CB3A5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2064C5CB156C4F21(::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>* a1, ::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>*, ::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_34CD5A7B272AF994_METHOD_1_2064C5CB156C4F21_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4599A9E4AD0CB3A5_1(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C9DFE5EE7107C629*>* a1, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C9DFE5EE7107C629*>* a2)
	{
		return ((::System::Void(*)(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C9DFE5EE7107C629*>*, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C9DFE5EE7107C629*>*))((::PBYTE)hIl2Cpp + CLASS_1_34CD5A7B272AF994_METHOD_1_4599A9E4AD0CB3A5_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_34DD004E4967BA2D(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_0F040833AFEDF4F6*>* a1, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_0F040833AFEDF4F6*>* a2)
	{
		return ((::System::Void(*)(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_0F040833AFEDF4F6*>*, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_0F040833AFEDF4F6*>*))((::PBYTE)hIl2Cpp + CLASS_1_34CD5A7B272AF994_METHOD_1_34DD004E4967BA2D_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_3560EEEF9C8CB03E(::Class_1_0F040833AFEDF4F6* a1, ::Class_1_0F040833AFEDF4F6* a2)
	{
		return ((::System::Boolean(*)(::Class_1_0F040833AFEDF4F6*, ::Class_1_0F040833AFEDF4F6*))((::PBYTE)hIl2Cpp + CLASS_1_34CD5A7B272AF994_METHOD_1_3560EEEF9C8CB03E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_34DD004E4967BA2D_1(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_48AADA497C3F117F*>* a1, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_48AADA497C3F117F*>* a2)
	{
		return ((::System::Void(*)(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_48AADA497C3F117F*>*, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_48AADA497C3F117F*>*))((::PBYTE)hIl2Cpp + CLASS_1_34CD5A7B272AF994_METHOD_1_34DD004E4967BA2D_1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_1738AC084BAAAEA3(::Class_1_48AADA497C3F117F* a1, ::Class_1_48AADA497C3F117F* a2)
	{
		return ((::System::Boolean(*)(::Class_1_48AADA497C3F117F*, ::Class_1_48AADA497C3F117F*))((::PBYTE)hIl2Cpp + CLASS_1_34CD5A7B272AF994_METHOD_1_1738AC084BAAAEA3_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_DEDB2E108A5AE952(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_15DDFAAE3B5FD6E0*>* a1, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_15DDFAAE3B5FD6E0*>* a2)
	{
		return ((::System::Boolean(*)(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_15DDFAAE3B5FD6E0*>*, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_15DDFAAE3B5FD6E0*>*))((::PBYTE)hIl2Cpp + CLASS_1_34CD5A7B272AF994_METHOD_1_DEDB2E108A5AE952_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_8CD12EA1949D27B0(::Class_1_15DDFAAE3B5FD6E0* a1, ::Class_1_15DDFAAE3B5FD6E0* a2)
	{
		return ((::System::Boolean(*)(::Class_1_15DDFAAE3B5FD6E0*, ::Class_1_15DDFAAE3B5FD6E0*))((::PBYTE)hIl2Cpp + CLASS_1_34CD5A7B272AF994_METHOD_1_8CD12EA1949D27B0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9BD03B540786A4F4(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_30*>* a1, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_30*>* a2)
	{
		return ((::System::Void(*)(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_30*>*, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_30*>*))((::PBYTE)hIl2Cpp + CLASS_1_34CD5A7B272AF994_METHOD_1_9BD03B540786A4F4_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_09C3DBB624A973FC(::Class_1_D17272E82AE804C2_30* a1, ::Class_1_D17272E82AE804C2_30* a2)
	{
		return ((::System::Boolean(*)(::Class_1_D17272E82AE804C2_30*, ::Class_1_D17272E82AE804C2_30*))((::PBYTE)hIl2Cpp + CLASS_1_34CD5A7B272AF994_METHOD_1_09C3DBB624A973FC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2314B25840D94866(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_29*>* a1, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_29*>* a2)
	{
		return ((::System::Void(*)(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_29*>*, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_29*>*))((::PBYTE)hIl2Cpp + CLASS_1_34CD5A7B272AF994_METHOD_1_2314B25840D94866_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_8309535CC9426C2A(::Class_1_D17272E82AE804C2_29* a1, ::Class_1_D17272E82AE804C2_29* a2)
	{
		return ((::System::Boolean(*)(::Class_1_D17272E82AE804C2_29*, ::Class_1_D17272E82AE804C2_29*))((::PBYTE)hIl2Cpp + CLASS_1_34CD5A7B272AF994_METHOD_1_8309535CC9426C2A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9BD03B540786A4F4_1(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_31*>* a1, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_31*>* a2)
	{
		return ((::System::Void(*)(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_31*>*, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_31*>*))((::PBYTE)hIl2Cpp + CLASS_1_34CD5A7B272AF994_METHOD_1_9BD03B540786A4F4_1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_09C3DBB624A973FC_1(::Class_1_D17272E82AE804C2_31* a1, ::Class_1_D17272E82AE804C2_31* a2)
	{
		return ((::System::Boolean(*)(::Class_1_D17272E82AE804C2_31*, ::Class_1_D17272E82AE804C2_31*))((::PBYTE)hIl2Cpp + CLASS_1_34CD5A7B272AF994_METHOD_1_09C3DBB624A973FC_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_09DA5ED950396F79(::Class_1_D17272E82AE804C2_32* a1, ::Class_1_D17272E82AE804C2_32* a2)
	{
		return ((::System::Void(*)(::Class_1_D17272E82AE804C2_32*, ::Class_1_D17272E82AE804C2_32*))((::PBYTE)hIl2Cpp + CLASS_1_34CD5A7B272AF994_METHOD_1_09DA5ED950396F79_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_8309535CC9426C2A_1(::Class_1_D17272E82AE804C2_32* a1, ::Class_1_D17272E82AE804C2_32* a2)
	{
		return ((::System::Boolean(*)(::Class_1_D17272E82AE804C2_32*, ::Class_1_D17272E82AE804C2_32*))((::PBYTE)hIl2Cpp + CLASS_1_34CD5A7B272AF994_METHOD_1_8309535CC9426C2A_1_OFFSET))(a1, a2);
	}
};
