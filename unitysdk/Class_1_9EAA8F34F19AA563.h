#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_382;
class Class_1_2AEC7C4C0F203579;
class Class_1_2BFA2CD339E4FBC7;
class Class_1_4BC858D7C27E10ED_1;
class Class_1_6D3A625BE1D0B270;
class Class_1_732AF221927F3BE0;
class Class_1_82B09E39D0F93215;
class Class_1_A6B0B39A319DDDE2;
class Class_1_B94DDCD70CFEC484;
class Class_1_D17272E82AE804C2_24;
class Class_1_D17272E82AE804C2_25;
class Class_1_D17272E82AE804C2_26;
class Class_1_D1E0AD3915BCCF29_6;
class Class_1_E577B5580A99D425_1;
class Class_3_E21F6DE9B7FA4D05;
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_9EAA8F34F19AA563_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1234A170)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_02B490C9189918DC_OFFSET UNITYSDK_OFFSET(0x123499E0)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_09C3DBB624A973FC_1_OFFSET UNITYSDK_OFFSET(0x1234E830)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_09C3DBB624A973FC_OFFSET UNITYSDK_OFFSET(0x1234E740)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_09DA5ED950396F79_OFFSET UNITYSDK_OFFSET(0x1234D300)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_0FA0973E87FBD363_OFFSET UNITYSDK_OFFSET(0x123497C0)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_1770FC1903D7D016_OFFSET UNITYSDK_OFFSET(0x1234A670)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_2064C5CB156C4F21_OFFSET UNITYSDK_OFFSET(0x1234DBA0)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_351DA50719BEBFC5_OFFSET UNITYSDK_OFFSET(0x1234A8B0)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_3560EEEF9C8CB03E_OFFSET UNITYSDK_OFFSET(0x1234E410)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_5EB73C4456272297_OFFSET UNITYSDK_OFFSET(0x1234D630)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_6DCEBC6068C5B2C1_OFFSET UNITYSDK_OFFSET(0x12349E30)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_71C3196E6B24EF59_OFFSET UNITYSDK_OFFSET(0x1234B660)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_8309535CC9426C2A_1_OFFSET UNITYSDK_OFFSET(0x1234E8A0)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_8309535CC9426C2A_OFFSET UNITYSDK_OFFSET(0x1234E7B0)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0x123494F0)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_904D0DEFEB17A813_1_OFFSET UNITYSDK_OFFSET(0x1234C1D0)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_904D0DEFEB17A813_OFFSET UNITYSDK_OFFSET(0x1234E220)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_9CC14AB056DFABFC_1_OFFSET UNITYSDK_OFFSET(0x12349780)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_9CC14AB056DFABFC_OFFSET UNITYSDK_OFFSET(0x12349740)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_A3624D9FA1040D8D_OFFSET UNITYSDK_OFFSET(0x12349700)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_AE1CB12DFA6FEA10_OFFSET UNITYSDK_OFFSET(0x1234E510)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_B050B8BF5CB5A17B_OFFSET UNITYSDK_OFFSET(0x1234E6B0)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_B1EA412ACAE87C15_OFFSET UNITYSDK_OFFSET(0x1234A320)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_BB311390556D4DF5_OFFSET UNITYSDK_OFFSET(0x1234E5F0)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_E1CA3E9CF2DA12EB_OFFSET UNITYSDK_OFFSET(0x12349CD0)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_E84DFB996853B028_1_OFFSET UNITYSDK_OFFSET(0x1234C3C0)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_E84DFB996853B028_OFFSET UNITYSDK_OFFSET(0x1234BCF0)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_EF343326A0C7462C_OFFSET UNITYSDK_OFFSET(0x12349D40)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_FA2AA188544A094C_1_OFFSET UNITYSDK_OFFSET(0x1234CDD0)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_FA2AA188544A094C_OFFSET UNITYSDK_OFFSET(0x1234C8A0)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_FD166F2DC7A64B9A_OFFSET UNITYSDK_OFFSET(0x1234A2D0)
#define CLASS_1_9EAA8F34F19AA563__CTOR_OFFSET UNITYSDK_OFFSET(0x12348D80)

inline static constexpr unsigned int Class_1_9EAA8F34F19AA563_TypeDefinitionIndex = 53111;

