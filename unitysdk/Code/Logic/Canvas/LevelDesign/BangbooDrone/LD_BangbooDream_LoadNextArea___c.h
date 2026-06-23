#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CODE_LOGIC_CANVAS_LEVELDESIGN_BANGBOODRONE_LD_BANGBOODREAM_LOADNEXTAREA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15CF49A0)
#define CODE_LOGIC_CANVAS_LEVELDESIGN_BANGBOODRONE_LD_BANGBOODREAM_LOADNEXTAREA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15CF49E0)
#define CODE_LOGIC_CANVAS_LEVELDESIGN_BANGBOODRONE_LD_BANGBOODREAM_LOADNEXTAREA___C__ONEVENTFROMANYONE_B__10_0_OFFSET UNITYSDK_OFFSET(0x15CF49F0)

namespace Code::Logic::Canvas::LevelDesign::BangbooDrone
{
	inline static constexpr unsigned int LD_BangbooDream_LoadNextArea___c_TypeDefinitionIndex = 59596;

	class LD_BangbooDream_LoadNextArea___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__10_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LD_BangbooDream_LoadNextArea___c_TypeDefinitionIndex)->GetStaticField(0x36420);
		}
		static ::Code::Logic::Canvas::LevelDesign::BangbooDrone::LD_BangbooDream_LoadNextArea___c** StaticGet___9()
		{
			return (::Code::Logic::Canvas::LevelDesign::BangbooDrone::LD_BangbooDream_LoadNextArea___c**)Il2CppClass::FromTypeDefinitionIndex(LD_BangbooDream_LoadNextArea___c_TypeDefinitionIndex)->GetStaticField(0x36428);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_BANGBOODRONE_LD_BANGBOODREAM_LOADNEXTAREA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_BANGBOODRONE_LD_BANGBOODREAM_LOADNEXTAREA___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnEventFromAnyone_b__10_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_BANGBOODRONE_LD_BANGBOODREAM_LOADNEXTAREA___C__ONEVENTFROMANYONE_B__10_0_OFFSET))(this);
		}
	};
}
