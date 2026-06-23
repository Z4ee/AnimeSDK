#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_97930A1AD5393EA2.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_QUITOVAPOPSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x11650A30)
#define MOLEMOLE_QUITOVAPOPSHOW_GET_PROCESSED_OFFSET UNITYSDK_OFFSET(0x11650A20)
#define MOLEMOLE_QUITOVAPOPSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x11650A90)
#define MOLEMOLE_QUITOVAPOPSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x11650A40)

namespace MoleMole
{
	inline static constexpr unsigned int QuitOVAPopShow_TypeDefinitionIndex = 54659;

	class QuitOVAPopShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Int32 _ovaContextID; // 0x28
		::System::Boolean _processed; // 0x2C
		::Enum_3_97930A1AD5393EA2 jumpSrc; // 0x30

		::System::Void _ctor(::System::Int32 ovaContextID, ::Enum_3_97930A1AD5393EA2 jumpSrc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_97930A1AD5393EA2))((::PBYTE)hIl2Cpp + MOLEMOLE_QUITOVAPOPSHOW__CTOR_OFFSET))(this, ovaContextID, jumpSrc);
		}

		::System::Boolean get_Processed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QUITOVAPOPSHOW_GET_PROCESSED_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QUITOVAPOPSHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QUITOVAPOPSHOW_ONPROCESS_OFFSET))(this);
		}
	};
}
