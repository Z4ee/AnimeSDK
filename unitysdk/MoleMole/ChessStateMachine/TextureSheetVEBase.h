#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/StateMachineAction.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_43BD383C98B4C0C5_31;
namespace MoleMole { class BlendTextureSheetData; }
namespace MoleMole { class TextureSheetData; }
namespace System { class String; }

#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETVEBASE_FINDBLENDTEXTURESHEETDATA_OFFSET UNITYSDK_OFFSET(0x177C1330)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETVEBASE_FINDTEXTURESHEETDATABYKEY_OFFSET UNITYSDK_OFFSET(0x177C13C0)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETVEBASE_FORCESTOP_OFFSET UNITYSDK_OFFSET(0x177C15F0)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETVEBASE_GET_ISINSTANT_OFFSET UNITYSDK_OFFSET(0x177C1770)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETVEBASE_RANDOMTEXTURESHEETKEY_OFFSET UNITYSDK_OFFSET(0x177C1290)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETVEBASE_RUN_OFFSET UNITYSDK_OFFSET(0x177C16E0)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETVEBASE_STOP_OFFSET UNITYSDK_OFFSET(0x177C1730)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETVEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x177C1640)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int TextureSheetVEBase_TypeDefinitionIndex = 82743;

	class TextureSheetVEBase : public ::MoleMole::ChessStateMachine::StateMachineAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETVEBASE__CTOR_OFFSET))(this);
		}

		::System::Void Run(::Class_1_43BD383C98B4C0C5_31* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_31*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETVEBASE_RUN_OFFSET))(this, context);
		}

		::System::Void ForceStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETVEBASE_FORCESTOP_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETVEBASE_STOP_OFFSET))(this);
		}

		::MoleMole::TextureSheetData* FindTextureSheetDataByKey(::System::String* key, ::System::Boolean enableLog)
		{
			return ((::MoleMole::TextureSheetData*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETVEBASE_FINDTEXTURESHEETDATABYKEY_OFFSET))(this, key, enableLog);
		}

		::System::ValueTuple_2<::System::Boolean, ::System::String*> RandomTextureSheetKey(::System::String* configKey)
		{
			return ((::System::ValueTuple_2<::System::Boolean, ::System::String*>(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETVEBASE_RANDOMTEXTURESHEETKEY_OFFSET))(this, configKey);
		}

		::MoleMole::BlendTextureSheetData* FindBlendTextureSheetData(::System::String* key)
		{
			return ((::MoleMole::BlendTextureSheetData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETVEBASE_FINDBLENDTEXTURESHEETDATA_OFFSET))(this, key);
		}

		::System::Boolean get_isInstant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETVEBASE_GET_ISINSTANT_OFFSET))(this);
		}
	};
}
