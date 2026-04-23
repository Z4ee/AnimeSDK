#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_D902165F458B1BE5___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE024BD0)
#define CLASS_1_D902165F458B1BE5___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE024C10)
#define CLASS_1_D902165F458B1BE5___C__GET_ISVALID_B__4_0_OFFSET UNITYSDK_OFFSET(0xE024C20)

inline static constexpr unsigned int Class_1_D902165F458B1BE5___c_TypeDefinitionIndex = 60005;

class Class_1_D902165F458B1BE5___c : public ::System::Object
{
public:
	static ::Class_1_D902165F458B1BE5___c** StaticGet___9()
	{
		return (::Class_1_D902165F458B1BE5___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D902165F458B1BE5___c_TypeDefinitionIndex)->GetStaticField(0x8480);
	}
	static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__4_0()
	{
		return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D902165F458B1BE5___c_TypeDefinitionIndex)->GetStaticField(0x8488);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D902165F458B1BE5___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D902165F458B1BE5___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _get_IsValid_b__4_0(::RPG::Client::GridFightRole* role)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_1_D902165F458B1BE5___C__GET_ISVALID_B__4_0_OFFSET))(this, role);
	}
};
