#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChessDirection.h"
#include "unitysdk/RPG/Client/Prop/DestroyRootPuzzleBoard_PuzzleTrail.h"
#include "unitysdk/RPG/Client/Prop/DestroyRootPuzzleChessType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_1_16CA124888A687A8;
class Class_1_2D33D4E16DA6E537;
class Class_1_87966CE34106C362;
class Class_1_F84495B0D13114B1;
class Class_2_AA09F550E1A23C5D;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_30770FC2C4FA08D7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x145084F0)
#define CLASS_1_30770FC2C4FA08D7_METHOD_1_1E8EBF93B3D6EB03_OFFSET UNITYSDK_OFFSET(0x145091F0)
#define CLASS_1_30770FC2C4FA08D7_METHOD_1_4EE428BE718D4850_OFFSET UNITYSDK_OFFSET(0x14509730)
#define CLASS_1_30770FC2C4FA08D7_METHOD_1_50F19EA378B66C75_OFFSET UNITYSDK_OFFSET(0x14508DD0)
#define CLASS_1_30770FC2C4FA08D7_METHOD_1_5F08B426ADF31FF5_OFFSET UNITYSDK_OFFSET(0x145080B0)
#define CLASS_1_30770FC2C4FA08D7_METHOD_1_5F564787E8C22619_OFFSET UNITYSDK_OFFSET(0x14508AA0)
#define CLASS_1_30770FC2C4FA08D7_METHOD_1_767F911A7DB8A464_OFFSET UNITYSDK_OFFSET(0x145092F0)
#define CLASS_1_30770FC2C4FA08D7_METHOD_1_8194A53364899C58_OFFSET UNITYSDK_OFFSET(0x14509360)
#define CLASS_1_30770FC2C4FA08D7_METHOD_1_844D363E75208672_OFFSET UNITYSDK_OFFSET(0x14508450)
#define CLASS_1_30770FC2C4FA08D7_METHOD_1_8867E901BEB1AF6D_OFFSET UNITYSDK_OFFSET(0x14509670)
#define CLASS_1_30770FC2C4FA08D7_METHOD_1_8F6FE5C2342BD4F5_OFFSET UNITYSDK_OFFSET(0x14509000)
#define CLASS_1_30770FC2C4FA08D7_METHOD_1_90DB871E75279F63_OFFSET UNITYSDK_OFFSET(0x14509A00)
#define CLASS_1_30770FC2C4FA08D7_METHOD_1_954EB24DA065442A_OFFSET UNITYSDK_OFFSET(0x145099A0)
#define CLASS_1_30770FC2C4FA08D7_METHOD_1_9D5A69F8589EB9E2_OFFSET UNITYSDK_OFFSET(0x14509280)
#define CLASS_1_30770FC2C4FA08D7_METHOD_1_A452529B5AFFF026_OFFSET UNITYSDK_OFFSET(0x14508A10)
#define CLASS_1_30770FC2C4FA08D7_METHOD_1_AA50D6C8EA662EFA_OFFSET UNITYSDK_OFFSET(0x14508770)
#define CLASS_1_30770FC2C4FA08D7_METHOD_1_B6D620B4756EC740_OFFSET UNITYSDK_OFFSET(0x145087C0)
#define CLASS_1_30770FC2C4FA08D7_METHOD_1_F086AAB402906C67_OFFSET UNITYSDK_OFFSET(0x14509540)
#define CLASS_1_30770FC2C4FA08D7_METHOD_1_FA7612E3CE4503AA_OFFSET UNITYSDK_OFFSET(0x14508F20)
#define CLASS_1_30770FC2C4FA08D7__CTOR_OFFSET UNITYSDK_OFFSET(0x14507FB0)

inline static constexpr unsigned int Class_1_30770FC2C4FA08D7_TypeDefinitionIndex = 73078;