class Class_1_9EAA8F34F19AA563 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_4; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_6D3A625BE1D0B270*>* Field_1_1; // 0x18
	::Class_3_E21F6DE9B7FA4D05* Field_1_6; // 0x20
	::RPG::GameCore::TurnBasedGameMode* Field_1_3; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_6D3A625BE1D0B270*>* Field_1_0; // 0x30
	::RPG::GameCore::GameEntity* Field_1_8; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_6D3A625BE1D0B270*>* Field_1_2; // 0x40
	::Class_1_82B09E39D0F93215* Field_1_5; // 0x48
	::Class_1_6D3A625BE1D0B270* Field_1_7; // 0x50
	::RPG::GameCore::FixPoint Field_1_11; // 0x58
	::System::Boolean Field_1_10; // 0x60
	::System::UInt32 Field_1_12; // 0x64
	::RPG::GameCore::FixPoint Field_1_9; // 0x68

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_8F7825DAFFB9B517()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_8F7825DAFFB9B517_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_6D3A625BE1D0B270*>* Method_1_A3624D9FA1040D8D()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_6D3A625BE1D0B270*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_A3624D9FA1040D8D_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_6D3A625BE1D0B270*>* Method_1_9CC14AB056DFABFC()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_6D3A625BE1D0B270*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_9CC14AB056DFABFC_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_6D3A625BE1D0B270*>* Method_1_9CC14AB056DFABFC_1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_6D3A625BE1D0B270*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_9CC14AB056DFABFC_1_OFFSET))(this);
	}

	::System::Void Method_1_0FA0973E87FBD363(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_0FA0973E87FBD363_OFFSET))(this, a1);
	}

	::System::Void Method_1_02B490C9189918DC(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_02B490C9189918DC_OFFSET))(this, a1);
	}

	::System::Void Method_1_EF343326A0C7462C(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_EF343326A0C7462C_OFFSET))(this, a1);
	}

	::System::Void Method_1_6DCEBC6068C5B2C1(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_6DCEBC6068C5B2C1_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_FD166F2DC7A64B9A(::Class_3_E21F6DE9B7FA4D05* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E21F6DE9B7FA4D05*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_FD166F2DC7A64B9A_OFFSET))(this, a1);
	}

	::System::Void Method_1_E1CA3E9CF2DA12EB(::Class_1_6D3A625BE1D0B270* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6D3A625BE1D0B270*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_E1CA3E9CF2DA12EB_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1EA412ACAE87C15()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_B1EA412ACAE87C15_OFFSET))(this);
	}

	::System::Boolean Method_1_1770FC1903D7D016(::System::UInt32 a1, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Double>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Double>*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_1770FC1903D7D016_OFFSET))(this, a1, a2);
	}

	::Class_1_732AF221927F3BE0* Method_1_351DA50719BEBFC5()
	{
		return ((::Class_1_732AF221927F3BE0*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_351DA50719BEBFC5_OFFSET))(this);
	}

	static ::System::Boolean Method_1_71C3196E6B24EF59(::Class_1_2AEC7C4C0F203579* a1, ::Class_1_2AEC7C4C0F203579* a2)
	{
		return ((::System::Boolean(*)(::Class_1_2AEC7C4C0F203579*, ::Class_1_2AEC7C4C0F203579*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_71C3196E6B24EF59_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_904D0DEFEB17A813(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4BC858D7C27E10ED_1*>* a1, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4BC858D7C27E10ED_1*>* a2)
	{
		return ((::System::Void(*)(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4BC858D7C27E10ED_1*>*, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4BC858D7C27E10ED_1*>*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_904D0DEFEB17A813_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2064C5CB156C4F21(::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>* a1, ::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>*, ::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_2064C5CB156C4F21_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_904D0DEFEB17A813_1(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B94DDCD70CFEC484*>* a1, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B94DDCD70CFEC484*>* a2)
	{
		return ((::System::Void(*)(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B94DDCD70CFEC484*>*, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B94DDCD70CFEC484*>*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_904D0DEFEB17A813_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E84DFB996853B028(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E577B5580A99D425_1*>* a1, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E577B5580A99D425_1*>* a2)
	{
		return ((::System::Void(*)(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E577B5580A99D425_1*>*, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E577B5580A99D425_1*>*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_E84DFB996853B028_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_3560EEEF9C8CB03E(::Class_1_E577B5580A99D425_1* a1, ::Class_1_E577B5580A99D425_1* a2)
	{
		return ((::System::Boolean(*)(::Class_1_E577B5580A99D425_1*, ::Class_1_E577B5580A99D425_1*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_3560EEEF9C8CB03E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E84DFB996853B028_1(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_A6B0B39A319DDDE2*>* a1, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_A6B0B39A319DDDE2*>* a2)
	{
		return ((::System::Void(*)(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_A6B0B39A319DDDE2*>*, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_A6B0B39A319DDDE2*>*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_E84DFB996853B028_1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_AE1CB12DFA6FEA10(::Class_1_A6B0B39A319DDDE2* a1, ::Class_1_A6B0B39A319DDDE2* a2)
	{
		return ((::System::Boolean(*)(::Class_1_A6B0B39A319DDDE2*, ::Class_1_A6B0B39A319DDDE2*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_AE1CB12DFA6FEA10_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_BB311390556D4DF5(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_2BFA2CD339E4FBC7*>* a1, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_2BFA2CD339E4FBC7*>* a2)
	{
		return ((::System::Boolean(*)(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_2BFA2CD339E4FBC7*>*, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_2BFA2CD339E4FBC7*>*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_BB311390556D4DF5_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_B050B8BF5CB5A17B(::Class_1_2BFA2CD339E4FBC7* a1, ::Class_1_2BFA2CD339E4FBC7* a2)
	{
		return ((::System::Boolean(*)(::Class_1_2BFA2CD339E4FBC7*, ::Class_1_2BFA2CD339E4FBC7*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_B050B8BF5CB5A17B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FA2AA188544A094C(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_24*>* a1, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_24*>* a2)
	{
		return ((::System::Void(*)(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_24*>*, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_24*>*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_FA2AA188544A094C_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_09C3DBB624A973FC(::Class_1_D17272E82AE804C2_24* a1, ::Class_1_D17272E82AE804C2_24* a2)
	{
		return ((::System::Boolean(*)(::Class_1_D17272E82AE804C2_24*, ::Class_1_D17272E82AE804C2_24*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_09C3DBB624A973FC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5EB73C4456272297(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D1E0AD3915BCCF29_6*>* a1, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D1E0AD3915BCCF29_6*>* a2)
	{
		return ((::System::Void(*)(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D1E0AD3915BCCF29_6*>*, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D1E0AD3915BCCF29_6*>*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_5EB73C4456272297_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_8309535CC9426C2A(::Class_1_D1E0AD3915BCCF29_6* a1, ::Class_1_D1E0AD3915BCCF29_6* a2)
	{
		return ((::System::Boolean(*)(::Class_1_D1E0AD3915BCCF29_6*, ::Class_1_D1E0AD3915BCCF29_6*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_8309535CC9426C2A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FA2AA188544A094C_1(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_25*>* a1, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_25*>* a2)
	{
		return ((::System::Void(*)(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_25*>*, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_25*>*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_FA2AA188544A094C_1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_09C3DBB624A973FC_1(::Class_1_D17272E82AE804C2_25* a1, ::Class_1_D17272E82AE804C2_25* a2)
	{
		return ((::System::Boolean(*)(::Class_1_D17272E82AE804C2_25*, ::Class_1_D17272E82AE804C2_25*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_09C3DBB624A973FC_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_09DA5ED950396F79(::Class_1_D17272E82AE804C2_26* a1, ::Class_1_D17272E82AE804C2_26* a2)
	{
		return ((::System::Void(*)(::Class_1_D17272E82AE804C2_26*, ::Class_1_D17272E82AE804C2_26*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_09DA5ED950396F79_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_8309535CC9426C2A_1(::Class_1_D17272E82AE804C2_26* a1, ::Class_1_D17272E82AE804C2_26* a2)
	{
		return ((::System::Boolean(*)(::Class_1_D17272E82AE804C2_26*, ::Class_1_D17272E82AE804C2_26*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_8309535CC9426C2A_1_OFFSET))(a1, a2);
	}
};
