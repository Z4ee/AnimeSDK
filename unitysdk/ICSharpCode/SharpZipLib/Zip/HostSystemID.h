#pragma once
#include "unitysdk/unitysdk.h"

namespace ICSharpCode::SharpZipLib::Zip
{
	inline static constexpr unsigned int HostSystemID_TypeDefinitionIndex = 6847;

	enum class HostSystemID : ::System::Int32
	{
		Msdos = 0,
		Amiga = 1,
		OpenVms = 2,
		Unix = 3,
		VMCms = 4,
		AtariST = 5,
		OS2 = 6,
		Macintosh = 7,
		ZSystem = 8,
		Cpm = 9,
		WindowsNT = 10,
		MVS = 11,
		Vse = 12,
		AcornRisc = 13,
		Vfat = 14,
		AlternateMvs = 15,
		BeOS = 16,
		Tandem = 17,
		OS400 = 18,
		OSX = 19,
		WinZipAES = 99,
	};
}
