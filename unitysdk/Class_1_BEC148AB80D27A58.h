#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EAssemblyNPC.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"
#include "unitysdk/RPG/GameCore/WorldType.h"
#include "unitysdk/System/Object.h"

class Class_1_BEC148AB80D27A58_Class_1_25ED5996AFB10C48;
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

#define CLASS_1_BEC148AB80D27A58_METHOD_1_013A9279A249EC44_OFFSET UNITYSDK_OFFSET(0x1567E970)
#define CLASS_1_BEC148AB80D27A58_METHOD_1_1B689D877FEA2A13_OFFSET UNITYSDK_OFFSET(0x1567DEF0)
#define CLASS_1_BEC148AB80D27A58_METHOD_1_27177E87FE509818_OFFSET UNITYSDK_OFFSET(0x1567F970)
#define CLASS_1_BEC148AB80D27A58_METHOD_1_2ABA25F6D1EE7B40_OFFSET UNITYSDK_OFFSET(0x1567EC10)
#define CLASS_1_BEC148AB80D27A58_METHOD_1_31F1BDD49E0C5933_OFFSET UNITYSDK_OFFSET(0x1567EF50)
#define CLASS_1_BEC148AB80D27A58_METHOD_1_3E586421BA588EFD_OFFSET UNITYSDK_OFFSET(0x1567D390)
#define CLASS_1_BEC148AB80D27A58_METHOD_1_5B1CE9C65875FD9B_OFFSET UNITYSDK_OFFSET(0x1567E710)
#define CLASS_1_BEC148AB80D27A58_METHOD_1_5FDF3F9291B99262_OFFSET UNITYSDK_OFFSET(0x1567F450)
#define CLASS_1_BEC148AB80D27A58_METHOD_1_6055A93732CC885D_OFFSET UNITYSDK_OFFSET(0x1567D0F0)
#define CLASS_1_BEC148AB80D27A58_METHOD_1_6A42F4B816DF2755_OFFSET UNITYSDK_OFFSET(0x1567FF60)
#define CLASS_1_BEC148AB80D27A58_METHOD_1_7A3A02A83A872A48_OFFSET UNITYSDK_OFFSET(0x1567F870)
#define CLASS_1_BEC148AB80D27A58_METHOD_1_804865DF351A0A5B_OFFSET UNITYSDK_OFFSET(0x1567F5D0)
#define CLASS_1_BEC148AB80D27A58_METHOD_1_97D0E9C46BC78529_OFFSET UNITYSDK_OFFSET(0x1567FB40)
#define CLASS_1_BEC148AB80D27A58_METHOD_1_9AC1B3C3F2DB079D_OFFSET UNITYSDK_OFFSET(0x15680CE0)
#define CLASS_1_BEC148AB80D27A58_METHOD_1_A81EC94920986FDE_OFFSET UNITYSDK_OFFSET(0x1567ED70)
#define CLASS_1_BEC148AB80D27A58_METHOD_1_A91397A1829BE082_OFFSET UNITYSDK_OFFSET(0x156806F0)
#define CLASS_1_BEC148AB80D27A58_METHOD_1_AE13794ED0DC437A_OFFSET UNITYSDK_OFFSET(0x1567EAB0)
#define CLASS_1_BEC148AB80D27A58_METHOD_1_B07CD7F6447F93D0_OFFSET UNITYSDK_OFFSET(0x1567F0B0)
#define CLASS_1_BEC148AB80D27A58_METHOD_1_BD96AE08AFBF029D_OFFSET UNITYSDK_OFFSET(0x1567F720)
#define CLASS_1_BEC148AB80D27A58_METHOD_1_C2693A014B0AAFDC_OFFSET UNITYSDK_OFFSET(0x1567E660)
#define CLASS_1_BEC148AB80D27A58_METHOD_1_C46D0E175B5E7979_OFFSET UNITYSDK_OFFSET(0x1567D910)
#define CLASS_1_BEC148AB80D27A58_METHOD_1_C70324B268001AB7_OFFSET UNITYSDK_OFFSET(0x1567E270)
#define CLASS_1_BEC148AB80D27A58_METHOD_1_CD94F02208FA1865_OFFSET UNITYSDK_OFFSET(0x156803C0)
#define CLASS_1_BEC148AB80D27A58_METHOD_1_CFE6FB160FFF5938_OFFSET UNITYSDK_OFFSET(0x1567D050)
#define CLASS_1_BEC148AB80D27A58_METHOD_1_D14E91C58C8A620A_1_OFFSET UNITYSDK_OFFSET(0x1567E8C0)
#define CLASS_1_BEC148AB80D27A58_METHOD_1_D14E91C58C8A620A_OFFSET UNITYSDK_OFFSET(0x1567E810)
#define CLASS_1_BEC148AB80D27A58_METHOD_1_E7CD24A54D7ADF3B_OFFSET UNITYSDK_OFFSET(0x1567D7A0)
#define CLASS_1_BEC148AB80D27A58_METHOD_1_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x1567CE30)
#define CLASS_1_BEC148AB80D27A58_METHOD_1_FA006D2DB801BCA7_OFFSET UNITYSDK_OFFSET(0x1567DBA0)
#define CLASS_1_BEC148AB80D27A58__CCTOR_OFFSET UNITYSDK_OFFSET(0x156810C0)

