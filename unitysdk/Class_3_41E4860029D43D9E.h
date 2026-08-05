#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

namespace MoleMole { class ScreenPlayer; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }

#define CLASS_3_41E4860029D43D9E_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x11EA3440)
#define CLASS_3_41E4860029D43D9E_METHOD_3_6E8E77E17A6ED590_OFFSET UNITYSDK_OFFSET(0x11EA3540)
#define CLASS_3_41E4860029D43D9E_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x11EA35E0)
#define CLASS_3_41E4860029D43D9E_METHOD_3_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x11EA3530)
#define CLASS_3_41E4860029D43D9E_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x11EA3560)
#define CLASS_3_41E4860029D43D9E_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x11EA3520)
#define CLASS_3_41E4860029D43D9E_METHOD_3_FB306D946BF229A1_OFFSET UNITYSDK_OFFSET(0x11EA3550)
#define CLASS_3_41E4860029D43D9E_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x11EA3210)
#define CLASS_3_41E4860029D43D9E__CCTOR_OFFSET UNITYSDK_OFFSET(0x11EA3490)
#define CLASS_3_41E4860029D43D9E__CTOR_OFFSET UNITYSDK_OFFSET(0x11EA3510)

inline static constexpr unsigned int Class_3_41E4860029D43D9E_TypeDefinitionIndex = 66072;

class Class_3_41E4860029D43D9E : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_4 = 0xA4; // 0x0
	::System::String* Field_3_7; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::ScreenPlayer*>*>* Field_3_1; // 0x50
	::UnityEngine::Renderer* Field_3_5; // 0x58
	::System::UInt32 Field_3_0; // 0x60
	::System::Boolean Field_3_6; // 0x64

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_41E4860029D43D9E__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_41E4860029D43D9E__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_41E4860029D43D9E_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_41E4860029D43D9E_GETCLASSID_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_41E4860029D43D9E_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_3_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_41E4860029D43D9E_METHOD_3_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::UnityEngine::Renderer* Method_3_6E8E77E17A6ED590()
	{
		return ((::UnityEngine::Renderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_41E4860029D43D9E_METHOD_3_6E8E77E17A6ED590_OFFSET))(this);
	}

	::System::Void Method_3_FB306D946BF229A1(::UnityEngine::Renderer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_3_41E4860029D43D9E_METHOD_3_FB306D946BF229A1_OFFSET))(this, a1);
	}

	static ::Class_3_41E4860029D43D9E* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_41E4860029D43D9E*(*)())((::PBYTE)hIl2Cpp + CLASS_3_41E4860029D43D9E_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_41E4860029D43D9E_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
