#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HeartDialEmoType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_BC601FCB47AEB5E5_METHOD_1_239127A8B01A1A3F_OFFSET UNITYSDK_OFFSET(0x1DC97620)
#define CLASS_1_BC601FCB47AEB5E5__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC97720)

inline static constexpr unsigned int Class_1_BC601FCB47AEB5E5_TypeDefinitionIndex = 13717;

class Class_1_BC601FCB47AEB5E5 : public ::System::Object
{
public:
	::RPG::GameCore::HeartDialEmoType BNFEAFPEOIE; // 0x10
	::System::UInt32 POAIHJCEKCF; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC601FCB47AEB5E5__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_239127A8B01A1A3F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_BC601FCB47AEB5E5*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_BC601FCB47AEB5E5*&))((::PBYTE)hIl2Cpp + CLASS_1_BC601FCB47AEB5E5_METHOD_1_239127A8B01A1A3F_OFFSET))(a1, a2);
	}
};
