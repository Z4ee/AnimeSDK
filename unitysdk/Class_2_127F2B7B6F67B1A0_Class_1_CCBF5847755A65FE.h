#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_298;
class Class_2_127F2B7B6F67B1A0_Class_1_CCBF5847755A65FE_Class_1_BCA85D0C1E2BA6F4;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_127F2B7B6F67B1A0_CLASS_1_CCBF5847755A65FE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18B3BCC0)
#define CLASS_2_127F2B7B6F67B1A0_CLASS_1_CCBF5847755A65FE_GET_ISLOADING_OFFSET UNITYSDK_OFFSET(0x18B3C060)
#define CLASS_2_127F2B7B6F67B1A0_CLASS_1_CCBF5847755A65FE_GET_ISREADY_OFFSET UNITYSDK_OFFSET(0x18B3C040)
#define CLASS_2_127F2B7B6F67B1A0_CLASS_1_CCBF5847755A65FE_METHOD_1_0608E01D4DD006F1_OFFSET UNITYSDK_OFFSET(0x18B3BD50)
#define CLASS_2_127F2B7B6F67B1A0_CLASS_1_CCBF5847755A65FE_METHOD_1_0EB441800C124874_OFFSET UNITYSDK_OFFSET(0x18B3B9B0)
#define CLASS_2_127F2B7B6F67B1A0_CLASS_1_CCBF5847755A65FE_METHOD_1_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x18B3BDD0)
#define CLASS_2_127F2B7B6F67B1A0_CLASS_1_CCBF5847755A65FE_METHOD_1_E34D65A3EBA8DAE3_OFFSET UNITYSDK_OFFSET(0x18B3BE40)
#define CLASS_2_127F2B7B6F67B1A0_CLASS_1_CCBF5847755A65FE_SET_ISLOADING_OFFSET UNITYSDK_OFFSET(0x18B3C070)
#define CLASS_2_127F2B7B6F67B1A0_CLASS_1_CCBF5847755A65FE_SET_ISREADY_OFFSET UNITYSDK_OFFSET(0x18B3C050)
#define CLASS_2_127F2B7B6F67B1A0_CLASS_1_CCBF5847755A65FE__CTOR_OFFSET UNITYSDK_OFFSET(0x18B3B9A0)

inline static constexpr unsigned int Class_2_127F2B7B6F67B1A0_Class_1_CCBF5847755A65FE_TypeDefinitionIndex = 57899;

class Class_2_127F2B7B6F67B1A0_Class_1_CCBF5847755A65FE : public ::System::Object
{
public:
	::Class_2_127F2B7B6F67B1A0_Class_1_CCBF5847755A65FE_Class_1_BCA85D0C1E2BA6F4* Field_1_0; // 0x10
	::Class_2_127F2B7B6F67B1A0_Class_1_CCBF5847755A65FE_Class_1_BCA85D0C1E2BA6F4* Field_1_1; // 0x18
	::UnityEngine::GameObject* Field_1_2; // 0x20
	::System::UInt32 Field_1_3; // 0x28
	::System::UInt32 Field_1_4; // 0x2C
	::System::Boolean _IsLoading_k__BackingField; // 0x30
	::System::Boolean _IsReady_k__BackingField; // 0x31

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_CLASS_1_CCBF5847755A65FE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0EB441800C124874(::UnityEngine::GameObject* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_CLASS_1_CCBF5847755A65FE_METHOD_1_0EB441800C124874_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_CLASS_1_CCBF5847755A65FE_DISPOSE_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_298*>* Method_1_0608E01D4DD006F1()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_298*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_CLASS_1_CCBF5847755A65FE_METHOD_1_0608E01D4DD006F1_OFFSET))(this);
	}

	::System::Void Method_1_E34D65A3EBA8DAE3(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_CLASS_1_CCBF5847755A65FE_METHOD_1_E34D65A3EBA8DAE3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_CLASS_1_CCBF5847755A65FE_METHOD_1_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Boolean get_IsReady()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_CLASS_1_CCBF5847755A65FE_GET_ISREADY_OFFSET))(this);
	}

	::System::Void set_IsReady(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_CLASS_1_CCBF5847755A65FE_SET_ISREADY_OFFSET))(this, a1);
	}

	::System::Boolean get_IsLoading()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_CLASS_1_CCBF5847755A65FE_GET_ISLOADING_OFFSET))(this);
	}

	::System::Void set_IsLoading(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_CLASS_1_CCBF5847755A65FE_SET_ISLOADING_OFFSET))(this, a1);
	}
};
