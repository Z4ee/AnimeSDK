#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_2EAAA8212B3AB2EF_Enum_3_A982ABB36633F4BE.h"
#include "unitysdk/Class_2_E1E8F78EF830D7DA.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowPieceBlendMode.h"
#include "unitysdk/Struct_2_BCEA3C06DDE2274F.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_0_16E4307DCC419505_599;
class Class_2_2EAAA8212B3AB2EF;
namespace MoleMole { class TextureSheetLoopFrame; }
namespace MoleMole { class TextureSheetSkipFrameParam; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

#define CLASS_3_4A66A9AA1229EED9_METHOD_3_0B0C993B34575B04_OFFSET UNITYSDK_OFFSET(0x17EF4380)
#define CLASS_3_4A66A9AA1229EED9_METHOD_3_0E142E3463F30350_OFFSET UNITYSDK_OFFSET(0x17EF30E0)
#define CLASS_3_4A66A9AA1229EED9_METHOD_3_19B14977ABA39612_1_OFFSET UNITYSDK_OFFSET(0x17EF3E30)
#define CLASS_3_4A66A9AA1229EED9_METHOD_3_19B14977ABA39612_OFFSET UNITYSDK_OFFSET(0x17EF3B00)
#define CLASS_3_4A66A9AA1229EED9_METHOD_3_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x17EF3250)
#define CLASS_3_4A66A9AA1229EED9_METHOD_3_20A4F4259B985034_OFFSET UNITYSDK_OFFSET(0x17EF4180)
#define CLASS_3_4A66A9AA1229EED9_METHOD_3_242C14B87BCE28F3_OFFSET UNITYSDK_OFFSET(0x17EF0FB0)
#define CLASS_3_4A66A9AA1229EED9_METHOD_3_2B16B5F01C53C142_OFFSET UNITYSDK_OFFSET(0x17EF2500)
#define CLASS_3_4A66A9AA1229EED9_METHOD_3_31BD7F7AC30B5421_OFFSET UNITYSDK_OFFSET(0x17EF1890)
#define CLASS_3_4A66A9AA1229EED9_METHOD_3_35BAAC83AC1968DF_OFFSET UNITYSDK_OFFSET(0x17EF1B20)
#define CLASS_3_4A66A9AA1229EED9_METHOD_3_37D0382D0C30A2DC_OFFSET UNITYSDK_OFFSET(0x17EF4300)
#define CLASS_3_4A66A9AA1229EED9_METHOD_3_3A28462B95074C25_OFFSET UNITYSDK_OFFSET(0x17EF13F0)
#define CLASS_3_4A66A9AA1229EED9_METHOD_3_3D9596909EB37141_OFFSET UNITYSDK_OFFSET(0x17EF2A50)
#define CLASS_3_4A66A9AA1229EED9_METHOD_3_3E7B7DB0EDF962BA_OFFSET UNITYSDK_OFFSET(0x17EF3320)
#define CLASS_3_4A66A9AA1229EED9_METHOD_3_4236E7E31C05E4C7_OFFSET UNITYSDK_OFFSET(0x17EF1210)
#define CLASS_3_4A66A9AA1229EED9_METHOD_3_47EDE3CF74BCE1B1_1_OFFSET UNITYSDK_OFFSET(0x17EF33C0)
#define CLASS_3_4A66A9AA1229EED9_METHOD_3_47EDE3CF74BCE1B1_2_OFFSET UNITYSDK_OFFSET(0x17EF3480)
#define CLASS_3_4A66A9AA1229EED9_METHOD_3_47EDE3CF74BCE1B1_3_OFFSET UNITYSDK_OFFSET(0x17EF3A50)
#define CLASS_3_4A66A9AA1229EED9_METHOD_3_47EDE3CF74BCE1B1_OFFSET UNITYSDK_OFFSET(0x17EF2E90)
#define CLASS_3_4A66A9AA1229EED9_METHOD_3_513F60E1612756A9_OFFSET UNITYSDK_OFFSET(0x17EF3670)
#define CLASS_3_4A66A9AA1229EED9_METHOD_3_640514F2FC7A7607_OFFSET UNITYSDK_OFFSET(0x17EF4440)
#define CLASS_3_4A66A9AA1229EED9_METHOD_3_797B0DC3D00A8877_OFFSET UNITYSDK_OFFSET(0x17EF1960)
#define CLASS_3_4A66A9AA1229EED9_METHOD_3_80C66335F1B7C73D_OFFSET UNITYSDK_OFFSET(0x17EF3750)
#define CLASS_3_4A66A9AA1229EED9_METHOD_3_99D60EF23C904C6D_OFFSET UNITYSDK_OFFSET(0x17EF28C0)
#define CLASS_3_4A66A9AA1229EED9_METHOD_3_A18662FA482D7639_OFFSET UNITYSDK_OFFSET(0x17EF4270)
#define CLASS_3_4A66A9AA1229EED9_METHOD_3_A24680A134F40BA4_OFFSET UNITYSDK_OFFSET(0x17EF41B0)
#define CLASS_3_4A66A9AA1229EED9_METHOD_3_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x17EF2E20)
#define CLASS_3_4A66A9AA1229EED9_METHOD_3_A98A8AEDA88A98D3_OFFSET UNITYSDK_OFFSET(0x17EF38F0)
#define CLASS_3_4A66A9AA1229EED9_METHOD_3_AC3009196FFE7496_1_OFFSET UNITYSDK_OFFSET(0x17EF2F50)
#define CLASS_3_4A66A9AA1229EED9_METHOD_3_AC3009196FFE7496_2_OFFSET UNITYSDK_OFFSET(0x17EF4550)
#define CLASS_3_4A66A9AA1229EED9_METHOD_3_AC3009196FFE7496_OFFSET UNITYSDK_OFFSET(0x17EF2CF0)
#define CLASS_3_4A66A9AA1229EED9_METHOD_3_B839AD5CB4E018CF_OFFSET UNITYSDK_OFFSET(0x17EF2600)
#define CLASS_3_4A66A9AA1229EED9_METHOD_3_BA1B3CCCB56FD281_OFFSET UNITYSDK_OFFSET(0x17EF35C0)
#define CLASS_3_4A66A9AA1229EED9_METHOD_3_BE6C5D91F3539B47_OFFSET UNITYSDK_OFFSET(0x17EF2D60)
#define CLASS_3_4A66A9AA1229EED9_METHOD_3_C1488BC0939F80A1_OFFSET UNITYSDK_OFFSET(0x17EF3050)
#define CLASS_3_4A66A9AA1229EED9_METHOD_3_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x17EF32B0)
#define CLASS_3_4A66A9AA1229EED9_METHOD_3_C76BE59F2FF3E457_OFFSET UNITYSDK_OFFSET(0x17EF37F0)
#define CLASS_3_4A66A9AA1229EED9_METHOD_3_D20BF56E36607D54_OFFSET UNITYSDK_OFFSET(0x17EF3200)
#define CLASS_3_4A66A9AA1229EED9_METHOD_3_D43ACFB3670F48C5_1_OFFSET UNITYSDK_OFFSET(0x17EF3530)
#define CLASS_3_4A66A9AA1229EED9_METHOD_3_D43ACFB3670F48C5_OFFSET UNITYSDK_OFFSET(0x17EF2FC0)
#define CLASS_3_4A66A9AA1229EED9_METHOD_3_D675F692CCA6D70B_1_OFFSET UNITYSDK_OFFSET(0x17EF2770)
#define CLASS_3_4A66A9AA1229EED9_METHOD_3_D675F692CCA6D70B_2_OFFSET UNITYSDK_OFFSET(0x17EF2820)
#define CLASS_3_4A66A9AA1229EED9_METHOD_3_D675F692CCA6D70B_OFFSET UNITYSDK_OFFSET(0x17EF2660)
#define CLASS_3_4A66A9AA1229EED9_METHOD_3_F24A112B56A2E4B4_1_OFFSET UNITYSDK_OFFSET(0x17EF4150)
#define CLASS_3_4A66A9AA1229EED9_METHOD_3_F24A112B56A2E4B4_OFFSET UNITYSDK_OFFSET(0x17EF3720)
#define CLASS_3_4A66A9AA1229EED9_METHOD_3_F30B868D748FA16B_OFFSET UNITYSDK_OFFSET(0x17EF19B0)
#define CLASS_3_4A66A9AA1229EED9_METHOD_3_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x17EF37C0)
#define CLASS_3_4A66A9AA1229EED9_METHOD_3_FA07211BE90EEC5E_OFFSET UNITYSDK_OFFSET(0x17EF2940)
#define CLASS_3_4A66A9AA1229EED9__CTOR_OFFSET UNITYSDK_OFFSET(0x17EF0E80)

inline static constexpr unsigned int Class_3_4A66A9AA1229EED9_TypeDefinitionIndex = 76202;

class Class_3_4A66A9AA1229EED9 : public ::Class_2_E1E8F78EF830D7DA
{
public:
	::Il2CppArray<::System::Int32>* Field_3_7; // 0x28
	::Il2CppArray<::System::Int32>* Field_3_1; // 0x30
	::Il2CppArray<::Class_2_2EAAA8212B3AB2EF*>* Field_3_5; // 0x38
	::Il2CppArray<::UnityEngine::Vector4>* Field_3_0; // 0x40
	::Class_2_2EAAA8212B3AB2EF* Field_3_6; // 0x48
	::System::Boolean Field_3_4; // 0x50
	::System::Boolean Field_3_11; // 0x51

