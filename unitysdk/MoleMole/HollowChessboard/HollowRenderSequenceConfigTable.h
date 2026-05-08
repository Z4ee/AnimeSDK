#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"

namespace MoleMole::HollowChessboard { class HollowEntityRenderSequence; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWRENDERSEQUENCECONFIGTABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x15428B10)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int HollowRenderSequenceConfigTable_TypeDefinitionIndex = 47691;

	class HollowRenderSequenceConfigTable : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::HollowChessboard::HollowEntityRenderSequence*>* configTable; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWRENDERSEQUENCECONFIGTABLE__CTOR_OFFSET))(this);
		}
	};
}
