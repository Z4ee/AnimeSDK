#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/FightStatus.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/LevelStateType.h"
#include "unitysdk/RPG/Client/LittleGameShare/MsgRetcode.h"
#include "unitysdk/RPG/GameCore/CakeRaceRegionTag.h"
#include "unitysdk/System/Object.h"

class Class_1_4702FDEBC696B148;
class Class_1_D17272E82AE804C2_366;
class Class_1_D17272E82AE804C2_367;
class Class_1_D17272E82AE804C2_368;
class Class_1_D17272E82AE804C2_369;
class Class_1_EAA93C4FF12A6990_1;
class Class_1_FFE5B8A52EC38E9C_4;
class Class_2_21AD365C113DC484;
class Class_2_F3C45F1FC7349B6E;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Common { template <typename T> class StateMachine_1; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E38D48D6A33D0614_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1544FFC0)
#define CLASS_1_E38D48D6A33D0614_GET_CURSECTIONID_OFFSET UNITYSDK_OFFSET(0x15456A30)
#define CLASS_1_E38D48D6A33D0614_GET_MAXSECTIONID_OFFSET UNITYSDK_OFFSET(0x15456A50)
#define CLASS_1_E38D48D6A33D0614_GET_SECTIONDATAS_OFFSET UNITYSDK_OFFSET(0x15456A70)
#define CLASS_1_E38D48D6A33D0614_GET__FIGHTSTATUS_OFFSET UNITYSDK_OFFSET(0x15456A90)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_03E7916EB021AD37_OFFSET UNITYSDK_OFFSET(0x154565A0)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_04D24A03108B3E43_OFFSET UNITYSDK_OFFSET(0x15454750)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_07EF0A77C5FD38D1_OFFSET UNITYSDK_OFFSET(0x15453C10)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_08BBACE844405300_OFFSET UNITYSDK_OFFSET(0x15450430)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_0A2FDFD9907A596E_OFFSET UNITYSDK_OFFSET(0x15455F70)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_0C9B924EA1A53552_OFFSET UNITYSDK_OFFSET(0x15453980)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_0EE6DC0910F10862_OFFSET UNITYSDK_OFFSET(0x154564B0)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_132236F1E969BA8D_OFFSET UNITYSDK_OFFSET(0x15450130)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_1808E1CF7A125519_1_OFFSET UNITYSDK_OFFSET(0x154569C0)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x15456950)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_1A5DD2DF4AB7FDE6_OFFSET UNITYSDK_OFFSET(0x15452990)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_29352E75304CF2A0_OFFSET UNITYSDK_OFFSET(0x15454370)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_46BCE504E8013404_OFFSET UNITYSDK_OFFSET(0x15452510)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_500E6D7A3CBABBBB_OFFSET UNITYSDK_OFFSET(0x15450080)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_625FBF14AF26EF8B_OFFSET UNITYSDK_OFFSET(0x154516A0)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_692DD8E70762D98E_OFFSET UNITYSDK_OFFSET(0x15450BC0)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_6D4C5C3A4A0B6E9B_OFFSET UNITYSDK_OFFSET(0x15453B00)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_7223CD34BEFCBF48_OFFSET UNITYSDK_OFFSET(0x15454CB0)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_7EC9D4F0D1C9F94C_OFFSET UNITYSDK_OFFSET(0x15452280)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_8542E37E74FDE1B5_OFFSET UNITYSDK_OFFSET(0x15452CD0)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_8F7AD00CE70D0A7B_OFFSET UNITYSDK_OFFSET(0x15454BD0)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_8F7C01AE22ACFF21_OFFSET UNITYSDK_OFFSET(0x15454030)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_952E36B73124B39C_OFFSET UNITYSDK_OFFSET(0x154567B0)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_96189EDEF38976A6_OFFSET UNITYSDK_OFFSET(0x154519B0)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_970F81212EB01D53_OFFSET UNITYSDK_OFFSET(0x15452710)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_A369886849E392AC_OFFSET UNITYSDK_OFFSET(0x15454860)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_A3F9EE2184AC4496_OFFSET UNITYSDK_OFFSET(0x1544A620)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x154568F0)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_AD242CEA2D47B866_OFFSET UNITYSDK_OFFSET(0x154562E0)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_AD6DA1DFA69DF1D0_OFFSET UNITYSDK_OFFSET(0x15450250)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_AECF8BEC293ED42A_OFFSET UNITYSDK_OFFSET(0x15450320)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_B0DCF29309694C5D_OFFSET UNITYSDK_OFFSET(0x15453590)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x15450010)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_BEBC8F4773DC82AA_OFFSET UNITYSDK_OFFSET(0x15451640)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_CFDEDC4D38816CD5_OFFSET UNITYSDK_OFFSET(0x154503B0)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x15456AB0)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x15456AC0)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0x15456AD0)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x15456A20)
#define CLASS_1_E38D48D6A33D0614_SET_CURSECTIONID_OFFSET UNITYSDK_OFFSET(0x15456A40)
#define CLASS_1_E38D48D6A33D0614_SET_MAXSECTIONID_OFFSET UNITYSDK_OFFSET(0x15456A60)
#define CLASS_1_E38D48D6A33D0614_SET_SECTIONDATAS_OFFSET UNITYSDK_OFFSET(0x15456A80)
#define CLASS_1_E38D48D6A33D0614_SET__FIGHTSTATUS_OFFSET UNITYSDK_OFFSET(0x15456AA0)
#define CLASS_1_E38D48D6A33D0614__CTOR_OFFSET UNITYSDK_OFFSET(0x1544FF40)
#define CLASS_1_E38D48D6A33D0614__ISALLONLINEPLAYERVOTECONFIRMED_B__18_0_OFFSET UNITYSDK_OFFSET(0x15456BC0)
#define CLASS_1_E38D48D6A33D0614__ISALLPLAYERBETFINISHED_B__9_0_OFFSET UNITYSDK_OFFSET(0x15456AE0)
#define CLASS_1_E38D48D6A33D0614___TRYADDSPECIALEFFECTFORVOTE_B__15_1_OFFSET UNITYSDK_OFFSET(0x15456B50)

