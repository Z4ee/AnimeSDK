#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BCCF9BCA86B17EFC.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/Struct_2_5B421F8FFABD4CA3_1.h"

class Class_1_87F855E9737731A7;
class MainCityObjectState_ScriptConfig;
namespace MoleMole { class SceneObjectStateWidget; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Rendering::Universal::Internal { class SceneObjectProxy; }

#define CLASS_2_2441D690A12669A3_METHOD_2_2685B6183E614529_1_OFFSET UNITYSDK_OFFSET(0x127855D0)
#define CLASS_2_2441D690A12669A3_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x12785460)
#define CLASS_2_2441D690A12669A3_METHOD_2_56F437EC27DF16D8_OFFSET UNITYSDK_OFFSET(0x12785540)
#define CLASS_2_2441D690A12669A3_METHOD_2_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0x127851C0)
#define CLASS_2_2441D690A12669A3_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x127856A0)
#define CLASS_2_2441D690A12669A3_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12785550)
#define CLASS_2_2441D690A12669A3_METHOD_2_D88329B1DA27FF73_OFFSET UNITYSDK_OFFSET(0x12785690)
#define CLASS_2_2441D690A12669A3_METHOD_2_DB67EEFB041425EC_OFFSET UNITYSDK_OFFSET(0x127854C0)
#define CLASS_2_2441D690A12669A3__CTOR_OFFSET UNITYSDK_OFFSET(0x12785090)

inline static constexpr unsigned int Class_2_2441D690A12669A3_TypeDefinitionIndex = 79797;

class Class_2_2441D690A12669A3 : public ::Class_1_BCCF9BCA86B17EFC
{
public:
	::MainCityObjectState_ScriptConfig* Field_2_0; // 0x38
	::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy* Field_2_1; // 0x40
	::Foundation::Coroutine::CoroutineHandle Field_2_2; // 0x48

	::System::Void _ctor(::Class_1_87F855E9737731A7* a1, ::MoleMole::SceneObjectStateWidget* a2, ::System::Action_1<::Struct_2_5B421F8FFABD4CA3_1>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_87F855E9737731A7*, ::MoleMole::SceneObjectStateWidget*, ::System::Action_1<::Struct_2_5B421F8FFABD4CA3_1>*))((::PBYTE)hIl2Cpp + CLASS_2_2441D690A12669A3__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_5A124CAF1E48B74F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2441D690A12669A3_METHOD_2_5A124CAF1E48B74F_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2441D690A12669A3_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_DB67EEFB041425EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2441D690A12669A3_METHOD_2_DB67EEFB041425EC_OFFSET))(this);
	}

	::MainCityObjectState_ScriptConfig* Method_2_56F437EC27DF16D8()
	{
		return ((::MainCityObjectState_ScriptConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2441D690A12669A3_METHOD_2_56F437EC27DF16D8_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2441D690A12669A3_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2441D690A12669A3_METHOD_2_2685B6183E614529_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_D88329B1DA27FF73(::MainCityObjectState_ScriptConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MainCityObjectState_ScriptConfig*))((::PBYTE)hIl2Cpp + CLASS_2_2441D690A12669A3_METHOD_2_D88329B1DA27FF73_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2441D690A12669A3_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}
};