class Class_1_30770FC2C4FA08D7 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_2_AA09F550E1A23C5D*>* Field_1_0; // 0x10
	::Class_1_87966CE34106C362* Field_1_1; // 0x18
	::Il2CppArray<::Class_1_F84495B0D13114B1*>* Field_1_2; // 0x20

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_30770FC2C4FA08D7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5F08B426ADF31FF5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30770FC2C4FA08D7_METHOD_1_5F08B426ADF31FF5_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30770FC2C4FA08D7_DISPOSE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_2D33D4E16DA6E537*>*>* Method_1_AA50D6C8EA662EFA()
	{
		return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_2D33D4E16DA6E537*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30770FC2C4FA08D7_METHOD_1_AA50D6C8EA662EFA_OFFSET))(this);
	}

	::System::Boolean Method_1_B6D620B4756EC740(::UnityEngine::Vector2Int a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_30770FC2C4FA08D7_METHOD_1_B6D620B4756EC740_OFFSET))(this, a1);
	}

	::System::Void Method_1_5F564787E8C22619(::UnityEngine::Vector2Int a1, ::RPG::Client::Prop::ChessDirection a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::RPG::Client::Prop::ChessDirection))((::PBYTE)hIl2Cpp + CLASS_1_30770FC2C4FA08D7_METHOD_1_5F564787E8C22619_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Prop::ChessDirection Method_1_FA7612E3CE4503AA(::UnityEngine::Vector2Int a1, ::System::Boolean a2)
	{
		return ((::RPG::Client::Prop::ChessDirection(*)(::PVOID, ::UnityEngine::Vector2Int, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_30770FC2C4FA08D7_METHOD_1_FA7612E3CE4503AA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8F6FE5C2342BD4F5(::Il2CppArray<::RPG::Client::Prop::DestroyRootPuzzleBoard_PuzzleTrail>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::Prop::DestroyRootPuzzleBoard_PuzzleTrail>*))((::PBYTE)hIl2Cpp + CLASS_1_30770FC2C4FA08D7_METHOD_1_8F6FE5C2342BD4F5_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_9D5A69F8589EB9E2(::UnityEngine::Vector2Int a1)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_30770FC2C4FA08D7_METHOD_1_9D5A69F8589EB9E2_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2Int Method_1_844D363E75208672(::UnityEngine::Vector2Int a1)
	{
		return ((::UnityEngine::Vector2Int(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_30770FC2C4FA08D7_METHOD_1_844D363E75208672_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_767F911A7DB8A464(::UnityEngine::Vector2Int a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_30770FC2C4FA08D7_METHOD_1_767F911A7DB8A464_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8194A53364899C58(::RPG::Client::Prop::DestroyRootPuzzleChessType a1, ::UnityEngine::Vector2Int a2, ::RPG::Client::Prop::ChessDirection a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::DestroyRootPuzzleChessType, ::UnityEngine::Vector2Int, ::RPG::Client::Prop::ChessDirection))((::PBYTE)hIl2Cpp + CLASS_1_30770FC2C4FA08D7_METHOD_1_8194A53364899C58_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::Prop::ChessDirection Method_1_4EE428BE718D4850(::UnityEngine::Vector2Int a1)
	{
		return ((::RPG::Client::Prop::ChessDirection(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_30770FC2C4FA08D7_METHOD_1_4EE428BE718D4850_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_90DB871E75279F63(::UnityEngine::Vector2Int a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_30770FC2C4FA08D7_METHOD_1_90DB871E75279F63_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F086AAB402906C67(::UnityEngine::Vector2Int a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_30770FC2C4FA08D7_METHOD_1_F086AAB402906C67_OFFSET))(this, a1);
	}

	::System::Void Method_1_1E8EBF93B3D6EB03(::UnityEngine::Vector2Int a1, ::UnityEngine::Vector2Int a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_30770FC2C4FA08D7_METHOD_1_1E8EBF93B3D6EB03_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_16CA124888A687A8* Method_1_8867E901BEB1AF6D(::RPG::Client::Prop::DestroyRootPuzzleChessType a1)
	{
		return ((::Class_1_16CA124888A687A8*(*)(::PVOID, ::RPG::Client::Prop::DestroyRootPuzzleChessType))((::PBYTE)hIl2Cpp + CLASS_1_30770FC2C4FA08D7_METHOD_1_8867E901BEB1AF6D_OFFSET))(this, a1);
	}

	::Class_1_F84495B0D13114B1* Method_1_50F19EA378B66C75(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::Class_1_F84495B0D13114B1*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_30770FC2C4FA08D7_METHOD_1_50F19EA378B66C75_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_954EB24DA065442A(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_30770FC2C4FA08D7_METHOD_1_954EB24DA065442A_OFFSET))(this, a1);
	}

	::Class_1_F84495B0D13114B1* Method_1_A452529B5AFFF026(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::Class_1_F84495B0D13114B1*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_30770FC2C4FA08D7_METHOD_1_A452529B5AFFF026_OFFSET))(this, a1, a2);
	}
};
