#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_UIIMAGENODE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x190DE980)
#define RPG_GAMECORE_UIIMAGENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x190DEA90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UIImageNode_TypeDefinitionIndex = 22831;

	class UIImageNode : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Path; // 0x10
		::System::String* AssetPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIIMAGENODE__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::UIImageNode*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UIImageNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIIMAGENODE_FROMBINARY_OFFSET))(array, val);
		}
	};
}
