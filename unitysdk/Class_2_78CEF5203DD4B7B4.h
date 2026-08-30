#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_78CEF5203DD4B7B4_METHOD_2_0B7AE2333E75CC14_OFFSET UNITYSDK_OFFSET(0x182353C0)
#define CLASS_2_78CEF5203DD4B7B4_METHOD_2_84516C3E776F194F_OFFSET UNITYSDK_OFFSET(0x18235530)
#define CLASS_2_78CEF5203DD4B7B4__CTOR_OFFSET UNITYSDK_OFFSET(0x182355C0)
#define CLASS_2_78CEF5203DD4B7B4__ONBIND_OFFSET UNITYSDK_OFFSET(0x18235210)

inline static constexpr unsigned int Class_2_78CEF5203DD4B7B4_TypeDefinitionIndex = 71820;

class Class_2_78CEF5203DD4B7B4 : public ::Class_1_34917908B7833130
{
public:
	::UnityEngine::Transform* EOIBPJEAFFC; // 0x60
	::UnityEngine::UI::Image* LCPFCFOENPI; // 0x68
	::UnityEngine::UI::Image* HNKPLEBEAKM; // 0x70
	::System::String* MPEGEIGHBOM; // 0x78
	::UnityEngine::Transform* HMCPKNPBAJN; // 0x80
	::System::String* FHFGFIPPKDH; // 0x88
	::System::String* BDACPPLKLGL; // 0x90
	::UnityEngine::Transform* CNPOCMJEMLP; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78CEF5203DD4B7B4__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78CEF5203DD4B7B4__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_0B7AE2333E75CC14(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_78CEF5203DD4B7B4_METHOD_2_0B7AE2333E75CC14_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_84516C3E776F194F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_78CEF5203DD4B7B4_METHOD_2_84516C3E776F194F_OFFSET))(this, a1);
	}
};
