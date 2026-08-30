#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
#include "unitysdk/System/Object.h"

class Class_1_3B1EA953A4067E26;
class Class_1_910574CC99908A65;
class Class_1_A92BC063ED2379EB;
class Class_1_D2412BD47CB5EDB5;
class Class_2_B66C1067C0468FBB;
class Class_3_04673DB2E35FE564;
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace RPG::GameCore { class ChimeraDuelBuffConfig; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4BA3656021000ED5_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9E5810)
#define CLASS_1_4BA3656021000ED5_METHOD_1_01109DD29CB4D216_OFFSET UNITYSDK_OFFSET(0xB9E5AF0)
#define CLASS_1_4BA3656021000ED5_METHOD_1_14F6B5F5F2F367E9_OFFSET UNITYSDK_OFFSET(0xB9E86B0)
#define CLASS_1_4BA3656021000ED5_METHOD_1_1B886F7E299063D6_OFFSET UNITYSDK_OFFSET(0xB9E8EA0)
#define CLASS_1_4BA3656021000ED5_METHOD_1_3C9D870AA8BD1864_OFFSET UNITYSDK_OFFSET(0xB9E7060)
#define CLASS_1_4BA3656021000ED5_METHOD_1_3D16CFBFC8E183D3_OFFSET UNITYSDK_OFFSET(0xB9E8F30)
#define CLASS_1_4BA3656021000ED5_METHOD_1_3E522F4B992303E1_OFFSET UNITYSDK_OFFSET(0xB9E71E0)
#define CLASS_1_4BA3656021000ED5_METHOD_1_5FFCE8F719FB9475_OFFSET UNITYSDK_OFFSET(0xB9E5CE0)
#define CLASS_1_4BA3656021000ED5_METHOD_1_6D93101E4CE10A96_OFFSET UNITYSDK_OFFSET(0xB9E5990)
#define CLASS_1_4BA3656021000ED5_METHOD_1_737CFFD8D00BF158_OFFSET UNITYSDK_OFFSET(0xB9E5C70)
#define CLASS_1_4BA3656021000ED5_METHOD_1_7550202CEFE5A145_OFFSET UNITYSDK_OFFSET(0xB9E7310)
#define CLASS_1_4BA3656021000ED5_METHOD_1_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0xB9E6590)
#define CLASS_1_4BA3656021000ED5_METHOD_1_901941F905A03538_OFFSET UNITYSDK_OFFSET(0xB9E8580)
#define CLASS_1_4BA3656021000ED5_METHOD_1_9A53500611352737_OFFSET UNITYSDK_OFFSET(0xB9E8220)
#define CLASS_1_4BA3656021000ED5_METHOD_1_9BAA042B109BDB11_OFFSET UNITYSDK_OFFSET(0xB9E6C30)
#define CLASS_1_4BA3656021000ED5_METHOD_1_A0406BB7EFB3B918_OFFSET UNITYSDK_OFFSET(0xB9E6E80)
#define CLASS_1_4BA3656021000ED5_METHOD_1_A874E4DEF2B6489E_OFFSET UNITYSDK_OFFSET(0xB9E7D20)
#define CLASS_1_4BA3656021000ED5_METHOD_1_AE61036DE362328F_OFFSET UNITYSDK_OFFSET(0xB9E6990)
#define CLASS_1_4BA3656021000ED5_METHOD_1_BD3078E21D74E44F_OFFSET UNITYSDK_OFFSET(0xB9E68C0)
#define CLASS_1_4BA3656021000ED5_METHOD_1_C114F069682DDFEE_OFFSET UNITYSDK_OFFSET(0xB9E8000)
#define CLASS_1_4BA3656021000ED5_METHOD_1_DB2FB37219490EBB_OFFSET UNITYSDK_OFFSET(0xB9E5860)
#define CLASS_1_4BA3656021000ED5_METHOD_1_FEF062A2DC4257FF_OFFSET UNITYSDK_OFFSET(0xB9E6760)
#define CLASS_1_4BA3656021000ED5__CTOR_OFFSET UNITYSDK_OFFSET(0xB9E57F0)

inline static constexpr unsigned int Class_1_4BA3656021000ED5_TypeDefinitionIndex = 76949;

class Class_1_4BA3656021000ED5 : public ::System::Object
{
public:
	::Class_1_3B1EA953A4067E26* FKINCGODJEP; // 0x10
	::Class_3_04673DB2E35FE564* JKCNFDEAMDJ; // 0x18

