#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"
#include "unitysdk/MoleMole/HollowChessboard/ChessboardView/LineInfo.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

class Class_1_577E23085FCBCFE7;
class Class_1_73B1093D0FAD2B9E;
class Class_1_AE853C2F9847F188;
class Class_1_C46B654B1DC9AB47;
class Class_5_AF65C3A968E836D2;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3D9B8508A41CC27F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x136991D0)
#define CLASS_1_3D9B8508A41CC27F_METHOD_1_048B2CC98DBD1BD8_OFFSET UNITYSDK_OFFSET(0x13699080)
#define CLASS_1_3D9B8508A41CC27F_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x13698990)
#define CLASS_1_3D9B8508A41CC27F_METHOD_1_235D058510899FEE_OFFSET UNITYSDK_OFFSET(0x13698EC0)
#define CLASS_1_3D9B8508A41CC27F_METHOD_1_36CB12A5288049A3_OFFSET UNITYSDK_OFFSET(0x136992D0)
#define CLASS_1_3D9B8508A41CC27F_METHOD_1_6D44C03F490A953F_OFFSET UNITYSDK_OFFSET(0x13698F10)
#define CLASS_1_3D9B8508A41CC27F_METHOD_1_A5B6063FFC26FC8F_OFFSET UNITYSDK_OFFSET(0x13699110)
#define CLASS_1_3D9B8508A41CC27F_METHOD_1_B333C7EDEE37C5FD_OFFSET UNITYSDK_OFFSET(0x13699350)
#define CLASS_1_3D9B8508A41CC27F_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13699290)
#define CLASS_1_3D9B8508A41CC27F_METHOD_1_DF2A78D8DB25ED05_OFFSET UNITYSDK_OFFSET(0x136989F0)
#define CLASS_1_3D9B8508A41CC27F_METHOD_1_F7F76BABA18686FB_OFFSET UNITYSDK_OFFSET(0x136995D0)
#define CLASS_1_3D9B8508A41CC27F__CTOR_OFFSET UNITYSDK_OFFSET(0x13699220)

inline static constexpr unsigned int Class_1_3D9B8508A41CC27F_TypeDefinitionIndex = 48524;

class Class_1_3D9B8508A41CC27F : public ::System::Object
{
public:
	::Class_1_C46B654B1DC9AB47* Field_1_2; // 0x10
	::Class_1_73B1093D0FAD2B9E* Field_1_3; // 0x18
	::Class_5_AF65C3A968E836D2* Field_1_1; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::Vector3Int>* Field_1_5; // 0x28
	::Class_1_577E23085FCBCFE7* Field_1_0; // 0x30
	::System::Boolean Field_1_6; // 0x38
	::System::Boolean Field_1_4; // 0x39

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D9B8508A41CC27F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_AE853C2F9847F188* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AE853C2F9847F188*))((::PBYTE)hIl2Cpp + CLASS_1_3D9B8508A41CC27F_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::Void Method_1_DF2A78D8DB25ED05()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D9B8508A41CC27F_METHOD_1_DF2A78D8DB25ED05_OFFSET))(this);
	}

	::System::Void Method_1_235D058510899FEE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3D9B8508A41CC27F_METHOD_1_235D058510899FEE_OFFSET))(this, a1);
	}

	::System::Void Method_1_048B2CC98DBD1BD8(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3D9B8508A41CC27F_METHOD_1_048B2CC98DBD1BD8_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D9B8508A41CC27F_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D9B8508A41CC27F_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_36CB12A5288049A3(::Class_1_577E23085FCBCFE7*& a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector3Int>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_577E23085FCBCFE7*&, ::System::Collections::Generic::List_1<::UnityEngine::Vector3Int>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3D9B8508A41CC27F_METHOD_1_36CB12A5288049A3_OFFSET))(this, a1, a2, a3);
	}

	::Foundation::Unreal::FTransform3D Method_1_B333C7EDEE37C5FD(::MoleMole::HollowChessboard::ChessboardView::LineInfo a1)
	{
		return ((::Foundation::Unreal::FTransform3D(*)(::PVOID, ::MoleMole::HollowChessboard::ChessboardView::LineInfo))((::PBYTE)hIl2Cpp + CLASS_1_3D9B8508A41CC27F_METHOD_1_B333C7EDEE37C5FD_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Vector3Int>* Method_1_F7F76BABA18686FB()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3Int>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D9B8508A41CC27F_METHOD_1_F7F76BABA18686FB_OFFSET))(this);
	}

	::System::Void Method_1_6D44C03F490A953F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3D9B8508A41CC27F_METHOD_1_6D44C03F490A953F_OFFSET))(this, a1);
	}

	::System::Void Method_1_A5B6063FFC26FC8F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D9B8508A41CC27F_METHOD_1_A5B6063FFC26FC8F_OFFSET))(this);
	}
};
