#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B1C5FFFCD8A2FD45_Enum_3_0449CC4FE4D9C85D.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIComicPageContext; }
namespace MoleMole { class UIComicPageController; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_B1C5FFFCD8A2FD45_CLASS_1_8AF73AE284D22BDD_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x118D8AF0)
#define CLASS_1_B1C5FFFCD8A2FD45_CLASS_1_8AF73AE284D22BDD__CTOR_OFFSET UNITYSDK_OFFSET(0x118D8AA0)

inline static constexpr unsigned int Class_1_B1C5FFFCD8A2FD45_Class_1_8AF73AE284D22BDD_TypeDefinitionIndex = 71884;

class Class_1_B1C5FFFCD8A2FD45_Class_1_8AF73AE284D22BDD : public ::System::Object
{
public:
	::System::Action* Field_1_9; // 0x10
	::MoleMole::UIComicPageController* Field_1_6; // 0x18
	::MoleMole::UIComicPageContext* Field_1_5; // 0x20
	::System::String* Field_1_3; // 0x28
	::System::Action* Field_1_8; // 0x30
	::System::Action* Field_1_7; // 0x38
	::Foundation::AssetRequestHandle Field_1_10; // 0x40
	::System::Int64 Field_1_1; // 0x60
	::Class_1_B1C5FFFCD8A2FD45_Enum_3_0449CC4FE4D9C85D Field_1_2; // 0x68
	::System::Boolean Field_1_4; // 0x69
	::System::Int32 Field_1_0; // 0x6C

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B1C5FFFCD8A2FD45_CLASS_1_8AF73AE284D22BDD__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1C5FFFCD8A2FD45_CLASS_1_8AF73AE284D22BDD_METHOD_1_D0BD1377F2594D33_OFFSET))(this);
	}
};
