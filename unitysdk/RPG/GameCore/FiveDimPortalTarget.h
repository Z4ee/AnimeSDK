#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMPORTALTARGET_METHOD_2_4B9FDFD8AA8B7216_OFFSET UNITYSDK_OFFSET(0x1BEA8790)
#define RPG_GAMECORE_FIVEDIMPORTALTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEAA590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPortalTarget_TypeDefinitionIndex = 17838;

	class FiveDimPortalTarget : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean IsExit; // 0x10
		::System::Boolean IsCrossLevel; // 0x11
		::System::UInt32 TargetEntityID; // 0x14
		::System::String* TargetLGameEntityRef; // 0x18
		::System::String* TargetLevelEntityRef; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPORTALTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_4B9FDFD8AA8B7216(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPortalTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPortalTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPORTALTARGET_METHOD_2_4B9FDFD8AA8B7216_OFFSET))(a1, a2);
		}
	};
}
