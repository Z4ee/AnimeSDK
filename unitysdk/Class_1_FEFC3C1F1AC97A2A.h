#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BillboardShowType.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIBillboard; }
namespace RPG::GameCore { class BillboardComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_1_FEFC3C1F1AC97A2A_METHOD_1_53C299EF2C870245_OFFSET UNITYSDK_OFFSET(0x141FBCF0)
#define CLASS_1_FEFC3C1F1AC97A2A_METHOD_1_55C9F6E1B0149BEC_OFFSET UNITYSDK_OFFSET(0x141FB5E0)
#define CLASS_1_FEFC3C1F1AC97A2A_METHOD_1_5BC495872AB79A1B_OFFSET UNITYSDK_OFFSET(0x141FB590)
#define CLASS_1_FEFC3C1F1AC97A2A_METHOD_1_62F08475C9E216BC_OFFSET UNITYSDK_OFFSET(0x141FB4C0)
#define CLASS_1_FEFC3C1F1AC97A2A_METHOD_1_A7C900DE235D3AFD_OFFSET UNITYSDK_OFFSET(0x141FB890)
#define CLASS_1_FEFC3C1F1AC97A2A_METHOD_1_CC4800A75BD2D2EF_OFFSET UNITYSDK_OFFSET(0x141FBC40)
#define CLASS_1_FEFC3C1F1AC97A2A_METHOD_1_CE4CF4A3D04D45F0_OFFSET UNITYSDK_OFFSET(0x141FBA90)
#define CLASS_1_FEFC3C1F1AC97A2A_METHOD_1_DFBD35A01B51A3E4_OFFSET UNITYSDK_OFFSET(0x141FBDF0)

inline static constexpr unsigned int Class_1_FEFC3C1F1AC97A2A_TypeDefinitionIndex = 68316;

class Class_1_FEFC3C1F1AC97A2A : public ::System::Object
{
public:
	static ::RPG::Client::BillboardShowType Method_1_62F08475C9E216BC(::Il2CppArray<::System::Int32>* a1)
	{
		return ((::RPG::Client::BillboardShowType(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_FEFC3C1F1AC97A2A_METHOD_1_62F08475C9E216BC_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_5BC495872AB79A1B(::RPG::Client::BillboardShowType a1, ::RPG::Client::BillboardShowType a2)
	{
		return ((::System::Boolean(*)(::RPG::Client::BillboardShowType, ::RPG::Client::BillboardShowType))((::PBYTE)hIl2Cpp + CLASS_1_FEFC3C1F1AC97A2A_METHOD_1_5BC495872AB79A1B_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::BillboardComponent* Method_1_55C9F6E1B0149BEC(::RPG::GameCore::EntityType a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::GameCore::GameEntity*& a4)
	{
		return ((::RPG::GameCore::BillboardComponent*(*)(::RPG::GameCore::EntityType, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::GameEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_FEFC3C1F1AC97A2A_METHOD_1_55C9F6E1B0149BEC_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_A7C900DE235D3AFD(::RPG::Client::UIBillboard* a1)
	{
		return ((::System::Void(*)(::RPG::Client::UIBillboard*))((::PBYTE)hIl2Cpp + CLASS_1_FEFC3C1F1AC97A2A_METHOD_1_A7C900DE235D3AFD_OFFSET))(a1);
	}

	static ::System::Void Method_1_CE4CF4A3D04D45F0(::RPG::Client::UIBillboard* a1)
	{
		return ((::System::Void(*)(::RPG::Client::UIBillboard*))((::PBYTE)hIl2Cpp + CLASS_1_FEFC3C1F1AC97A2A_METHOD_1_CE4CF4A3D04D45F0_OFFSET))(a1);
	}

	static ::System::Single Method_1_CC4800A75BD2D2EF(::System::UInt32 a1)
	{
		return ((::System::Single(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FEFC3C1F1AC97A2A_METHOD_1_CC4800A75BD2D2EF_OFFSET))(a1);
	}

	static ::System::String* Method_1_53C299EF2C870245(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::String*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FEFC3C1F1AC97A2A_METHOD_1_53C299EF2C870245_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_DFBD35A01B51A3E4(::System::UInt32 a1, ::System::UInt32 a2, ::System::Int32 a3)
	{
		return ((::System::String*(*)(::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FEFC3C1F1AC97A2A_METHOD_1_DFBD35A01B51A3E4_OFFSET))(a1, a2, a3);
	}
};