inline static constexpr unsigned int Class_1_E38D48D6A33D0614_TypeDefinitionIndex = 36629;

class Class_1_E38D48D6A33D0614 : public ::System::Object
{
public:
	::Class_2_F3C45F1FC7349B6E* FKGGBEAELPE; // 0x10
	::System::Collections::Generic::List_1<::Class_1_4702FDEBC696B148*>* _SectionDatas_k__BackingField; // 0x18
	::RPG::Common::StateMachine_1<::Class_1_E38D48D6A33D0614*>* FKIBGPJNCIJ; // 0x20
	::System::UInt32 _CurSectionId_k__BackingField; // 0x28
	::RPG::Client::LittleGameShare::CakeRaceCore::FightStatus __FightStatus_k__BackingField; // 0x2C
	::System::UInt32 _MaxSectionId_k__BackingField; // 0x30

	::System::Void _ctor(::Class_2_F3C45F1FC7349B6E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType Method_1_500E6D7A3CBABBBB()
	{
		return ((::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_500E6D7A3CBABBBB_OFFSET))(this);
	}

	::System::Boolean Method_1_132236F1E969BA8D(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_132236F1E969BA8D_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_AD6DA1DFA69DF1D0(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_AD6DA1DFA69DF1D0_OFFSET))(this, a1);
	}

	::Class_2_21AD365C113DC484* Method_1_CFDEDC4D38816CD5(::System::UInt32 a1)
	{
		return ((::Class_2_21AD365C113DC484*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_CFDEDC4D38816CD5_OFFSET))(this, a1);
	}

