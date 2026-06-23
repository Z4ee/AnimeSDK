#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_COMICCOMMONDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E866350)
#define MOLEMOLE_COMICCOMMONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1E866340)

namespace MoleMole
{
	inline static constexpr unsigned int ComicCommonData_TypeDefinitionIndex = 32118;

	class ComicCommonData : public ::System::Object
	{
	public:
		static ::System::Single* StaticGet_targetPointProtectZoneRadius()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(ComicCommonData_TypeDefinitionIndex)->GetStaticField(0x7FD0);
		}
		static ::System::Single* StaticGet_defaultImgSizeShrinkRatio()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(ComicCommonData_TypeDefinitionIndex)->GetStaticField(0x7FD4);
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
