#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_49AB19924B4FCC28;
class Class_1_4E263D610E3B4DC1;
class Class_1_5F77BB6F5FCE2E0B;
class Class_1_EC8C41D270800CDD_Class_1_A145421A7F377A44;
namespace RPG::GameCore { class ConfigGetOffTrain; }
namespace RPG::GameCore { class LevelPedestrianFlowInfo; }
namespace RPG::GameCore { class LevelPedestrianInfo; }
namespace RPG::GameCore { class LevelPedestrianLineUpPointInfo; }
namespace RPG::GameCore { class NpcWalkStyleWeightInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_EC8C41D270800CDD_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x109303E0)
#define CLASS_1_EC8C41D270800CDD_METHOD_1_09B8F368BEF6ADA5_OFFSET UNITYSDK_OFFSET(0x10933A70)
#define CLASS_1_EC8C41D270800CDD_METHOD_1_13E97A3FA546E8BC_OFFSET UNITYSDK_OFFSET(0x10932F80)
#define CLASS_1_EC8C41D270800CDD_METHOD_1_1ED53B09AFE91718_OFFSET UNITYSDK_OFFSET(0x10933670)
#define CLASS_1_EC8C41D270800CDD_METHOD_1_226558B48AF9A6C1_OFFSET UNITYSDK_OFFSET(0x10932060)
#define CLASS_1_EC8C41D270800CDD_METHOD_1_35D2E84278E299F3_OFFSET UNITYSDK_OFFSET(0x10933940)
#define CLASS_1_EC8C41D270800CDD_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x10931B60)
#define CLASS_1_EC8C41D270800CDD_METHOD_1_5A93263895A6DA05_OFFSET UNITYSDK_OFFSET(0x10932A50)
#define CLASS_1_EC8C41D270800CDD_METHOD_1_5EDB77951178BC2F_OFFSET UNITYSDK_OFFSET(0x10932100)
#define CLASS_1_EC8C41D270800CDD_METHOD_1_66CC9828DB1F478F_OFFSET UNITYSDK_OFFSET(0x10931070)
#define CLASS_1_EC8C41D270800CDD_METHOD_1_6A0EBEECA245A27C_OFFSET UNITYSDK_OFFSET(0x10930730)
#define CLASS_1_EC8C41D270800CDD_METHOD_1_6C45DFFB47F952B7_OFFSET UNITYSDK_OFFSET(0x10930E10)
#define CLASS_1_EC8C41D270800CDD_METHOD_1_6E10DBA521A04356_OFFSET UNITYSDK_OFFSET(0x10930C70)
#define CLASS_1_EC8C41D270800CDD_METHOD_1_85C60A66ABECCB7C_OFFSET UNITYSDK_OFFSET(0x10932610)
#define CLASS_1_EC8C41D270800CDD_METHOD_1_9205597CBAA5B571_OFFSET UNITYSDK_OFFSET(0x10932C30)
#define CLASS_1_EC8C41D270800CDD_METHOD_1_9A9557DB574514FF_OFFSET UNITYSDK_OFFSET(0x109303F0)
#define CLASS_1_EC8C41D270800CDD_METHOD_1_A9F6594EA869CA9D_OFFSET UNITYSDK_OFFSET(0x109331B0)
#define CLASS_1_EC8C41D270800CDD_METHOD_1_AF2CFBAAD2629B3B_OFFSET UNITYSDK_OFFSET(0x10931A60)
#define CLASS_1_EC8C41D270800CDD_METHOD_1_C836268BEBB9DBE1_OFFSET UNITYSDK_OFFSET(0x10931EB0)
#define CLASS_1_EC8C41D270800CDD_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x10931B20)
#define CLASS_1_EC8C41D270800CDD_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10933CF0)
#define CLASS_1_EC8C41D270800CDD_METHOD_1_D64D578E7D225532_OFFSET UNITYSDK_OFFSET(0x10933120)
#define CLASS_1_EC8C41D270800CDD_METHOD_1_D814111F6431631C_OFFSET UNITYSDK_OFFSET(0x10932DB0)
#define CLASS_1_EC8C41D270800CDD_METHOD_1_E1CE0A1C7957700D_1_OFFSET UNITYSDK_OFFSET(0x10931DB0)
#define CLASS_1_EC8C41D270800CDD_METHOD_1_E1CE0A1C7957700D_OFFSET UNITYSDK_OFFSET(0x10931CC0)
#define CLASS_1_EC8C41D270800CDD_METHOD_1_F0C3B798E2EE87DB_OFFSET UNITYSDK_OFFSET(0x109332F0)
#define CLASS_1_EC8C41D270800CDD_METHOD_1_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x10933D70)
#define CLASS_1_EC8C41D270800CDD_METHOD_1_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0x109318E0)
#define CLASS_1_EC8C41D270800CDD__CCTOR_OFFSET UNITYSDK_OFFSET(0x10933E50)
#define CLASS_1_EC8C41D270800CDD__CTOR_OFFSET UNITYSDK_OFFSET(0x10930410)