inline static constexpr unsigned int Class_1_BEC148AB80D27A58_TypeDefinitionIndex = 69172;

class Class_1_BEC148AB80D27A58 : public ::System::Object
{
public:
	static ::Class_1_BEC148AB80D27A58_Class_1_25ED5996AFB10C48** StaticGet_JJELLPDJHHI()
	{
		return (::Class_1_BEC148AB80D27A58_Class_1_25ED5996AFB10C48**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BEC148AB80D27A58_TypeDefinitionIndex)->GetStaticField(0x20ED0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::NpcWalkStyleWeightInfo*>** StaticGet_HAHPBGLAFAF()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::NpcWalkStyleWeightInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BEC148AB80D27A58_TypeDefinitionIndex)->GetStaticField(0x20ED8);
	}
	static ::RPG::GameCore::LodConfig** StaticGet_KOAMKJHDDNB()
	{
		return (::RPG::GameCore::LodConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BEC148AB80D27A58_TypeDefinitionIndex)->GetStaticField(0x20EE0);
	}
	static ::RPG::Client::AssetsPathConfig** StaticGet_DLFFCPFOHLJ()
	{
		return (::RPG::Client::AssetsPathConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BEC148AB80D27A58_TypeDefinitionIndex)->GetStaticField(0x20EE8);
	}
	static ::RPG::Client::NpcBodySizeConfig** StaticGet_LBEDBHGGJPE()
	{
		return (::RPG::Client::NpcBodySizeConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BEC148AB80D27A58_TypeDefinitionIndex)->GetStaticField(0x20EF0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::NpcBodySizeInfo*>** StaticGet_NAKLJJBJOOC()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::NpcBodySizeInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BEC148AB80D27A58_TypeDefinitionIndex)->GetStaticField(0x20EF8);
	}
	// static const ::System::String* OOGGOOODNEL; // 0x0
	// static const ::System::String* NEMAAEPEKFF; // 0x0
	// static const ::System::String* NLNGOKFLCDE; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BEC148AB80D27A58__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BEC148AB80D27A58_METHOD_1_EDFD49C942C75D6C_OFFSET))();
	}

	static ::System::Void Method_1_3E586421BA588EFD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BEC148AB80D27A58_METHOD_1_3E586421BA588EFD_OFFSET))();
	}

	static ::System::Single Method_1_E7CD24A54D7ADF3B(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BEC148AB80D27A58_METHOD_1_E7CD24A54D7ADF3B_OFFSET))(a1);
	}

	static ::RPG::Client::AssemNPC* Method_1_C46D0E175B5E7979(::System::String* a1, ::System::String* a2)
	{
		return ((::RPG::Client::AssemNPC*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BEC148AB80D27A58_METHOD_1_C46D0E175B5E7979_OFFSET))(a1, a2);
	}

	static ::RPG::Client::AssemNPC* Method_1_FA006D2DB801BCA7(::RPG::GameCore::WorldType a1, ::System::String* a2, ::System::String* a3, ::System::Single a4)
	{
		return ((::RPG::Client::AssemNPC*(*)(::RPG::GameCore::WorldType, ::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BEC148AB80D27A58_METHOD_1_FA006D2DB801BCA7_OFFSET))(a1, a2, a3, a4);
	}

	static ::RPG::Client::AssemNPC* Method_1_1B689D877FEA2A13(::RPG::GameCore::WorldType a1, ::System::String* a2, ::System::String* a3, ::System::Collections::Generic::List_1<::System::String*>* a4, ::System::Single a5)
	{
		return ((::RPG::Client::AssemNPC*(*)(::RPG::GameCore::WorldType, ::System::String*, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BEC148AB80D27A58_METHOD_1_1B689D877FEA2A13_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::RPG::Client::AssemNPC* Method_1_C70324B268001AB7(::RPG::GameCore::WorldType a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::Collections::Generic::List_1<::System::String*>* a5, ::System::Single a6)
	{
		return ((::RPG::Client::AssemNPC*(*)(::RPG::GameCore::WorldType, ::System::String*, ::System::String*, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BEC148AB80D27A58_METHOD_1_C70324B268001AB7_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::RPG::Client::AssetsPathDict* Method_1_C2693A014B0AAFDC(::System::String* a1)
	{
		return ((::RPG::Client::AssetsPathDict*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BEC148AB80D27A58_METHOD_1_C2693A014B0AAFDC_OFFSET))(a1);
	}

	static ::System::String* Method_1_5B1CE9C65875FD9B(::RPG::Client::AssemNPC* a1)
	{
		return ((::System::String*(*)(::RPG::Client::AssemNPC*))((::PBYTE)hIl2Cpp + CLASS_1_BEC148AB80D27A58_METHOD_1_5B1CE9C65875FD9B_OFFSET))(a1);
	}

	static ::System::String* Method_1_D14E91C58C8A620A(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BEC148AB80D27A58_METHOD_1_D14E91C58C8A620A_OFFSET))(a1);
	}

	static ::System::String* Method_1_D14E91C58C8A620A_1(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BEC148AB80D27A58_METHOD_1_D14E91C58C8A620A_1_OFFSET))(a1);
	}

	static ::RPG::Client::NpcBodySizeInfo* Method_1_013A9279A249EC44(::System::Int32 a1)
	{
		return ((::RPG::Client::NpcBodySizeInfo*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BEC148AB80D27A58_METHOD_1_013A9279A249EC44_OFFSET))(a1);
	}

	static ::System::Single Method_1_AE13794ED0DC437A(::System::Int32 a1)
	{
		return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BEC148AB80D27A58_METHOD_1_AE13794ED0DC437A_OFFSET))(a1);
	}

	static ::System::String* Method_1_2ABA25F6D1EE7B40(::RPG::GameCore::NPCBodySize a1)
	{
		return ((::System::String*(*)(::RPG::GameCore::NPCBodySize))((::PBYTE)hIl2Cpp + CLASS_1_BEC148AB80D27A58_METHOD_1_2ABA25F6D1EE7B40_OFFSET))(a1);
	}

	static ::RPG::Client::AssemNPCColliderInfo* Method_1_A81EC94920986FDE(::System::Int32 a1)
	{
		return ((::RPG::Client::AssemNPCColliderInfo*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BEC148AB80D27A58_METHOD_1_A81EC94920986FDE_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_31F1BDD49E0C5933(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BEC148AB80D27A58_METHOD_1_31F1BDD49E0C5933_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_B07CD7F6447F93D0(::System::Int32 a1, ::Il2CppArray<::System::Single>* a2)
	{
		return ((::System::Int32(*)(::System::Int32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_BEC148AB80D27A58_METHOD_1_B07CD7F6447F93D0_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::NpcWalkStyleWeightInfo* Method_1_5FDF3F9291B99262(::System::Int32 a1)
	{
		return ((::RPG::GameCore::NpcWalkStyleWeightInfo*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BEC148AB80D27A58_METHOD_1_5FDF3F9291B99262_OFFSET))(a1);
	}

	static ::UnityEngine::GameObject* Method_1_804865DF351A0A5B(::System::Int32 a1)
	{
		return ((::UnityEngine::GameObject*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BEC148AB80D27A58_METHOD_1_804865DF351A0A5B_OFFSET))(a1);
	}

	static ::Il2CppArray<::RPG::Client::AssemblyNPCAttachPointInfo*>* Method_1_BD96AE08AFBF029D(::System::Int32 a1)
	{
		return ((::Il2CppArray<::RPG::Client::AssemblyNPCAttachPointInfo*>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BEC148AB80D27A58_METHOD_1_BD96AE08AFBF029D_OFFSET))(a1);
	}

	static ::System::String* Method_1_7A3A02A83A872A48(::RPG::GameCore::NPCBodySize a1, ::System::String*& a2)
	{
		return ((::System::String*(*)(::RPG::GameCore::NPCBodySize, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_BEC148AB80D27A58_METHOD_1_7A3A02A83A872A48_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::LodTemplate* Method_1_27177E87FE509818(::RPG::Client::EAssemblyNPC a1)
	{
		return ((::RPG::GameCore::LodTemplate*(*)(::RPG::Client::EAssemblyNPC))((::PBYTE)hIl2Cpp + CLASS_1_BEC148AB80D27A58_METHOD_1_27177E87FE509818_OFFSET))(a1);
	}

	static ::Il2CppArray<::System::String*>* Method_1_97D0E9C46BC78529(::RPG::GameCore::WorldType a1)
	{
		return ((::Il2CppArray<::System::String*>*(*)(::RPG::GameCore::WorldType))((::PBYTE)hIl2Cpp + CLASS_1_BEC148AB80D27A58_METHOD_1_97D0E9C46BC78529_OFFSET))(a1);
	}

	static ::Il2CppArray<::System::String*>* Method_1_6A42F4B816DF2755(::RPG::GameCore::WorldType a1, ::System::String* a2)
	{
		return ((::Il2CppArray<::System::String*>*(*)(::RPG::GameCore::WorldType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BEC148AB80D27A58_METHOD_1_6A42F4B816DF2755_OFFSET))(a1, a2);
	}

	static ::Il2CppArray<::System::String*>* Method_1_CD94F02208FA1865(::RPG::GameCore::WorldType a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::Il2CppArray<::System::String*>*(*)(::RPG::GameCore::WorldType, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BEC148AB80D27A58_METHOD_1_CD94F02208FA1865_OFFSET))(a1, a2, a3);
	}

	static ::RPG::Client::AssemNPC* Method_1_A91397A1829BE082(::System::String* a1)
	{
		return ((::RPG::Client::AssemNPC*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BEC148AB80D27A58_METHOD_1_A91397A1829BE082_OFFSET))(a1);
	}

	static ::System::Void Method_1_9AC1B3C3F2DB079D(::Il2CppArray<::RPG::GameCore::NpcWalkStyleWeightInfo*>* a1)
	{
		return ((::System::Void(*)(::Il2CppArray<::RPG::GameCore::NpcWalkStyleWeightInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_BEC148AB80D27A58_METHOD_1_9AC1B3C3F2DB079D_OFFSET))(a1);
	}

	static ::System::Void Method_1_CFE6FB160FFF5938()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BEC148AB80D27A58_METHOD_1_CFE6FB160FFF5938_OFFSET))();
	}

	static ::System::Void Method_1_6055A93732CC885D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BEC148AB80D27A58_METHOD_1_6055A93732CC885D_OFFSET))();
	}
};
