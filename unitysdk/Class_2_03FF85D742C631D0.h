#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F49CA2983DD8D8E6.h"
#include "unitysdk/RPG/GameCore/AnimStateLogicType.h"

class Class_1_CB986F8DD1655D73;
class Class_1_DB457F2E821DD51D;
class Class_2_2461A19B320A03F9;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_03FF85D742C631D0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18AF0F80)
#define CLASS_2_03FF85D742C631D0_METHOD_2_0A5E520AE1386664_OFFSET UNITYSDK_OFFSET(0x18AF1BA0)
#define CLASS_2_03FF85D742C631D0_METHOD_2_15E46B7F494E7D73_OFFSET UNITYSDK_OFFSET(0x18AF1020)
#define CLASS_2_03FF85D742C631D0_METHOD_2_1B9BCD64F419AAE9_OFFSET UNITYSDK_OFFSET(0x18AF0FD0)
#define CLASS_2_03FF85D742C631D0_METHOD_2_64865938ADBCB300_OFFSET UNITYSDK_OFFSET(0x18AF19B0)
#define CLASS_2_03FF85D742C631D0_METHOD_2_BBC18DB5C4EB0820_OFFSET UNITYSDK_OFFSET(0x18AF1910)
#define CLASS_2_03FF85D742C631D0__CTOR_OFFSET UNITYSDK_OFFSET(0x18AF0F70)

inline static constexpr unsigned int Class_2_03FF85D742C631D0_TypeDefinitionIndex = 53395;

class Class_2_03FF85D742C631D0 : public ::Class_1_F49CA2983DD8D8E6
{
public:
	// static const ::System::Single Field_2_0; // 0x0
	::Class_1_CB986F8DD1655D73* Field_2_1; // 0x30
	::Class_1_CB986F8DD1655D73* Field_2_2; // 0x38
	::System::Single Field_2_3; // 0x40
	::System::Boolean Field_2_4; // 0x44

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::Class_2_2461A19B320A03F9* a2, ::Class_1_DB457F2E821DD51D* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_2_2461A19B320A03F9*, ::Class_1_DB457F2E821DD51D*))((::PBYTE)hIl2Cpp + CLASS_2_03FF85D742C631D0__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_03FF85D742C631D0_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::AnimStateLogicType Method_2_1B9BCD64F419AAE9()
	{
		return ((::RPG::GameCore::AnimStateLogicType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_03FF85D742C631D0_METHOD_2_1B9BCD64F419AAE9_OFFSET))(this);
	}

	::System::Void Method_2_15E46B7F494E7D73(::RPG::GameCore::AnimStateLogicType a1, ::Class_1_CB986F8DD1655D73* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnimStateLogicType, ::Class_1_CB986F8DD1655D73*))((::PBYTE)hIl2Cpp + CLASS_2_03FF85D742C631D0_METHOD_2_15E46B7F494E7D73_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BBC18DB5C4EB0820(::RPG::GameCore::AnimStateLogicType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnimStateLogicType))((::PBYTE)hIl2Cpp + CLASS_2_03FF85D742C631D0_METHOD_2_BBC18DB5C4EB0820_OFFSET))(this, a1);
	}

	::System::Void Method_2_64865938ADBCB300(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_03FF85D742C631D0_METHOD_2_64865938ADBCB300_OFFSET))(this, a1);
	}

	::System::Void Method_2_0A5E520AE1386664(::System::String* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_03FF85D742C631D0_METHOD_2_0A5E520AE1386664_OFFSET))(this, a1, a2);
	}
};
