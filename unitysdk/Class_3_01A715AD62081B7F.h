#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CE524E0BB2F7DB94_Enum_3_A982ABB36633F4BE.h"
#include "unitysdk/Class_2_E1E8F78EF830D7DA.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowPieceBlendMode.h"
#include "unitysdk/Struct_2_6E23A591AC26A31E.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_0_16E4307DCC419505_304;
class Class_2_CE524E0BB2F7DB94;
namespace MoleMole { class TextureSheetLoopFrame; }
namespace MoleMole { class TextureSheetSkipFrameParam; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

#define CLASS_3_01A715AD62081B7F_METHOD_3_0B0C993B34575B04_OFFSET UNITYSDK_OFFSET(0x16D37AB0)
#define CLASS_3_01A715AD62081B7F_METHOD_3_0E142E3463F30350_OFFSET UNITYSDK_OFFSET(0x16D36560)
#define CLASS_3_01A715AD62081B7F_METHOD_3_19B14977ABA39612_1_OFFSET UNITYSDK_OFFSET(0x16D37600)
#define CLASS_3_01A715AD62081B7F_METHOD_3_19B14977ABA39612_OFFSET UNITYSDK_OFFSET(0x16D372F0)
#define CLASS_3_01A715AD62081B7F_METHOD_3_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x16D36680)
#define CLASS_3_01A715AD62081B7F_METHOD_3_20A4F4259B985034_OFFSET UNITYSDK_OFFSET(0x16D36530)
#define CLASS_3_01A715AD62081B7F_METHOD_3_2B16B5F01C53C142_OFFSET UNITYSDK_OFFSET(0x16D35E90)
#define CLASS_3_01A715AD62081B7F_METHOD_3_31BD7F7AC30B5421_OFFSET UNITYSDK_OFFSET(0x16D351C0)
#define CLASS_3_01A715AD62081B7F_METHOD_3_35BAAC83AC1968DF_OFFSET UNITYSDK_OFFSET(0x16D35450)
#define CLASS_3_01A715AD62081B7F_METHOD_3_37D0382D0C30A2DC_OFFSET UNITYSDK_OFFSET(0x16D36DD0)
#define CLASS_3_01A715AD62081B7F_METHOD_3_3A28462B95074C25_OFFSET UNITYSDK_OFFSET(0x16D34D50)
#define CLASS_3_01A715AD62081B7F_METHOD_3_3D9596909EB37141_OFFSET UNITYSDK_OFFSET(0x16D36A80)
#define CLASS_3_01A715AD62081B7F_METHOD_3_3E7B7DB0EDF962BA_OFFSET UNITYSDK_OFFSET(0x16D36D30)
#define CLASS_3_01A715AD62081B7F_METHOD_3_4236E7E31C05E4C7_OFFSET UNITYSDK_OFFSET(0x16D34B60)
#define CLASS_3_01A715AD62081B7F_METHOD_3_47EDE3CF74BCE1B1_1_OFFSET UNITYSDK_OFFSET(0x16D36F10)
#define CLASS_3_01A715AD62081B7F_METHOD_3_47EDE3CF74BCE1B1_2_OFFSET UNITYSDK_OFFSET(0x16D37920)
#define CLASS_3_01A715AD62081B7F_METHOD_3_47EDE3CF74BCE1B1_3_OFFSET UNITYSDK_OFFSET(0x16D37D40)
#define CLASS_3_01A715AD62081B7F_METHOD_3_47EDE3CF74BCE1B1_OFFSET UNITYSDK_OFFSET(0x16D36990)
#define CLASS_3_01A715AD62081B7F_METHOD_3_513F60E1612756A9_OFFSET UNITYSDK_OFFSET(0x16D36750)
#define CLASS_3_01A715AD62081B7F_METHOD_3_640514F2FC7A7607_OFFSET UNITYSDK_OFFSET(0x16D37070)
#define CLASS_3_01A715AD62081B7F_METHOD_3_6E313D1CE4E1630E_OFFSET UNITYSDK_OFFSET(0x16D37DF0)
#define CLASS_3_01A715AD62081B7F_METHOD_3_70D5C180392B666C_OFFSET UNITYSDK_OFFSET(0x16D34930)
#define CLASS_3_01A715AD62081B7F_METHOD_3_797B0DC3D00A8877_OFFSET UNITYSDK_OFFSET(0x16D35290)
#define CLASS_3_01A715AD62081B7F_METHOD_3_99D60EF23C904C6D_OFFSET UNITYSDK_OFFSET(0x16D36250)
#define CLASS_3_01A715AD62081B7F_METHOD_3_9BE2513CD38A5F3E_OFFSET UNITYSDK_OFFSET(0x16D37CD0)
#define CLASS_3_01A715AD62081B7F_METHOD_3_A18662FA482D7639_OFFSET UNITYSDK_OFFSET(0x16D36800)
#define CLASS_3_01A715AD62081B7F_METHOD_3_A24680A134F40BA4_OFFSET UNITYSDK_OFFSET(0x16D37B70)
#define CLASS_3_01A715AD62081B7F_METHOD_3_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x16D36920)
#define CLASS_3_01A715AD62081B7F_METHOD_3_AC3009196FFE7496_1_OFFSET UNITYSDK_OFFSET(0x16D379D0)
#define CLASS_3_01A715AD62081B7F_METHOD_3_AC3009196FFE7496_2_OFFSET UNITYSDK_OFFSET(0x16D37A40)
#define CLASS_3_01A715AD62081B7F_METHOD_3_AC3009196FFE7496_OFFSET UNITYSDK_OFFSET(0x16D36FD0)
#define CLASS_3_01A715AD62081B7F_METHOD_3_B839AD5CB4E018CF_OFFSET UNITYSDK_OFFSET(0x16D35F90)
#define CLASS_3_01A715AD62081B7F_METHOD_3_BA1B3CCCB56FD281_OFFSET UNITYSDK_OFFSET(0x16D37180)
#define CLASS_3_01A715AD62081B7F_METHOD_3_BE6C5D91F3539B47_OFFSET UNITYSDK_OFFSET(0x16D37230)
#define CLASS_3_01A715AD62081B7F_METHOD_3_C1488BC0939F80A1_OFFSET UNITYSDK_OFFSET(0x16D36E80)
#define CLASS_3_01A715AD62081B7F_METHOD_3_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x16D366E0)
#define CLASS_3_01A715AD62081B7F_METHOD_3_C76BE59F2FF3E457_OFFSET UNITYSDK_OFFSET(0x16D363E0)
#define CLASS_3_01A715AD62081B7F_METHOD_3_D20BF56E36607D54_OFFSET UNITYSDK_OFFSET(0x16D364E0)
#define CLASS_3_01A715AD62081B7F_METHOD_3_D43ACFB3670F48C5_1_OFFSET UNITYSDK_OFFSET(0x16D37C40)
#define CLASS_3_01A715AD62081B7F_METHOD_3_D43ACFB3670F48C5_OFFSET UNITYSDK_OFFSET(0x16D36890)
#define CLASS_3_01A715AD62081B7F_METHOD_3_D675F692CCA6D70B_1_OFFSET UNITYSDK_OFFSET(0x16D36100)
#define CLASS_3_01A715AD62081B7F_METHOD_3_D675F692CCA6D70B_2_OFFSET UNITYSDK_OFFSET(0x16D361B0)
#define CLASS_3_01A715AD62081B7F_METHOD_3_D675F692CCA6D70B_OFFSET UNITYSDK_OFFSET(0x16D35FF0)
#define CLASS_3_01A715AD62081B7F_METHOD_3_F24A112B56A2E4B4_1_OFFSET UNITYSDK_OFFSET(0x16D37040)
#define CLASS_3_01A715AD62081B7F_METHOD_3_F24A112B56A2E4B4_OFFSET UNITYSDK_OFFSET(0x16D36A50)
#define CLASS_3_01A715AD62081B7F_METHOD_3_F30B868D748FA16B_OFFSET UNITYSDK_OFFSET(0x16D352E0)
#define CLASS_3_01A715AD62081B7F_METHOD_3_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x16D36E50)
#define CLASS_3_01A715AD62081B7F_METHOD_3_FA07211BE90EEC5E_OFFSET UNITYSDK_OFFSET(0x16D362D0)
#define CLASS_3_01A715AD62081B7F__CTOR_OFFSET UNITYSDK_OFFSET(0x16D34800)

inline static constexpr unsigned int Class_3_01A715AD62081B7F_TypeDefinitionIndex = 45508;

class Class_3_01A715AD62081B7F : public ::Class_2_E1E8F78EF830D7DA
{
public:
	::Il2CppArray<::System::Int32>* Field_3_0; // 0x28
	::Il2CppArray<::UnityEngine::Vector4>* Field_3_1; // 0x30
	::Il2CppArray<::System::Int32>* Field_3_2; // 0x38
	::Il2CppArray<::Class_2_CE524E0BB2F7DB94*>* Field_3_4; // 0x40
	::Class_2_CE524E0BB2F7DB94* Field_3_3; // 0x48
	::System::Boolean Field_3_6; // 0x50
	::System::Boolean Field_3_5; // 0x51

