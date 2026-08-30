#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChessDirection.h"
#include "unitysdk/RPG/Client/Prop/DestroyRootPuzzleBoard_PuzzleTrail.h"
#include "unitysdk/RPG/Client/Prop/DestroyRootPuzzleChessType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_1_16CA124888A687A8;
class Class_1_2D33D4E16DA6E537;
class Class_1_627DB42B4281FD4F;
class Class_1_87966CE34106C362;
class Class_2_AA09F550E1A23C5D;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_30770FC2C4FA08D7_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB57CD30)
#define CLASS_1_30770FC2C4FA08D7_METHOD_1_1E8EBF93B3D6EB03_OFFSET UNITYSDK_OFFSET(0xB57DBA0)
#define CLASS_1_30770FC2C4FA08D7_METHOD_1_4EE428BE718D4850_OFFSET UNITYSDK_OFFSET(0xB57E0E0)
#define CLASS_1_30770FC2C4FA08D7_METHOD_1_50F19EA378B66C75_OFFSET UNITYSDK_OFFSET(0xB57D780)
#define CLASS_1_30770FC2C4FA08D7_METHOD_1_64593870134A1DB0_OFFSET UNITYSDK_OFFSET(0xB57E3B0)
#define CLASS_1_30770FC2C4FA08D7_METHOD_1_648D7E8C8EB329D0_OFFSET UNITYSDK_OFFSET(0xB57D3E0)
#define CLASS_1_30770FC2C4FA08D7_METHOD_1_767F911A7DB8A464_OFFSET UNITYSDK_OFFSET(0xB57DCA0)
#define CLASS_1_30770FC2C4FA08D7_METHOD_1_8194A53364899C58_OFFSET UNITYSDK_OFFSET(0xB57DD10)
#define CLASS_1_30770FC2C4FA08D7_METHOD_1_844D363E75208672_OFFSET UNITYSDK_OFFSET(0xB57CC90)
#define CLASS_1_30770FC2C4FA08D7_METHOD_1_8542E37E74FDE1B5_OFFSET UNITYSDK_OFFSET(0xB57C870)
#define CLASS_1_30770FC2C4FA08D7_METHOD_1_8867E901BEB1AF6D_OFFSET UNITYSDK_OFFSET(0xB57E020)
#define CLASS_1_30770FC2C4FA08D7_METHOD_1_8F6FE5C2342BD4F5_OFFSET UNITYSDK_OFFSET(0xB57D9B0)
#define CLASS_1_30770FC2C4FA08D7_METHOD_1_954EB24DA065442A_OFFSET UNITYSDK_OFFSET(0xB57E350)
#define CLASS_1_30770FC2C4FA08D7_METHOD_1_9D5A69F8589EB9E2_OFFSET UNITYSDK_OFFSET(0xB57DC30)
#define CLASS_1_30770FC2C4FA08D7_METHOD_1_A452529B5AFFF026_OFFSET UNITYSDK_OFFSET(0xB57D350)
#define CLASS_1_30770FC2C4FA08D7_METHOD_1_A4D46E6650906C40_OFFSET UNITYSDK_OFFSET(0xB57D000)
#define CLASS_1_30770FC2C4FA08D7_METHOD_1_AA50D6C8EA662EFA_OFFSET UNITYSDK_OFFSET(0xB57CFB0)
#define CLASS_1_30770FC2C4FA08D7_METHOD_1_F086AAB402906C67_OFFSET UNITYSDK_OFFSET(0xB57DEF0)
#define CLASS_1_30770FC2C4FA08D7_METHOD_1_FA7612E3CE4503AA_OFFSET UNITYSDK_OFFSET(0xB57D8D0)
#define CLASS_1_30770FC2C4FA08D7__CTOR_OFFSET UNITYSDK_OFFSET(0xB57C770)

inline static constexpr unsigned int Class_1_30770FC2C4FA08D7_TypeDefinitionIndex = 78089;

class Class_1_30770FC2C4FA08D7 : public ::System::Object
{
public:
	::Class_1_87966CE34106C362* EAFNKIINFHM; // 0x10
	::Il2CppArray<::Class_1_627DB42B4281FD4F*>* HOFFMMFBIBB; // 0x18
	::System::Collections::Generic::List_1<::Class_2_AA09F550E1A23C5D*>* EJHHMIFDMII; // 0x20

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_30770FC2C4FA08D7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8542E37E74FDE1B5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30770FC2C4FA08D7_METHOD_1_8542E37E74FDE1B5_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30770FC2C4FA08D7_DISPOSE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_2D33D4E16DA6E537*>*>* Method_1_AA50D6C8EA662EFA()
	{
		return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_2D33D4E16DA6E537*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30770FC2C4FA08D7_METHOD_1_AA50D6C8EA662EFA_OFFSET))(this);
	}

	::System::Boolean Method_1_A4D46E6650906C40(::UnityEngine::Vector2Int a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_30770FC2C4FA08D7_METHOD_1_A4D46E6650906C40_OFFSET))(this, a1);
	}

	::System::Void Method_1_648D7E8C8EB329D0(::UnityEngine::Vector2Int a1, ::RPG::Client::Prop::ChessDirection a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::RPG::Client::Prop::ChessDirection))((::PBYTE)hIl2Cpp + CLASS_1_30770FC2C4FA08D7_METHOD_1_648D7E8C8EB329D0_OFFSET))(this, a1, a2);
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

	::System::Boolean Method_1_64593870134A1DB0(::UnityEngine::Vector2Int a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_30770FC2C4FA08D7_METHOD_1_64593870134A1DB0_OFFSET))(this, a1);
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

	::Class_1_627DB42B4281FD4F* Method_1_50F19EA378B66C75(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::Class_1_627DB42B4281FD4F*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_30770FC2C4FA08D7_METHOD_1_50F19EA378B66C75_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_954EB24DA065442A(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_30770FC2C4FA08D7_METHOD_1_954EB24DA065442A_OFFSET))(this, a1);
	}

	::Class_1_627DB42B4281FD4F* Method_1_A452529B5AFFF026(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::Class_1_627DB42B4281FD4F*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_30770FC2C4FA08D7_METHOD_1_A452529B5AFFF026_OFFSET))(this, a1, a2);
	}
};
