#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightPreset.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPositionTagControl___O_TypeDefinitionIndex = 60239;

	class GridFightPositionTagControl___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Nullable_1<::RPG::GameCore::GridFightPreset>, ::RPG::Client::TextID>** StaticGet__0____GetTextID()
		{
			return (::System::Func_2<::System::Nullable_1<::RPG::GameCore::GridFightPreset>, ::RPG::Client::TextID>**)Il2CppClass::FromTypeDefinitionIndex(GridFightPositionTagControl___O_TypeDefinitionIndex)->GetStaticField(0x43180);
		}
	};
}
