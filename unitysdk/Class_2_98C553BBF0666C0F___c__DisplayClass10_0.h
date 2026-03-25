#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/UIFloatingTextType.h"
#include "unitysdk/System/Object.h"

class Class_1_FE6DD620A0017964;
namespace System { template <typename T1, typename T2> class Tuple_2; }

#define CLASS_2_98C553BBF0666C0F___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10589F40)
#define CLASS_2_98C553BBF0666C0F___C__DISPLAYCLASS10_0___ONUIBATTLESETDAMAGETEXTSTYLE_B__0_OFFSET UNITYSDK_OFFSET(0x1058A4B0)

inline static constexpr unsigned int Class_2_98C553BBF0666C0F___c__DisplayClass10_0_TypeDefinitionIndex = 58663;

class Class_2_98C553BBF0666C0F___c__DisplayClass10_0 : public ::System::Object
{
public:
	::Class_1_FE6DD620A0017964* param; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98C553BBF0666C0F___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __OnUIBattleSetDamageTextStyle_b__0(::System::Tuple_2<::RPG::Client::UIFloatingTextType, ::RPG::Client::TextID>* tuple)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Tuple_2<::RPG::Client::UIFloatingTextType, ::RPG::Client::TextID>*))((::PBYTE)hIl2Cpp + CLASS_2_98C553BBF0666C0F___C__DISPLAYCLASS10_0___ONUIBATTLESETDAMAGETEXTSTYLE_B__0_OFFSET))(this, tuple);
	}
};
