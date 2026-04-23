#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class IPromise; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_02CB8559BDBEC08D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1212E280)
#define CLASS_1_02CB8559BDBEC08D___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1212E2C0)
#define CLASS_1_02CB8559BDBEC08D___C___PLAYSTORY_B__4_0_OFFSET UNITYSDK_OFFSET(0x1212E2D0)

inline static constexpr unsigned int Class_1_02CB8559BDBEC08D___c_TypeDefinitionIndex = 62102;

class Class_1_02CB8559BDBEC08D___c : public ::System::Object
{
public:
	static ::System::Func_1<::RPG::Client::Promises::IPromise*>** StaticGet___9__4_0()
	{
		return (::System::Func_1<::RPG::Client::Promises::IPromise*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_02CB8559BDBEC08D___c_TypeDefinitionIndex)->GetStaticField(0x5CA40);
	}
	static ::Class_1_02CB8559BDBEC08D___c** StaticGet___9()
	{
		return (::Class_1_02CB8559BDBEC08D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_02CB8559BDBEC08D___c_TypeDefinitionIndex)->GetStaticField(0x5CA48);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_02CB8559BDBEC08D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02CB8559BDBEC08D___C__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* __PlayStory_b__4_0()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02CB8559BDBEC08D___C___PLAYSTORY_B__4_0_OFFSET))(this);
	}
};
