#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_5775A4FEC79026BC;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_27518451A20BB161_37___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8BAB9C0)
#define CLASS_3_27518451A20BB161_37___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8BAB9F0)
#define CLASS_3_27518451A20BB161_37___C___EXECUTESEQUENCE_B__2_0_OFFSET UNITYSDK_OFFSET(0x8BABA00)

inline static constexpr unsigned int Class_3_27518451A20BB161_37___c_TypeDefinitionIndex = 42788;

class Class_3_27518451A20BB161_37___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_5775A4FEC79026BC*>** StaticGet___9__2_0()
	{
		return (::System::Action_1<::Class_3_5775A4FEC79026BC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_27518451A20BB161_37___c_TypeDefinitionIndex)->GetStaticField(0x47F00);
	}
	static ::Class_3_27518451A20BB161_37___c** StaticGet___9()
	{
		return (::Class_3_27518451A20BB161_37___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_27518451A20BB161_37___c_TypeDefinitionIndex)->GetStaticField(0x47F08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_37___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_37___C__CTOR_OFFSET))(this);
	}

	::System::Void __ExecuteSequence_b__2_0(::Class_3_5775A4FEC79026BC* cb)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_5775A4FEC79026BC*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_37___C___EXECUTESEQUENCE_B__2_0_OFFSET))(this, cb);
	}
};
