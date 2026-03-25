#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/EntityScoreType.h"

namespace RPG::GameCore { class EntityScoreConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_3DAEB003FB51312B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x893EC60)
#define CLASS_2_3DAEB003FB51312B_INIT_OFFSET UNITYSDK_OFFSET(0x893E950)
#define CLASS_2_3DAEB003FB51312B_METHOD_2_0D372435D9CAE4BC_OFFSET UNITYSDK_OFFSET(0x893E9A0)
#define CLASS_2_3DAEB003FB51312B_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x893F070)
#define CLASS_2_3DAEB003FB51312B_METHOD_2_46613FF0B281DB1C_OFFSET UNITYSDK_OFFSET(0x893ED80)
#define CLASS_2_3DAEB003FB51312B_METHOD_2_4A363AD9CDD31D01_OFFSET UNITYSDK_OFFSET(0x893EE30)
#define CLASS_2_3DAEB003FB51312B_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x893ED70)
#define CLASS_2_3DAEB003FB51312B_METHOD_2_5DA557F62EC0CB40_OFFSET UNITYSDK_OFFSET(0x893EFF0)
#define CLASS_2_3DAEB003FB51312B_METHOD_2_6D93101E4CE10A96_OFFSET UNITYSDK_OFFSET(0x893F0B0)
#define CLASS_2_3DAEB003FB51312B_METHOD_2_8249CBC66AA43E88_OFFSET UNITYSDK_OFFSET(0x893EF00)
#define CLASS_2_3DAEB003FB51312B_METHOD_2_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x893ED10)
#define CLASS_2_3DAEB003FB51312B__CTOR_OFFSET UNITYSDK_OFFSET(0x893F300)
#define CLASS_2_3DAEB003FB51312B___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x893F3B0)
#define CLASS_2_3DAEB003FB51312B___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x893F320)

inline static constexpr unsigned int Class_2_3DAEB003FB51312B_TypeDefinitionIndex = 56526;

class Class_2_3DAEB003FB51312B : public ::RPG::Client::BaseModule
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* Field_2_1; // 0x10
	::RPG::GameCore::EntityScoreConfig* Field_2_2; // 0x18
	::System::Single Field_2_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DAEB003FB51312B__CTOR_OFFSET))(this);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DAEB003FB51312B_INIT_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DAEB003FB51312B_DISPOSE_OFFSET))(this);
	}

	::System::Single Method_2_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DAEB003FB51312B_METHOD_2_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DAEB003FB51312B_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_2_46613FF0B281DB1C(::RPG::GameCore::EntityScoreType a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityScoreType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_3DAEB003FB51312B_METHOD_2_46613FF0B281DB1C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8249CBC66AA43E88(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_3DAEB003FB51312B_METHOD_2_8249CBC66AA43E88_OFFSET))(this, a1);
	}

	::System::Single Method_2_5DA557F62EC0CB40(::RPG::GameCore::EntityScoreType a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::EntityScoreType))((::PBYTE)hIl2Cpp + CLASS_2_3DAEB003FB51312B_METHOD_2_5DA557F62EC0CB40_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DAEB003FB51312B_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_2_6D93101E4CE10A96()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DAEB003FB51312B_METHOD_2_6D93101E4CE10A96_OFFSET))(this);
	}

	::System::Void Method_2_0D372435D9CAE4BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DAEB003FB51312B_METHOD_2_0D372435D9CAE4BC_OFFSET))(this);
	}

	::System::Single Method_2_4A363AD9CDD31D01(::RPG::GameCore::EntityScoreType a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::EntityScoreType))((::PBYTE)hIl2Cpp + CLASS_2_3DAEB003FB51312B_METHOD_2_4A363AD9CDD31D01_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DAEB003FB51312B___IFIXBASEPROXY_INIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DAEB003FB51312B___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
