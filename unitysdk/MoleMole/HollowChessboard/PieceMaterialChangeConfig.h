#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"

namespace MoleMole::HollowChessboard { class PieceMaterialChangeEntry; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_HOLLOWCHESSBOARD_PIECEMATERIALCHANGECONFIG_GETCHANGEENTRY_OFFSET UNITYSDK_OFFSET(0x1737D710)
#define MOLEMOLE_HOLLOWCHESSBOARD_PIECEMATERIALCHANGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1737D860)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int PieceMaterialChangeConfig_TypeDefinitionIndex = 84113;

	class PieceMaterialChangeConfig : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::HollowChessboard::PieceMaterialChangeEntry*>* PieceMaterialChangeEntry; // 0x58
		::System::String* DefaultKey; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_PIECEMATERIALCHANGECONFIG__CTOR_OFFSET))(this);
		}

		::MoleMole::HollowChessboard::PieceMaterialChangeEntry* GetChangeEntry(::System::String* key)
		{
			return ((::MoleMole::HollowChessboard::PieceMaterialChangeEntry*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_PIECEMATERIALCHANGECONFIG_GETCHANGEENTRY_OFFSET))(this, key);
		}
	};
}
