#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::MVVM::ViewModel { class LimaoNewsPostViewModel; }

#define CLASS_3_D975C797957E43FF___C__DISPLAYCLASS4_0__CHANGEPOSTSTATE_B__0_OFFSET UNITYSDK_OFFSET(0x9A39C20)
#define CLASS_3_D975C797957E43FF___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9A39300)

inline static constexpr unsigned int Class_3_D975C797957E43FF___c__DisplayClass4_0_TypeDefinitionIndex = 68403;

class Class_3_D975C797957E43FF___c__DisplayClass4_0 : public ::System::Object
{
public:
	::System::UInt32 postID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D975C797957E43FF___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _ChangePostState_b__0(::RPG::Client::MVVM::ViewModel::LimaoNewsPostViewModel* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MVVM::ViewModel::LimaoNewsPostViewModel*))((::PBYTE)hIl2Cpp + CLASS_3_D975C797957E43FF___C__DISPLAYCLASS4_0__CHANGEPOSTSTATE_B__0_OFFSET))(this, x);
	}
};
