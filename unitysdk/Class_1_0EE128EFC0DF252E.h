#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EAssemblyNPC.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"
#include "unitysdk/RPG/GameCore/WorldType.h"
#include "unitysdk/System/Object.h"

class Class_1_0EE128EFC0DF252E_Class_1_3DD14E8D38D48FBB;
namespace RPG::Client { class AssemNPC; }
namespace RPG::Client { class AssemNPCColliderInfo; }
namespace RPG::Client { class AssemblyNPCAttachPointInfo; }
namespace RPG::Client { class AssetsPathConfig; }
namespace RPG::Client { class AssetsPathDict; }
namespace RPG::Client { class NpcBodySizeConfig; }
namespace RPG::Client { class NpcBodySizeInfo; }
namespace RPG::GameCore { class LodConfig; }
namespace RPG::GameCore { class LodTemplate; }
namespace RPG::GameCore { class NpcWalkStyleWeightInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_0EE128EFC0DF252E_METHOD_1_18F3B7D01D518453_OFFSET UNITYSDK_OFFSET(0x10A87FC0)
#define CLASS_1_0EE128EFC0DF252E_METHOD_1_1B689D877FEA2A13_OFFSET UNITYSDK_OFFSET(0x10A865B0)
#define CLASS_1_0EE128EFC0DF252E_METHOD_1_2372BE066BCF268E_OFFSET UNITYSDK_OFFSET(0x10A87660)
#define CLASS_1_0EE128EFC0DF252E_METHOD_1_32755D608FAC238D_OFFSET UNITYSDK_OFFSET(0x10A88F90)
#define CLASS_1_0EE128EFC0DF252E_METHOD_1_32A10932579DF6F9_OFFSET UNITYSDK_OFFSET(0x10A87220)
#define CLASS_1_0EE128EFC0DF252E_METHOD_1_3BBA6B06D6080672_OFFSET UNITYSDK_OFFSET(0x10A879A0)
#define CLASS_1_0EE128EFC0DF252E_METHOD_1_54B15495D31E2BCE_OFFSET UNITYSDK_OFFSET(0x10A85FB0)
#define CLASS_1_0EE128EFC0DF252E_METHOD_1_561D8F24FFF54197_OFFSET UNITYSDK_OFFSET(0x10A870E0)
#define CLASS_1_0EE128EFC0DF252E_METHOD_1_5892D030B127E82F_OFFSET UNITYSDK_OFFSET(0x10A85A00)
#define CLASS_1_0EE128EFC0DF252E_METHOD_1_5B1CE9C65875FD9B_OFFSET UNITYSDK_OFFSET(0x10A86D50)
#define CLASS_1_0EE128EFC0DF252E_METHOD_1_61316EDA4D606A87_OFFSET UNITYSDK_OFFSET(0x10A88760)
#define CLASS_1_0EE128EFC0DF252E_METHOD_1_79D1C47D5B2EA0B3_OFFSET UNITYSDK_OFFSET(0x10A86FB0)
#define CLASS_1_0EE128EFC0DF252E_METHOD_1_93808FAF2B4C4BEC_OFFSET UNITYSDK_OFFSET(0x10A87B00)
#define CLASS_1_0EE128EFC0DF252E_METHOD_1_A24680A134F40BA4_OFFSET UNITYSDK_OFFSET(0x10A87520)
#define CLASS_1_0EE128EFC0DF252E_METHOD_1_AA22EEF932E1E37F_OFFSET UNITYSDK_OFFSET(0x10A87EB0)
#define CLASS_1_0EE128EFC0DF252E_METHOD_1_B06F516E4459C742_OFFSET UNITYSDK_OFFSET(0x10A85750)
#define CLASS_1_0EE128EFC0DF252E_METHOD_1_B3070F1641DAD3CB_OFFSET UNITYSDK_OFFSET(0x10A87D80)
#define CLASS_1_0EE128EFC0DF252E_METHOD_1_B4EA82A27DEC89B5_OFFSET UNITYSDK_OFFSET(0x10A86900)
#define CLASS_1_0EE128EFC0DF252E_METHOD_1_BA6AFF8236D86296_OFFSET UNITYSDK_OFFSET(0x10A88A50)
#define CLASS_1_0EE128EFC0DF252E_METHOD_1_C2693A014B0AAFDC_OFFSET UNITYSDK_OFFSET(0x10A86CA0)
#define CLASS_1_0EE128EFC0DF252E_METHOD_1_D14E91C58C8A620A_1_OFFSET UNITYSDK_OFFSET(0x10A86F00)
#define CLASS_1_0EE128EFC0DF252E_METHOD_1_D14E91C58C8A620A_OFFSET UNITYSDK_OFFSET(0x10A86E50)
#define CLASS_1_0EE128EFC0DF252E_METHOD_1_D834C142DDD033D7_OFFSET UNITYSDK_OFFSET(0x10A88370)
#define CLASS_1_0EE128EFC0DF252E_METHOD_1_D9EF75A2D048B8A1_OFFSET UNITYSDK_OFFSET(0x10A856B0)
#define CLASS_1_0EE128EFC0DF252E_METHOD_1_E7CD24A54D7ADF3B_OFFSET UNITYSDK_OFFSET(0x10A85E40)
#define CLASS_1_0EE128EFC0DF252E_METHOD_1_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x10A85490)
#define CLASS_1_0EE128EFC0DF252E_METHOD_1_FA006D2DB801BCA7_OFFSET UNITYSDK_OFFSET(0x10A86290)
#define CLASS_1_0EE128EFC0DF252E_METHOD_1_FEA6BA5E14757962_OFFSET UNITYSDK_OFFSET(0x10A87C40)
#define CLASS_1_0EE128EFC0DF252E_METHOD_1_FF49CF4441FF1D53_OFFSET UNITYSDK_OFFSET(0x10A87360)
#define CLASS_1_0EE128EFC0DF252E__CCTOR_OFFSET UNITYSDK_OFFSET(0x10A89370)

inline static constexpr unsigned int Class_1_0EE128EFC0DF252E_TypeDefinitionIndex = 56566;

class Class_1_0EE128EFC0DF252E : public ::System::Object
{
public:
	static ::RPG::Client::AssetsPathConfig** StaticGet_Field_1_3()
	{
		return (::RPG::Client::AssetsPathConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0EE128EFC0DF252E_TypeDefinitionIndex)->GetStaticField(0x45D50);
	}
	static ::RPG::Client::NpcBodySizeConfig** StaticGet_Field_1_4()
	{
		return (::RPG::Client::NpcBodySizeConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0EE128EFC0DF252E_TypeDefinitionIndex)->GetStaticField(0x45D58);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::NpcWalkStyleWeightInfo*>** StaticGet_Field_1_6()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::NpcWalkStyleWeightInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0EE128EFC0DF252E_TypeDefinitionIndex)->GetStaticField(0x45D60);
	}
	static ::RPG::GameCore::LodConfig** StaticGet_Field_1_8()
	{
		return (::RPG::GameCore::LodConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0EE128EFC0DF252E_TypeDefinitionIndex)->GetStaticField(0x45D68);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::NpcBodySizeInfo*>** StaticGet_Field_1_5()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::NpcBodySizeInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0EE128EFC0DF252E_TypeDefinitionIndex)->GetStaticField(0x45D70);
	}
	static ::Class_1_0EE128EFC0DF252E_Class_1_3DD14E8D38D48FBB** StaticGet_Field_1_7()
	{
		return (::Class_1_0EE128EFC0DF252E_Class_1_3DD14E8D38D48FBB**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0EE128EFC0DF252E_TypeDefinitionIndex)->GetStaticField(0x45D78);
	}
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::String* Field_1_2; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0EE128EFC0DF252E__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0EE128EFC0DF252E_METHOD_1_EDFD49C942C75D6C_OFFSET))();
	}

	static ::System::Void Method_1_5892D030B127E82F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0EE128EFC0DF252E_METHOD_1_5892D030B127E82F_OFFSET))();
	}

	static ::System::Single Method_1_E7CD24A54D7ADF3B(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0EE128EFC0DF252E_METHOD_1_E7CD24A54D7ADF3B_OFFSET))(a1);
	}

	static ::RPG::Client::AssemNPC* Method_1_54B15495D31E2BCE(::System::String* a1, ::System::String* a2)
	{
		return ((::RPG::Client::AssemNPC*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0EE128EFC0DF252E_METHOD_1_54B15495D31E2BCE_OFFSET))(a1, a2);
	}

	static ::RPG::Client::AssemNPC* Method_1_FA006D2DB801BCA7(::RPG::GameCore::WorldType a1, ::System::String* a2, ::System::String* a3, ::System::Single a4)
	{
		return ((::RPG::Client::AssemNPC*(*)(::RPG::GameCore::WorldType, ::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0EE128EFC0DF252E_METHOD_1_FA006D2DB801BCA7_OFFSET))(a1, a2, a3, a4);
	}

	static ::RPG::Client::AssemNPC* Method_1_1B689D877FEA2A13(::RPG::GameCore::WorldType a1, ::System::String* a2, ::System::String* a3, ::System::Collections::Generic::List_1<::System::String*>* a4, ::System::Single a5)
	{
		return ((::RPG::Client::AssemNPC*(*)(::RPG::GameCore::WorldType, ::System::String*, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0EE128EFC0DF252E_METHOD_1_1B689D877FEA2A13_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::RPG::Client::AssemNPC* Method_1_B4EA82A27DEC89B5(::RPG::GameCore::WorldType a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::Collections::Generic::List_1<::System::String*>* a5, ::System::Single a6)
	{
		return ((::RPG::Client::AssemNPC*(*)(::RPG::GameCore::WorldType, ::System::String*, ::System::String*, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0EE128EFC0DF252E_METHOD_1_B4EA82A27DEC89B5_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::RPG::Client::AssetsPathDict* Method_1_C2693A014B0AAFDC(::System::String* a1)
	{
		return ((::RPG::Client::AssetsPathDict*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0EE128EFC0DF252E_METHOD_1_C2693A014B0AAFDC_OFFSET))(a1);
	}

	static ::System::String* Method_1_5B1CE9C65875FD9B(::RPG::Client::AssemNPC* a1)
	{
		return ((::System::String*(*)(::RPG::Client::AssemNPC*))((::PBYTE)hIl2Cpp + CLASS_1_0EE128EFC0DF252E_METHOD_1_5B1CE9C65875FD9B_OFFSET))(a1);
	}

	static ::System::String* Method_1_D14E91C58C8A620A(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0EE128EFC0DF252E_METHOD_1_D14E91C58C8A620A_OFFSET))(a1);
	}

	static ::System::String* Method_1_D14E91C58C8A620A_1(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0EE128EFC0DF252E_METHOD_1_D14E91C58C8A620A_1_OFFSET))(a1);
	}

	static ::RPG::Client::NpcBodySizeInfo* Method_1_79D1C47D5B2EA0B3(::System::Int32 a1)
	{
		return ((::RPG::Client::NpcBodySizeInfo*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0EE128EFC0DF252E_METHOD_1_79D1C47D5B2EA0B3_OFFSET))(a1);
	}

	static ::System::Single Method_1_561D8F24FFF54197(::System::Int32 a1)
	{
		return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0EE128EFC0DF252E_METHOD_1_561D8F24FFF54197_OFFSET))(a1);
	}

	static ::System::String* Method_1_32A10932579DF6F9(::RPG::GameCore::NPCBodySize a1)
	{
		return ((::System::String*(*)(::RPG::GameCore::NPCBodySize))((::PBYTE)hIl2Cpp + CLASS_1_0EE128EFC0DF252E_METHOD_1_32A10932579DF6F9_OFFSET))(a1);
	}

	static ::RPG::Client::AssemNPCColliderInfo* Method_1_FF49CF4441FF1D53(::System::Int32 a1)
	{
		return ((::RPG::Client::AssemNPCColliderInfo*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0EE128EFC0DF252E_METHOD_1_FF49CF4441FF1D53_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_A24680A134F40BA4(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0EE128EFC0DF252E_METHOD_1_A24680A134F40BA4_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_2372BE066BCF268E(::System::Int32 a1, ::Il2CppArray<::System::Single>* a2)
	{
		return ((::System::Int32(*)(::System::Int32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_0EE128EFC0DF252E_METHOD_1_2372BE066BCF268E_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::NpcWalkStyleWeightInfo* Method_1_3BBA6B06D6080672(::System::Int32 a1)
	{
		return ((::RPG::GameCore::NpcWalkStyleWeightInfo*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0EE128EFC0DF252E_METHOD_1_3BBA6B06D6080672_OFFSET))(a1);
	}

	static ::UnityEngine::GameObject* Method_1_93808FAF2B4C4BEC(::System::Int32 a1)
	{
		return ((::UnityEngine::GameObject*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0EE128EFC0DF252E_METHOD_1_93808FAF2B4C4BEC_OFFSET))(a1);
	}

	static ::Il2CppArray<::RPG::Client::AssemblyNPCAttachPointInfo*>* Method_1_FEA6BA5E14757962(::System::Int32 a1)
	{
		return ((::Il2CppArray<::RPG::Client::AssemblyNPCAttachPointInfo*>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0EE128EFC0DF252E_METHOD_1_FEA6BA5E14757962_OFFSET))(a1);
	}

	static ::System::String* Method_1_B3070F1641DAD3CB(::RPG::GameCore::NPCBodySize a1, ::System::String*& a2)
	{
		return ((::System::String*(*)(::RPG::GameCore::NPCBodySize, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_0EE128EFC0DF252E_METHOD_1_B3070F1641DAD3CB_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::LodTemplate* Method_1_AA22EEF932E1E37F(::RPG::Client::EAssemblyNPC a1)
	{
		return ((::RPG::GameCore::LodTemplate*(*)(::RPG::Client::EAssemblyNPC))((::PBYTE)hIl2Cpp + CLASS_1_0EE128EFC0DF252E_METHOD_1_AA22EEF932E1E37F_OFFSET))(a1);
	}

	static ::Il2CppArray<::System::String*>* Method_1_18F3B7D01D518453(::RPG::GameCore::WorldType a1)
	{
		return ((::Il2CppArray<::System::String*>*(*)(::RPG::GameCore::WorldType))((::PBYTE)hIl2Cpp + CLASS_1_0EE128EFC0DF252E_METHOD_1_18F3B7D01D518453_OFFSET))(a1);
	}

	static ::Il2CppArray<::System::String*>* Method_1_D834C142DDD033D7(::RPG::GameCore::WorldType a1, ::System::String* a2)
	{
		return ((::Il2CppArray<::System::String*>*(*)(::RPG::GameCore::WorldType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0EE128EFC0DF252E_METHOD_1_D834C142DDD033D7_OFFSET))(a1, a2);
	}

	static ::Il2CppArray<::System::String*>* Method_1_61316EDA4D606A87(::RPG::GameCore::WorldType a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::Il2CppArray<::System::String*>*(*)(::RPG::GameCore::WorldType, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0EE128EFC0DF252E_METHOD_1_61316EDA4D606A87_OFFSET))(a1, a2, a3);
	}

	static ::RPG::Client::AssemNPC* Method_1_BA6AFF8236D86296(::System::String* a1)
	{
		return ((::RPG::Client::AssemNPC*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0EE128EFC0DF252E_METHOD_1_BA6AFF8236D86296_OFFSET))(a1);
	}

	static ::System::Void Method_1_32755D608FAC238D(::Il2CppArray<::RPG::GameCore::NpcWalkStyleWeightInfo*>* a1)
	{
		return ((::System::Void(*)(::Il2CppArray<::RPG::GameCore::NpcWalkStyleWeightInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_0EE128EFC0DF252E_METHOD_1_32755D608FAC238D_OFFSET))(a1);
	}

	static ::System::Void Method_1_D9EF75A2D048B8A1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0EE128EFC0DF252E_METHOD_1_D9EF75A2D048B8A1_OFFSET))();
	}

	static ::System::Void Method_1_B06F516E4459C742()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0EE128EFC0DF252E_METHOD_1_B06F516E4459C742_OFFSET))();
	}
};
