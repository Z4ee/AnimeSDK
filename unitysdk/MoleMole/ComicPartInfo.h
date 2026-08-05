#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ComicImgPart.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ComicImgUITransformData; }

#define MOLEMOLE_COMICPARTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB1EE50)

namespace MoleMole
{
	inline static constexpr unsigned int ComicPartInfo_TypeDefinitionIndex = 32766;

	class ComicPartInfo : public ::System::Object
	{
	public:
		::MoleMole::ComicImgUITransformData* transformData; // 0x10
		::MoleMole::ComicImgPart partType; // 0x18
		::System::Boolean isShow; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMICPARTINFO__CTOR_OFFSET))(this);
		}
	};
}
