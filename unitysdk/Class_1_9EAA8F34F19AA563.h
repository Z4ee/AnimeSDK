#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_375;
class Class_1_120319518E6F6581_6;
class Class_1_2AEC7C4C0F203579;
class Class_1_6A016EB9D6190C4D;
class Class_1_6D3A625BE1D0B270;
class Class_1_732AF221927F3BE0;
class Class_1_82B09E39D0F93215;
class Class_1_99BD961747420BEB;
class Class_1_ACA38760E7F8B37E;
class Class_1_B94DDCD70CFEC484;
class Class_1_E577B5580A99D425;
class Class_1_FA4F4A67B1C04320_22;
class Class_1_FA4F4A67B1C04320_23;
class Class_1_FA4F4A67B1C04320_24;
class Class_3_5775A4FEC79026BC;
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_9EAA8F34F19AA563_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8BCDA20)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_02B490C9189918DC_OFFSET UNITYSDK_OFFSET(0x8BCD290)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_09C3DBB624A973FC_1_OFFSET UNITYSDK_OFFSET(0x8BD1BF0)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_09C3DBB624A973FC_OFFSET UNITYSDK_OFFSET(0x8BD1B00)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_0FA0973E87FBD363_OFFSET UNITYSDK_OFFSET(0x8BCD070)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_1770FC1903D7D016_OFFSET UNITYSDK_OFFSET(0x8BCDF20)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_2064C5CB156C4F21_OFFSET UNITYSDK_OFFSET(0x8BD0F90)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_24C3C1AAD9F3E2E8_OFFSET UNITYSDK_OFFSET(0x8BCFFE0)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_351DA50719BEBFC5_OFFSET UNITYSDK_OFFSET(0x8BCE160)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_3560EEEF9C8CB03E_OFFSET UNITYSDK_OFFSET(0x8BD1800)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_5EB73C4456272297_OFFSET UNITYSDK_OFFSET(0x8BD0480)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_6DCEBC6068C5B2C1_OFFSET UNITYSDK_OFFSET(0x8BCD6E0)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_71C3196E6B24EF59_OFFSET UNITYSDK_OFFSET(0x8BCEF00)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_8309535CC9426C2A_1_OFFSET UNITYSDK_OFFSET(0x8BD1C60)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_8309535CC9426C2A_OFFSET UNITYSDK_OFFSET(0x8BD1B70)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0x8BCCDA0)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_904D0DEFEB17A813_1_OFFSET UNITYSDK_OFFSET(0x8BCF9C0)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_904D0DEFEB17A813_OFFSET UNITYSDK_OFFSET(0x8BD1610)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_9CC14AB056DFABFC_1_OFFSET UNITYSDK_OFFSET(0x8BCD030)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_9CC14AB056DFABFC_OFFSET UNITYSDK_OFFSET(0x8BCCFF0)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_A3624D9FA1040D8D_OFFSET UNITYSDK_OFFSET(0x8BCCFB0)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_AE1CB12DFA6FEA10_OFFSET UNITYSDK_OFFSET(0x8BD1900)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_B050B8BF5CB5A17B_OFFSET UNITYSDK_OFFSET(0x8BD1A70)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_B10A47ADAF2761B3_OFFSET UNITYSDK_OFFSET(0x8BD0890)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_B1EA412ACAE87C15_OFFSET UNITYSDK_OFFSET(0x8BCDBD0)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_B5D2B66BC384FB0E_OFFSET UNITYSDK_OFFSET(0x8BD0B70)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_BB311390556D4DF5_OFFSET UNITYSDK_OFFSET(0x8BD19B0)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_C41C1F0C72116603_1_OFFSET UNITYSDK_OFFSET(0x8BCFBB0)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_C41C1F0C72116603_OFFSET UNITYSDK_OFFSET(0x8BCF590)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_E1CA3E9CF2DA12EB_OFFSET UNITYSDK_OFFSET(0x8BCD580)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_EF343326A0C7462C_OFFSET UNITYSDK_OFFSET(0x8BCD5F0)
#define CLASS_1_9EAA8F34F19AA563_METHOD_1_FD166F2DC7A64B9A_OFFSET UNITYSDK_OFFSET(0x8BCDB80)
#define CLASS_1_9EAA8F34F19AA563__CTOR_OFFSET UNITYSDK_OFFSET(0x8BCC630)

inline static constexpr unsigned int Class_1_9EAA8F34F19AA563_TypeDefinitionIndex = 46425;