	::System::Void _ctor(::Class_1_3B1EA953A4067E26* a1, ::Class_1_910574CC99908A65* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3B1EA953A4067E26*, ::Class_1_910574CC99908A65*))((::PBYTE)hIl2Cpp + CLASS_1_4BA3656021000ED5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BA3656021000ED5_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_DB2FB37219490EBB(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4BA3656021000ED5_METHOD_1_DB2FB37219490EBB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6D93101E4CE10A96()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BA3656021000ED5_METHOD_1_6D93101E4CE10A96_OFFSET))(this);
	}

	::System::Void Method_1_01109DD29CB4D216()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BA3656021000ED5_METHOD_1_01109DD29CB4D216_OFFSET))(this);
	}

	::System::Void Method_1_737CFFD8D00BF158(::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* a1, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*))((::PBYTE)hIl2Cpp + CLASS_1_4BA3656021000ED5_METHOD_1_737CFFD8D00BF158_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8F7825DAFFB9B517()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BA3656021000ED5_METHOD_1_8F7825DAFFB9B517_OFFSET))(this);
	}

	::System::Void Method_1_FEF062A2DC4257FF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BA3656021000ED5_METHOD_1_FEF062A2DC4257FF_OFFSET))(this);
	}

	::System::Void Method_1_BD3078E21D74E44F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BA3656021000ED5_METHOD_1_BD3078E21D74E44F_OFFSET))(this);
	}

	::System::Void Method_1_AE61036DE362328F(::System::UInt32 a1, ::RPG::GameCore::ChimeraDuelTeamType a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ChimeraDuelTeamType))((::PBYTE)hIl2Cpp + CLASS_1_4BA3656021000ED5_METHOD_1_AE61036DE362328F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5FFCE8F719FB9475(::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*))((::PBYTE)hIl2Cpp + CLASS_1_4BA3656021000ED5_METHOD_1_5FFCE8F719FB9475_OFFSET))(this, a1);
	}

	::System::Void Method_1_3C9D870AA8BD1864(::RPG::GameCore::ChimeraDuelTeamType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraDuelTeamType))((::PBYTE)hIl2Cpp + CLASS_1_4BA3656021000ED5_METHOD_1_3C9D870AA8BD1864_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E522F4B992303E1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BA3656021000ED5_METHOD_1_3E522F4B992303E1_OFFSET))(this);
	}

	::System::Boolean Method_1_9BAA042B109BDB11(::Class_2_B66C1067C0468FBB* a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B66C1067C0468FBB*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4BA3656021000ED5_METHOD_1_9BAA042B109BDB11_OFFSET))(this, a1, a2);
	}

	::Class_2_B66C1067C0468FBB* Method_1_7550202CEFE5A145(::System::UInt32 a1, ::Class_2_B66C1067C0468FBB* a2)
	{
		return ((::Class_2_B66C1067C0468FBB*(*)(::PVOID, ::System::UInt32, ::Class_2_B66C1067C0468FBB*))((::PBYTE)hIl2Cpp + CLASS_1_4BA3656021000ED5_METHOD_1_7550202CEFE5A145_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_A0406BB7EFB3B918(::Class_2_B66C1067C0468FBB* a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B66C1067C0468FBB*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4BA3656021000ED5_METHOD_1_A0406BB7EFB3B918_OFFSET))(this, a1, a2);
	}

	::Class_2_B66C1067C0468FBB* Method_1_A874E4DEF2B6489E(::Class_2_B66C1067C0468FBB* a1, ::System::UInt32 a2)
	{
		return ((::Class_2_B66C1067C0468FBB*(*)(::PVOID, ::Class_2_B66C1067C0468FBB*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4BA3656021000ED5_METHOD_1_A874E4DEF2B6489E_OFFSET))(this, a1, a2);
	}

	::Class_2_B66C1067C0468FBB* Method_1_C114F069682DDFEE(::Class_2_B66C1067C0468FBB* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::Int32>* a3)
	{
		return ((::Class_2_B66C1067C0468FBB*(*)(::PVOID, ::Class_2_B66C1067C0468FBB*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_4BA3656021000ED5_METHOD_1_C114F069682DDFEE_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_B66C1067C0468FBB* Method_1_9A53500611352737(::RPG::GameCore::ChimeraDuelBuffConfig* a1, ::Class_1_A92BC063ED2379EB* a2)
	{
		return ((::Class_2_B66C1067C0468FBB*(*)(::PVOID, ::RPG::GameCore::ChimeraDuelBuffConfig*, ::Class_1_A92BC063ED2379EB*))((::PBYTE)hIl2Cpp + CLASS_1_4BA3656021000ED5_METHOD_1_9A53500611352737_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_901941F905A03538(::Class_2_B66C1067C0468FBB* a1, ::RPG::GameCore::ChimeraDuelBuffConfig* a2, ::Class_1_A92BC063ED2379EB* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B66C1067C0468FBB*, ::RPG::GameCore::ChimeraDuelBuffConfig*, ::Class_1_A92BC063ED2379EB*))((::PBYTE)hIl2Cpp + CLASS_1_4BA3656021000ED5_METHOD_1_901941F905A03538_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_1B886F7E299063D6(::Class_2_B66C1067C0468FBB* a1, ::RPG::GameCore::ChimeraDuelBuffConfig* a2, ::Class_1_A92BC063ED2379EB* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B66C1067C0468FBB*, ::RPG::GameCore::ChimeraDuelBuffConfig*, ::Class_1_A92BC063ED2379EB*))((::PBYTE)hIl2Cpp + CLASS_1_4BA3656021000ED5_METHOD_1_1B886F7E299063D6_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_14F6B5F5F2F367E9(::System::Collections::Generic::ICollection_1<::System::Int32>* a1, ::RPG::GameCore::ChimeraDuelBuffConfig* a2, ::Class_1_A92BC063ED2379EB* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::System::Int32>*, ::RPG::GameCore::ChimeraDuelBuffConfig*, ::Class_1_A92BC063ED2379EB*))((::PBYTE)hIl2Cpp + CLASS_1_4BA3656021000ED5_METHOD_1_14F6B5F5F2F367E9_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_B66C1067C0468FBB* Method_1_3D16CFBFC8E183D3(::Class_1_D2412BD47CB5EDB5* a1, ::System::Int32 a2)
	{
		return ((::Class_2_B66C1067C0468FBB*(*)(::PVOID, ::Class_1_D2412BD47CB5EDB5*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4BA3656021000ED5_METHOD_1_3D16CFBFC8E183D3_OFFSET))(this, a1, a2);
	}
};
