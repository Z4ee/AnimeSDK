#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BCCF9BCA86B17EFC.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/Struct_2_5B421F8FFABD4CA3_2.h"

class Class_1_87F855E9737731A7;
class MainCityObjectState_ScriptConfig;
class ModifyMaterialProperty;
namespace MoleMole { class SceneObjectStateWidget; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering::Universal::Internal { class SceneObjectProxy; }

#define CLASS_2_1633A8519E6623A0_METHOD_2_2685B6183E614529_1_OFFSET UNITYSDK_OFFSET(0x142B4810)
#define CLASS_2_1633A8519E6623A0_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x142B4680)
#define CLASS_2_1633A8519E6623A0_METHOD_2_56F437EC27DF16D8_OFFSET UNITYSDK_OFFSET(0x142B48B0)
#define CLASS_2_1633A8519E6623A0_METHOD_2_6A0EBEECA245A27C_OFFSET UNITYSDK_OFFSET(0x142B46E0)
#define CLASS_2_1633A8519E6623A0_METHOD_2_7F4EBEC55EBE2D81_OFFSET UNITYSDK_OFFSET(0x142B2F20)
#define CLASS_2_1633A8519E6623A0_METHOD_2_A90C86FD8B781BAE_OFFSET UNITYSDK_OFFSET(0x142B2F80)
#define CLASS_2_1633A8519E6623A0_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x142B48C0)
#define CLASS_2_1633A8519E6623A0_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x142B4780)
#define CLASS_2_1633A8519E6623A0_METHOD_2_D88329B1DA27FF73_OFFSET UNITYSDK_OFFSET(0x142B4770)
#define CLASS_2_1633A8519E6623A0__CTOR_OFFSET UNITYSDK_OFFSET(0x142B2E20)

inline static constexpr unsigned int Class_2_1633A8519E6623A0_TypeDefinitionIndex = 88895;

class Class_2_1633A8519E6623A0 : public ::Class_1_BCCF9BCA86B17EFC
{
public:
	::ModifyMaterialProperty* Field_2_6; // 0x38
	::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy* Field_2_1; // 0x40
	::MainCityObjectState_ScriptConfig* Field_2_2; // 0x48
	::Il2CppArray<::UnityEngine::Material*>* Field_2_7; // 0x50
	::Foundation::Coroutine::CoroutineHandle Field_2_0; // 0x58

	::System::Void _ctor(::Class_1_87F855E9737731A7* a1, ::MoleMole::SceneObjectStateWidget* a2, ::System::Action_1<::Struct_2_5B421F8FFABD4CA3_2>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_87F855E9737731A7*, ::MoleMole::SceneObjectStateWidget*, ::System::Action_1<::Struct_2_5B421F8FFABD4CA3_2>*))((::PBYTE)hIl2Cpp + CLASS_2_1633A8519E6623A0__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_7F4EBEC55EBE2D81()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1633A8519E6623A0_METHOD_2_7F4EBEC55EBE2D81_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1633A8519E6623A0_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_6A0EBEECA245A27C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1633A8519E6623A0_METHOD_2_6A0EBEECA245A27C_OFFSET))(this);
	}

	::System::Void Method_2_D88329B1DA27FF73(::MainCityObjectState_ScriptConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MainCityObjectState_ScriptConfig*))((::PBYTE)hIl2Cpp + CLASS_2_1633A8519E6623A0_METHOD_2_D88329B1DA27FF73_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1633A8519E6623A0_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1633A8519E6623A0_METHOD_2_2685B6183E614529_1_OFFSET))(this, a1);
	}

	::MainCityObjectState_ScriptConfig* Method_2_56F437EC27DF16D8()
	{
		return ((::MainCityObjectState_ScriptConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1633A8519E6623A0_METHOD_2_56F437EC27DF16D8_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1633A8519E6623A0_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_A90C86FD8B781BAE(::ModifyMaterialProperty* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::ModifyMaterialProperty*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1633A8519E6623A0_METHOD_2_A90C86FD8B781BAE_OFFSET))(this, a1, a2);
	}
};
