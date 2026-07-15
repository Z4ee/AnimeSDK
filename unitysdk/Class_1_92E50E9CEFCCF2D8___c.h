#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class IPromise; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_92E50E9CEFCCF2D8___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17985B70)
#define CLASS_1_92E50E9CEFCCF2D8___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17985BB0)
#define CLASS_1_92E50E9CEFCCF2D8___C___PLAYSTORY_B__4_0_OFFSET UNITYSDK_OFFSET(0x17985BC0)

inline static constexpr unsigned int Class_1_92E50E9CEFCCF2D8___c_TypeDefinitionIndex = 64402;

class Class_1_92E50E9CEFCCF2D8___c : public ::System::Object
{
public:
	static ::Class_1_92E50E9CEFCCF2D8___c** StaticGet___9()
	{
		return (::Class_1_92E50E9CEFCCF2D8___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_92E50E9CEFCCF2D8___c_TypeDefinitionIndex)->GetStaticField(0x68330);
	}
	static ::System::Func_1<::RPG::Client::Promises::IPromise*>** StaticGet___9__4_0()
	{
		return (::System::Func_1<::RPG::Client::Promises::IPromise*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_92E50E9CEFCCF2D8___c_TypeDefinitionIndex)->GetStaticField(0x68338);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_92E50E9CEFCCF2D8___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92E50E9CEFCCF2D8___C__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* __PlayStory_b__4_0()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92E50E9CEFCCF2D8___C___PLAYSTORY_B__4_0_OFFSET))(this);
	}
};
