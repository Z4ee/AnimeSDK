#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_7C1A8A123B7D94EB;
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }

#define CLASS_1_990E4282A5D5942A_METHOD_1_09040245380F0AF6_OFFSET UNITYSDK_OFFSET(0xC13C290)
#define CLASS_1_990E4282A5D5942A_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xC13CD00)
#define CLASS_1_990E4282A5D5942A_METHOD_1_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0xC13C1E0)
#define CLASS_1_990E4282A5D5942A_METHOD_1_C96B3AC44895CFEB_OFFSET UNITYSDK_OFFSET(0xC13C010)
#define CLASS_1_990E4282A5D5942A_METHOD_1_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0xC13CD60)
#define CLASS_1_990E4282A5D5942A__CCTOR_OFFSET UNITYSDK_OFFSET(0xC13CE40)
#define CLASS_1_990E4282A5D5942A__CTOR_OFFSET UNITYSDK_OFFSET(0xC13CE00)

inline static constexpr unsigned int Class_1_990E4282A5D5942A_TypeDefinitionIndex = 52181;

class Class_1_990E4282A5D5942A : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_1_7C1A8A123B7D94EB*>** StaticGet_ALKBOFECEDE()
	{
		return (::System::Comparison_1<::Class_1_7C1A8A123B7D94EB*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_990E4282A5D5942A_TypeDefinitionIndex)->GetStaticField(0x5EC20);
	}
	static ::UnityEngine::Camera** StaticGet_LJDPPOJNJBA()
	{
		return (::UnityEngine::Camera**)Il2CppClass::FromTypeDefinitionIndex(Class_1_990E4282A5D5942A_TypeDefinitionIndex)->GetStaticField(0x5EC28);
	}
	static ::UnityEngine::Vector3* StaticGet_AGBAEPFJNGK()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Class_1_990E4282A5D5942A_TypeDefinitionIndex)->GetStaticField(0x13640);
	}
	static ::UnityEngine::Vector3* StaticGet_FLLMOJMLOBL()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Class_1_990E4282A5D5942A_TypeDefinitionIndex)->GetStaticField(0x1364C);
	}
	::System::Collections::Generic::List_1<::Class_1_7C1A8A123B7D94EB*>* OBFJAJIAEPF; // 0x10

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

	::System::Void Method_1_5022DB1DC5AA8CB4(::Class_1_7C1A8A123B7D94EB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7C1A8A123B7D94EB*))((::PBYTE)hIl2Cpp + CLASS_1_990E4282A5D5942A_METHOD_1_5022DB1DC5AA8CB4_OFFSET))(this, a1);
	}

	::System::Void Method_1_09040245380F0AF6(::UnityEngine::Camera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CLASS_1_990E4282A5D5942A_METHOD_1_09040245380F0AF6_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_990E4282A5D5942A_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_EBEE0D0A222A8264()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_990E4282A5D5942A_METHOD_1_EBEE0D0A222A8264_OFFSET))(this);
	}
};
