#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F49CA2983DD8D8E6.h"
#include "unitysdk/RPG/GameCore/AnimStateLogicType.h"

class Class_1_CB986F8DD1655D73;
class Class_1_DB457F2E821DD51D;
class Class_2_2461A19B320A03F9;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_D42E8A185FF474B0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18BBF190)
#define CLASS_2_D42E8A185FF474B0_GET_IGNOREAPPEAR_OFFSET UNITYSDK_OFFSET(0x18BBF4F0)
#define CLASS_2_D42E8A185FF474B0_METHOD_2_1B9BCD64F419AAE9_OFFSET UNITYSDK_OFFSET(0x18BBF1D0)
#define CLASS_2_D42E8A185FF474B0_METHOD_2_1DA4EADE13B063E4_OFFSET UNITYSDK_OFFSET(0x18BBF220)
#define CLASS_2_D42E8A185FF474B0_METHOD_2_4E30FEEB9D0D4E0D_OFFSET UNITYSDK_OFFSET(0x18BBF4A0)
#define CLASS_2_D42E8A185FF474B0_SET_IGNOREAPPEAR_OFFSET UNITYSDK_OFFSET(0x18BBF500)
#define CLASS_2_D42E8A185FF474B0__CTOR_OFFSET UNITYSDK_OFFSET(0x18BBF180)

inline static constexpr unsigned int Class_2_D42E8A185FF474B0_TypeDefinitionIndex = 53398;

class Class_2_D42E8A185FF474B0 : public ::Class_1_F49CA2983DD8D8E6
{
public:
	::System::Boolean _IgnoreAppear_k__BackingField; // 0x30

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::Class_2_2461A19B320A03F9* a2, ::Class_1_DB457F2E821DD51D* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_2_2461A19B320A03F9*, ::Class_1_DB457F2E821DD51D*))((::PBYTE)hIl2Cpp + CLASS_2_D42E8A185FF474B0__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D42E8A185FF474B0_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::AnimStateLogicType Method_2_1B9BCD64F419AAE9()
	{
		return ((::RPG::GameCore::AnimStateLogicType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D42E8A185FF474B0_METHOD_2_1B9BCD64F419AAE9_OFFSET))(this);
	}

	::System::Void Method_2_1DA4EADE13B063E4(::RPG::GameCore::AnimStateLogicType a1, ::Class_1_CB986F8DD1655D73* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnimStateLogicType, ::Class_1_CB986F8DD1655D73*))((::PBYTE)hIl2Cpp + CLASS_2_D42E8A185FF474B0_METHOD_2_1DA4EADE13B063E4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4E30FEEB9D0D4E0D(::RPG::GameCore::AnimStateLogicType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnimStateLogicType))((::PBYTE)hIl2Cpp + CLASS_2_D42E8A185FF474B0_METHOD_2_4E30FEEB9D0D4E0D_OFFSET))(this, a1);
	}

	::System::Boolean get_IgnoreAppear()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D42E8A185FF474B0_GET_IGNOREAPPEAR_OFFSET))(this);
	}

	::System::Void set_IgnoreAppear(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D42E8A185FF474B0_SET_IGNOREAPPEAR_OFFSET))(this, a1);
	}
};
