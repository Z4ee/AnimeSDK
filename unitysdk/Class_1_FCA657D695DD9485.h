#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ILBattlePropertyFormulaType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_FCA657D695DD9485_METHOD_1_42BACE3BC7DBBCAD_OFFSET UNITYSDK_OFFSET(0x1CC63B40)
#define CLASS_1_FCA657D695DD9485__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC63D40)

inline static constexpr unsigned int Class_1_FCA657D695DD9485_TypeDefinitionIndex = 13676;

class Class_1_FCA657D695DD9485 : public ::System::Object
{
public:
	::RPG::GameCore::FixPoint PEDFLGGDHDP; // 0x10
	::RPG::GameCore::ILBattlePropertyFormulaType KCGCENIODNJ; // 0x18
	::RPG::GameCore::FixPoint NKAACMGNNPK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FCA657D695DD9485__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_42BACE3BC7DBBCAD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_FCA657D695DD9485*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_FCA657D695DD9485*&))((::PBYTE)hIl2Cpp + CLASS_1_FCA657D695DD9485_METHOD_1_42BACE3BC7DBBCAD_OFFSET))(a1, a2);
	}
};
