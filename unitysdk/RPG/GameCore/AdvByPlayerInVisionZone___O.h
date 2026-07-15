#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/VisionZoneTag.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_D837DED66799FBE3_DelegateParseJson_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByPlayerInVisionZone___O_TypeDefinitionIndex = 19244;

	class AdvByPlayerInVisionZone___O : public ::System::Object
	{
	public:
		static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::VisionZoneTag>** StaticGet__0___FromJson()
		{
			return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::VisionZoneTag>**)Il2CppClass::FromTypeDefinitionIndex(AdvByPlayerInVisionZone___O_TypeDefinitionIndex)->GetStaticField(0x1C2B0);
		}
	};
}