inline static constexpr unsigned int Class_1_EC8C41D270800CDD_TypeDefinitionIndex = 56582;

class Class_1_EC8C41D270800CDD : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_1()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_EC8C41D270800CDD_TypeDefinitionIndex)->GetStaticField(0xDD60);
	}
	static ::System::Int32* StaticGet_Field_1_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_EC8C41D270800CDD_TypeDefinitionIndex)->GetStaticField(0xDD64);
	}
	// static const ::System::Single Field_1_0; // 0x0
	// static const ::System::Single Field_1_3; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_EC8C41D270800CDD_Class_1_A145421A7F377A44*>* Field_1_31; // 0x10
	::RPG::GameCore::ConfigGetOffTrain* Field_1_21; // 0x18
	::Il2CppArray<::System::Single>* Field_1_13; // 0x20
	::Il2CppArray<::UnityEngine::Vector3>* Field_1_11; // 0x28
	::RPG::GameCore::LevelPedestrianInfo* Field_1_6; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::LevelPedestrianLineUpPointInfo*>* Field_1_8; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_4E263D610E3B4DC1*>* Field_1_26; // 0x40
	::System::Collections::Generic::List_1<::Class_1_4E263D610E3B4DC1*>* Field_1_27; // 0x48
	::Il2CppArray<::System::Single>* Field_1_28; // 0x50
	::System::Collections::Generic::List_1<::Class_1_5F77BB6F5FCE2E0B*>* Field_1_7; // 0x58
	::System::Int32 Field_1_29; // 0x60
	::System::Boolean Field_1_30; // 0x64
	::System::Boolean Field_1_20; // 0x65
	::System::Boolean Field_1_19; // 0x66
	::System::Boolean Field_1_16; // 0x67
	::System::Boolean Field_1_22; // 0x68
	::System::Single Field_1_14; // 0x6C
	::System::Single Field_1_15; // 0x70
	::System::Int32 Field_1_10; // 0x74
	::System::Int32 Field_1_25; // 0x78
	::System::Single Field_1_9; // 0x7C
	::System::Single Field_1_18; // 0x80
	::System::Single Field_1_17; // 0x84
	::System::Single Field_1_23; // 0x88
	::System::UInt32 Field_1_4; // 0x8C
	::System::Int32 Field_1_12; // 0x90
	::System::Int32 Field_1_5; // 0x94
	::System::Single Field_1_24; // 0x98

	::System::Void _ctor(::System::UInt32 a1, ::RPG::GameCore::LevelPedestrianInfo* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelPedestrianInfo*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EC8C41D270800CDD__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EC8C41D270800CDD__CCTOR_OFFSET))();
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC8C41D270800CDD_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::NpcWalkStyleWeightInfo*>* Method_1_9A9557DB574514FF()
	{
		return ((::Il2CppArray<::RPG::GameCore::NpcWalkStyleWeightInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC8C41D270800CDD_METHOD_1_9A9557DB574514FF_OFFSET))(this);
	}

	::System::Void Method_1_F978A1D172468895()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC8C41D270800CDD_METHOD_1_F978A1D172468895_OFFSET))(this);
	}

	::System::Void Method_1_AF2CFBAAD2629B3B(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EC8C41D270800CDD_METHOD_1_AF2CFBAAD2629B3B_OFFSET))(this, a1);
	}

	::System::Void Method_1_226558B48AF9A6C1(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EC8C41D270800CDD_METHOD_1_226558B48AF9A6C1_OFFSET))(this, a1, a2);
	}

	::Class_1_49AB19924B4FCC28* Method_1_5EDB77951178BC2F(::System::Boolean a1)
	{
		return ((::Class_1_49AB19924B4FCC28*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EC8C41D270800CDD_METHOD_1_5EDB77951178BC2F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_85C60A66ABECCB7C(::Class_1_49AB19924B4FCC28*& a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Int32 a4, ::RPG::GameCore::LevelPedestrianFlowInfo*& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_49AB19924B4FCC28*&, ::System::Int32, ::System::Boolean, ::System::Int32, ::RPG::GameCore::LevelPedestrianFlowInfo*&))((::PBYTE)hIl2Cpp + CLASS_1_EC8C41D270800CDD_METHOD_1_85C60A66ABECCB7C_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_D814111F6431631C(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Int32 a4, ::RPG::GameCore::LevelPedestrianFlowInfo*& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*&, ::System::Int32, ::System::Boolean, ::System::Int32, ::RPG::GameCore::LevelPedestrianFlowInfo*&))((::PBYTE)hIl2Cpp + CLASS_1_EC8C41D270800CDD_METHOD_1_D814111F6431631C_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_13E97A3FA546E8BC(::RPG::GameCore::ConfigGetOffTrain* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigGetOffTrain*))((::PBYTE)hIl2Cpp + CLASS_1_EC8C41D270800CDD_METHOD_1_13E97A3FA546E8BC_OFFSET))(this, a1);
	}

	::System::Void Method_1_D64D578E7D225532(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EC8C41D270800CDD_METHOD_1_D64D578E7D225532_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1ED53B09AFE91718(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EC8C41D270800CDD_METHOD_1_1ED53B09AFE91718_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_1_5A93263895A6DA05(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EC8C41D270800CDD_METHOD_1_5A93263895A6DA05_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_35D2E84278E299F3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EC8C41D270800CDD_METHOD_1_35D2E84278E299F3_OFFSET))(this, a1);
	}

	::System::Void Method_1_6E10DBA521A04356()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC8C41D270800CDD_METHOD_1_6E10DBA521A04356_OFFSET))(this);
	}

	::System::Void Method_1_66CC9828DB1F478F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC8C41D270800CDD_METHOD_1_66CC9828DB1F478F_OFFSET))(this);
	}

	::System::Int32 Method_1_09B8F368BEF6ADA5()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC8C41D270800CDD_METHOD_1_09B8F368BEF6ADA5_OFFSET))(this);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC8C41D270800CDD_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_1_E1CE0A1C7957700D(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EC8C41D270800CDD_METHOD_1_E1CE0A1C7957700D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E1CE0A1C7957700D_1(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EC8C41D270800CDD_METHOD_1_E1CE0A1C7957700D_1_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_6C45DFFB47F952B7(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EC8C41D270800CDD_METHOD_1_6C45DFFB47F952B7_OFFSET))(this, a1);
	}

	::System::Void Method_1_6A0EBEECA245A27C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC8C41D270800CDD_METHOD_1_6A0EBEECA245A27C_OFFSET))(this);
	}

	::System::Int32 Method_1_9205597CBAA5B571(::System::Int32 a1, ::System::Boolean a2, ::RPG::GameCore::LevelPedestrianFlowInfo*& a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Boolean, ::RPG::GameCore::LevelPedestrianFlowInfo*&))((::PBYTE)hIl2Cpp + CLASS_1_EC8C41D270800CDD_METHOD_1_9205597CBAA5B571_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C836268BEBB9DBE1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EC8C41D270800CDD_METHOD_1_C836268BEBB9DBE1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A9F6594EA869CA9D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC8C41D270800CDD_METHOD_1_A9F6594EA869CA9D_OFFSET))(this);
	}

	::System::Void Method_1_F0C3B798E2EE87DB(::Class_1_49AB19924B4FCC28* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_49AB19924B4FCC28*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EC8C41D270800CDD_METHOD_1_F0C3B798E2EE87DB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EC8C41D270800CDD_METHOD_1_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC8C41D270800CDD_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC8C41D270800CDD_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}
};
