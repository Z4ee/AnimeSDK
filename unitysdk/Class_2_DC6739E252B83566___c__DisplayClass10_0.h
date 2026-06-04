#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/UIFloatingTextType.h"
#include "unitysdk/System/Object.h"

class Class_1_FE6DD620A0017964;
namespace System { template <typename T1, typename T2> class Tuple_2; }

#define CLASS_2_DC6739E252B83566___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12385DB0)
#define CLASS_2_DC6739E252B83566___C__DISPLAYCLASS10_0___ONUIBATTLESETDAMAGETEXTSTYLE_B__0_OFFSET UNITYSDK_OFFSET(0x12386460)

inline static constexpr unsigned int Class_2_DC6739E252B83566___c__DisplayClass10_0_TypeDefinitionIndex = 66920;

class Class_2_DC6739E252B83566___c__DisplayClass10_0 : public ::System::Object
{
public:
	::Class_1_FE6DD620A0017964* param; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC6739E252B83566___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __OnUIBattleSetDamageTextStyle_b__0(::System::Tuple_2<::RPG::Client::UIFloatingTextType, ::RPG::Client::TextID>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Tuple_2<::RPG::Client::UIFloatingTextType, ::RPG::Client::TextID>*))((::PBYTE)hIl2Cpp + CLASS_2_DC6739E252B83566___C__DISPLAYCLASS10_0___ONUIBATTLESETDAMAGETEXTSTYLE_B__0_OFFSET))(this, a1);
	}
};
