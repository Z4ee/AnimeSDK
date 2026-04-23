#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CAPTURELOCALPLAYER_METHOD_3_34D77234FD3C801B_OFFSET UNITYSDK_OFFSET(0x187B7BE0)
#define RPG_GAMECORE_CAPTURELOCALPLAYER_METHOD_3_C52474EB95839A72_OFFSET UNITYSDK_OFFSET(0x187B7C60)
#define RPG_GAMECORE_CAPTURELOCALPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x187B7C30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CaptureLocalPlayer_TypeDefinitionIndex = 19233;

	class CaptureLocalPlayer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* CharacterUniqueName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAPTURELOCALPLAYER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_34D77234FD3C801B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CaptureLocalPlayer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CaptureLocalPlayer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAPTURELOCALPLAYER_METHOD_3_34D77234FD3C801B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C52474EB95839A72(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CaptureLocalPlayer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CaptureLocalPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAPTURELOCALPLAYER_METHOD_3_C52474EB95839A72_OFFSET))(a1, a2);
		}
	};
}
