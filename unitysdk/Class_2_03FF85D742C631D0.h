#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F49CA2983DD8D8E6.h"
#include "unitysdk/RPG/GameCore/AnimStateLogicType.h"

class Class_1_8632A9A99C579E84;
class Class_1_DB457F2E821DD51D;
class Class_2_1DBE0E1023AFDBC5;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_03FF85D742C631D0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x96F09A0)
#define CLASS_2_03FF85D742C631D0_METHOD_2_1B9BCD64F419AAE9_OFFSET UNITYSDK_OFFSET(0x96F09F0)
#define CLASS_2_03FF85D742C631D0_METHOD_2_2EE9C7E2751B1FF0_OFFSET UNITYSDK_OFFSET(0x96F15C0)
#define CLASS_2_03FF85D742C631D0_METHOD_2_64865938ADBCB300_OFFSET UNITYSDK_OFFSET(0x96F13D0)
#define CLASS_2_03FF85D742C631D0_METHOD_2_6FB9BE05A91CEBCB_OFFSET UNITYSDK_OFFSET(0x96F0A40)
#define CLASS_2_03FF85D742C631D0_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x96F16C0)
#define CLASS_2_03FF85D742C631D0_METHOD_2_BBC18DB5C4EB0820_OFFSET UNITYSDK_OFFSET(0x96F1330)
#define CLASS_2_03FF85D742C631D0_METHOD_2_EA35D528E6898FE8_OFFSET UNITYSDK_OFFSET(0x96F1730)
#define CLASS_2_03FF85D742C631D0__CTOR_OFFSET UNITYSDK_OFFSET(0x96F0990)

inline static constexpr unsigned int Class_2_03FF85D742C631D0_TypeDefinitionIndex = 51574;

class Class_2_03FF85D742C631D0 : public ::Class_1_F49CA2983DD8D8E6
{
public:
	// static const ::System::Single Field_2_3; // 0x0
	::Class_1_8632A9A99C579E84* Field_2_1; // 0x30
	::Class_1_8632A9A99C579E84* Field_2_0; // 0x38
	::System::Boolean Field_2_4; // 0x40
	::System::Single Field_2_2; // 0x44

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::Class_2_1DBE0E1023AFDBC5* a2, ::Class_1_DB457F2E821DD51D* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_2_1DBE0E1023AFDBC5*, ::Class_1_DB457F2E821DD51D*))((::PBYTE)hIl2Cpp + CLASS_2_03FF85D742C631D0__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_03FF85D742C631D0_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::AnimStateLogicType Method_2_1B9BCD64F419AAE9()
	{
		return ((::RPG::GameCore::AnimStateLogicType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_03FF85D742C631D0_METHOD_2_1B9BCD64F419AAE9_OFFSET))(this);
	}

	::System::Void Method_2_6FB9BE05A91CEBCB(::RPG::GameCore::AnimStateLogicType a1, ::Class_1_8632A9A99C579E84* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnimStateLogicType, ::Class_1_8632A9A99C579E84*))((::PBYTE)hIl2Cpp + CLASS_2_03FF85D742C631D0_METHOD_2_6FB9BE05A91CEBCB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BBC18DB5C4EB0820(::RPG::GameCore::AnimStateLogicType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnimStateLogicType))((::PBYTE)hIl2Cpp + CLASS_2_03FF85D742C631D0_METHOD_2_BBC18DB5C4EB0820_OFFSET))(this, a1);
	}

	::System::Void Method_2_64865938ADBCB300(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_03FF85D742C631D0_METHOD_2_64865938ADBCB300_OFFSET))(this, a1);
	}

	::System::Void Method_2_2EE9C7E2751B1FF0(::System::String* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_03FF85D742C631D0_METHOD_2_2EE9C7E2751B1FF0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_03FF85D742C631D0_METHOD_2_793FFA9A76FE6840_OFFSET))(this, P0);
	}

	::System::Void Method_2_EA35D528E6898FE8(::System::String* P0, ::System::Object* P1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_03FF85D742C631D0_METHOD_2_EA35D528E6898FE8_OFFSET))(this, P0, P1);
	}
};
