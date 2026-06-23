#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/TextureSheetConfigActionNew_RuntimeData.h"
#include "unitysdk/MoleMole/ChessStateMachine/TextureSheetConfigActionNew___c__DisplayClass13_0.h"
#include "unitysdk/MoleMole/ChessStateMachine/TextureSheetVEBaseNew_1.h"
#include "unitysdk/MoleMole/HollowPieceBlendMode.h"

class Class_2_5DF25B7A40A1031E;
namespace System { class String; }

#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTIONNEW_PLAYANIM_OFFSET UNITYSDK_OFFSET(0x11084180)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTIONNEW_RESETACTIONCACHE_OFFSET UNITYSDK_OFFSET(0x110855D0)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTIONNEW_RUN_OFFSET UNITYSDK_OFFSET(0x11084060)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTIONNEW_UPDATE_OFFSET UNITYSDK_OFFSET(0x110851A0)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTIONNEW__CTOR_OFFSET UNITYSDK_OFFSET(0x11085680)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTIONNEW__UPDATE_G__CHECKANIMEND_13_1_OFFSET UNITYSDK_OFFSET(0x11085540)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTIONNEW__UPDATE_G__CHECKINDEXCHANGED_13_0_OFFSET UNITYSDK_OFFSET(0x110852F0)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTIONNEW___BASE_RESETACTIONCACHE_OFFSET UNITYSDK_OFFSET(0x11085690)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTIONNEW___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x110856A0)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int TextureSheetConfigActionNew_TypeDefinitionIndex = 80757;

	class TextureSheetConfigActionNew : public ::MoleMole::ChessStateMachine::TextureSheetVEBaseNew_1<::MoleMole::ChessStateMachine::TextureSheetConfigActionNew_RuntimeData>
	{
	public:
		::System::String* UVkey; // 0x48
		::System::String* TextureKey; // 0x50
		::System::Int32 SpecialScreenLayerTransparent; // 0x58
		::System::Int32 SpecialScreenLayerIndex; // 0x5C
		::System::Int32 ConfigID; // 0x60
		::System::Int32 BaseScreenIndex; // 0x64
		::MoleMole::HollowPieceBlendMode BlendMode; // 0x68
		::System::Boolean RandomPlay; // 0x6C
		::System::Boolean forbidEffect; // 0x6D
		::System::Boolean SpecialScreenBaseIndex; // 0x6E
		::System::Boolean DisableSync; // 0x6F

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTIONNEW__CTOR_OFFSET))(this);
		}

		::System::Void Run(::Class_2_5DF25B7A40A1031E* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_5DF25B7A40A1031E*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTIONNEW_RUN_OFFSET))(this, context);
		}

		::System::Boolean Update()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTIONNEW_UPDATE_OFFSET))(this);
		}

		::System::Void PlayAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTIONNEW_PLAYANIM_OFFSET))(this);
		}

		::System::Void ResetActionCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTIONNEW_RESETACTIONCACHE_OFFSET))(this);
		}

		::System::Boolean _Update_g__CheckIndexChanged_13_0(::MoleMole::ChessStateMachine::TextureSheetConfigActionNew___c__DisplayClass13_0& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ChessStateMachine::TextureSheetConfigActionNew___c__DisplayClass13_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTIONNEW__UPDATE_G__CHECKINDEXCHANGED_13_0_OFFSET))(this, a1);
		}

		::System::Void _Update_g__CheckAnimEnd_13_1(::MoleMole::ChessStateMachine::TextureSheetConfigActionNew___c__DisplayClass13_0& a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ChessStateMachine::TextureSheetConfigActionNew___c__DisplayClass13_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTIONNEW__UPDATE_G__CHECKANIMEND_13_1_OFFSET))(this, a1);
		}

		::System::Void __base_ResetActionCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTIONNEW___BASE_RESETACTIONCACHE_OFFSET))(this);
		}

		::System::Boolean __base_Update()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTIONNEW___BASE_UPDATE_OFFSET))(this);
		}
	};
}
