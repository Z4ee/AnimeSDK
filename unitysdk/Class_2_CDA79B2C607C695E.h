#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_2_01E36AFA5FDDCBCA;
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class MonoUIColorSwitcher; }
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_CDA79B2C607C695E_METHOD_2_2340068C22DFE332_OFFSET UNITYSDK_OFFSET(0x172F9CC0)
#define CLASS_2_CDA79B2C607C695E_METHOD_2_CC8BA8306EA10C06_OFFSET UNITYSDK_OFFSET(0x172F9C50)
#define CLASS_2_CDA79B2C607C695E_METHOD_2_E855A974FE0C8866_OFFSET UNITYSDK_OFFSET(0x172F9F80)
#define CLASS_2_CDA79B2C607C695E_METHOD_2_F0D9B6AAFF504D87_OFFSET UNITYSDK_OFFSET(0x172F9EB0)
#define CLASS_2_CDA79B2C607C695E__CTOR_OFFSET UNITYSDK_OFFSET(0x172FA060)
#define CLASS_2_CDA79B2C607C695E__ONBIND_OFFSET UNITYSDK_OFFSET(0x172F9B10)

inline static constexpr unsigned int Class_2_CDA79B2C607C695E_TypeDefinitionIndex = 68993;

class Class_2_CDA79B2C607C695E : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::RPG::Client::MonoUIColorSwitcher* Field_2_1; // 0x60
	::UnityEngine::UI::Image* Field_2_2; // 0x68
	::UnityEngine::UI::Image* Field_2_3; // 0x70
	::UnityEngine::Transform* Field_2_4; // 0x78
	::Class_2_01E36AFA5FDDCBCA* Field_2_5; // 0x80
	::RPG::Client::GridFightRole* Field_2_6; // 0x88

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
