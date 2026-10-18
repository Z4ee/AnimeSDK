#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TeamActionType.h"
#include "unitysdk/System/Object.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DD4040E6B90B53C7_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB11CA90)
#define CLASS_1_DD4040E6B90B53C7_METHOD_1_16429620AD2514F5_OFFSET UNITYSDK_OFFSET(0xB11D1F0)
#define CLASS_1_DD4040E6B90B53C7_METHOD_1_2D93EB72799F321C_OFFSET UNITYSDK_OFFSET(0xB11CC40)
#define CLASS_1_DD4040E6B90B53C7_METHOD_1_3BB5D2EC283E3034_OFFSET UNITYSDK_OFFSET(0xB11D340)
#define CLASS_1_DD4040E6B90B53C7_METHOD_1_8DCE8D68745FEBA0_OFFSET UNITYSDK_OFFSET(0xB11CCA0)
#define CLASS_1_DD4040E6B90B53C7_METHOD_1_8EB914309F32E1BE_OFFSET UNITYSDK_OFFSET(0xB11CEB0)
#define CLASS_1_DD4040E6B90B53C7_METHOD_1_E7955EC696E7ED3A_OFFSET UNITYSDK_OFFSET(0xB11D260)
#define CLASS_1_DD4040E6B90B53C7__CTOR_OFFSET UNITYSDK_OFFSET(0xB11D3D0)

inline static constexpr unsigned int Class_1_DD4040E6B90B53C7_TypeDefinitionIndex = 57696;

class Class_1_DD4040E6B90B53C7 : public ::System::Object
{
public:
	::System::String* FCOOFCJFFNP; // 0x10
	::Class_1_5F51D4049EA87B7B* MNLKGBJDKFK; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* POIBMHKAKAA; // 0x20
	::Class_1_5F51D4049EA87B7B* FCBHLMADIBB; // 0x28
	::RPG::GameCore::GameEntity* KBFOKFPHLAJ; // 0x30
	::System::Boolean MIFMINFBDIK; // 0x38
	::RPG::GameCore::TeamActionType PNHOOKEFGDA; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD4040E6B90B53C7__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD4040E6B90B53C7_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_2D93EB72799F321C(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_DD4040E6B90B53C7_METHOD_1_2D93EB72799F321C_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_1_8EB914309F32E1BE(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_DD4040E6B90B53C7_METHOD_1_8EB914309F32E1BE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_16429620AD2514F5(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_DD4040E6B90B53C7_METHOD_1_16429620AD2514F5_OFFSET))(this, a1);
	}

	::System::Void Method_1_E7955EC696E7ED3A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_DD4040E6B90B53C7_METHOD_1_E7955EC696E7ED3A_OFFSET))(this, a1);
	}

	::System::Void Method_1_3BB5D2EC283E3034(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_DD4040E6B90B53C7_METHOD_1_3BB5D2EC283E3034_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8DCE8D68745FEBA0(::RPG::GameCore::GameEntity* a1, ::Class_1_5F51D4049EA87B7B* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_5F51D4049EA87B7B*))((::PBYTE)hIl2Cpp + CLASS_1_DD4040E6B90B53C7_METHOD_1_8DCE8D68745FEBA0_OFFSET))(this, a1, a2);
	}
};
