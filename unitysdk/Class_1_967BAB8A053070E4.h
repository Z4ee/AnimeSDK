#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/System/Object.h"

class Class_1_6B41D5D37BA0605F;
namespace RPG::Client { class EnvironmentSystem; }

#define CLASS_1_967BAB8A053070E4_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD282A60)
#define CLASS_1_967BAB8A053070E4_ENTER_OFFSET UNITYSDK_OFFSET(0xD282AA0)
#define CLASS_1_967BAB8A053070E4_GETGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0xD283310)
#define CLASS_1_967BAB8A053070E4_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xD282EC0)
#define CLASS_1_967BAB8A053070E4_LEAVE_OFFSET UNITYSDK_OFFSET(0xD282F20)
#define CLASS_1_967BAB8A053070E4_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xD283360)
#define CLASS_1_967BAB8A053070E4_METHOD_1_3B2051C60621D523_OFFSET UNITYSDK_OFFSET(0xD282DC0)
#define CLASS_1_967BAB8A053070E4_METHOD_1_E49FC3D0AC1CB0F6_OFFSET UNITYSDK_OFFSET(0xD282FA0)
#define CLASS_1_967BAB8A053070E4_TICK_OFFSET UNITYSDK_OFFSET(0xD282E60)
#define CLASS_1_967BAB8A053070E4__CTOR_OFFSET UNITYSDK_OFFSET(0xD283480)

inline static constexpr unsigned int Class_1_967BAB8A053070E4_TypeDefinitionIndex = 61211;

class Class_1_967BAB8A053070E4 : public ::System::Object
{
public:
	::RPG::Client::EnvironmentSystem* NLKKPKJEAOO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_967BAB8A053070E4__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_967BAB8A053070E4_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Enter()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_967BAB8A053070E4_ENTER_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_967BAB8A053070E4_TICK_OFFSET))(this, a1);
	}

	::System::Void LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_967BAB8A053070E4_LATEUPDATE_OFFSET))(this, a1);
	}

	::System::Boolean Leave(::Class_1_6B41D5D37BA0605F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6B41D5D37BA0605F*))((::PBYTE)hIl2Cpp + CLASS_1_967BAB8A053070E4_LEAVE_OFFSET))(this, a1);
	}

	::System::Void Method_1_3B2051C60621D523()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_967BAB8A053070E4_METHOD_1_3B2051C60621D523_OFFSET))(this);
	}

	::System::Void Method_1_E49FC3D0AC1CB0F6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_967BAB8A053070E4_METHOD_1_E49FC3D0AC1CB0F6_OFFSET))(this, a1);
	}

	::RPG::Client::GamePhaseType GetGamePhaseType()
	{
		return ((::RPG::Client::GamePhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_967BAB8A053070E4_GETGAMEPHASETYPE_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_967BAB8A053070E4_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}
};
