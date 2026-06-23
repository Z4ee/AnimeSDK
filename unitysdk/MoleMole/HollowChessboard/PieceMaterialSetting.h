#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"

namespace MoleMole::HollowChessboard { class MatPropertyData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_HOLLOWCHESSBOARD_PIECEMATERIALSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x10D4EEF0)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int PieceMaterialSetting_TypeDefinitionIndex = 81590;

	class PieceMaterialSetting : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		::UnityEngine::Material* LoadedMaterial; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::HollowChessboard::MatPropertyData*>* SavedProperty; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_PIECEMATERIALSETTING__CTOR_OFFSET))(this);
		}
	};
}
