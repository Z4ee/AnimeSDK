#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CLASS_1_F44F35AB58994EE2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC8FE10)
#define CLASS_1_F44F35AB58994EE2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC8FE50)
#define CLASS_1_F44F35AB58994EE2___C__RUN_B__12_0_OFFSET UNITYSDK_OFFSET(0x1EC8FE60)

inline static constexpr unsigned int Class_1_F44F35AB58994EE2___c_TypeDefinitionIndex = 44171;

class Class_1_F44F35AB58994EE2___c : public ::System::Object
{
public:
	static ::System::Action_1<::System::Object*>** StaticGet___9__12_0()
	{
		return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F44F35AB58994EE2___c_TypeDefinitionIndex)->GetStaticField(0x4FBB0);
	}
	static ::Class_1_F44F35AB58994EE2___c** StaticGet___9()
	{
		return (::Class_1_F44F35AB58994EE2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F44F35AB58994EE2___c_TypeDefinitionIndex)->GetStaticField(0x4FBB8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F44F35AB58994EE2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F44F35AB58994EE2___C__CTOR_OFFSET))(this);
	}

	::System::Void _Run_b__12_0(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F44F35AB58994EE2___C__RUN_B__12_0_OFFSET))(this, a1);
	}
};
