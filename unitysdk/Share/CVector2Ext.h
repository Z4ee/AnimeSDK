#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Share { class CVector2; }
namespace System { class String; }

#define SHARE_CVECTOR2EXT_FROMSTRING_OFFSET UNITYSDK_OFFSET(0x1B11F890)
#define SHARE_CVECTOR2EXT_ISGREATERZERO_OFFSET UNITYSDK_OFFSET(0x1B11F940)

namespace Share
{
	inline static constexpr unsigned int CVector2Ext_TypeDefinitionIndex = 14435;

	class CVector2Ext : public ::System::Object
	{
	public:
		static ::Share::CVector2* FromString(::System::String* stringX, ::System::String* stringY)
		{
			return ((::Share::CVector2*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SHARE_CVECTOR2EXT_FROMSTRING_OFFSET))(stringX, stringY);
		}

		static ::System::Boolean IsGreaterZero(::Share::CVector2* left)
		{
			return ((::System::Boolean(*)(::Share::CVector2*))((::PBYTE)hIl2Cpp + SHARE_CVECTOR2EXT_ISGREATERZERO_OFFSET))(left);
		}
	};
}
