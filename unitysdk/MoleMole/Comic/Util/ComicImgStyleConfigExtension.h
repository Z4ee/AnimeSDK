#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ComicImgPart.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_COMIC_UTIL_COMICIMGSTYLECONFIGEXTENSION_MATCHCOMICIMGPARTTYPE_OFFSET UNITYSDK_OFFSET(0x1F39FC20)
#define MOLEMOLE_COMIC_UTIL_COMICIMGSTYLECONFIGEXTENSION_TONAME_OFFSET UNITYSDK_OFFSET(0x1F39FBD0)

namespace MoleMole::Comic::Util
{
	inline static constexpr unsigned int ComicImgStyleConfigExtension_TypeDefinitionIndex = 32783;

	class ComicImgStyleConfigExtension : public ::System::Object
	{
	public:
		static ::System::String* ToName(::MoleMole::ComicImgPart type)
		{
			return ((::System::String*(*)(::MoleMole::ComicImgPart))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_UTIL_COMICIMGSTYLECONFIGEXTENSION_TONAME_OFFSET))(type);
		}

		static ::MoleMole::ComicImgPart MatchComicImgPartType(::System::String* str)
		{
			return ((::MoleMole::ComicImgPart(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_UTIL_COMICIMGSTYLECONFIGEXTENSION_MATCHCOMICIMGPARTTYPE_OFFSET))(str);
		}
	};
}
