#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_2DCA67B93E24517A_METHOD_1_239127A8B01A1A3F_OFFSET UNITYSDK_OFFSET(0x1CBA0D60)
#define CLASS_1_2DCA67B93E24517A__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBA0E60)

inline static constexpr unsigned int Class_1_2DCA67B93E24517A_TypeDefinitionIndex = 15233;

class Class_1_2DCA67B93E24517A : public ::System::Object
{
public:
	::RPG::GameCore::AvatarBaseType LKLNGCCIMEM; // 0x10
	::System::UInt32 NBFOFKGNNIO; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DCA67B93E24517A__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_239127A8B01A1A3F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_2DCA67B93E24517A*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_2DCA67B93E24517A*&))((::PBYTE)hIl2Cpp + CLASS_1_2DCA67B93E24517A_METHOD_1_239127A8B01A1A3F_OFFSET))(a1, a2);
	}
};
