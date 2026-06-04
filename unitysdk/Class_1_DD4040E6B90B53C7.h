#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TeamActionType.h"
#include "unitysdk/System/Object.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DD4040E6B90B53C7_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA3AB1D0)
#define CLASS_1_DD4040E6B90B53C7_METHOD_1_2D93EB72799F321C_OFFSET UNITYSDK_OFFSET(0xA3AB2A0)
#define CLASS_1_DD4040E6B90B53C7_METHOD_1_2EA1D7D04E30AB42_OFFSET UNITYSDK_OFFSET(0xA3AB840)
#define CLASS_1_DD4040E6B90B53C7_METHOD_1_8DCE8D68745FEBA0_OFFSET UNITYSDK_OFFSET(0xA3AB300)
#define CLASS_1_DD4040E6B90B53C7_METHOD_1_8EB914309F32E1BE_OFFSET UNITYSDK_OFFSET(0xA3AB500)
#define CLASS_1_DD4040E6B90B53C7_METHOD_1_A3EBCC58B43E9423_OFFSET UNITYSDK_OFFSET(0xA3AB920)
#define CLASS_1_DD4040E6B90B53C7_METHOD_1_D758F2423B4C6060_OFFSET UNITYSDK_OFFSET(0xA3ABA80)
#define CLASS_1_DD4040E6B90B53C7__CTOR_OFFSET UNITYSDK_OFFSET(0xA3ABC70)

inline static constexpr unsigned int Class_1_DD4040E6B90B53C7_TypeDefinitionIndex = 53905;

class Class_1_DD4040E6B90B53C7 : public ::System::Object
{
public:
	::Class_1_5F51D4049EA87B7B* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_1; // 0x18
	::RPG::GameCore::GameEntity* Field_1_2; // 0x20
	::Class_1_5F51D4049EA87B7B* Field_1_3; // 0x28
	::System::String* Field_1_4; // 0x30
	::RPG::GameCore::TeamActionType Field_1_5; // 0x38
	::System::Boolean Field_1_6; // 0x3C

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

	::System::Boolean Method_1_2EA1D7D04E30AB42(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_DD4040E6B90B53C7_METHOD_1_2EA1D7D04E30AB42_OFFSET))(this, a1);
	}

	::System::Void Method_1_A3EBCC58B43E9423(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_DD4040E6B90B53C7_METHOD_1_A3EBCC58B43E9423_OFFSET))(this, a1);
	}

	::System::Void Method_1_D758F2423B4C6060(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_DD4040E6B90B53C7_METHOD_1_D758F2423B4C6060_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8DCE8D68745FEBA0(::RPG::GameCore::GameEntity* a1, ::Class_1_5F51D4049EA87B7B* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_5F51D4049EA87B7B*))((::PBYTE)hIl2Cpp + CLASS_1_DD4040E6B90B53C7_METHOD_1_8DCE8D68745FEBA0_OFFSET))(this, a1, a2);
	}
};
