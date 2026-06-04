#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_401;
class Class_1_1C6D038ACA57B217;
class Class_1_2AEC7C4C0F203579;
class Class_1_2BFA2CD339E4FBC7;
class Class_1_4BC858D7C27E10ED_1;
class Class_1_732AF221927F3BE0;
class Class_1_82B09E39D0F93215;
class Class_1_A6B0B39A319DDDE2;
class Class_1_B94DDCD70CFEC484;
class Class_1_D17272E82AE804C2_25;
class Class_1_D17272E82AE804C2_26;
class Class_1_D17272E82AE804C2_27;
class Class_1_D1E0AD3915BCCF29_6;
class Class_1_E577B5580A99D425_2;
class Class_3_07C3C4D2990C49EE;
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_9EAA8F34F19AA563_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB5336F0)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_09C3DBB624A973FC_1_OFFSET UNITYSDK_OFFSET(0xB538C50)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_09C3DBB624A973FC_OFFSET UNITYSDK_OFFSET(0xB538B60)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_09DA5ED950396F79_OFFSET UNITYSDK_OFFSET(0xB537370)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_1283EC0876EAAACF_OFFSET UNITYSDK_OFFSET(0xB5338D0)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_19FB5FBEA9EA66CD_OFFSET UNITYSDK_OFFSET(0xB532920)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_2064C5CB156C4F21_OFFSET UNITYSDK_OFFSET(0xB537E10)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_2314B25840D94866_OFFSET UNITYSDK_OFFSET(0xB5376A0)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_34DD004E4967BA2D_1_OFFSET UNITYSDK_OFFSET(0xB535DD0)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_34DD004E4967BA2D_OFFSET UNITYSDK_OFFSET(0xB5354E0)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_3560EEEF9C8CB03E_OFFSET UNITYSDK_OFFSET(0xB5387A0)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_4407ABE60DEE1198_OFFSET UNITYSDK_OFFSET(0xB533460)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_4599A9E4AD0CB3A5_1_OFFSET UNITYSDK_OFFSET(0xB535BC0)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_4599A9E4AD0CB3A5_OFFSET UNITYSDK_OFFSET(0xB538590)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_71C3196E6B24EF59_OFFSET UNITYSDK_OFFSET(0xB534E40)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_74E8775EA2E80F8A_OFFSET UNITYSDK_OFFSET(0xB533370)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_8309535CC9426C2A_1_OFFSET UNITYSDK_OFFSET(0xB538CC0)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_8309535CC9426C2A_OFFSET UNITYSDK_OFFSET(0xB538BD0)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_9BD03B540786A4F4_1_OFFSET UNITYSDK_OFFSET(0xB536C10)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_9BD03B540786A4F4_OFFSET UNITYSDK_OFFSET(0xB5364B0)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_9CC14AB056DFABFC_1_OFFSET UNITYSDK_OFFSET(0xB532BA0)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_9CC14AB056DFABFC_OFFSET UNITYSDK_OFFSET(0xB532B60)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_9DA840964E8B2EBC_OFFSET UNITYSDK_OFFSET(0xB533BF0)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_A3624D9FA1040D8D_OFFSET UNITYSDK_OFFSET(0xB532B20)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_AC0F8B2123B5D010_OFFSET UNITYSDK_OFFSET(0xB533300)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_AE1CB12DFA6FEA10_OFFSET UNITYSDK_OFFSET(0xB5388A0)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_B050B8BF5CB5A17B_OFFSET UNITYSDK_OFFSET(0xB538AD0)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_B45B58B566219D7C_OFFSET UNITYSDK_OFFSET(0xB533F30)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_DB8E8E75B685B975_OFFSET UNITYSDK_OFFSET(0xB533880)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_DEDB2E108A5AE952_OFFSET UNITYSDK_OFFSET(0xB538980)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_E7ACE86AF89160D5_OFFSET UNITYSDK_OFFSET(0xB532BE0)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_F7EDA528D89DF793_OFFSET UNITYSDK_OFFSET(0xB532EB0)
#define CLASS_1_9EAA8F34F19AA563__CTOR_OFFSET UNITYSDK_OFFSET(0xB5320D0)

inline static constexpr unsigned int Class_1_9EAA8F34F19AA563_TypeDefinitionIndex = 53821;

