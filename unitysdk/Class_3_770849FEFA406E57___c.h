#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TaskConfig; }
namespace System { template <typename T> class Predicate_1; }

#define CLASS_3_770849FEFA406E57___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16939B50)
#define CLASS_3_770849FEFA406E57___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16939B90)
#define CLASS_3_770849FEFA406E57___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x16939BA0)

inline static constexpr unsigned int Class_3_770849FEFA406E57___c_TypeDefinitionIndex = 53350;

class Class_3_770849FEFA406E57___c : public ::System::Object
{
public:
	static ::System::Predicate_1<::RPG::GameCore::TaskConfig*>** StaticGet___9__0_0()
	{
		return (::System::Predicate_1<::RPG::GameCore::TaskConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_770849FEFA406E57___c_TypeDefinitionIndex)->GetStaticField(0x61590);
	}
	static ::Class_3_770849FEFA406E57___c** StaticGet___9()
	{
		return (::Class_3_770849FEFA406E57___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_770849FEFA406E57___c_TypeDefinitionIndex)->GetStaticField(0x61598);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_770849FEFA406E57___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_770849FEFA406E57___C__CTOR_OFFSET))(this);
	}

	::System::Boolean __ctor_b__0_0(::RPG::GameCore::TaskConfig* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TaskConfig*))((::PBYTE)hIl2Cpp + CLASS_3_770849FEFA406E57___C___CTOR_B__0_0_OFFSET))(this, a1);
	}
};
