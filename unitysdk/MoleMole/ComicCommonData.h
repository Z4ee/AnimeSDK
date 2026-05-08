#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_COMICCOMMONDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C531BE0)
#define MOLEMOLE_COMICCOMMONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C531BD0)

namespace MoleMole
{
	inline static constexpr unsigned int ComicCommonData_TypeDefinitionIndex = 30572;

	class ComicCommonData : public ::System::Object
	{
	public:
		static ::System::Single* StaticGet_targetPointProtectZoneRadius()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(ComicCommonData_TypeDefinitionIndex)->GetStaticField(0x7B20);
		}
		static ::System::Single* StaticGet_defaultImgSizeShrinkRatio()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(ComicCommonData_TypeDefinitionIndex)->GetStaticField(0x7B24);
		}
		// static const ::System::Single AUDIO_DEFAULT_DURATION_VAL; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMICCOMMONDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_COMICCOMMONDATA__CCTOR_OFFSET))();
		}
	};
}