class Class_1_9EAA8F34F19AA563 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::Class_3_07C3C4D2990C49EE* Field_1_1; // 0x18
	::RPG::GameCore::TurnBasedGameMode* Field_1_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_1C6D038ACA57B217*>* Field_1_3; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_1C6D038ACA57B217*>* Field_1_4; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_1C6D038ACA57B217*>* Field_1_5; // 0x38
	::Class_1_1C6D038ACA57B217* Field_1_6; // 0x40
	::RPG::GameCore::GameEntity* Field_1_7; // 0x48
	::Class_1_82B09E39D0F93215* Field_1_8; // 0x50
	::RPG::GameCore::FixPoint Field_1_9; // 0x58
	::RPG::GameCore::FixPoint Field_1_10; // 0x60
	::System::Boolean Field_1_11; // 0x68
	::System::UInt32 Field_1_12; // 0x6C

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_19FB5FBEA9EA66CD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_19FB5FBEA9EA66CD_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_1C6D038ACA57B217*>* Method_1_A3624D9FA1040D8D()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_1C6D038ACA57B217*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_A3624D9FA1040D8D_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_1C6D038ACA57B217*>* Method_1_9CC14AB056DFABFC()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_1C6D038ACA57B217*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_9CC14AB056DFABFC_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_1C6D038ACA57B217*>* Method_1_9CC14AB056DFABFC_1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_1C6D038ACA57B217*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_9CC14AB056DFABFC_1_OFFSET))(this);
	}

	::System::Void Method_1_E7ACE86AF89160D5(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_E7ACE86AF89160D5_OFFSET))(this, a1);
	}

	::System::Void Method_1_F7EDA528D89DF793(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_F7EDA528D89DF793_OFFSET))(this, a1);
	}

	::System::Void Method_1_74E8775EA2E80F8A(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_74E8775EA2E80F8A_OFFSET))(this, a1);
	}

	::System::Void Method_1_4407ABE60DEE1198(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_4407ABE60DEE1198_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_DB8E8E75B685B975(::Class_3_07C3C4D2990C49EE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_07C3C4D2990C49EE*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_DB8E8E75B685B975_OFFSET))(this, a1);
	}

	::System::Void Method_1_AC0F8B2123B5D010(::Class_1_1C6D038ACA57B217* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1C6D038ACA57B217*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_AC0F8B2123B5D010_OFFSET))(this, a1);
	}

	::System::Void Method_1_1283EC0876EAAACF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_1283EC0876EAAACF_OFFSET))(this);
	}

	::System::Boolean Method_1_9DA840964E8B2EBC(::System::UInt32 a1, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Double>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Double>*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_9DA840964E8B2EBC_OFFSET))(this, a1, a2);
	}

	::Class_1_732AF221927F3BE0* Method_1_B45B58B566219D7C()
	{
		return ((::Class_1_732AF221927F3BE0*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_B45B58B566219D7C_OFFSET))(this);
	}

	static ::System::Boolean Method_1_71C3196E6B24EF59(::Class_1_2AEC7C4C0F203579* a1, ::Class_1_2AEC7C4C0F203579* a2)
	{
		return ((::System::Boolean(*)(::Class_1_2AEC7C4C0F203579*, ::Class_1_2AEC7C4C0F203579*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_71C3196E6B24EF59_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4599A9E4AD0CB3A5(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4BC858D7C27E10ED_1*>* a1, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4BC858D7C27E10ED_1*>* a2)
	{
		return ((::System::Void(*)(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4BC858D7C27E10ED_1*>*, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4BC858D7C27E10ED_1*>*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_4599A9E4AD0CB3A5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2064C5CB156C4F21(::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>* a1, ::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>*, ::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_2064C5CB156C4F21_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4599A9E4AD0CB3A5_1(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B94DDCD70CFEC484*>* a1, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B94DDCD70CFEC484*>* a2)
	{
		return ((::System::Void(*)(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B94DDCD70CFEC484*>*, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B94DDCD70CFEC484*>*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_4599A9E4AD0CB3A5_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_34DD004E4967BA2D(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E577B5580A99D425_2*>* a1, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E577B5580A99D425_2*>* a2)
	{
		return ((::System::Void(*)(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E577B5580A99D425_2*>*, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E577B5580A99D425_2*>*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_34DD004E4967BA2D_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_3560EEEF9C8CB03E(::Class_1_E577B5580A99D425_2* a1, ::Class_1_E577B5580A99D425_2* a2)
	{
		return ((::System::Boolean(*)(::Class_1_E577B5580A99D425_2*, ::Class_1_E577B5580A99D425_2*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_3560EEEF9C8CB03E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_34DD004E4967BA2D_1(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_A6B0B39A319DDDE2*>* a1, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_A6B0B39A319DDDE2*>* a2)
	{
		return ((::System::Void(*)(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_A6B0B39A319DDDE2*>*, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_A6B0B39A319DDDE2*>*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_34DD004E4967BA2D_1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_AE1CB12DFA6FEA10(::Class_1_A6B0B39A319DDDE2* a1, ::Class_1_A6B0B39A319DDDE2* a2)
	{
		return ((::System::Boolean(*)(::Class_1_A6B0B39A319DDDE2*, ::Class_1_A6B0B39A319DDDE2*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_AE1CB12DFA6FEA10_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_DEDB2E108A5AE952(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_2BFA2CD339E4FBC7*>* a1, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_2BFA2CD339E4FBC7*>* a2)
	{
		return ((::System::Boolean(*)(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_2BFA2CD339E4FBC7*>*, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_2BFA2CD339E4FBC7*>*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_DEDB2E108A5AE952_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_B050B8BF5CB5A17B(::Class_1_2BFA2CD339E4FBC7* a1, ::Class_1_2BFA2CD339E4FBC7* a2)
	{
		return ((::System::Boolean(*)(::Class_1_2BFA2CD339E4FBC7*, ::Class_1_2BFA2CD339E4FBC7*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_B050B8BF5CB5A17B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9BD03B540786A4F4(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_25*>* a1, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_25*>* a2)
	{
		return ((::System::Void(*)(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_25*>*, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_25*>*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_9BD03B540786A4F4_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_09C3DBB624A973FC(::Class_1_D17272E82AE804C2_25* a1, ::Class_1_D17272E82AE804C2_25* a2)
	{
		return ((::System::Boolean(*)(::Class_1_D17272E82AE804C2_25*, ::Class_1_D17272E82AE804C2_25*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_09C3DBB624A973FC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2314B25840D94866(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D1E0AD3915BCCF29_6*>* a1, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D1E0AD3915BCCF29_6*>* a2)
	{
		return ((::System::Void(*)(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D1E0AD3915BCCF29_6*>*, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D1E0AD3915BCCF29_6*>*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_2314B25840D94866_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_8309535CC9426C2A(::Class_1_D1E0AD3915BCCF29_6* a1, ::Class_1_D1E0AD3915BCCF29_6* a2)
	{
		return ((::System::Boolean(*)(::Class_1_D1E0AD3915BCCF29_6*, ::Class_1_D1E0AD3915BCCF29_6*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_8309535CC9426C2A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9BD03B540786A4F4_1(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_26*>* a1, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_26*>* a2)
	{
		return ((::System::Void(*)(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_26*>*, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_26*>*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_9BD03B540786A4F4_1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_09C3DBB624A973FC_1(::Class_1_D17272E82AE804C2_26* a1, ::Class_1_D17272E82AE804C2_26* a2)
	{
		return ((::System::Boolean(*)(::Class_1_D17272E82AE804C2_26*, ::Class_1_D17272E82AE804C2_26*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_09C3DBB624A973FC_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_09DA5ED950396F79(::Class_1_D17272E82AE804C2_27* a1, ::Class_1_D17272E82AE804C2_27* a2)
	{
		return ((::System::Void(*)(::Class_1_D17272E82AE804C2_27*, ::Class_1_D17272E82AE804C2_27*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_09DA5ED950396F79_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_8309535CC9426C2A_1(::Class_1_D17272E82AE804C2_27* a1, ::Class_1_D17272E82AE804C2_27* a2)
	{
		return ((::System::Boolean(*)(::Class_1_D17272E82AE804C2_27*, ::Class_1_D17272E82AE804C2_27*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_8309535CC9426C2A_1_OFFSET))(a1, a2);
	}
};
