#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataAliveType.h"
#include "unitysdk/System/ValueType.h"

class Class_1_1FCBF6F207BFD09E;
namespace MoleMole { class BlendTextureSheetData; }
namespace MoleMole { class BlendTextureSheetDataItem; }
namespace MoleMole { class ScreenColorCorrectionData; }
namespace MoleMole::HollowChessboard { class SceneAnimRenderSection_Config; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_1DDEFB8581044E0A_METHOD_2_8550084FF10AA7A8_OFFSET UNITYSDK_OFFSET(0x84D5F0)
#define STRUCT_2_1DDEFB8581044E0A_METHOD_2_870AD9AF203D5C42_OFFSET UNITYSDK_OFFSET(0x84D620)
#define STRUCT_2_1DDEFB8581044E0A_METHOD_2_B74E44FF99F4E461_OFFSET UNITYSDK_OFFSET(0x84D650)
#define STRUCT_2_1DDEFB8581044E0A__CTOR_OFFSET UNITYSDK_OFFSET(0x623A10)

inline static constexpr unsigned int Struct_2_1DDEFB8581044E0A_TypeDefinitionIndex = 64568;

struct alignas(4) Struct_2_1DDEFB8581044E0A
{
	::MoleMole::HollowChessboard::RenderDataAliveType Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x14

	::System::Void _ctor(::MoleMole::HollowChessboard::RenderDataAliveType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::RenderDataAliveType))((::PBYTE)hIl2Cpp + STRUCT_2_1DDEFB8581044E0A__CTOR_OFFSET))(this, a1);
	}

	/*
	::MoleMole::HollowChessboard::RenderDataHandle Method_2_8550084FF10AA7A8(::MoleMole::ScreenColorCorrectionData* a1, ::Class_1_1FCBF6F207BFD09E* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::PVOID, ::MoleMole::ScreenColorCorrectionData*, ::Class_1_1FCBF6F207BFD09E*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_1DDEFB8581044E0A_METHOD_2_8550084FF10AA7A8_OFFSET))(this, a1, a2, a3, a4);
	}
	*/

	/*
	::System::ValueTuple_2<::MoleMole::HollowChessboard::RenderDataHandle, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::RenderDataHandle>*> Method_2_870AD9AF203D5C42(::MoleMole::BlendTextureSheetData* a1, ::Class_1_1FCBF6F207BFD09E* a2, ::MoleMole::HollowChessboard::SceneAnimRenderSection_Config* a3)
	{
		return ((::System::ValueTuple_2<::MoleMole::HollowChessboard::RenderDataHandle, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::RenderDataHandle>*>(*)(::PVOID, ::MoleMole::BlendTextureSheetData*, ::Class_1_1FCBF6F207BFD09E*, ::MoleMole::HollowChessboard::SceneAnimRenderSection_Config*))((::PBYTE)hIl2Cpp + STRUCT_2_1DDEFB8581044E0A_METHOD_2_870AD9AF203D5C42_OFFSET))(this, a1, a2, a3);
	}
	*/

	/*
	::MoleMole::HollowChessboard::RenderDataHandle Method_2_B74E44FF99F4E461(::MoleMole::BlendTextureSheetDataItem* a1, ::Class_1_1FCBF6F207BFD09E* a2, ::System::Int32 a3, ::MoleMole::HollowChessboard::SceneAnimRenderSection_Config* a4)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::PVOID, ::MoleMole::BlendTextureSheetDataItem*, ::Class_1_1FCBF6F207BFD09E*, ::System::Int32, ::MoleMole::HollowChessboard::SceneAnimRenderSection_Config*))((::PBYTE)hIl2Cpp + STRUCT_2_1DDEFB8581044E0A_METHOD_2_B74E44FF99F4E461_OFFSET))(this, a1, a2, a3, a4);
	}
	*/
};
