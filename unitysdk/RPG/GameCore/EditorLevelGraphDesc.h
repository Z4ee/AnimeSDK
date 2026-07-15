#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_EDITORLEVELGRAPHDESC_METHOD_2_9864A34FF1AB9E1C_OFFSET UNITYSDK_OFFSET(0x1BB2FA90)
#define RPG_GAMECORE_EDITORLEVELGRAPHDESC__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB2FBC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EditorLevelGraphDesc_TypeDefinitionIndex = 16848;

	class EditorLevelGraphDesc : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Path; // 0x10
		::System::String* Comment; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EDITORLEVELGRAPHDESC__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9864A34FF1AB9E1C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EditorLevelGraphDesc*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EditorLevelGraphDesc*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EDITORLEVELGRAPHDESC_METHOD_2_9864A34FF1AB9E1C_OFFSET))(a1, a2);
		}
	};
}
