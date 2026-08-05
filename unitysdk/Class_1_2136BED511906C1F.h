#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"
#include "unitysdk/MoleMole/HollowChessboard/ChessboardView/LineInfo.h"
#include "unitysdk/MoleMole/HollowChessboard/ChessboardView/LineInfo_LineType.h"
#include "unitysdk/Struct_2_90CF7B92576C9A88.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_5711CB95EE68214E;
class Class_1_6360C4960CAEFC9B;
class Class_5_DCFF91E03A93C03C;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define CLASS_1_2136BED511906C1F_METHOD_1_020E9287B4BCC852_OFFSET UNITYSDK_OFFSET(0x16475690)
#define CLASS_1_2136BED511906C1F_METHOD_1_0837F63E762C5448_OFFSET UNITYSDK_OFFSET(0x16474FC0)
#define CLASS_1_2136BED511906C1F_METHOD_1_4982E67EAD90F790_OFFSET UNITYSDK_OFFSET(0x164749D0)
#define CLASS_1_2136BED511906C1F_METHOD_1_54DADD0A0126F107_OFFSET UNITYSDK_OFFSET(0x16474DD0)
#define CLASS_1_2136BED511906C1F_METHOD_1_609C48A994D1F25E_OFFSET UNITYSDK_OFFSET(0x16474910)
#define CLASS_1_2136BED511906C1F_METHOD_1_660474B0F8C5FECE_OFFSET UNITYSDK_OFFSET(0x16474720)
#define CLASS_1_2136BED511906C1F_METHOD_1_7B4EBB4195A11E27_OFFSET UNITYSDK_OFFSET(0x164754D0)
#define CLASS_1_2136BED511906C1F_METHOD_1_B39C84498C282F8D_OFFSET UNITYSDK_OFFSET(0x164758A0)
#define CLASS_1_2136BED511906C1F_METHOD_1_D6D94AF7589CE04E_OFFSET UNITYSDK_OFFSET(0x16474C10)
#define CLASS_1_2136BED511906C1F_METHOD_1_FFD6398AEEE4AE4B_OFFSET UNITYSDK_OFFSET(0x16475240)
#define CLASS_1_2136BED511906C1F__CCTOR_OFFSET UNITYSDK_OFFSET(0x164746E0)
#define CLASS_1_2136BED511906C1F__CTOR_OFFSET UNITYSDK_OFFSET(0x164745E0)

inline static constexpr unsigned int Class_1_2136BED511906C1F_TypeDefinitionIndex = 77416;

class Class_1_2136BED511906C1F : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2136BED511906C1F_TypeDefinitionIndex)->GetStaticField(0xC3D0);
	}
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::ChessboardView::LineInfo_LineType, ::System::String*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::ChessboardView::LineInfo, ::Class_1_6360C4960CAEFC9B*>* Field_1_1; // 0x18
	::UnityEngine::MaterialPropertyBlock* Field_1_4; // 0x20
	::System::Func_2<::MoleMole::HollowChessboard::ChessboardView::LineInfo, ::Foundation::Unreal::FTransform3D>* Field_1_7; // 0x28
	::Class_5_DCFF91E03A93C03C* Field_1_6; // 0x30
	::UnityEngine::Vector3 Field_1_5; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2136BED511906C1F__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2136BED511906C1F__CCTOR_OFFSET))();
	}

	::System::Void Method_1_660474B0F8C5FECE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2136BED511906C1F_METHOD_1_660474B0F8C5FECE_OFFSET))(this);
	}

	::System::Void Method_1_609C48A994D1F25E(::Class_1_6360C4960CAEFC9B* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6360C4960CAEFC9B*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2136BED511906C1F_METHOD_1_609C48A994D1F25E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4982E67EAD90F790(::Class_1_5711CB95EE68214E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5711CB95EE68214E*))((::PBYTE)hIl2Cpp + CLASS_1_2136BED511906C1F_METHOD_1_4982E67EAD90F790_OFFSET))(this, a1);
	}

	::System::Void Method_1_D6D94AF7589CE04E(::MoleMole::HollowChessboard::ChessboardView::LineInfo a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::ChessboardView::LineInfo, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2136BED511906C1F_METHOD_1_D6D94AF7589CE04E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_54DADD0A0126F107(::Class_5_DCFF91E03A93C03C* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_DCFF91E03A93C03C*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_2136BED511906C1F_METHOD_1_54DADD0A0126F107_OFFSET))(this, a1, a2);
	}

	::Class_1_6360C4960CAEFC9B* Method_1_0837F63E762C5448(::MoleMole::HollowChessboard::ChessboardView::LineInfo a1, ::System::Boolean a2)
	{
		return ((::Class_1_6360C4960CAEFC9B*(*)(::PVOID, ::MoleMole::HollowChessboard::ChessboardView::LineInfo, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2136BED511906C1F_METHOD_1_0837F63E762C5448_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7B4EBB4195A11E27(::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::ChessboardView::LineInfo_LineType, ::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::ChessboardView::LineInfo_LineType, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_2136BED511906C1F_METHOD_1_7B4EBB4195A11E27_OFFSET))(this, a1);
	}

	::System::Void Method_1_020E9287B4BCC852(::MoleMole::HollowChessboard::ChessboardView::LineInfo a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::ChessboardView::LineInfo, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2136BED511906C1F_METHOD_1_020E9287B4BCC852_OFFSET))(this, a1, a2);
	}

	::Struct_2_90CF7B92576C9A88 Method_1_FFD6398AEEE4AE4B(::MoleMole::HollowChessboard::ChessboardView::LineInfo a1, ::Foundation::Unreal::FTransform3D a2, ::System::Boolean a3)
	{
		return ((::Struct_2_90CF7B92576C9A88(*)(::PVOID, ::MoleMole::HollowChessboard::ChessboardView::LineInfo, ::Foundation::Unreal::FTransform3D, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2136BED511906C1F_METHOD_1_FFD6398AEEE4AE4B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B39C84498C282F8D(::System::Func_2<::MoleMole::HollowChessboard::ChessboardView::LineInfo, ::Foundation::Unreal::FTransform3D>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::MoleMole::HollowChessboard::ChessboardView::LineInfo, ::Foundation::Unreal::FTransform3D>*))((::PBYTE)hIl2Cpp + CLASS_1_2136BED511906C1F_METHOD_1_B39C84498C282F8D_OFFSET))(this, a1);
	}
};
