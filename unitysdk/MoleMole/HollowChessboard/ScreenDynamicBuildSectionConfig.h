#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderSequenceSectionType.h"
#include "unitysdk/MoleMole/HollowChessboard/ScreenDynamicBuildSection.h"
#include "unitysdk/MoleMole/HollowChessboard/ScreenDynamicBuildSectionHelperType.h"

#define MOLEMOLE_HOLLOWCHESSBOARD_SCREENDYNAMICBUILDSECTIONCONFIG_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x19257BD0)
#define MOLEMOLE_HOLLOWCHESSBOARD_SCREENDYNAMICBUILDSECTIONCONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x19257C20)
#define MOLEMOLE_HOLLOWCHESSBOARD_SCREENDYNAMICBUILDSECTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19257C10)
#define MOLEMOLE_HOLLOWCHESSBOARD_SCREENDYNAMICBUILDSECTIONCONFIG___BASE_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x19257C30)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int ScreenDynamicBuildSectionConfig_TypeDefinitionIndex = 67936;

	class ScreenDynamicBuildSectionConfig : public ::MoleMole::HollowChessboard::ScreenDynamicBuildSection
	{
	public:
		static ::MoleMole::HollowChessboard::RenderSequenceSectionType* StaticGet_SectionType()
		{
			return (::MoleMole::HollowChessboard::RenderSequenceSectionType*)Il2CppClass::FromTypeDefinitionIndex(ScreenDynamicBuildSectionConfig_TypeDefinitionIndex)->GetStaticField(0x125E0);
		}
		::MoleMole::HollowChessboard::ScreenDynamicBuildSectionHelperType ScreenDynamicBuildSectionHelperType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_SCREENDYNAMICBUILDSECTIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_SCREENDYNAMICBUILDSECTIONCONFIG__CCTOR_OFFSET))();
		}

		::System::UInt32 GetDynamicKey()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_SCREENDYNAMICBUILDSECTIONCONFIG_GETDYNAMICKEY_OFFSET))(this);
		}

		::System::UInt32 __base_GetDynamicKey()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_SCREENDYNAMICBUILDSECTIONCONFIG___BASE_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
