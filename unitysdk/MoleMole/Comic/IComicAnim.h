#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_COMIC_ICOMICANIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3DED40)

namespace MoleMole::Comic
{
	inline static constexpr unsigned int IComicAnim_TypeDefinitionIndex = 30597;

	class IComicAnim : public ::System::Object
	{
	public:
		::System::Single _previewProgress; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_ICOMICANIM__CTOR_OFFSET))(this);
		}
	};
}
