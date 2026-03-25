#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_PHOTOGRAPHAIMCONTAINERTARGETBASE_METHOD_2_6A1598DC3C142341_OFFSET UNITYSDK_OFFSET(0x174A8130)
#define RPG_GAMECORE_PHOTOGRAPHAIMCONTAINERTARGETBASE_METHOD_2_C08C354384B0B6BD_OFFSET UNITYSDK_OFFSET(0x174A7450)
#define RPG_GAMECORE_PHOTOGRAPHAIMCONTAINERTARGETBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x174A6170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphAimContainerTargetBase_TypeDefinitionIndex = 19804;

	class PhotoGraphAimContainerTargetBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean IsAutoIdentifyMode; // 0x10
		::System::Boolean IsTopContainer; // 0x11
		::System::Boolean ShowAimTag; // 0x12
		::System::Boolean IdentifyResult; // 0x13
		::System::Boolean UseGameObjectNode; // 0x14
		::RPG::GameCore::DynamicString* GameObjectNode; // 0x18
		::RPG::MVector3 NodeOffset; // 0x20
		::System::Single ShowTipAngle; // 0x2C
		::System::Boolean IgnoreColliderTest; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHAIMCONTAINERTARGETBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C08C354384B0B6BD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhotoGraphAimContainerTargetBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotoGraphAimContainerTargetBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHAIMCONTAINERTARGETBASE_METHOD_2_C08C354384B0B6BD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_6A1598DC3C142341(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhotoGraphAimContainerTargetBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotoGraphAimContainerTargetBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHAIMCONTAINERTARGETBASE_METHOD_2_6A1598DC3C142341_OFFSET))(a1, a2);
		}
	};
}
