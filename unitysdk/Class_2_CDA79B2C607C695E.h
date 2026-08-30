#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

class Class_2_01E36AFA5FDDCBCA;
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class MonoUIColorSwitcher; }
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_CDA79B2C607C695E_METHOD_2_2340068C22DFE332_OFFSET UNITYSDK_OFFSET(0x154F6280)
#define CLASS_2_CDA79B2C607C695E_METHOD_2_CC8BA8306EA10C06_OFFSET UNITYSDK_OFFSET(0x154F6210)
#define CLASS_2_CDA79B2C607C695E_METHOD_2_E855A974FE0C8866_OFFSET UNITYSDK_OFFSET(0x154F6540)
#define CLASS_2_CDA79B2C607C695E_METHOD_2_F0D9B6AAFF504D87_OFFSET UNITYSDK_OFFSET(0x154F6470)
#define CLASS_2_CDA79B2C607C695E__CTOR_OFFSET UNITYSDK_OFFSET(0x154F6620)
#define CLASS_2_CDA79B2C607C695E__ONBIND_OFFSET UNITYSDK_OFFSET(0x154F60D0)

inline static constexpr unsigned int Class_2_CDA79B2C607C695E_TypeDefinitionIndex = 72193;

class Class_2_CDA79B2C607C695E : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	::Class_2_01E36AFA5FDDCBCA* LMOMJGDIBBE; // 0x60
	::UnityEngine::UI::Image* GOBAHDNAOLK; // 0x68
	::UnityEngine::Transform* PIDMCEILGKI; // 0x70
	::RPG::Client::MonoUIColorSwitcher* MIALHNKKOED; // 0x78
	::UnityEngine::UI::Image* HPCAJDKDMEI; // 0x80
	::RPG::Client::GridFightRole* IAHCEGHHCKB; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDA79B2C607C695E__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDA79B2C607C695E__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_CC8BA8306EA10C06(::RPG::Client::GridFightRole* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_CDA79B2C607C695E_METHOD_2_CC8BA8306EA10C06_OFFSET))(this, a1);
	}

	::System::Void Method_2_2340068C22DFE332()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDA79B2C607C695E_METHOD_2_2340068C22DFE332_OFFSET))(this);
	}

	::System::Void Method_2_F0D9B6AAFF504D87()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDA79B2C607C695E_METHOD_2_F0D9B6AAFF504D87_OFFSET))(this);
	}

	::System::Void Method_2_E855A974FE0C8866()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDA79B2C607C695E_METHOD_2_E855A974FE0C8866_OFFSET))(this);
	}
};
