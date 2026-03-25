#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA0BD860)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___C__CREATEMOVEABLEITEMFROMUI_B__33_0_OFFSET UNITYSDK_OFFSET(0xA0BD8B0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA0BD8A0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int JigsawPuzzleBoard___c_TypeDefinitionIndex = 64100;

	class JigsawPuzzleBoard___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__33_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(JigsawPuzzleBoard___c_TypeDefinitionIndex)->GetStaticField(0x48380);
		}
		static ::RPG::Client::Prop::JigsawPuzzleBoard___c** StaticGet___9()
		{
			return (::RPG::Client::Prop::JigsawPuzzleBoard___c**)Il2CppClass::FromTypeDefinitionIndex(JigsawPuzzleBoard___c_TypeDefinitionIndex)->GetStaticField(0x48388);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___C__CTOR_OFFSET))(this);
		}

		::System::Void _CreateMoveableItemFromUI_b__33_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___C__CREATEMOVEABLEITEMFROMUI_B__33_0_OFFSET))(this);
		}
	};
}
