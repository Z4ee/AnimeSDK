#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/TextureSheetVEBase.h"

class Class_1_43BD383C98B4C0C5_24;
namespace System { class String; }

#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETVE_FORCESTOP_OFFSET UNITYSDK_OFFSET(0x1A054390)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETVE_RUN_OFFSET UNITYSDK_OFFSET(0x1A053D00)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETVE_TEXTURECALLBACK_OFFSET UNITYSDK_OFFSET(0x1A054340)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A054540)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETVE___BASE_FORCESTOP_OFFSET UNITYSDK_OFFSET(0x1A054560)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETVE___BASE_RUN_OFFSET UNITYSDK_OFFSET(0x1A0545A0)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int TextureSheetVE_TypeDefinitionIndex = 57499;

	class TextureSheetVE : public ::MoleMole::ChessStateMachine::TextureSheetVEBase
	{
	public:
		::System::String* blendTextureKey; // 0x28
		::System::Boolean SkipWait; // 0x30
		::System::Boolean DisableSync; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETVE__CTOR_OFFSET))(this);
		}

		::System::Void Run(::Class_1_43BD383C98B4C0C5_24* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_24*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETVE_RUN_OFFSET))(this, context);
		}

		::System::Void TextureCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETVE_TEXTURECALLBACK_OFFSET))(this);
		}

		::System::Void ForceStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETVE_FORCESTOP_OFFSET))(this);
		}

		::System::Void __base_ForceStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETVE___BASE_FORCESTOP_OFFSET))(this);
		}

		::System::Void __base_Run(::Class_1_43BD383C98B4C0C5_24* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_24*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETVE___BASE_RUN_OFFSET))(this, P0);
		}
	};
}
