#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CAPTURELOCALPLAYER_METHOD_3_58414FBA3B7A8AE9_OFFSET UNITYSDK_OFFSET(0x1B70A880)
#define RPG_GAMECORE_CAPTURELOCALPLAYER_METHOD_3_C52474EB95839A72_OFFSET UNITYSDK_OFFSET(0x1B70A8C0)
#define RPG_GAMECORE_CAPTURELOCALPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B70A8B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CaptureLocalPlayer_TypeDefinitionIndex = 19510;

	class CaptureLocalPlayer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* CharacterUniqueName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAPTURELOCALPLAYER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_58414FBA3B7A8AE9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CaptureLocalPlayer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CaptureLocalPlayer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAPTURELOCALPLAYER_METHOD_3_58414FBA3B7A8AE9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C52474EB95839A72(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CaptureLocalPlayer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CaptureLocalPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAPTURELOCALPLAYER_METHOD_3_C52474EB95839A72_OFFSET))(a1, a2);
		}
	};
}
