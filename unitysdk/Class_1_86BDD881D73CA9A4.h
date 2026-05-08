#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ProtoScript/AimRectColor.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::HollowChessboard { class HollowEntity; }

#define CLASS_1_86BDD881D73CA9A4_METHOD_1_87226FA8EA897E30_OFFSET UNITYSDK_OFFSET(0x12ABB3F0)
#define CLASS_1_86BDD881D73CA9A4_METHOD_1_A5E44068C0B8938D_OFFSET UNITYSDK_OFFSET(0x12ABB5D0)

inline static constexpr unsigned int Class_1_86BDD881D73CA9A4_TypeDefinitionIndex = 75354;

class Class_1_86BDD881D73CA9A4 : public ::System::Object
{
public:
	static ::System::Void Method_1_87226FA8EA897E30(::MoleMole::HollowChessboard::HollowEntity* a1, ::ProtoScript::AimRectColor a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::MoleMole::HollowChessboard::HollowEntity*, ::ProtoScript::AimRectColor, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_86BDD881D73CA9A4_METHOD_1_87226FA8EA897E30_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_A5E44068C0B8938D(::MoleMole::HollowChessboard::HollowEntity* a1)
	{
		return ((::System::Void(*)(::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + CLASS_1_86BDD881D73CA9A4_METHOD_1_A5E44068C0B8938D_OFFSET))(a1);
	}
};
