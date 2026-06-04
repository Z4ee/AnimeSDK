#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CAPTURECURRENTINTERACTPROP_METHOD_3_A2066D7ABD42B48A_OFFSET UNITYSDK_OFFSET(0x195F4370)
#define RPG_GAMECORE_CAPTURECURRENTINTERACTPROP_METHOD_3_DC2E5CC692BA53D3_OFFSET UNITYSDK_OFFSET(0x195F42F0)
#define RPG_GAMECORE_CAPTURECURRENTINTERACTPROP__CTOR_OFFSET UNITYSDK_OFFSET(0x195F4340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CaptureCurrentInteractProp_TypeDefinitionIndex = 21065;

	class CaptureCurrentInteractProp : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* UniqueName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAPTURECURRENTINTERACTPROP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DC2E5CC692BA53D3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CaptureCurrentInteractProp*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CaptureCurrentInteractProp*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAPTURECURRENTINTERACTPROP_METHOD_3_DC2E5CC692BA53D3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A2066D7ABD42B48A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CaptureCurrentInteractProp* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CaptureCurrentInteractProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAPTURECURRENTINTERACTPROP_METHOD_3_A2066D7ABD42B48A_OFFSET))(a1, a2);
		}
	};
}
