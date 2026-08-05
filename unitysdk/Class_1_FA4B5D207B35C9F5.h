#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowPieceRepresentType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_47DC99B26C6271DB;
class Class_1_E9529ED64113E4E9;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine { class Texture; }

#define CLASS_1_FA4B5D207B35C9F5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x169E2F20)
#define CLASS_1_FA4B5D207B35C9F5_METHOD_1_0076C796B2045359_OFFSET UNITYSDK_OFFSET(0x169E3260)
#define CLASS_1_FA4B5D207B35C9F5_METHOD_1_11D56DEA3260CC73_OFFSET UNITYSDK_OFFSET(0x169E3420)
#define CLASS_1_FA4B5D207B35C9F5_METHOD_1_358A144584A5DBFC_1_OFFSET UNITYSDK_OFFSET(0x169E3730)
#define CLASS_1_FA4B5D207B35C9F5_METHOD_1_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0x169E37B0)
#define CLASS_1_FA4B5D207B35C9F5_METHOD_1_3F5D87A8284DF9F1_OFFSET UNITYSDK_OFFSET(0x169E3AB0)
#define CLASS_1_FA4B5D207B35C9F5_METHOD_1_568AE7A1499723FD_OFFSET UNITYSDK_OFFSET(0x169E3980)
#define CLASS_1_FA4B5D207B35C9F5_METHOD_1_814B2B0F621DA493_1_OFFSET UNITYSDK_OFFSET(0x169E3D40)
#define CLASS_1_FA4B5D207B35C9F5_METHOD_1_814B2B0F621DA493_OFFSET UNITYSDK_OFFSET(0x169E3830)
#define CLASS_1_FA4B5D207B35C9F5_METHOD_1_81F3FEDEB8077FC5_OFFSET UNITYSDK_OFFSET(0x169E3BC0)
#define CLASS_1_FA4B5D207B35C9F5_METHOD_1_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0x169E3170)
#define CLASS_1_FA4B5D207B35C9F5_METHOD_1_944725D8BEE125D5_OFFSET UNITYSDK_OFFSET(0x169E3AA0)
#define CLASS_1_FA4B5D207B35C9F5_METHOD_1_A4766B4D9580B815_OFFSET UNITYSDK_OFFSET(0x169E3A40)
#define CLASS_1_FA4B5D207B35C9F5_METHOD_1_AF081070273CE162_OFFSET UNITYSDK_OFFSET(0x169E3D20)
#define CLASS_1_FA4B5D207B35C9F5_METHOD_1_E032C8355FF9BFCE_OFFSET UNITYSDK_OFFSET(0x169E35C0)
#define CLASS_1_FA4B5D207B35C9F5_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x169E3070)
#define CLASS_1_FA4B5D207B35C9F5__CTOR_OFFSET UNITYSDK_OFFSET(0x169E3200)

inline static constexpr unsigned int Class_1_FA4B5D207B35C9F5_TypeDefinitionIndex = 66746;

class Class_1_FA4B5D207B35C9F5 : public ::System::Object
{
public:
	::System::Action_2<::UnityEngine::Texture*, ::System::Int32>* Field_1_6; // 0x10
	::System::Threading::CancellationTokenSource* Field_1_4; // 0x18
	::System::Action_2<::UnityEngine::Texture*, ::System::Int32>* Field_1_7; // 0x20
	::Il2CppArray<::Class_1_47DC99B26C6271DB*>* Field_1_11; // 0x28
	::MoleMole::HollowChessboard::HollowCell Field_1_0; // 0x30
	::MoleMole::HollowPieceRepresentType Field_1_5; // 0x3C

	::System::Void _ctor(::MoleMole::HollowPieceRepresentType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowPieceRepresentType))((::PBYTE)hIl2Cpp + CLASS_1_FA4B5D207B35C9F5__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4B5D207B35C9F5_DISPOSE_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_11D56DEA3260CC73(::System::Boolean a1, ::System::String* a2, ::System::Boolean a3, ::System::Action_1<::Class_1_E9529ED64113E4E9*>* a4, ::System::Action_1<::Class_1_E9529ED64113E4E9*>* a5, ::System::Action_1<::Class_1_E9529ED64113E4E9*>* a6, ::System::Action* a7, ::MoleMole::HollowChessboard::HollowCell a8)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::Boolean, ::System::Action_1<::Class_1_E9529ED64113E4E9*>*, ::System::Action_1<::Class_1_E9529ED64113E4E9*>*, ::System::Action_1<::Class_1_E9529ED64113E4E9*>*, ::System::Action*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_FA4B5D207B35C9F5_METHOD_1_11D56DEA3260CC73_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Int64 Method_1_E032C8355FF9BFCE()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4B5D207B35C9F5_METHOD_1_E032C8355FF9BFCE_OFFSET))(this);
	}

	::System::Int32 Method_1_814B2B0F621DA493()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4B5D207B35C9F5_METHOD_1_814B2B0F621DA493_OFFSET))(this);
	}

	::System::Boolean Method_1_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4B5D207B35C9F5_METHOD_1_83DA3EC57FF907F4_OFFSET))(this);
	}

	::System::Boolean Method_1_568AE7A1499723FD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4B5D207B35C9F5_METHOD_1_568AE7A1499723FD_OFFSET))(this);
	}

	::Class_1_47DC99B26C6271DB* Method_1_358A144584A5DBFC()
	{
		return ((::Class_1_47DC99B26C6271DB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4B5D207B35C9F5_METHOD_1_358A144584A5DBFC_OFFSET))(this);
	}

	::System::Void Method_1_A4766B4D9580B815(::System::Action_2<::UnityEngine::Texture*, ::System::Int32>* a1, ::System::Action_2<::UnityEngine::Texture*, ::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::UnityEngine::Texture*, ::System::Int32>*, ::System::Action_2<::UnityEngine::Texture*, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_FA4B5D207B35C9F5_METHOD_1_A4766B4D9580B815_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_944725D8BEE125D5(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_FA4B5D207B35C9F5_METHOD_1_944725D8BEE125D5_OFFSET))(this, a1);
	}

	::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4B5D207B35C9F5_METHOD_1_E7EF6BC52B28648C_OFFSET))(this);
	}

	::UnityEngine::Vector4 Method_1_3F5D87A8284DF9F1()
	{
		return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4B5D207B35C9F5_METHOD_1_3F5D87A8284DF9F1_OFFSET))(this);
	}

	::System::Void Method_1_81F3FEDEB8077FC5(::Class_1_47DC99B26C6271DB* a1, ::Class_1_47DC99B26C6271DB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_47DC99B26C6271DB*, ::Class_1_47DC99B26C6271DB*))((::PBYTE)hIl2Cpp + CLASS_1_FA4B5D207B35C9F5_METHOD_1_81F3FEDEB8077FC5_OFFSET))(this, a1, a2);
	}

	::Class_1_47DC99B26C6271DB* Method_1_358A144584A5DBFC_1()
	{
		return ((::Class_1_47DC99B26C6271DB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4B5D207B35C9F5_METHOD_1_358A144584A5DBFC_1_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowCell Method_1_AF081070273CE162()
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4B5D207B35C9F5_METHOD_1_AF081070273CE162_OFFSET))(this);
	}

	::System::Void Method_1_0076C796B2045359()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4B5D207B35C9F5_METHOD_1_0076C796B2045359_OFFSET))(this);
	}

	::System::Int32 Method_1_814B2B0F621DA493_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4B5D207B35C9F5_METHOD_1_814B2B0F621DA493_1_OFFSET))(this);
	}
};
