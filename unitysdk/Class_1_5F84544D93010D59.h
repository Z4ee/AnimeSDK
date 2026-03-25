#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BillboardShowType.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIBillboard; }
namespace RPG::GameCore { class BillboardComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_1_5F84544D93010D59_METHOD_1_4C45C5441D82D82A_OFFSET UNITYSDK_OFFSET(0x8D45C70)
#define CLASS_1_5F84544D93010D59_METHOD_1_53C299EF2C870245_OFFSET UNITYSDK_OFFSET(0x8D45B70)
#define CLASS_1_5F84544D93010D59_METHOD_1_5BC495872AB79A1B_OFFSET UNITYSDK_OFFSET(0x8D45480)
#define CLASS_1_5F84544D93010D59_METHOD_1_62F08475C9E216BC_OFFSET UNITYSDK_OFFSET(0x8D453B0)
#define CLASS_1_5F84544D93010D59_METHOD_1_71E93CC0C9625DE6_1_OFFSET UNITYSDK_OFFSET(0x8D45920)
#define CLASS_1_5F84544D93010D59_METHOD_1_71E93CC0C9625DE6_OFFSET UNITYSDK_OFFSET(0x8D45780)
#define CLASS_1_5F84544D93010D59_METHOD_1_CC4800A75BD2D2EF_OFFSET UNITYSDK_OFFSET(0x8D45AC0)
#define CLASS_1_5F84544D93010D59_METHOD_1_FFA4EB6520FE57B5_OFFSET UNITYSDK_OFFSET(0x8D454D0)

inline static constexpr unsigned int Class_1_5F84544D93010D59_TypeDefinitionIndex = 59966;

class Class_1_5F84544D93010D59 : public ::System::Object
{
public:
	static ::RPG::Client::BillboardShowType Method_1_62F08475C9E216BC(::Il2CppArray<::System::Int32>* a1)
	{
		return ((::RPG::Client::BillboardShowType(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_5F84544D93010D59_METHOD_1_62F08475C9E216BC_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_5BC495872AB79A1B(::RPG::Client::BillboardShowType a1, ::RPG::Client::BillboardShowType a2)
	{
		return ((::System::Boolean(*)(::RPG::Client::BillboardShowType, ::RPG::Client::BillboardShowType))((::PBYTE)hIl2Cpp + CLASS_1_5F84544D93010D59_METHOD_1_5BC495872AB79A1B_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::BillboardComponent* Method_1_FFA4EB6520FE57B5(::RPG::GameCore::EntityType a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::GameCore::GameEntity*& a4)
	{
		return ((::RPG::GameCore::BillboardComponent*(*)(::RPG::GameCore::EntityType, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::GameEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_5F84544D93010D59_METHOD_1_FFA4EB6520FE57B5_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_71E93CC0C9625DE6(::RPG::Client::UIBillboard* a1)
	{
		return ((::System::Void(*)(::RPG::Client::UIBillboard*))((::PBYTE)hIl2Cpp + CLASS_1_5F84544D93010D59_METHOD_1_71E93CC0C9625DE6_OFFSET))(a1);
	}

	static ::System::Void Method_1_71E93CC0C9625DE6_1(::RPG::Client::UIBillboard* a1)
	{
		return ((::System::Void(*)(::RPG::Client::UIBillboard*))((::PBYTE)hIl2Cpp + CLASS_1_5F84544D93010D59_METHOD_1_71E93CC0C9625DE6_1_OFFSET))(a1);
	}

	static ::System::Single Method_1_CC4800A75BD2D2EF(::System::UInt32 a1)
	{
		return ((::System::Single(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5F84544D93010D59_METHOD_1_CC4800A75BD2D2EF_OFFSET))(a1);
	}

	static ::System::String* Method_1_53C299EF2C870245(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::String*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5F84544D93010D59_METHOD_1_53C299EF2C870245_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_4C45C5441D82D82A(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::String*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5F84544D93010D59_METHOD_1_4C45C5441D82D82A_OFFSET))(a1, a2, a3);
	}
};
