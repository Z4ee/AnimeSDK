#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIController; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { template <typename T1, typename T2> class Converter_2; }

#define CLASS_1_148FC490588BDD52___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB8D1C40)
#define CLASS_1_148FC490588BDD52___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB8D1C70)
#define CLASS_1_148FC490588BDD52___C___SHOWLAST_B__9_0_OFFSET UNITYSDK_OFFSET(0xB8D1C80)

inline static constexpr unsigned int Class_1_148FC490588BDD52___c_TypeDefinitionIndex = 59866;

class Class_1_148FC490588BDD52___c : public ::System::Object
{
public:
	static ::System::Converter_2<::RPG::Client::UIController*, ::RPG::Client::Promises::IPromise*>** StaticGet___9__9_0()
	{
		return (::System::Converter_2<::RPG::Client::UIController*, ::RPG::Client::Promises::IPromise*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_148FC490588BDD52___c_TypeDefinitionIndex)->GetStaticField(0x414C0);
	}
	static ::Class_1_148FC490588BDD52___c** StaticGet___9()
	{
		return (::Class_1_148FC490588BDD52___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_148FC490588BDD52___c_TypeDefinitionIndex)->GetStaticField(0x414C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_148FC490588BDD52___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_148FC490588BDD52___C__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* __ShowLast_b__9_0(::RPG::Client::UIController* x)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_1_148FC490588BDD52___C___SHOWLAST_B__9_0_OFFSET))(this, x);
	}
};
