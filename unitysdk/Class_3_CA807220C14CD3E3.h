#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/RPG/Client/LoginPhase.h"

class Class_1_6B41D5D37BA0605F;
namespace System { class Object; }

#define CLASS_3_CA807220C14CD3E3_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC37C8E0)
#define CLASS_3_CA807220C14CD3E3_ENTER_OFFSET UNITYSDK_OFFSET(0xC37C9D0)
#define CLASS_3_CA807220C14CD3E3_GETGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0xC37D320)
#define CLASS_3_CA807220C14CD3E3_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xC37D0A0)
#define CLASS_3_CA807220C14CD3E3_LEAVE_OFFSET UNITYSDK_OFFSET(0xC37D140)
#define CLASS_3_CA807220C14CD3E3_METHOD_3_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0xC37CCD0)
#define CLASS_3_CA807220C14CD3E3_METHOD_3_8C68E2CDEEC884A6_OFFSET UNITYSDK_OFFSET(0xC37CE60)
#define CLASS_3_CA807220C14CD3E3_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC37D100)
#define CLASS_3_CA807220C14CD3E3_TICK_OFFSET UNITYSDK_OFFSET(0xC37C970)
#define CLASS_3_CA807220C14CD3E3__CTOR_OFFSET UNITYSDK_OFFSET(0xC37C630)

inline static constexpr unsigned int Class_3_CA807220C14CD3E3_TypeDefinitionIndex = 61252;

class Class_3_CA807220C14CD3E3 : public ::RPG::Client::LoginPhase
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA807220C14CD3E3__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA807220C14CD3E3_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_CA807220C14CD3E3_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Enter()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA807220C14CD3E3_ENTER_OFFSET))(this);
	}

	::System::Void Method_3_8C68E2CDEEC884A6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_CA807220C14CD3E3_METHOD_3_8C68E2CDEEC884A6_OFFSET))(this, a1);
	}

	::System::Void Method_3_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA807220C14CD3E3_METHOD_3_18982EFD3B740683_OFFSET))(this);
	}

	::System::Void LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_CA807220C14CD3E3_LATEUPDATE_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA807220C14CD3E3_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Leave(::Class_1_6B41D5D37BA0605F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6B41D5D37BA0605F*))((::PBYTE)hIl2Cpp + CLASS_3_CA807220C14CD3E3_LEAVE_OFFSET))(this, a1);
	}

	::RPG::Client::GamePhaseType GetGamePhaseType()
	{
		return ((::RPG::Client::GamePhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA807220C14CD3E3_GETGAMEPHASETYPE_OFFSET))(this);
	}
};
