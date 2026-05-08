#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_97930A1AD5393EA2.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_QUITPERSONALLINEPOPSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1703C200)
#define MOLEMOLE_QUITPERSONALLINEPOPSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x1703C260)
#define MOLEMOLE_QUITPERSONALLINEPOPSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1703C210)

namespace MoleMole
{
	inline static constexpr unsigned int QuitPersonalLinePopShow_TypeDefinitionIndex = 82063;

	class QuitPersonalLinePopShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Boolean _isAfk; // 0x28
		::Enum_3_97930A1AD5393EA2 jumpSrc; // 0x2C
		::System::Int32 _ovaContextID; // 0x30

		::System::Void _ctor(::System::Boolean isAfk, ::System::Int32 ovaContextID, ::Enum_3_97930A1AD5393EA2 jumpSrc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::Enum_3_97930A1AD5393EA2))((::PBYTE)hIl2Cpp + MOLEMOLE_QUITPERSONALLINEPOPSHOW__CTOR_OFFSET))(this, isAfk, ovaContextID, jumpSrc);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QUITPERSONALLINEPOPSHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QUITPERSONALLINEPOPSHOW_ONPROCESS_OFFSET))(this);
		}
	};
}
