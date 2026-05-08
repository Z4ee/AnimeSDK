#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"

class Class_1_13AC300048CDEA17;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CHESSSTATEMACHINE_CHESSSMPATHMAP__CTOR_OFFSET UNITYSDK_OFFSET(0xFE99970)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int ChessSMPathMap_TypeDefinitionIndex = 42658;

	class ChessSMPathMap : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_13AC300048CDEA17*>* smPaths; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_CHESSSMPATHMAP__CTOR_OFFSET))(this);
		}
	};
}
