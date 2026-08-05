#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5CB76677FCD4CE06_Struct_2_CF1754DDA8B382D4.h"
#include "unitysdk/Enum_3_2E8B563F910AABF2.h"
#include "unitysdk/MoleMole/LogicAxis3DInputType.h"
#include "unitysdk/System/Object.h"

class Class_2_0206DD479BB5C906;
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::InputSystem { class Sensor; }

#define CLASS_1_5CB76677FCD4CE06_METHOD_1_09B013582619F7A1_OFFSET UNITYSDK_OFFSET(0x178C4890)
#define CLASS_1_5CB76677FCD4CE06_METHOD_1_60DB74FC4A162B4A_OFFSET UNITYSDK_OFFSET(0x178C4360)
#define CLASS_1_5CB76677FCD4CE06_METHOD_1_7519ACADC6E45E6D_OFFSET UNITYSDK_OFFSET(0x178C4E60)
#define CLASS_1_5CB76677FCD4CE06_METHOD_1_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0x178C3ED0)
#define CLASS_1_5CB76677FCD4CE06_METHOD_1_D21D06748B8350D9_OFFSET UNITYSDK_OFFSET(0x178C4AF0)
#define CLASS_1_5CB76677FCD4CE06_METHOD_1_D799715F2EF979EA_OFFSET UNITYSDK_OFFSET(0x178C5DC0)
#define CLASS_1_5CB76677FCD4CE06_METHOD_1_D80637ACAA691130_1_OFFSET UNITYSDK_OFFSET(0x178C6590)
#define CLASS_1_5CB76677FCD4CE06_METHOD_1_D80637ACAA691130_OFFSET UNITYSDK_OFFSET(0x178C5A10)
#define CLASS_1_5CB76677FCD4CE06_METHOD_1_F03B833C3843920E_1_OFFSET UNITYSDK_OFFSET(0x178C5BA0)
#define CLASS_1_5CB76677FCD4CE06_METHOD_1_F03B833C3843920E_OFFSET UNITYSDK_OFFSET(0x178C6370)
#define CLASS_1_5CB76677FCD4CE06__CCTOR_OFFSET UNITYSDK_OFFSET(0x178C5350)
#define CLASS_1_5CB76677FCD4CE06__CTOR_OFFSET UNITYSDK_OFFSET(0x178C3E30)

inline static constexpr unsigned int Class_1_5CB76677FCD4CE06_TypeDefinitionIndex = 55512;

class Class_1_5CB76677FCD4CE06 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::Enum_3_2E8B563F910AABF2, ::System::Func_1<::UnityEngine::InputSystem::Sensor*>*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::Enum_3_2E8B563F910AABF2, ::System::Func_1<::UnityEngine::InputSystem::Sensor*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5CB76677FCD4CE06_TypeDefinitionIndex)->GetStaticField(0x41810);
	}
	static ::System::Collections::Generic::Dictionary_2<::MoleMole::LogicAxis3DInputType, ::Il2CppArray<::Enum_3_2E8B563F910AABF2>*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::MoleMole::LogicAxis3DInputType, ::Il2CppArray<::Enum_3_2E8B563F910AABF2>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5CB76677FCD4CE06_TypeDefinitionIndex)->GetStaticField(0x41818);
	}
	::System::Collections::Generic::Dictionary_2<::Enum_3_2E8B563F910AABF2, ::Class_2_0206DD479BB5C906*>* Field_1_7; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CB76677FCD4CE06__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5CB76677FCD4CE06__CCTOR_OFFSET))();
	}

	::Class_1_5CB76677FCD4CE06_Struct_2_CF1754DDA8B382D4 Method_1_60DB74FC4A162B4A(::Enum_3_2E8B563F910AABF2 a1, ::System::String* a2)
	{
		return ((::Class_1_5CB76677FCD4CE06_Struct_2_CF1754DDA8B382D4(*)(::PVOID, ::Enum_3_2E8B563F910AABF2, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5CB76677FCD4CE06_METHOD_1_60DB74FC4A162B4A_OFFSET))(this, a1, a2);
	}

	::Class_1_5CB76677FCD4CE06_Struct_2_CF1754DDA8B382D4 Method_1_09B013582619F7A1(::MoleMole::LogicAxis3DInputType a1, ::System::String* a2)
	{
		return ((::Class_1_5CB76677FCD4CE06_Struct_2_CF1754DDA8B382D4(*)(::PVOID, ::MoleMole::LogicAxis3DInputType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5CB76677FCD4CE06_METHOD_1_09B013582619F7A1_OFFSET))(this, a1, a2);
	}

	::Class_1_5CB76677FCD4CE06_Struct_2_CF1754DDA8B382D4 Method_1_D21D06748B8350D9(::MoleMole::LogicAxis3DInputType a1, ::MoleMole::LogicAxis3DInputType a2, ::System::String* a3)
	{
		return ((::Class_1_5CB76677FCD4CE06_Struct_2_CF1754DDA8B382D4(*)(::PVOID, ::MoleMole::LogicAxis3DInputType, ::MoleMole::LogicAxis3DInputType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5CB76677FCD4CE06_METHOD_1_D21D06748B8350D9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_7519ACADC6E45E6D(::Enum_3_2E8B563F910AABF2 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_2E8B563F910AABF2, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5CB76677FCD4CE06_METHOD_1_7519ACADC6E45E6D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D80637ACAA691130(::MoleMole::LogicAxis3DInputType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::LogicAxis3DInputType))((::PBYTE)hIl2Cpp + CLASS_1_5CB76677FCD4CE06_METHOD_1_D80637ACAA691130_OFFSET))(this, a1);
	}

	::System::Void Method_1_A27DC2C5A103933A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CB76677FCD4CE06_METHOD_1_A27DC2C5A103933A_OFFSET))(this);
	}

	::System::Void Method_1_D799715F2EF979EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CB76677FCD4CE06_METHOD_1_D799715F2EF979EA_OFFSET))(this);
	}

	::System::Void Method_1_F03B833C3843920E(::Enum_3_2E8B563F910AABF2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_2E8B563F910AABF2))((::PBYTE)hIl2Cpp + CLASS_1_5CB76677FCD4CE06_METHOD_1_F03B833C3843920E_OFFSET))(this, a1);
	}

	::System::Void Method_1_D80637ACAA691130_1(::MoleMole::LogicAxis3DInputType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::LogicAxis3DInputType))((::PBYTE)hIl2Cpp + CLASS_1_5CB76677FCD4CE06_METHOD_1_D80637ACAA691130_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_F03B833C3843920E_1(::Enum_3_2E8B563F910AABF2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_2E8B563F910AABF2))((::PBYTE)hIl2Cpp + CLASS_1_5CB76677FCD4CE06_METHOD_1_F03B833C3843920E_1_OFFSET))(this, a1);
	}
};
