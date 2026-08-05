#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_512;
class Class_1_5A6771CD0CA2718D;

#define MOLEMOLE_SCREENCOLORCORRECTIONDATA_CREATEPLAYER_OFFSET UNITYSDK_OFFSET(0x136ECB80)
#define MOLEMOLE_SCREENCOLORCORRECTIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x136ECBD0)

namespace MoleMole
{
	inline static constexpr unsigned int ScreenColorCorrectionData_TypeDefinitionIndex = 64981;

	class ScreenColorCorrectionData : public ::System::Object
	{
	public:
		::System::Single ContrastMidPoint; // 0x10
		::System::Single Hue; // 0x14
		::System::Single Saturation; // 0x18
		::System::Single Value; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENCOLORCORRECTIONDATA__CTOR_OFFSET))(this);
		}

		::Class_1_5A6771CD0CA2718D* CreatePlayer(::Class_0_16E4307DCC419505_512* textureSheetImpl)
		{
			return ((::Class_1_5A6771CD0CA2718D*(*)(::PVOID, ::Class_0_16E4307DCC419505_512*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENCOLORCORRECTIONDATA_CREATEPLAYER_OFFSET))(this, textureSheetImpl);
		}
	};
}
