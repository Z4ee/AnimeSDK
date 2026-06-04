#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_BE77F98C85B2B14F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA74E280)
#define CLASS_1_BE77F98C85B2B14F___C__CREATEGAMEREFROLE_B__2_0_OFFSET UNITYSDK_OFFSET(0xA74E2D0)
#define CLASS_1_BE77F98C85B2B14F___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA74E2C0)

inline static constexpr unsigned int Class_1_BE77F98C85B2B14F___c_TypeDefinitionIndex = 61027;

class Class_1_BE77F98C85B2B14F___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__2_0()
	{
		return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BE77F98C85B2B14F___c_TypeDefinitionIndex)->GetStaticField(0x5CB30);
	}
	static ::Class_1_BE77F98C85B2B14F___c** StaticGet___9()
	{
		return (::Class_1_BE77F98C85B2B14F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BE77F98C85B2B14F___c_TypeDefinitionIndex)->GetStaticField(0x5CB38);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BE77F98C85B2B14F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE77F98C85B2B14F___C__CTOR_OFFSET))(this);
	}

	::RPG::Client::GridFightEquipItemData* _CreateGameRefRole_b__2_0(::System::UInt32 a1)
	{
		return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BE77F98C85B2B14F___C__CREATEGAMEREFROLE_B__2_0_OFFSET))(this, a1);
	}
};
