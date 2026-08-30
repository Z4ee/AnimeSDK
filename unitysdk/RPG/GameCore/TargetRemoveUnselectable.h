#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETREMOVEUNSELECTABLE_METHOD_3_37993F1E318B082C_OFFSET UNITYSDK_OFFSET(0x1D5B66A0)
#define RPG_GAMECORE_TARGETREMOVEUNSELECTABLE_METHOD_3_3F93DE41B5B6B853_OFFSET UNITYSDK_OFFSET(0x1D5B6700)
#define RPG_GAMECORE_TARGETREMOVEUNSELECTABLE_METHOD_3_9AE7877D22D31241_OFFSET UNITYSDK_OFFSET(0x1D5B6620)
#define RPG_GAMECORE_TARGETREMOVEUNSELECTABLE_METHOD_3_CA0752CA223A31A6_OFFSET UNITYSDK_OFFSET(0x1D5B6720)
#define RPG_GAMECORE_TARGETREMOVEUNSELECTABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B6690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetRemoveUnselectable_TypeDefinitionIndex = 23629;

	class TargetRemoveUnselectable : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETREMOVEUNSELECTABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9AE7877D22D31241(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetRemoveUnselectable*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetRemoveUnselectable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETREMOVEUNSELECTABLE_METHOD_3_9AE7877D22D31241_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_37993F1E318B082C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetRemoveUnselectable* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetRemoveUnselectable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETREMOVEUNSELECTABLE_METHOD_3_37993F1E318B082C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3F93DE41B5B6B853(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetRemoveUnselectable*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetRemoveUnselectable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETREMOVEUNSELECTABLE_METHOD_3_3F93DE41B5B6B853_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CA0752CA223A31A6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetRemoveUnselectable* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetRemoveUnselectable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETREMOVEUNSELECTABLE_METHOD_3_CA0752CA223A31A6_OFFSET))(a1, a2);
		}
	};
}
