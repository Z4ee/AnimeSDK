#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define RPG_GAMECORE_SETLAYERWEIGHT_METHOD_3_20C0D395DE9B131B_OFFSET UNITYSDK_OFFSET(0x176D2C00)
#define RPG_GAMECORE_SETLAYERWEIGHT_METHOD_3_CD6BF8F0F380EC33_OFFSET UNITYSDK_OFFSET(0x176D2D20)
#define RPG_GAMECORE_SETLAYERWEIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0x176D2CA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetLayerWeight_TypeDefinitionIndex = 21308;

	class SetLayerWeight : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* LayerName; // 0x18
		::RPG::GameCore::DynamicFloat* Weight; // 0x20
		::RPG::GameCore::DynamicFloat* Duration; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLAYERWEIGHT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_20C0D395DE9B131B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetLayerWeight*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetLayerWeight*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLAYERWEIGHT_METHOD_3_20C0D395DE9B131B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CD6BF8F0F380EC33(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetLayerWeight* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetLayerWeight*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLAYERWEIGHT_METHOD_3_CD6BF8F0F380EC33_OFFSET))(a1, a2);
		}
	};
}
