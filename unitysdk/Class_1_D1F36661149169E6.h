#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D1F36661149169E6_Struct_2_844657493ACED33A.h"
#include "unitysdk/Enum_3_9A984F774CA16C2E.h"
#include "unitysdk/MoleMole/HollowChessPieceSizeType.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/Struct_2_1BF5FB30732387AA.h"
#include "unitysdk/Struct_2_A1A45D8655270887.h"
#include "unitysdk/Struct_2_FD11E06FCEBA5113.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_17C16694410E7397;
class Class_1_43BD383C98B4C0C5_90;
class Class_1_44F95CFC4F9A5E56;
class Class_1_5B3CA1CF33FF72E1;
class Class_1_5F3ED31AAEDA15B0;
class Class_1_D1F36661149169E6_Class_1_88DB5054F2AC4D95;
class Class_1_E5B7864412CDC074;
class Class_1_F04D71A1D7DB3D55;
class Class_4_DA19DD65175B97CF;
class Class_5_FCAF801AC482D3B5;
namespace MoleMole::Config { class ConfigHollowChessboard; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
template <typename T> class Class_1_6E192A235841BE06;

#define CLASS_1_D1F36661149169E6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18B3FAA0)
#define CLASS_1_D1F36661149169E6_METHOD_1_0944B4555AD21289_OFFSET UNITYSDK_OFFSET(0x18B40B80)
#define CLASS_1_D1F36661149169E6_METHOD_1_102A75138BEA3EC2_OFFSET UNITYSDK_OFFSET(0x18B42A10)
#define CLASS_1_D1F36661149169E6_METHOD_1_12B872FB015D1B22_OFFSET UNITYSDK_OFFSET(0x18B42900)
#define CLASS_1_D1F36661149169E6_METHOD_1_17C2BBE3CA88BBC8_OFFSET UNITYSDK_OFFSET(0x18B40D70)
#define CLASS_1_D1F36661149169E6_METHOD_1_1AD7EEBA85326A2D_OFFSET UNITYSDK_OFFSET(0x18B404A0)
#define CLASS_1_D1F36661149169E6_METHOD_1_2376746B89663E0B_OFFSET UNITYSDK_OFFSET(0x18B44250)
#define CLASS_1_D1F36661149169E6_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x18B44240)
#define CLASS_1_D1F36661149169E6_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x18B40D60)
#define CLASS_1_D1F36661149169E6_METHOD_1_2BA3DB2BD2587D96_OFFSET UNITYSDK_OFFSET(0x18B449F0)
#define CLASS_1_D1F36661149169E6_METHOD_1_2DA500CC0B824A8A_OFFSET UNITYSDK_OFFSET(0x18B44E50)
#define CLASS_1_D1F36661149169E6_METHOD_1_2EFCB2CE7D787C53_OFFSET UNITYSDK_OFFSET(0x18B43F10)
#define CLASS_1_D1F36661149169E6_METHOD_1_2F8DD87A4F423047_OFFSET UNITYSDK_OFFSET(0x18B42D50)
#define CLASS_1_D1F36661149169E6_METHOD_1_30969553F9D0FC51_OFFSET UNITYSDK_OFFSET(0x18B434D0)
#define CLASS_1_D1F36661149169E6_METHOD_1_48C961074FCA86F3_OFFSET UNITYSDK_OFFSET(0x18B42210)
#define CLASS_1_D1F36661149169E6_METHOD_1_4D4C5E447B126BFB_OFFSET UNITYSDK_OFFSET(0x18B433F0)
#define CLASS_1_D1F36661149169E6_METHOD_1_4D8DC3E9944DBE5D_OFFSET UNITYSDK_OFFSET(0x18B40AB0)
#define CLASS_1_D1F36661149169E6_METHOD_1_4E7669F0BAEDE4A9_OFFSET UNITYSDK_OFFSET(0x18B43A50)
#define CLASS_1_D1F36661149169E6_METHOD_1_4E8DF6F8A37B229A_1_OFFSET UNITYSDK_OFFSET(0x18B44960)
#define CLASS_1_D1F36661149169E6_METHOD_1_4E8DF6F8A37B229A_OFFSET UNITYSDK_OFFSET(0x18B42860)
#define CLASS_1_D1F36661149169E6_METHOD_1_5C662D52790B6C26_OFFSET UNITYSDK_OFFSET(0x18B43450)
#define CLASS_1_D1F36661149169E6_METHOD_1_5D48C30011B902DB_1_OFFSET UNITYSDK_OFFSET(0x18B44DD0)
#define CLASS_1_D1F36661149169E6_METHOD_1_5D48C30011B902DB_OFFSET UNITYSDK_OFFSET(0x18B43270)
#define CLASS_1_D1F36661149169E6_METHOD_1_61BAFB754E2509DB_OFFSET UNITYSDK_OFFSET(0x18B432F0)
#define CLASS_1_D1F36661149169E6_METHOD_1_639E26D8C90F5DF5_OFFSET UNITYSDK_OFFSET(0x18B415A0)
#define CLASS_1_D1F36661149169E6_METHOD_1_67C10584F4320583_OFFSET UNITYSDK_OFFSET(0x18B40630)
#define CLASS_1_D1F36661149169E6_METHOD_1_7792EAD1D918FA2C_OFFSET UNITYSDK_OFFSET(0x18B447B0)
#define CLASS_1_D1F36661149169E6_METHOD_1_7B6AC8F4A32FA17A_OFFSET UNITYSDK_OFFSET(0x18B40930)
#define CLASS_1_D1F36661149169E6_METHOD_1_8FE3966C15750A17_OFFSET UNITYSDK_OFFSET(0x18B42A80)
#define CLASS_1_D1F36661149169E6_METHOD_1_923FB9A8FC9F4FA1_OFFSET UNITYSDK_OFFSET(0x18B43660)
#define CLASS_1_D1F36661149169E6_METHOD_1_98910EF8C2F89AAC_OFFSET UNITYSDK_OFFSET(0x18B40700)
#define CLASS_1_D1F36661149169E6_METHOD_1_9B0F8E238613A7CF_OFFSET UNITYSDK_OFFSET(0x18B44980)
#define CLASS_1_D1F36661149169E6_METHOD_1_9D0D7CD182C0B393_OFFSET UNITYSDK_OFFSET(0x18B42E60)
#define CLASS_1_D1F36661149169E6_METHOD_1_9DBA8895267638F1_OFFSET UNITYSDK_OFFSET(0x18B43E80)
#define CLASS_1_D1F36661149169E6_METHOD_1_A08D5D24ECE7197C_OFFSET UNITYSDK_OFFSET(0x18B42B10)
#define CLASS_1_D1F36661149169E6_METHOD_1_A2E2890763219A13_OFFSET UNITYSDK_OFFSET(0x18B3FC50)
#define CLASS_1_D1F36661149169E6_METHOD_1_A9B92E2239835424_OFFSET UNITYSDK_OFFSET(0x18B43900)
#define CLASS_1_D1F36661149169E6_METHOD_1_B8BAAE9F062B8DF2_OFFSET UNITYSDK_OFFSET(0x18B3FEA0)
#define CLASS_1_D1F36661149169E6_METHOD_1_BA2D44AD474B3B04_OFFSET UNITYSDK_OFFSET(0x18B44420)
#define CLASS_1_D1F36661149169E6_METHOD_1_BB89B5B63C3D548B_OFFSET UNITYSDK_OFFSET(0x18B409B0)
#define CLASS_1_D1F36661149169E6_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x18B43620)
#define CLASS_1_D1F36661149169E6_METHOD_1_D37FAD0A6AA04B25_1_OFFSET UNITYSDK_OFFSET(0x18B43640)
#define CLASS_1_D1F36661149169E6_METHOD_1_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x18B406E0)
#define CLASS_1_D1F36661149169E6_METHOD_1_D5899D84A5AA954B_OFFSET UNITYSDK_OFFSET(0x18B42880)
#define CLASS_1_D1F36661149169E6_METHOD_1_D6CA3D065BA58D64_OFFSET UNITYSDK_OFFSET(0x18B436E0)
#define CLASS_1_D1F36661149169E6_METHOD_1_D7158168877A6B42_OFFSET UNITYSDK_OFFSET(0x18B42F30)
#define CLASS_1_D1F36661149169E6_METHOD_1_D90908C4B43B91A3_OFFSET UNITYSDK_OFFSET(0x18B44380)
#define CLASS_1_D1F36661149169E6_METHOD_1_DD1A8024568B4390_OFFSET UNITYSDK_OFFSET(0x18B43C60)
#define CLASS_1_D1F36661149169E6_METHOD_1_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0x18B402B0)
#define CLASS_1_D1F36661149169E6_METHOD_1_E24B05186F6E8E53_OFFSET UNITYSDK_OFFSET(0x18B411F0)
#define CLASS_1_D1F36661149169E6_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x18B43630)
#define CLASS_1_D1F36661149169E6_METHOD_1_F79D5EC57FBF426E_OFFSET UNITYSDK_OFFSET(0x18B43D30)
#define CLASS_1_D1F36661149169E6_METHOD_1_FA6E92074F242004_OFFSET UNITYSDK_OFFSET(0x18B442A0)
#define CLASS_1_D1F36661149169E6__CTOR_OFFSET UNITYSDK_OFFSET(0x18B3F7A0)

inline static constexpr unsigned int Class_1_D1F36661149169E6_TypeDefinitionIndex = 81171;

class Class_1_D1F36661149169E6 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigHollowChessboard** StaticGet_Field_1_12()
	{
		return (::MoleMole::Config::ConfigHollowChessboard**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1F36661149169E6_TypeDefinitionIndex)->GetStaticField(0x36F00);
	}
	static ::Class_1_D1F36661149169E6_Class_1_88DB5054F2AC4D95** StaticGet_Field_1_16()
	{
		return (::Class_1_D1F36661149169E6_Class_1_88DB5054F2AC4D95**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1F36661149169E6_TypeDefinitionIndex)->GetStaticField(0x36F08);
	}
	// static const ::System::Int32 Field_1_8 = 0x1E; // 0x0
	::System::Action_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_25; // 0x10
	::System::Action_1<::Class_4_DA19DD65175B97CF*>* Field_1_22; // 0x18
	::Class_1_F04D71A1D7DB3D55* Field_1_13; // 0x20
	::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_20; // 0x28
	::System::Action_1<::Class_4_DA19DD65175B97CF*>* Field_1_23; // 0x30
	::Class_1_5B3CA1CF33FF72E1* Field_1_11; // 0x38
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_10; // 0x40
	::Class_1_6E192A235841BE06<::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*>* Field_1_7; // 0x48
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::Struct_2_1BF5FB30732387AA<::Enum_3_9A984F774CA16C2E>>* Field_1_21; // 0x50
	::Class_1_43BD383C98B4C0C5_90* Field_1_19; // 0x58
	::Class_1_44F95CFC4F9A5E56* Field_1_14; // 0x60
	::System::Action* Field_1_4; // 0x68
	::Class_5_FCAF801AC482D3B5* Field_1_18; // 0x70
	::Class_1_E5B7864412CDC074* Field_1_15; // 0x78
	::System::Action_1<::Class_4_DA19DD65175B97CF*>* Field_1_24; // 0x80
	::Class_1_17C16694410E7397* Field_1_17; // 0x88
	::System::Boolean Field_1_1; // 0x90
	::System::Boolean Field_1_0; // 0x91
	::System::Single Field_1_6; // 0x94
	::UnityEngine::Matrix4x4 Field_1_5; // 0x98
	::UnityEngine::Vector3 Field_1_3; // 0xD8
	::System::Int32 Field_1_9; // 0xE4
	::UnityEngine::Vector3 Field_1_2; // 0xE8