class Class_1_9EAA8F34F19AA563 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_8; // 0x10
	::Class_3_5775A4FEC79026BC* Field_1_6; // 0x18
	::RPG::GameCore::GameEntity* Field_1_4; // 0x20
	::Class_1_82B09E39D0F93215* Field_1_5; // 0x28
	::RPG::GameCore::TurnBasedGameMode* Field_1_3; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_6D3A625BE1D0B270*>* Field_1_1; // 0x38
	::Class_1_6D3A625BE1D0B270* Field_1_7; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_6D3A625BE1D0B270*>* Field_1_2; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_6D3A625BE1D0B270*>* Field_1_0; // 0x50
	::RPG::GameCore::FixPoint Field_1_11; // 0x58
	::RPG::GameCore::FixPoint Field_1_9; // 0x60
	::System::Boolean Field_1_10; // 0x68
	::System::UInt32 Field_1_12; // 0x6C

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

	::System::Void Method_1_0FA0973E87FBD363(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_0FA0973E87FBD363_OFFSET))(this, a1);
	}

	::System::Void Method_1_02B490C9189918DC(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_02B490C9189918DC_OFFSET))(this, a1);
	}

	::System::Void Method_1_EF343326A0C7462C(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_EF343326A0C7462C_OFFSET))(this, a1);
	}

	::System::Void Method_1_6DCEBC6068C5B2C1(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_6DCEBC6068C5B2C1_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_FD166F2DC7A64B9A(::Class_3_5775A4FEC79026BC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_5775A4FEC79026BC*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_FD166F2DC7A64B9A_OFFSET))(this, a1);
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

	static ::System::Void Method_1_904D0DEFEB17A813(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_99BD961747420BEB*>* a1, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_99BD961747420BEB*>* a2)
	{
		return ((::System::Void(*)(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_99BD961747420BEB*>*, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_99BD961747420BEB*>*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_904D0DEFEB17A813_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2064C5CB156C4F21(::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>* a1, ::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>*, ::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_2064C5CB156C4F21_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_904D0DEFEB17A813_1(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B94DDCD70CFEC484*>* a1, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B94DDCD70CFEC484*>* a2)
	{
		return ((::System::Void(*)(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B94DDCD70CFEC484*>*, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B94DDCD70CFEC484*>*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_904D0DEFEB17A813_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C41C1F0C72116603(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E577B5580A99D425*>* a1, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E577B5580A99D425*>* a2)
	{
		return ((::System::Void(*)(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E577B5580A99D425*>*, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E577B5580A99D425*>*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_C41C1F0C72116603_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_3560EEEF9C8CB03E(::Class_1_E577B5580A99D425* a1, ::Class_1_E577B5580A99D425* a2)
	{
		return ((::System::Boolean(*)(::Class_1_E577B5580A99D425*, ::Class_1_E577B5580A99D425*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_3560EEEF9C8CB03E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C41C1F0C72116603_1(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_ACA38760E7F8B37E*>* a1, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_ACA38760E7F8B37E*>* a2)
	{
		return ((::System::Void(*)(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_ACA38760E7F8B37E*>*, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_ACA38760E7F8B37E*>*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_C41C1F0C72116603_1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_AE1CB12DFA6FEA10(::Class_1_ACA38760E7F8B37E* a1, ::Class_1_ACA38760E7F8B37E* a2)
	{
		return ((::System::Boolean(*)(::Class_1_ACA38760E7F8B37E*, ::Class_1_ACA38760E7F8B37E*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_AE1CB12DFA6FEA10_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_BB311390556D4DF5(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_6A016EB9D6190C4D*>* a1, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_6A016EB9D6190C4D*>* a2)
	{
		return ((::System::Boolean(*)(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_6A016EB9D6190C4D*>*, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_6A016EB9D6190C4D*>*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_BB311390556D4DF5_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_B050B8BF5CB5A17B(::Class_1_6A016EB9D6190C4D* a1, ::Class_1_6A016EB9D6190C4D* a2)
	{
		return ((::System::Boolean(*)(::Class_1_6A016EB9D6190C4D*, ::Class_1_6A016EB9D6190C4D*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_B050B8BF5CB5A17B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_24C3C1AAD9F3E2E8(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_22*>* a1, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_22*>* a2)
	{
		return ((::System::Void(*)(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_22*>*, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_22*>*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_24C3C1AAD9F3E2E8_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_09C3DBB624A973FC(::Class_1_FA4F4A67B1C04320_22* a1, ::Class_1_FA4F4A67B1C04320_22* a2)
	{
		return ((::System::Boolean(*)(::Class_1_FA4F4A67B1C04320_22*, ::Class_1_FA4F4A67B1C04320_22*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_09C3DBB624A973FC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B5D2B66BC384FB0E(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_6*>* a1, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_6*>* a2)
	{
		return ((::System::Void(*)(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_6*>*, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_6*>*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_B5D2B66BC384FB0E_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_8309535CC9426C2A(::Class_1_120319518E6F6581_6* a1, ::Class_1_120319518E6F6581_6* a2)
	{
		return ((::System::Boolean(*)(::Class_1_120319518E6F6581_6*, ::Class_1_120319518E6F6581_6*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_8309535CC9426C2A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5EB73C4456272297(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_23*>* a1, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_23*>* a2)
	{
		return ((::System::Void(*)(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_23*>*, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_23*>*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_5EB73C4456272297_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_09C3DBB624A973FC_1(::Class_1_FA4F4A67B1C04320_23* a1, ::Class_1_FA4F4A67B1C04320_23* a2)
	{
		return ((::System::Boolean(*)(::Class_1_FA4F4A67B1C04320_23*, ::Class_1_FA4F4A67B1C04320_23*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_09C3DBB624A973FC_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B10A47ADAF2761B3(::Class_1_FA4F4A67B1C04320_24* a1, ::Class_1_FA4F4A67B1C04320_24* a2)
	{
		return ((::System::Void(*)(::Class_1_FA4F4A67B1C04320_24*, ::Class_1_FA4F4A67B1C04320_24*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_B10A47ADAF2761B3_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_8309535CC9426C2A_1(::Class_1_FA4F4A67B1C04320_24* a1, ::Class_1_FA4F4A67B1C04320_24* a2)
	{
		return ((::System::Boolean(*)(::Class_1_FA4F4A67B1C04320_24*, ::Class_1_FA4F4A67B1C04320_24*))((::PBYTE)hIl2Cpp + CLASS_1_9EAA8F34F19AA563_METHOD_1_8309535CC9426C2A_1_OFFSET))(a1, a2);
	}
};