	::System::Void Method_1_08BBACE844405300()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_08BBACE844405300_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Tuple_2<::System::UInt32, ::System::UInt32>*>* Method_1_692DD8E70762D98E(::System::Double a1, ::System::Collections::Generic::List_1<::System::UInt32>*& a2)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Tuple_2<::System::UInt32, ::System::UInt32>*>*(*)(::PVOID, ::System::Double, ::System::Collections::Generic::List_1<::System::UInt32>*&))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_692DD8E70762D98E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_625FBF14AF26EF8B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_625FBF14AF26EF8B_OFFSET))(this);
	}

	::System::Int32 Method_1_A3F9EE2184AC4496(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_A3F9EE2184AC4496_OFFSET))(this, a1);
	}

	::System::Void Method_1_96189EDEF38976A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_96189EDEF38976A6_OFFSET))(this);
	}

	::System::Boolean Method_1_7EC9D4F0D1C9F94C(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_7EC9D4F0D1C9F94C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_46BCE504E8013404(::System::UInt32 a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>*& a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*&, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_46BCE504E8013404_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_970F81212EB01D53(::System::UInt32 a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>*& a2, ::System::Collections::Generic::HashSet_1<::System::UInt32>*& a3, ::System::Boolean a4, ::System::Collections::Generic::HashSet_1<::RPG::GameCore::CakeRaceRegionTag>* a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*&, ::System::Collections::Generic::HashSet_1<::System::UInt32>*&, ::System::Boolean, ::System::Collections::Generic::HashSet_1<::RPG::GameCore::CakeRaceRegionTag>*))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_970F81212EB01D53_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_1A5DD2DF4AB7FDE6(::System::Collections::Generic::HashSet_1<::System::UInt32>*& a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>*& a2, ::System::Boolean a3, ::System::Collections::Generic::HashSet_1<::RPG::GameCore::CakeRaceRegionTag>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*&, ::System::Collections::Generic::HashSet_1<::System::UInt32>*&, ::System::Boolean, ::System::Collections::Generic::HashSet_1<::RPG::GameCore::CakeRaceRegionTag>*))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_1A5DD2DF4AB7FDE6_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_8542E37E74FDE1B5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_8542E37E74FDE1B5_OFFSET))(this);
	}

	::System::Void Method_1_B0DCF29309694C5D(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_B0DCF29309694C5D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_6D4C5C3A4A0B6E9B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_6D4C5C3A4A0B6E9B_OFFSET))(this);
	}

	::System::Void Method_1_07EF0A77C5FD38D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_07EF0A77C5FD38D1_OFFSET))(this);
	}

	::System::Void Method_1_29352E75304CF2A0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_29352E75304CF2A0_OFFSET))(this);
	}

	::System::Void Method_1_04D24A03108B3E43(::System::Collections::Generic::List_1<::System::UInt32>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*&))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_04D24A03108B3E43_OFFSET))(this, a1);
	}

	::System::Void Method_1_A369886849E392AC(::System::UInt32 a1, ::System::Int32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_A369886849E392AC_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_1_8F7AD00CE70D0A7B(::System::Boolean a1, ::System::Int32 a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_8F7AD00CE70D0A7B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7223CD34BEFCBF48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_7223CD34BEFCBF48_OFFSET))(this);
	}

	::RPG::Client::LittleGameShare::MsgRetcode Method_1_0A2FDFD9907A596E(::System::UInt32 a1, ::Class_1_D17272E82AE804C2_366*& a2, ::Class_1_D17272E82AE804C2_367*& a3)
	{
		return ((::RPG::Client::LittleGameShare::MsgRetcode(*)(::PVOID, ::System::UInt32, ::Class_1_D17272E82AE804C2_366*&, ::Class_1_D17272E82AE804C2_367*&))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_0A2FDFD9907A596E_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::LittleGameShare::MsgRetcode Method_1_AD242CEA2D47B866(::System::UInt32 a1, ::Class_1_D17272E82AE804C2_368*& a2, ::Class_1_D17272E82AE804C2_369*& a3)
	{
		return ((::RPG::Client::LittleGameShare::MsgRetcode(*)(::PVOID, ::System::UInt32, ::Class_1_D17272E82AE804C2_368*&, ::Class_1_D17272E82AE804C2_369*&))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_AD242CEA2D47B866_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::LittleGameShare::MsgRetcode Method_1_0EE6DC0910F10862(::System::UInt32 a1)
	{
		return ((::RPG::Client::LittleGameShare::MsgRetcode(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_0EE6DC0910F10862_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt32>* Method_1_8F7C01AE22ACFF21(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>*& a1)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>*&))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_8F7C01AE22ACFF21_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_0C9B924EA1A53552(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* a1, ::System::UInt32 a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_0C9B924EA1A53552_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_03E7916EB021AD37(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FFE5B8A52EC38E9C_4*>* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FFE5B8A52EC38E9C_4*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_03E7916EB021AD37_OFFSET))(this, a1, a2);
	}

	::Class_1_EAA93C4FF12A6990_1* Method_1_952E36B73124B39C(::System::UInt32 a1)
	{
		return ((::Class_1_EAA93C4FF12A6990_1*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_952E36B73124B39C_OFFSET))(this, a1);
	}

	::Class_1_4702FDEBC696B148* Method_1_AECF8BEC293ED42A()
	{
		return ((::Class_1_4702FDEBC696B148*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_AECF8BEC293ED42A_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_1808E1CF7A125519_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::Class_2_21AD365C113DC484* Method_1_BEBC8F4773DC82AA()
	{
		return ((::Class_2_21AD365C113DC484*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_BEBC8F4773DC82AA_OFFSET))(this);
	}

	::System::UInt32 get_CurSectionId()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_GET_CURSECTIONID_OFFSET))(this);
	}

	::System::Void set_CurSectionId(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_SET_CURSECTIONID_OFFSET))(this, a1);
	}

	::System::UInt32 get_MaxSectionId()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_GET_MAXSECTIONID_OFFSET))(this);
	}

	::System::Void set_MaxSectionId(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_SET_MAXSECTIONID_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_4702FDEBC696B148*>* get_SectionDatas()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_4702FDEBC696B148*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_GET_SECTIONDATAS_OFFSET))(this);
	}

	::System::Void set_SectionDatas(::System::Collections::Generic::List_1<::Class_1_4702FDEBC696B148*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_4702FDEBC696B148*>*))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_SET_SECTIONDATAS_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGameShare::CakeRaceCore::FightStatus get__FightStatus()
	{
		return ((::RPG::Client::LittleGameShare::CakeRaceCore::FightStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_GET__FIGHTSTATUS_OFFSET))(this);
	}

	::System::Void set__FightStatus(::RPG::Client::LittleGameShare::CakeRaceCore::FightStatus a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::CakeRaceCore::FightStatus))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_SET__FIGHTSTATUS_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_F0088C88851A7DFB_3_OFFSET))(this);
	}

	::System::Boolean _IsAllPlayerBetFinished_b__9_0(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614__ISALLPLAYERBETFINISHED_B__9_0_OFFSET))(this, a1);
	}

	::System::Boolean __TryAddSpecialEffectForVote_b__15_1(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614___TRYADDSPECIALEFFECTFORVOTE_B__15_1_OFFSET))(this, a1);
	}

	::System::Boolean _IsAllOnlinePlayerVoteConfirmed_b__18_0(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614__ISALLONLINEPLAYERVOTECONFIRMED_B__18_0_OFFSET))(this, a1);
	}
};
