#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_305;
class Class_2_9D7D5D9CE0D0D8A4_Class_1_DFFEC5A7684A36E4_Class_1_BCA85D0C1E2BA6F4;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_9D7D5D9CE0D0D8A4_CLASS_1_DFFEC5A7684A36E4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19FB0340)
#define CLASS_2_9D7D5D9CE0D0D8A4_CLASS_1_DFFEC5A7684A36E4_GET_ISLOADING_OFFSET UNITYSDK_OFFSET(0x19FB06C0)
#define CLASS_2_9D7D5D9CE0D0D8A4_CLASS_1_DFFEC5A7684A36E4_GET_ISREADY_OFFSET UNITYSDK_OFFSET(0x19FB06A0)
#define CLASS_2_9D7D5D9CE0D0D8A4_CLASS_1_DFFEC5A7684A36E4_METHOD_1_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x19FB0430)
#define CLASS_2_9D7D5D9CE0D0D8A4_CLASS_1_DFFEC5A7684A36E4_METHOD_1_576EC3A3DFB19F86_OFFSET UNITYSDK_OFFSET(0x19FB03D0)
#define CLASS_2_9D7D5D9CE0D0D8A4_CLASS_1_DFFEC5A7684A36E4_METHOD_1_D880D760B0FD6D2B_OFFSET UNITYSDK_OFFSET(0x19FB0060)
#define CLASS_2_9D7D5D9CE0D0D8A4_CLASS_1_DFFEC5A7684A36E4_METHOD_1_E34D65A3EBA8DAE3_OFFSET UNITYSDK_OFFSET(0x19FB04A0)
#define CLASS_2_9D7D5D9CE0D0D8A4_CLASS_1_DFFEC5A7684A36E4_SET_ISLOADING_OFFSET UNITYSDK_OFFSET(0x19FB06D0)
#define CLASS_2_9D7D5D9CE0D0D8A4_CLASS_1_DFFEC5A7684A36E4_SET_ISREADY_OFFSET UNITYSDK_OFFSET(0x19FB06B0)
#define CLASS_2_9D7D5D9CE0D0D8A4_CLASS_1_DFFEC5A7684A36E4__CTOR_OFFSET UNITYSDK_OFFSET(0x19FB0050)

inline static constexpr unsigned int Class_2_9D7D5D9CE0D0D8A4_Class_1_DFFEC5A7684A36E4_TypeDefinitionIndex = 60720;

class Class_2_9D7D5D9CE0D0D8A4_Class_1_DFFEC5A7684A36E4 : public ::System::Object
{
public:
	::Class_2_9D7D5D9CE0D0D8A4_Class_1_DFFEC5A7684A36E4_Class_1_BCA85D0C1E2BA6F4* FOGCBHGNPGJ; // 0x10
	::UnityEngine::GameObject* MEEJKGEGHNH; // 0x18
	::Class_2_9D7D5D9CE0D0D8A4_Class_1_DFFEC5A7684A36E4_Class_1_BCA85D0C1E2BA6F4* MMDHEJFJHEB; // 0x20
	::System::UInt32 HIGKOOBMLJI; // 0x28
	::System::UInt32 IJCBKDBNCMC; // 0x2C
	::System::Boolean _IsReady_k__BackingField; // 0x30
	::System::Boolean _IsLoading_k__BackingField; // 0x31

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_9D7D5D9CE0D0D8A4_CLASS_1_DFFEC5A7684A36E4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D880D760B0FD6D2B(::UnityEngine::GameObject* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_9D7D5D9CE0D0D8A4_CLASS_1_DFFEC5A7684A36E4_METHOD_1_D880D760B0FD6D2B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D7D5D9CE0D0D8A4_CLASS_1_DFFEC5A7684A36E4_DISPOSE_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_305*>* Method_1_576EC3A3DFB19F86()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_305*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D7D5D9CE0D0D8A4_CLASS_1_DFFEC5A7684A36E4_METHOD_1_576EC3A3DFB19F86_OFFSET))(this);
	}

	::System::Void Method_1_E34D65A3EBA8DAE3(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_9D7D5D9CE0D0D8A4_CLASS_1_DFFEC5A7684A36E4_METHOD_1_E34D65A3EBA8DAE3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9D7D5D9CE0D0D8A4_CLASS_1_DFFEC5A7684A36E4_METHOD_1_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Boolean get_IsReady()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D7D5D9CE0D0D8A4_CLASS_1_DFFEC5A7684A36E4_GET_ISREADY_OFFSET))(this);
	}

	::System::Void set_IsReady(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9D7D5D9CE0D0D8A4_CLASS_1_DFFEC5A7684A36E4_SET_ISREADY_OFFSET))(this, a1);
	}

	::System::Boolean get_IsLoading()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D7D5D9CE0D0D8A4_CLASS_1_DFFEC5A7684A36E4_GET_ISLOADING_OFFSET))(this);
	}

	::System::Void set_IsLoading(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9D7D5D9CE0D0D8A4_CLASS_1_DFFEC5A7684A36E4_SET_ISLOADING_OFFSET))(this, a1);
	}
};
