#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/EntityScoreType.h"

namespace RPG::GameCore { class EntityScoreConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_2F5DB4F817BF5D46_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14466810)
#define CLASS_2_2F5DB4F817BF5D46_INIT_OFFSET UNITYSDK_OFFSET(0x144664F0)
#define CLASS_2_2F5DB4F817BF5D46_METHOD_2_1622EF55C818E85D_OFFSET UNITYSDK_OFFSET(0x14466AF0)
#define CLASS_2_2F5DB4F817BF5D46_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x14466CE0)
#define CLASS_2_2F5DB4F817BF5D46_METHOD_2_3BD1CA451CFC20F5_OFFSET UNITYSDK_OFFSET(0x14466C20)
#define CLASS_2_2F5DB4F817BF5D46_METHOD_2_438E5C3BAE7B5524_OFFSET UNITYSDK_OFFSET(0x14466A20)
#define CLASS_2_2F5DB4F817BF5D46_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x14466910)
#define CLASS_2_2F5DB4F817BF5D46_METHOD_2_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x14466D20)
#define CLASS_2_2F5DB4F817BF5D46_METHOD_2_D799715F2EF979EA_OFFSET UNITYSDK_OFFSET(0x14466540)
#define CLASS_2_2F5DB4F817BF5D46_METHOD_2_FEB801BCF1FB965F_OFFSET UNITYSDK_OFFSET(0x14466920)
#define CLASS_2_2F5DB4F817BF5D46_METHOD_2_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x144668B0)
#define CLASS_2_2F5DB4F817BF5D46__CTOR_OFFSET UNITYSDK_OFFSET(0x14466F60)
#define CLASS_2_2F5DB4F817BF5D46___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14467000)
#define CLASS_2_2F5DB4F817BF5D46___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x14466F80)

inline static constexpr unsigned int Class_2_2F5DB4F817BF5D46_TypeDefinitionIndex = 64691;

class Class_2_2F5DB4F817BF5D46 : public ::RPG::Client::BaseModule
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* Field_2_1; // 0x10
	::RPG::GameCore::EntityScoreConfig* Field_2_2; // 0x18
	::System::Single Field_2_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F5DB4F817BF5D46__CTOR_OFFSET))(this);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F5DB4F817BF5D46_INIT_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F5DB4F817BF5D46_DISPOSE_OFFSET))(this);
	}

	::System::Single Method_2_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F5DB4F817BF5D46_METHOD_2_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F5DB4F817BF5D46_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_2_FEB801BCF1FB965F(::RPG::GameCore::EntityScoreType a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityScoreType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_2F5DB4F817BF5D46_METHOD_2_FEB801BCF1FB965F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1622EF55C818E85D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_2F5DB4F817BF5D46_METHOD_2_1622EF55C818E85D_OFFSET))(this, a1);
	}

	::System::Single Method_2_3BD1CA451CFC20F5(::RPG::GameCore::EntityScoreType a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::EntityScoreType))((::PBYTE)hIl2Cpp + CLASS_2_2F5DB4F817BF5D46_METHOD_2_3BD1CA451CFC20F5_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F5DB4F817BF5D46_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_2_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F5DB4F817BF5D46_METHOD_2_6B72D4EE8C6E907F_OFFSET))(this);
	}

	::System::Void Method_2_D799715F2EF979EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F5DB4F817BF5D46_METHOD_2_D799715F2EF979EA_OFFSET))(this);
	}

	::System::Single Method_2_438E5C3BAE7B5524(::RPG::GameCore::EntityScoreType a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::EntityScoreType))((::PBYTE)hIl2Cpp + CLASS_2_2F5DB4F817BF5D46_METHOD_2_438E5C3BAE7B5524_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F5DB4F817BF5D46___IFIXBASEPROXY_INIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F5DB4F817BF5D46___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
