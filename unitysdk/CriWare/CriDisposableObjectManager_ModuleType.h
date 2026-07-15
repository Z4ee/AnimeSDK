#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	inline static constexpr unsigned int CriDisposableObjectManager_ModuleType_TypeDefinitionIndex = 38041;

	enum class CriDisposableObjectManager_ModuleType : ::System::Int32
	{
		Atom = 0,
		AtomMic = 1,
		Fs = 2,
		FsWeb = 3,
		Mana = 4,
		Lips = 5,
		Vip = 6,
		Rtc = 7,
	};
}
