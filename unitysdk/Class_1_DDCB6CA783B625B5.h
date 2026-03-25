#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class NPCDataRow; }
namespace RPG::GameCore { class PamSkinConfigRow; }
namespace RPG::GameCore { class StoryCharacterRow; }
namespace System { class String; }

#define CLASS_1_DDCB6CA783B625B5_METHOD_1_489B1DF8A65495FE_1_OFFSET UNITYSDK_OFFSET(0x87B4040)
#define CLASS_1_DDCB6CA783B625B5_METHOD_1_489B1DF8A65495FE_OFFSET UNITYSDK_OFFSET(0x87B3B10)
#define CLASS_1_DDCB6CA783B625B5_METHOD_1_4E161C7AF863672A_OFFSET UNITYSDK_OFFSET(0x87B4160)
#define CLASS_1_DDCB6CA783B625B5_METHOD_1_51BDCE7881E8FFC7_OFFSET UNITYSDK_OFFSET(0x87B4550)
#define CLASS_1_DDCB6CA783B625B5_METHOD_1_63DFD447630AD610_OFFSET UNITYSDK_OFFSET(0x87B3BA0)
#define CLASS_1_DDCB6CA783B625B5_METHOD_1_768CAFD99759BD15_OFFSET UNITYSDK_OFFSET(0x87B4A60)
#define CLASS_1_DDCB6CA783B625B5_METHOD_1_948C4EA694F34A93_OFFSET UNITYSDK_OFFSET(0x87B48B0)
#define CLASS_1_DDCB6CA783B625B5_METHOD_1_ADC1048502BD82E0_OFFSET UNITYSDK_OFFSET(0x87B4C20)
#define CLASS_1_DDCB6CA783B625B5_METHOD_1_E2E5F37FC7696537_OFFSET UNITYSDK_OFFSET(0x87B3F10)
#define CLASS_1_DDCB6CA783B625B5_METHOD_1_EED64D8349FDB669_1_OFFSET UNITYSDK_OFFSET(0x87B44C0)
#define CLASS_1_DDCB6CA783B625B5_METHOD_1_EED64D8349FDB669_OFFSET UNITYSDK_OFFSET(0x87B40D0)

inline static constexpr unsigned int Class_1_DDCB6CA783B625B5_TypeDefinitionIndex = 45434;

class Class_1_DDCB6CA783B625B5 : public ::System::Object
{
public:
	static ::System::String* Method_1_489B1DF8A65495FE(::RPG::GameCore::NPCDataRow* a1)
	{
		return ((::System::String*(*)(::RPG::GameCore::NPCDataRow*))((::PBYTE)hIl2Cpp + CLASS_1_DDCB6CA783B625B5_METHOD_1_489B1DF8A65495FE_OFFSET))(a1);
	}

	static ::System::String* Method_1_489B1DF8A65495FE_1(::RPG::GameCore::NPCDataRow* a1)
	{
		return ((::System::String*(*)(::RPG::GameCore::NPCDataRow*))((::PBYTE)hIl2Cpp + CLASS_1_DDCB6CA783B625B5_METHOD_1_489B1DF8A65495FE_1_OFFSET))(a1);
	}

	static ::System::String* Method_1_EED64D8349FDB669(::RPG::GameCore::StoryCharacterRow* a1)
	{
		return ((::System::String*(*)(::RPG::GameCore::StoryCharacterRow*))((::PBYTE)hIl2Cpp + CLASS_1_DDCB6CA783B625B5_METHOD_1_EED64D8349FDB669_OFFSET))(a1);
	}

	static ::System::String* Method_1_EED64D8349FDB669_1(::RPG::GameCore::StoryCharacterRow* a1)
	{
		return ((::System::String*(*)(::RPG::GameCore::StoryCharacterRow*))((::PBYTE)hIl2Cpp + CLASS_1_DDCB6CA783B625B5_METHOD_1_EED64D8349FDB669_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_63DFD447630AD610(::RPG::GameCore::NPCDataRow* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::NPCDataRow*))((::PBYTE)hIl2Cpp + CLASS_1_DDCB6CA783B625B5_METHOD_1_63DFD447630AD610_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_4E161C7AF863672A(::RPG::GameCore::StoryCharacterRow* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::StoryCharacterRow*))((::PBYTE)hIl2Cpp + CLASS_1_DDCB6CA783B625B5_METHOD_1_4E161C7AF863672A_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_51BDCE7881E8FFC7(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DDCB6CA783B625B5_METHOD_1_51BDCE7881E8FFC7_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_948C4EA694F34A93(::RPG::GameCore::NPCDataRow* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::NPCDataRow*))((::PBYTE)hIl2Cpp + CLASS_1_DDCB6CA783B625B5_METHOD_1_948C4EA694F34A93_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_768CAFD99759BD15(::RPG::GameCore::StoryCharacterRow* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::StoryCharacterRow*))((::PBYTE)hIl2Cpp + CLASS_1_DDCB6CA783B625B5_METHOD_1_768CAFD99759BD15_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_ADC1048502BD82E0(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DDCB6CA783B625B5_METHOD_1_ADC1048502BD82E0_OFFSET))(a1);
	}

	static ::RPG::GameCore::PamSkinConfigRow* Method_1_E2E5F37FC7696537()
	{
		return ((::RPG::GameCore::PamSkinConfigRow*(*)())((::PBYTE)hIl2Cpp + CLASS_1_DDCB6CA783B625B5_METHOD_1_E2E5F37FC7696537_OFFSET))();
	}
};