	::System::Void _ctor(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_01A715AD62081B7F__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_4236E7E31C05E4C7(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::String* a7, ::System::Boolean a8, ::System::Boolean a9, ::System::Int32 a10, ::System::Int32 a11, ::System::Collections::Generic::List_1<::MoleMole::TextureSheetLoopFrame*>* a12, ::System::Boolean a13, ::System::Single a14, ::System::Single a15, ::MoleMole::TextureSheetSkipFrameParam* a16, ::System::Int32 a17)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::TextureSheetLoopFrame*>*, ::System::Boolean, ::System::Single, ::System::Single, ::MoleMole::TextureSheetSkipFrameParam*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_01A715AD62081B7F_METHOD_3_4236E7E31C05E4C7_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
	}

	::System::Void Method_3_31BD7F7AC30B5421(::UnityEngine::Events::UnityAction* a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_01A715AD62081B7F_METHOD_3_31BD7F7AC30B5421_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_F30B868D748FA16B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_01A715AD62081B7F_METHOD_3_F30B868D748FA16B_OFFSET))(this, a1);
	}

	::System::Void Method_3_35BAAC83AC1968DF(::Struct_2_6E23A591AC26A31E& a1, ::System::Single a2, ::MoleMole::HollowChessboard::HollowCell a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_6E23A591AC26A31E&, ::System::Single, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_01A715AD62081B7F_METHOD_3_35BAAC83AC1968DF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_2B16B5F01C53C142(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_01A715AD62081B7F_METHOD_3_2B16B5F01C53C142_OFFSET))(this, a1);
	}

	::System::Void Method_3_D675F692CCA6D70B(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_01A715AD62081B7F_METHOD_3_D675F692CCA6D70B_OFFSET))(this, a1);
	}

	::System::Void Method_3_D675F692CCA6D70B_1(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_01A715AD62081B7F_METHOD_3_D675F692CCA6D70B_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_D675F692CCA6D70B_2(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_01A715AD62081B7F_METHOD_3_D675F692CCA6D70B_2_OFFSET))(this, a1);
	}

	::System::Void Method_3_99D60EF23C904C6D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_01A715AD62081B7F_METHOD_3_99D60EF23C904C6D_OFFSET))(this);
	}

	::System::Void Method_3_C76BE59F2FF3E457(::UnityEngine::Events::UnityAction_1<::System::Boolean>* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::System::Boolean>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_01A715AD62081B7F_METHOD_3_C76BE59F2FF3E457_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_FA07211BE90EEC5E(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_01A715AD62081B7F_METHOD_3_FA07211BE90EEC5E_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_D20BF56E36607D54(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_01A715AD62081B7F_METHOD_3_D20BF56E36607D54_OFFSET))(this, a1);
	}

	::Class_2_CE524E0BB2F7DB94_Enum_3_A982ABB36633F4BE Method_3_20A4F4259B985034()
	{
		return ((::Class_2_CE524E0BB2F7DB94_Enum_3_A982ABB36633F4BE(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_01A715AD62081B7F_METHOD_3_20A4F4259B985034_OFFSET))(this);
	}

	::System::Void Method_3_0E142E3463F30350()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_01A715AD62081B7F_METHOD_3_0E142E3463F30350_OFFSET))(this);
	}

	::System::Boolean Method_3_513F60E1612756A9(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_01A715AD62081B7F_METHOD_3_513F60E1612756A9_OFFSET))(this, a1);
	}

	::System::Void Method_3_3A28462B95074C25(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::String* a7, ::System::Boolean a8, ::System::Boolean a9, ::System::Int32 a10, ::System::Int32 a11, ::System::Collections::Generic::List_1<::MoleMole::TextureSheetLoopFrame*>* a12, ::System::Boolean a13, ::System::Single a14, ::System::Single a15, ::MoleMole::TextureSheetSkipFrameParam* a16, ::System::Int32 a17, ::Class_0_16E4307DCC419505_304* a18)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::TextureSheetLoopFrame*>*, ::System::Boolean, ::System::Single, ::System::Single, ::MoleMole::TextureSheetSkipFrameParam*, ::System::Int32, ::Class_0_16E4307DCC419505_304*))((::PBYTE)hIl2Cpp + CLASS_3_01A715AD62081B7F_METHOD_3_3A28462B95074C25_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
	}

	::System::Void Method_3_A18662FA482D7639(::UnityEngine::Events::UnityAction* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_01A715AD62081B7F_METHOD_3_A18662FA482D7639_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D43ACFB3670F48C5(::System::Action* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_01A715AD62081B7F_METHOD_3_D43ACFB3670F48C5_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_01A715AD62081B7F_METHOD_3_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Void Method_3_47EDE3CF74BCE1B1(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_01A715AD62081B7F_METHOD_3_47EDE3CF74BCE1B1_OFFSET))(this, a1);
	}

	::System::String* Method_3_F24A112B56A2E4B4()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_01A715AD62081B7F_METHOD_3_F24A112B56A2E4B4_OFFSET))(this);
	}

	::System::Int32 Method_3_3D9596909EB37141(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::String* a7, ::System::Boolean a8, ::System::Boolean a9, ::System::Int32 a10, ::System::Collections::Generic::List_1<::MoleMole::TextureSheetLoopFrame*>* a11, ::System::Boolean a12, ::System::Single a13, ::System::Single a14, ::MoleMole::TextureSheetSkipFrameParam* a15, ::System::Int32 a16, ::System::Int32 a17, ::Class_0_16E4307DCC419505_304* a18)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::TextureSheetLoopFrame*>*, ::System::Boolean, ::System::Single, ::System::Single, ::MoleMole::TextureSheetSkipFrameParam*, ::System::Int32, ::System::Int32, ::Class_0_16E4307DCC419505_304*))((::PBYTE)hIl2Cpp + CLASS_3_01A715AD62081B7F_METHOD_3_3D9596909EB37141_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
	}

	::System::Void Method_3_3E7B7DB0EDF962BA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_01A715AD62081B7F_METHOD_3_3E7B7DB0EDF962BA_OFFSET))(this);
	}

	::System::Int32 Method_3_37D0382D0C30A2DC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_01A715AD62081B7F_METHOD_3_37D0382D0C30A2DC_OFFSET))(this);
	}

	static ::System::Boolean Method_3_797B0DC3D00A8877(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_01A715AD62081B7F_METHOD_3_797B0DC3D00A8877_OFFSET))(a1);
	}

	::System::Int32 Method_3_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_01A715AD62081B7F_METHOD_3_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::System::Void Method_3_C1488BC0939F80A1(::UnityEngine::Events::UnityAction* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_01A715AD62081B7F_METHOD_3_C1488BC0939F80A1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_47EDE3CF74BCE1B1_1(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_01A715AD62081B7F_METHOD_3_47EDE3CF74BCE1B1_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_AC3009196FFE7496(::UnityEngine::Events::UnityAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + CLASS_3_01A715AD62081B7F_METHOD_3_AC3009196FFE7496_OFFSET))(this, a1);
	}

	::System::String* Method_3_F24A112B56A2E4B4_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_01A715AD62081B7F_METHOD_3_F24A112B56A2E4B4_1_OFFSET))(this);
	}

	::System::Void Method_3_640514F2FC7A7607(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_01A715AD62081B7F_METHOD_3_640514F2FC7A7607_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_BA1B3CCCB56FD281(::System::Int32 a1, ::MoleMole::HollowPieceBlendMode a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::HollowPieceBlendMode))((::PBYTE)hIl2Cpp + CLASS_3_01A715AD62081B7F_METHOD_3_BA1B3CCCB56FD281_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_BE6C5D91F3539B47(::UnityEngine::Vector4 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector4, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_01A715AD62081B7F_METHOD_3_BE6C5D91F3539B47_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_19B14977ABA39612()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_01A715AD62081B7F_METHOD_3_19B14977ABA39612_OFFSET))(this);
	}

	::System::Void Method_3_19B14977ABA39612_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_01A715AD62081B7F_METHOD_3_19B14977ABA39612_1_OFFSET))(this);
	}

	::System::Void Method_3_B839AD5CB4E018CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_01A715AD62081B7F_METHOD_3_B839AD5CB4E018CF_OFFSET))(this);
	}

	::System::Boolean Method_3_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_01A715AD62081B7F_METHOD_3_1D4018D4200358D0_OFFSET))(this);
	}

	::Class_2_CE524E0BB2F7DB94* Method_3_70D5C180392B666C(::System::Int32 a1)
	{
		return ((::Class_2_CE524E0BB2F7DB94*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_01A715AD62081B7F_METHOD_3_70D5C180392B666C_OFFSET))(this, a1);
	}

	::System::Void Method_3_47EDE3CF74BCE1B1_2(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_01A715AD62081B7F_METHOD_3_47EDE3CF74BCE1B1_2_OFFSET))(this, a1);
	}

	::System::Void Method_3_AC3009196FFE7496_1(::UnityEngine::Events::UnityAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + CLASS_3_01A715AD62081B7F_METHOD_3_AC3009196FFE7496_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_AC3009196FFE7496_2(::UnityEngine::Events::UnityAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + CLASS_3_01A715AD62081B7F_METHOD_3_AC3009196FFE7496_2_OFFSET))(this, a1);
	}

	::System::Void Method_3_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_01A715AD62081B7F_METHOD_3_C561FF611C07A44C_OFFSET))(this);
	}

	::System::Void Method_3_0B0C993B34575B04(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_01A715AD62081B7F_METHOD_3_0B0C993B34575B04_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A24680A134F40BA4(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_01A715AD62081B7F_METHOD_3_A24680A134F40BA4_OFFSET))(this, a1);
	}

	::System::Void Method_3_D43ACFB3670F48C5_1(::System::Action* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_01A715AD62081B7F_METHOD_3_D43ACFB3670F48C5_1_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_3_9BE2513CD38A5F3E()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_01A715AD62081B7F_METHOD_3_9BE2513CD38A5F3E_OFFSET))(this);
	}

	::System::Void Method_3_47EDE3CF74BCE1B1_3(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_01A715AD62081B7F_METHOD_3_47EDE3CF74BCE1B1_3_OFFSET))(this, a1);
	}

	::System::Void Method_3_6E313D1CE4E1630E(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_01A715AD62081B7F_METHOD_3_6E313D1CE4E1630E_OFFSET))(this, a1, a2);
	}
};