	::System::Void _ctor(::MoleMole::Config::ConfigHollowChessboard* a1, ::Class_1_F04D71A1D7DB3D55* a2, ::Class_1_44F95CFC4F9A5E56* a3, ::Class_1_E5B7864412CDC074* a4, ::Class_1_17C16694410E7397* a5, ::Class_1_43BD383C98B4C0C5_90* a6, ::Class_5_FCAF801AC482D3B5* a7)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard*, ::Class_1_F04D71A1D7DB3D55*, ::Class_1_44F95CFC4F9A5E56*, ::Class_1_E5B7864412CDC074*, ::Class_1_17C16694410E7397*, ::Class_1_43BD383C98B4C0C5_90*, ::Class_5_FCAF801AC482D3B5*))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_A2E2890763219A13(::System::Collections::Generic::List_1<::Class_4_DA19DD65175B97CF*>* a1, ::System::Collections::Generic::List_1<::Class_4_DA19DD65175B97CF*>* a2, ::System::Action_1<::Class_4_DA19DD65175B97CF*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_4_DA19DD65175B97CF*>*, ::System::Collections::Generic::List_1<::Class_4_DA19DD65175B97CF*>*, ::System::Action_1<::Class_4_DA19DD65175B97CF*>*))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_A2E2890763219A13_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B8BAAE9F062B8DF2(::MoleMole::HollowChessboard::HollowCell a1, ::Struct_2_A1A45D8655270887 a2, ::Class_1_D1F36661149169E6_Struct_2_844657493ACED33A& a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::Struct_2_A1A45D8655270887, ::Class_1_D1F36661149169E6_Struct_2_844657493ACED33A&))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_B8BAAE9F062B8DF2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_DDA8A2337932DF10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_DDA8A2337932DF10_OFFSET))(this);
	}

	::System::Void Method_1_1AD7EEBA85326A2D(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_1AD7EEBA85326A2D_OFFSET))(this, a1);
	}

	::Class_1_44F95CFC4F9A5E56* Method_1_67C10584F4320583()
	{
		return ((::Class_1_44F95CFC4F9A5E56*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_67C10584F4320583_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::System::Void Method_1_98910EF8C2F89AAC(::Class_4_DA19DD65175B97CF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_DA19DD65175B97CF*))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_98910EF8C2F89AAC_OFFSET))(this, a1);
	}

	::System::Void Method_1_0944B4555AD21289(::Class_4_DA19DD65175B97CF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_DA19DD65175B97CF*))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_0944B4555AD21289_OFFSET))(this, a1);
	}

	::Class_1_17C16694410E7397* Method_1_24748FC20F375725()
	{
		return ((::Class_1_17C16694410E7397*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_17C2BBE3CA88BBC8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_17C2BBE3CA88BBC8_OFFSET))(this, a1);
	}

	::System::Void Method_1_4E8DF6F8A37B229A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_4E8DF6F8A37B229A_OFFSET))(this, a1);
	}

	::System::Void Method_1_D5899D84A5AA954B(::Class_4_DA19DD65175B97CF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_DA19DD65175B97CF*))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_D5899D84A5AA954B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_102A75138BEA3EC2(::Class_4_DA19DD65175B97CF* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_4_DA19DD65175B97CF*))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_102A75138BEA3EC2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_639E26D8C90F5DF5(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_639E26D8C90F5DF5_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_BB89B5B63C3D548B(::Class_4_DA19DD65175B97CF* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_4_DA19DD65175B97CF*))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_BB89B5B63C3D548B_OFFSET))(this, a1);
	}

	::System::Void Method_1_A08D5D24ECE7197C(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_A08D5D24ECE7197C_OFFSET))(this, a1);
	}

	::System::Void Method_1_2F8DD87A4F423047(::Class_4_DA19DD65175B97CF* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_DA19DD65175B97CF*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_2F8DD87A4F423047_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9D0D7CD182C0B393(::MoleMole::HollowChessboard::HollowCell a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_9D0D7CD182C0B393_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_48C961074FCA86F3(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_48C961074FCA86F3_OFFSET))(this, a1);
	}

	::System::Void Method_1_8FE3966C15750A17(::MoleMole::HollowChessboard::HollowCell a1, ::Class_1_D1F36661149169E6_Struct_2_844657493ACED33A& a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::Class_1_D1F36661149169E6_Struct_2_844657493ACED33A&))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_8FE3966C15750A17_OFFSET))(this, a1, a2);
	}

	::Struct_2_FD11E06FCEBA5113 Method_1_D7158168877A6B42(::MoleMole::HollowChessboard::HollowCell a1, ::MoleMole::HollowChessPieceSizeType a2)
	{
		return ((::Struct_2_FD11E06FCEBA5113(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessPieceSizeType))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_D7158168877A6B42_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5D48C30011B902DB(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_5D48C30011B902DB_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_1_61BAFB754E2509DB(::Class_4_DA19DD65175B97CF* a1)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::Class_4_DA19DD65175B97CF*))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_61BAFB754E2509DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_4D4C5E447B126BFB(::Class_4_DA19DD65175B97CF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_DA19DD65175B97CF*))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_4D4C5E447B126BFB_OFFSET))(this, a1);
	}

	::System::Void Method_1_5C662D52790B6C26(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_5C662D52790B6C26_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_D37FAD0A6AA04B25_1_OFFSET))(this);
	}

	::System::Void Method_1_923FB9A8FC9F4FA1(::Class_4_DA19DD65175B97CF* a1, ::Class_1_5F3ED31AAEDA15B0* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_DA19DD65175B97CF*, ::Class_1_5F3ED31AAEDA15B0*))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_923FB9A8FC9F4FA1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D6CA3D065BA58D64(::MoleMole::HollowChessboard::HollowCell a1, ::Enum_3_9A984F774CA16C2E a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::Enum_3_9A984F774CA16C2E, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_D6CA3D065BA58D64_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_12B872FB015D1B22(::Class_4_DA19DD65175B97CF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_DA19DD65175B97CF*))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_12B872FB015D1B22_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_A9B92E2239835424(::Class_4_DA19DD65175B97CF* a1, ::Il2CppArray<::UnityEngine::Vector3>* a2, ::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>* a3, ::System::Func_2<::Class_4_DA19DD65175B97CF*, ::System::Boolean>* a4)
	{
		return ((::System::Void(*)(::Class_4_DA19DD65175B97CF*, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>*, ::System::Func_2<::Class_4_DA19DD65175B97CF*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_A9B92E2239835424_OFFSET))(a1, a2, a3, a4);
	}

	::Class_1_5F3ED31AAEDA15B0* Method_1_4D8DC3E9944DBE5D(::Class_4_DA19DD65175B97CF* a1)
	{
		return ((::Class_1_5F3ED31AAEDA15B0*(*)(::PVOID, ::Class_4_DA19DD65175B97CF*))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_4D8DC3E9944DBE5D_OFFSET))(this, a1);
	}

	::System::Void Method_1_4E7669F0BAEDE4A9(::System::Single a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_4E7669F0BAEDE4A9_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_7B6AC8F4A32FA17A(::Class_4_DA19DD65175B97CF* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_4_DA19DD65175B97CF*))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_7B6AC8F4A32FA17A_OFFSET))(this, a1);
	}

	::System::Void Method_1_DD1A8024568B4390(::Class_4_DA19DD65175B97CF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_DA19DD65175B97CF*))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_DD1A8024568B4390_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_F79D5EC57FBF426E()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_F79D5EC57FBF426E_OFFSET))();
	}

	::System::Void Method_1_9DBA8895267638F1(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_9DBA8895267638F1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2EFCB2CE7D787C53(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_2EFCB2CE7D787C53_OFFSET))(this, a1);
	}

	::Class_1_44F95CFC4F9A5E56* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_44F95CFC4F9A5E56*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Boolean Method_1_2376746B89663E0B(::Class_4_DA19DD65175B97CF* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_4_DA19DD65175B97CF*))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_2376746B89663E0B_OFFSET))(this, a1);
	}

	::MoleMole::HollowChessboard::HollowCell Method_1_FA6E92074F242004(::UnityEngine::Vector3 a1)
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_FA6E92074F242004_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D90908C4B43B91A3(::Class_4_DA19DD65175B97CF* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_4_DA19DD65175B97CF*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_D90908C4B43B91A3_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Rect Method_1_BA2D44AD474B3B04()
	{
		return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_BA2D44AD474B3B04_OFFSET))(this);
	}

	::System::Void Method_1_7792EAD1D918FA2C(::Class_4_DA19DD65175B97CF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_DA19DD65175B97CF*))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_7792EAD1D918FA2C_OFFSET))(this, a1);
	}

	::System::Void Method_1_4E8DF6F8A37B229A_1(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_4E8DF6F8A37B229A_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_9B0F8E238613A7CF(::MoleMole::HollowChessPieceSizeType a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessPieceSizeType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_9B0F8E238613A7CF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2BA3DB2BD2587D96(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_2BA3DB2BD2587D96_OFFSET))(this, a1);
	}

	::System::Void Method_1_30969553F9D0FC51(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_30969553F9D0FC51_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5D48C30011B902DB_1(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_5D48C30011B902DB_1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>* Method_1_E24B05186F6E8E53()
	{
		return ((::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_E24B05186F6E8E53_OFFSET))(this);
	}

	::System::Boolean Method_1_2DA500CC0B824A8A(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_2DA500CC0B824A8A_OFFSET))(this, a1);
	}
};
