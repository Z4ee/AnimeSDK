#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriMonoBehaviour.h"

namespace CriWare::CriMana { class Player; }

#define CRIWARE_CRIMANAMOVIEPLAYERHOLDER_AWAKE_OFFSET UNITYSDK_OFFSET(0x11A507F0)
#define CRIWARE_CRIMANAMOVIEPLAYERHOLDER_CRIINTERNALLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x11A50810)
#define CRIWARE_CRIMANAMOVIEPLAYERHOLDER_CRIINTERNALUPDATE_OFFSET UNITYSDK_OFFSET(0x11A50800)
#define CRIWARE_CRIMANAMOVIEPLAYERHOLDER_SET_PLAYER_OFFSET UNITYSDK_OFFSET(0x11A507E0)
#define CRIWARE_CRIMANAMOVIEPLAYERHOLDER_START_OFFSET UNITYSDK_OFFSET(0x11A50820)
#define CRIWARE_CRIMANAMOVIEPLAYERHOLDER__CTOR_OFFSET UNITYSDK_OFFSET(0x11A50830)

namespace CriWare
{
	inline static constexpr unsigned int CriManaMoviePlayerHolder_TypeDefinitionIndex = 31157;

	class CriManaMoviePlayerHolder : public ::CriWare::CriMonoBehaviour
	{
	public:
		::CriWare::CriMana::Player* _player; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEPLAYERHOLDER__CTOR_OFFSET))(this);
		}

		::System::Void set_player(::CriWare::CriMana::Player* value)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::Player*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEPLAYERHOLDER_SET_PLAYER_OFFSET))(this, value);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEPLAYERHOLDER_AWAKE_OFFSET))(this);
		}

		::System::Void CriInternalUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEPLAYERHOLDER_CRIINTERNALUPDATE_OFFSET))(this);
		}

		::System::Void CriInternalLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEPLAYERHOLDER_CRIINTERNALLATEUPDATE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEPLAYERHOLDER_START_OFFSET))(this);
		}
	};
}
