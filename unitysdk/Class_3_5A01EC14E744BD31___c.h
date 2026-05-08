#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_29A17F430E183330;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_5A01EC14E744BD31___C_METHOD_1_F9CACB0AE4F2192A_OFFSET UNITYSDK_OFFSET(0x1043AEE0)
#define CLASS_3_5A01EC14E744BD31___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1043AE90)
#define CLASS_3_5A01EC14E744BD31___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1043AED0)

inline static constexpr unsigned int Class_3_5A01EC14E744BD31___c_TypeDefinitionIndex = 76528;

class Class_3_5A01EC14E744BD31___c : public ::System::Object
{
public:
	static ::Class_3_5A01EC14E744BD31___c** StaticGet___9()
	{
		return (::Class_3_5A01EC14E744BD31___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_5A01EC14E744BD31___c_TypeDefinitionIndex)->GetStaticField(0x3E150);
	}
	static ::System::Action_1<::Class_3_29A17F430E183330*>** StaticGet___9__2_0()
	{
		return (::System::Action_1<::Class_3_29A17F430E183330*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_5A01EC14E744BD31___c_TypeDefinitionIndex)->GetStaticField(0x3E158);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_5A01EC14E744BD31___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5A01EC14E744BD31___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F9CACB0AE4F2192A(::Class_3_29A17F430E183330* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_29A17F430E183330*))((::PBYTE)hIl2Cpp + CLASS_3_5A01EC14E744BD31___C_METHOD_1_F9CACB0AE4F2192A_OFFSET))(this, a1);
	}
};
