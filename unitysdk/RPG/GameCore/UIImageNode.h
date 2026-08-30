#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_UIIMAGENODE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D61B1D0)
#define RPG_GAMECORE_UIIMAGENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D61B300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UIImageNode_TypeDefinitionIndex = 23563;

	class UIImageNode : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Path; // 0x10
		::System::String* AssetPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIIMAGENODE__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UIImageNode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UIImageNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIIMAGENODE_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
