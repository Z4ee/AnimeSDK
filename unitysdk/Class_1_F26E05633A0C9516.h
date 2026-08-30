#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define CLASS_1_F26E05633A0C9516_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18543DE0)
#define CLASS_1_F26E05633A0C9516_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x18543B50)
#define CLASS_1_F26E05633A0C9516_METHOD_1_1709D3280A2D3A51_OFFSET UNITYSDK_OFFSET(0x18544550)
#define CLASS_1_F26E05633A0C9516_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x18543B40)
#define CLASS_1_F26E05633A0C9516_METHOD_1_E59D1BA4D2E00CB7_OFFSET UNITYSDK_OFFSET(0x185444A0)
#define CLASS_1_F26E05633A0C9516_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x18543D80)
#define CLASS_1_F26E05633A0C9516__CTOR_OFFSET UNITYSDK_OFFSET(0x18543CA0)

inline static constexpr unsigned int Class_1_F26E05633A0C9516_TypeDefinitionIndex = 59933;

class Class_1_F26E05633A0C9516 : public ::System::Object
{
public:
	static ::Class_1_F26E05633A0C9516** StaticGet_FLMODBLFAGD()
	{
		return (::Class_1_F26E05633A0C9516**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F26E05633A0C9516_TypeDefinitionIndex)->GetStaticField(0x39FA0);
	}
	// static const ::System::Int32 ONGMFGCACEH = 0x4; // 0x0
	::UnityEngine::Transform* GKNBCPMJHMN; // 0x10
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Object*, ::UnityEngine::Object*>* NDDIONPOBHK; // 0x18
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Object*, ::System::Collections::Generic::List_1<::UnityEngine::Object*>*>* MFJBNMLBBCF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F26E05633A0C9516__CTOR_OFFSET))(this);
	}

	static ::Class_1_F26E05633A0C9516* Method_1_24748FC20F375725()
	{
		return ((::Class_1_F26E05633A0C9516*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F26E05633A0C9516_METHOD_1_24748FC20F375725_OFFSET))();
	}

	static ::System::Void Method_1_0865E94460F11643()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F26E05633A0C9516_METHOD_1_0865E94460F11643_OFFSET))();
	}

	static ::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F26E05633A0C9516_METHOD_1_F8C7231308CD2C82_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F26E05633A0C9516_DISPOSE_OFFSET))(this);
	}

	static ::System::Void Method_1_E59D1BA4D2E00CB7(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F26E05633A0C9516_METHOD_1_E59D1BA4D2E00CB7_OFFSET))(a1);
	}

	::UnityEngine::Transform* Method_1_1709D3280A2D3A51()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F26E05633A0C9516_METHOD_1_1709D3280A2D3A51_OFFSET))(this);
	}
};