	::System::Void _ctor(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_4A66A9AA1229EED9__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_4236E7E31C05E4C7(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::String* a7, ::System::Boolean a8, ::System::Boolean a9, ::System::Int32 a10, ::System::Int32 a11, ::System::Collections::Generic::List_1<::MoleMole::TextureSheetLoopFrame*>* a12, ::System::Boolean a13, ::System::Single a14, ::System::Single a15, ::MoleMole::TextureSheetSkipFrameParam* a16, ::System::Int32 a17)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::TextureSheetLoopFrame*>*, ::System::Boolean, ::System::Single, ::System::Single, ::MoleMole::TextureSheetSkipFrameParam*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_4A66A9AA1229EED9_METHOD_3_4236E7E31C05E4C7_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
	}

	::System::Void Method_3_31BD7F7AC30B5421(::UnityEngine::Events::UnityAction* a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_4A66A9AA1229EED9_METHOD_3_31BD7F7AC30B5421_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_F30B868D748FA16B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_4A66A9AA1229EED9_METHOD_3_F30B868D748FA16B_OFFSET))(this, a1);
	}

	::System::Void Method_3_35BAAC83AC1968DF(::Struct_2_BCEA3C06DDE2274F& a1, ::System::Single a2, ::MoleMole::HollowChessboard::HollowCell a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BCEA3C06DDE2274F&, ::System::Single, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_4A66A9AA1229EED9_METHOD_3_35BAAC83AC1968DF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_2B16B5F01C53C142(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_4A66A9AA1229EED9_METHOD_3_2B16B5F01C53C142_OFFSET))(this, a1);
	}

	::System::Void Method_3_D675F692CCA6D70B(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_4A66A9AA1229EED9_METHOD_3_D675F692CCA6D70B_OFFSET))(this, a1);
	}

	::System::Void Method_3_D675F692CCA6D70B_1(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_4A66A9AA1229EED9_METHOD_3_D675F692CCA6D70B_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_D675F692CCA6D70B_2(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_4A66A9AA1229EED9_METHOD_3_D675F692CCA6D70B_2_OFFSET))(this, a1);
	}

	::System::Void Method_3_99D60EF23C904C6D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4A66A9AA1229EED9_METHOD_3_99D60EF23C904C6D_OFFSET))(this);
	}

	::System::Int32 Method_3_3D9596909EB37141(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::String* a7, ::System::Boolean a8, ::System::Boolean a9, ::System::Int32 a10, ::System::Collections::Generic::List_1<::MoleMole::TextureSheetLoopFrame*>* a11, ::System::Boolean a12, ::System::Single a13, ::System::Single a14, ::MoleMole::TextureSheetSkipFrameParam* a15, ::System::Int32 a16, ::System::Int32 a17, ::Class_0_16E4307DCC419505_599* a18)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::TextureSheetLoopFrame*>*, ::System::Boolean, ::System::Single, ::System::Single, ::MoleMole::TextureSheetSkipFrameParam*, ::System::Int32, ::System::Int32, ::Class_0_16E4307DCC419505_599*))((::PBYTE)hIl2Cpp + CLASS_3_4A66A9AA1229EED9_METHOD_3_3D9596909EB37141_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
	}

	::System::Void Method_3_AC3009196FFE7496(::UnityEngine::Events::UnityAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + CLASS_3_4A66A9AA1229EED9_METHOD_3_AC3009196FFE7496_OFFSET))(this, a1);
	}

	::Class_2_2EAAA8212B3AB2EF* Method_3_242C14B87BCE28F3(::System::Int32 a1)
	{
		return ((::Class_2_2EAAA8212B3AB2EF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_4A66A9AA1229EED9_METHOD_3_242C14B87BCE28F3_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_BE6C5D91F3539B47(::UnityEngine::Vector4 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector4, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_4A66A9AA1229EED9_METHOD_3_BE6C5D91F3539B47_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4A66A9AA1229EED9_METHOD_3_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Void Method_3_47EDE3CF74BCE1B1(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_4A66A9AA1229EED9_METHOD_3_47EDE3CF74BCE1B1_OFFSET))(this, a1);
	}

	::System::Void Method_3_AC3009196FFE7496_1(::UnityEngine::Events::UnityAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + CLASS_3_4A66A9AA1229EED9_METHOD_3_AC3009196FFE7496_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_D43ACFB3670F48C5(::System::Action* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_4A66A9AA1229EED9_METHOD_3_D43ACFB3670F48C5_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_3_797B0DC3D00A8877(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_4A66A9AA1229EED9_METHOD_3_797B0DC3D00A8877_OFFSET))(a1);
	}

	::System::Void Method_3_C1488BC0939F80A1(::UnityEngine::Events::UnityAction* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_4A66A9AA1229EED9_METHOD_3_C1488BC0939F80A1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_0E142E3463F30350()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4A66A9AA1229EED9_METHOD_3_0E142E3463F30350_OFFSET))(this);
	}

	::System::Void Method_3_3E7B7DB0EDF962BA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4A66A9AA1229EED9_METHOD_3_3E7B7DB0EDF962BA_OFFSET))(this);
	}

	::System::Void Method_3_47EDE3CF74BCE1B1_1(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_4A66A9AA1229EED9_METHOD_3_47EDE3CF74BCE1B1_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_47EDE3CF74BCE1B1_2(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_4A66A9AA1229EED9_METHOD_3_47EDE3CF74BCE1B1_2_OFFSET))(this, a1);
	}

	::System::Void Method_3_D43ACFB3670F48C5_1(::System::Action* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_4A66A9AA1229EED9_METHOD_3_D43ACFB3670F48C5_1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_BA1B3CCCB56FD281(::System::Int32 a1, ::MoleMole::HollowPieceBlendMode a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::HollowPieceBlendMode))((::PBYTE)hIl2Cpp + CLASS_3_4A66A9AA1229EED9_METHOD_3_BA1B3CCCB56FD281_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_513F60E1612756A9(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_4A66A9AA1229EED9_METHOD_3_513F60E1612756A9_OFFSET))(this, a1);
	}

	::System::String* Method_3_F24A112B56A2E4B4()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4A66A9AA1229EED9_METHOD_3_F24A112B56A2E4B4_OFFSET))(this);
	}

	::System::Int32 Method_3_80C66335F1B7C73D()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4A66A9AA1229EED9_METHOD_3_80C66335F1B7C73D_OFFSET))(this);
	}

	::System::Int32 Method_3_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4A66A9AA1229EED9_METHOD_3_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::System::Void Method_3_C76BE59F2FF3E457(::UnityEngine::Events::UnityAction_1<::System::Boolean>* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::System::Boolean>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_4A66A9AA1229EED9_METHOD_3_C76BE59F2FF3E457_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_A98A8AEDA88A98D3(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_4A66A9AA1229EED9_METHOD_3_A98A8AEDA88A98D3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_47EDE3CF74BCE1B1_3(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_4A66A9AA1229EED9_METHOD_3_47EDE3CF74BCE1B1_3_OFFSET))(this, a1);
	}

	::System::Void Method_3_19B14977ABA39612()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4A66A9AA1229EED9_METHOD_3_19B14977ABA39612_OFFSET))(this);
	}

	::System::Void Method_3_19B14977ABA39612_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4A66A9AA1229EED9_METHOD_3_19B14977ABA39612_1_OFFSET))(this);
	}

	::System::Void Method_3_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4A66A9AA1229EED9_METHOD_3_C561FF611C07A44C_OFFSET))(this);
	}

	::System::Boolean Method_3_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4A66A9AA1229EED9_METHOD_3_1D4018D4200358D0_OFFSET))(this);
	}

	::System::String* Method_3_F24A112B56A2E4B4_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4A66A9AA1229EED9_METHOD_3_F24A112B56A2E4B4_1_OFFSET))(this);
	}

	::Class_2_2EAAA8212B3AB2EF_Enum_3_A982ABB36633F4BE Method_3_20A4F4259B985034()
	{
		return ((::Class_2_2EAAA8212B3AB2EF_Enum_3_A982ABB36633F4BE(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4A66A9AA1229EED9_METHOD_3_20A4F4259B985034_OFFSET))(this);
	}

	::System::Int32 Method_3_A24680A134F40BA4(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_4A66A9AA1229EED9_METHOD_3_A24680A134F40BA4_OFFSET))(this, a1);
	}

	::System::Void Method_3_B839AD5CB4E018CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4A66A9AA1229EED9_METHOD_3_B839AD5CB4E018CF_OFFSET))(this);
	}

	::System::Void Method_3_A18662FA482D7639(::UnityEngine::Events::UnityAction* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_4A66A9AA1229EED9_METHOD_3_A18662FA482D7639_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_FA07211BE90EEC5E(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_4A66A9AA1229EED9_METHOD_3_FA07211BE90EEC5E_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_37D0382D0C30A2DC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4A66A9AA1229EED9_METHOD_3_37D0382D0C30A2DC_OFFSET))(this);
	}

	::System::Boolean Method_3_D20BF56E36607D54(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_4A66A9AA1229EED9_METHOD_3_D20BF56E36607D54_OFFSET))(this, a1);
	}

	::System::Void Method_3_0B0C993B34575B04(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_4A66A9AA1229EED9_METHOD_3_0B0C993B34575B04_OFFSET))(this, a1);
	}

	::System::Void Method_3_3A28462B95074C25(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::String* a7, ::System::Boolean a8, ::System::Boolean a9, ::System::Int32 a10, ::System::Int32 a11, ::System::Collections::Generic::List_1<::MoleMole::TextureSheetLoopFrame*>* a12, ::System::Boolean a13, ::System::Single a14, ::System::Single a15, ::MoleMole::TextureSheetSkipFrameParam* a16, ::System::Int32 a17, ::Class_0_16E4307DCC419505_599* a18)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::TextureSheetLoopFrame*>*, ::System::Boolean, ::System::Single, ::System::Single, ::MoleMole::TextureSheetSkipFrameParam*, ::System::Int32, ::Class_0_16E4307DCC419505_599*))((::PBYTE)hIl2Cpp + CLASS_3_4A66A9AA1229EED9_METHOD_3_3A28462B95074C25_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
	}

	::System::Void Method_3_640514F2FC7A7607(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_4A66A9AA1229EED9_METHOD_3_640514F2FC7A7607_OFFSET))(this, a1);
	}

	::System::Void Method_3_AC3009196FFE7496_2(::UnityEngine::Events::UnityAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + CLASS_3_4A66A9AA1229EED9_METHOD_3_AC3009196FFE7496_2_OFFSET))(this, a1);
	}
};
