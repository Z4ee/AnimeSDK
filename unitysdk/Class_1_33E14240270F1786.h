#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/BlockPuzzleLogicFourDirection.h"
#include "unitysdk/RPG/Client/Prop/ChessDirection.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

#define CLASS_1_33E14240270F1786_METHOD_1_1ED7DC8DC759794B_OFFSET UNITYSDK_OFFSET(0x13A64F70)
#define CLASS_1_33E14240270F1786_METHOD_1_26E222A9BC01E573_OFFSET UNITYSDK_OFFSET(0x13A64FF0)
#define CLASS_1_33E14240270F1786_METHOD_1_73BF87BEE96814F5_OFFSET UNITYSDK_OFFSET(0x13A64E10)
#define CLASS_1_33E14240270F1786_METHOD_1_DC0CC270743D7A96_OFFSET UNITYSDK_OFFSET(0x13A64CD0)
#define CLASS_1_33E14240270F1786__CCTOR_OFFSET UNITYSDK_OFFSET(0x13A65060)

inline static constexpr unsigned int Class_1_33E14240270F1786_TypeDefinitionIndex = 74836;

class Class_1_33E14240270F1786 : public ::System::Object
{
public:
	static ::UnityEngine::Vector2Int* StaticGet_Field_1_0()
	{
		return (::UnityEngine::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Class_1_33E14240270F1786_TypeDefinitionIndex)->GetStaticField(0x44C0);
	}
	static ::UnityEngine::Vector2Int* StaticGet_Field_1_1()
	{
		return (::UnityEngine::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Class_1_33E14240270F1786_TypeDefinitionIndex)->GetStaticField(0x44C8);
	}
	static ::UnityEngine::Vector2Int* StaticGet_Field_1_2()
	{
		return (::UnityEngine::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Class_1_33E14240270F1786_TypeDefinitionIndex)->GetStaticField(0x44D0);
	}
	static ::UnityEngine::Vector2Int* StaticGet_Field_1_3()
	{
		return (::UnityEngine::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Class_1_33E14240270F1786_TypeDefinitionIndex)->GetStaticField(0x44D8);
	}
	static ::UnityEngine::Vector2Int* StaticGet_Field_1_4()
	{
		return (::UnityEngine::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Class_1_33E14240270F1786_TypeDefinitionIndex)->GetStaticField(0x44E0);
	}
	static ::System::Int32* StaticGet_Field_1_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_33E14240270F1786_TypeDefinitionIndex)->GetStaticField(0x44E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_33E14240270F1786__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_DC0CC270743D7A96(::RPG::Client::Prop::ChessDirection a1, ::System::Int32& a2, ::System::Int32& a3)
	{
		return ((::System::Void(*)(::RPG::Client::Prop::ChessDirection, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_33E14240270F1786_METHOD_1_DC0CC270743D7A96_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector2Int Method_1_73BF87BEE96814F5(::RPG::Client::Prop::BlockPuzzleLogicFourDirection a1)
	{
		return ((::UnityEngine::Vector2Int(*)(::RPG::Client::Prop::BlockPuzzleLogicFourDirection))((::PBYTE)hIl2Cpp + CLASS_1_33E14240270F1786_METHOD_1_73BF87BEE96814F5_OFFSET))(a1);
	}

	static ::RPG::Client::Prop::BlockPuzzleLogicFourDirection Method_1_1ED7DC8DC759794B(::UnityEngine::Vector2Int a1)
	{
		return ((::RPG::Client::Prop::BlockPuzzleLogicFourDirection(*)(::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_33E14240270F1786_METHOD_1_1ED7DC8DC759794B_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_26E222A9BC01E573(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Vector2Int a3)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_33E14240270F1786_METHOD_1_26E222A9BC01E573_OFFSET))(a1, a2, a3);
	}
};
