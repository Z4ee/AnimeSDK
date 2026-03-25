#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define RPG_GAMECORE_UITEXTNODE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x178E2E70)
#define RPG_GAMECORE_UITEXTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x178E30E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UITextNode_TypeDefinitionIndex = 22112;

	class UITextNode : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* SDFPath; // 0x10
		::System::String* TextPath; // 0x18
		::RPG::Client::TextID TextContent; // 0x20
		::Il2CppArray<::RPG::GameCore::DynamicFloat*>* ParamList; // 0x30
		::RPG::GameCore::DynamicFloat* TextDynamicValue; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UITEXTNODE__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::UITextNode*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UITextNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UITEXTNODE_FROMBINARY_OFFSET))(array, val);
		}
	};
}
