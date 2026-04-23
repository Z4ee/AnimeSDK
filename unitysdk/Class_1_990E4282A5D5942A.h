#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_7C1A8A123B7D94EB;
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }

#define CLASS_1_990E4282A5D5942A_METHOD_1_09988A7106CA7D81_OFFSET UNITYSDK_OFFSET(0xA54ED10)
#define CLASS_1_990E4282A5D5942A_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA54F6E0)
#define CLASS_1_990E4282A5D5942A_METHOD_1_60A1EBE4AA36C891_OFFSET UNITYSDK_OFFSET(0xA54ECA0)
#define CLASS_1_990E4282A5D5942A_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xA54F740)
#define CLASS_1_990E4282A5D5942A_METHOD_1_C96B3AC44895CFEB_OFFSET UNITYSDK_OFFSET(0xA54EAD0)
#define CLASS_1_990E4282A5D5942A__CCTOR_OFFSET UNITYSDK_OFFSET(0xA54F7F0)
#define CLASS_1_990E4282A5D5942A__CTOR_OFFSET UNITYSDK_OFFSET(0xA54F7B0)

inline static constexpr unsigned int Class_1_990E4282A5D5942A_TypeDefinitionIndex = 47895;

class Class_1_990E4282A5D5942A : public ::System::Object
{
public:
	static ::UnityEngine::Camera** StaticGet_Field_1_0()
	{
		return (::UnityEngine::Camera**)Il2CppClass::FromTypeDefinitionIndex(Class_1_990E4282A5D5942A_TypeDefinitionIndex)->GetStaticField(0x6B320);
	}
	static ::System::Comparison_1<::Class_1_7C1A8A123B7D94EB*>** StaticGet_Field_1_3()
	{
		return (::System::Comparison_1<::Class_1_7C1A8A123B7D94EB*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_990E4282A5D5942A_TypeDefinitionIndex)->GetStaticField(0x6B328);
	}
	static ::UnityEngine::Vector3* StaticGet_Field_1_1()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Class_1_990E4282A5D5942A_TypeDefinitionIndex)->GetStaticField(0x11C60);
	}
	static ::UnityEngine::Vector3* StaticGet_Field_1_2()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Class_1_990E4282A5D5942A_TypeDefinitionIndex)->GetStaticField(0x11C6C);
	}
	::System::Collections::Generic::List_1<::Class_1_7C1A8A123B7D94EB*>* Field_1_4; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_990E4282A5D5942A__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_990E4282A5D5942A__CCTOR_OFFSET))();
	}

	static ::System::Int32 Method_1_C96B3AC44895CFEB(::Class_1_7C1A8A123B7D94EB* a1, ::Class_1_7C1A8A123B7D94EB* a2)
	{
		return ((::System::Int32(*)(::Class_1_7C1A8A123B7D94EB*, ::Class_1_7C1A8A123B7D94EB*))((::PBYTE)hIl2Cpp + CLASS_1_990E4282A5D5942A_METHOD_1_C96B3AC44895CFEB_OFFSET))(a1, a2);
	}

	::System::Void Method_1_60A1EBE4AA36C891(::Class_1_7C1A8A123B7D94EB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7C1A8A123B7D94EB*))((::PBYTE)hIl2Cpp + CLASS_1_990E4282A5D5942A_METHOD_1_60A1EBE4AA36C891_OFFSET))(this, a1);
	}

	::System::Void Method_1_09988A7106CA7D81(::UnityEngine::Camera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CLASS_1_990E4282A5D5942A_METHOD_1_09988A7106CA7D81_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_990E4282A5D5942A_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_990E4282A5D5942A_METHOD_1_9681042564541CD6_OFFSET))(this);
	}
};
