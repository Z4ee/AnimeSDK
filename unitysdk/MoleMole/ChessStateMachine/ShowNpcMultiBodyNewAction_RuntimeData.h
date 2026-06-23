#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"
#include "unitysdk/System/ValueType.h"

class Class_1_DFC0757162C8CE99;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION_RUNTIMEDATA_GET_CACHEINFO_OFFSET UNITYSDK_OFFSET(0x3E3F20)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION_RUNTIMEDATA_RESET_OFFSET UNITYSDK_OFFSET(0x7C9040)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION_RUNTIMEDATA_SET_CACHEINFO_OFFSET UNITYSDK_OFFSET(0x446DB0)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int ShowNpcMultiBodyNewAction_RuntimeData_TypeDefinitionIndex = 39626;

	struct alignas(8) ShowNpcMultiBodyNewAction_RuntimeData
	{
		::System::Int32 npcid; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::RenderDataHandle>* animHandle; // 0x18
		::Class_1_DFC0757162C8CE99* _Cacheinfo_k__BackingField; // 0x20

		::Class_1_DFC0757162C8CE99* get_Cacheinfo()
		{
			return ((::Class_1_DFC0757162C8CE99*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION_RUNTIMEDATA_GET_CACHEINFO_OFFSET))(this);
		}

		::System::Void set_Cacheinfo(::Class_1_DFC0757162C8CE99* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DFC0757162C8CE99*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION_RUNTIMEDATA_SET_CACHEINFO_OFFSET))(this, value);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION_RUNTIMEDATA_RESET_OFFSET))(this);
		}
	};
}
