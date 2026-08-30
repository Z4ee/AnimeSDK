#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GraphicQuality.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
template <typename T> class Class_1_D837DED66799FBE3_DelegateParseJson_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageConfig___O_TypeDefinitionIndex = 18914;

	class StageConfig___O : public ::System::Object
	{
	public:
		static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::GraphicQuality>** StaticGet__1___FromJson()
		{
			return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::GraphicQuality>**)Il2CppClass::FromTypeDefinitionIndex(StageConfig___O_TypeDefinitionIndex)->GetStaticField(0x1FF80);
		}
		static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::System::String*>** StaticGet__0___FromJson()
		{
			return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(StageConfig___O_TypeDefinitionIndex)->GetStaticField(0x1FF88);
		}
	};
}
