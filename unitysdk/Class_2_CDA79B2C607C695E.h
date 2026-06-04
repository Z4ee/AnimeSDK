#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_2_01E36AFA5FDDCBCA;
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class MonoUIColorSwitcher; }
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_CDA79B2C607C695E_METHOD_2_1B9BAFE25893B138_OFFSET UNITYSDK_OFFSET(0x1372F8E0)
#define CLASS_2_CDA79B2C607C695E_METHOD_2_BD3078E21D74E44F_OFFSET UNITYSDK_OFFSET(0x1372FAD0)
#define CLASS_2_CDA79B2C607C695E_METHOD_2_CC8BA8306EA10C06_OFFSET UNITYSDK_OFFSET(0x1372F880)
#define CLASS_2_CDA79B2C607C695E_METHOD_2_EC2B405D0723571D_OFFSET UNITYSDK_OFFSET(0x1372FA40)
#define CLASS_2_CDA79B2C607C695E__CTOR_OFFSET UNITYSDK_OFFSET(0x1372FB80)
#define CLASS_2_CDA79B2C607C695E__ONBIND_OFFSET UNITYSDK_OFFSET(0x1372F740)
#define CLASS_2_CDA79B2C607C695E___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x1372FBB0)

inline static constexpr unsigned int Class_2_CDA79B2C607C695E_TypeDefinitionIndex = 67512;

class Class_2_CDA79B2C607C695E : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::UnityEngine::UI::Image* Field_2_1; // 0x60
	::RPG::Client::MonoUIColorSwitcher* Field_2_2; // 0x68
	::Class_2_01E36AFA5FDDCBCA* Field_2_3; // 0x70
	::RPG::Client::GridFightRole* Field_2_4; // 0x78
	::UnityEngine::Transform* Field_2_5; // 0x80
	::UnityEngine::UI::Image* Field_2_6; // 0x88

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

	::System::Void Method_2_1B9BAFE25893B138()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDA79B2C607C695E_METHOD_2_1B9BAFE25893B138_OFFSET))(this);
	}

	::System::Void Method_2_EC2B405D0723571D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDA79B2C607C695E_METHOD_2_EC2B405D0723571D_OFFSET))(this);
	}

	::System::Void Method_2_BD3078E21D74E44F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDA79B2C607C695E_METHOD_2_BD3078E21D74E44F_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDA79B2C607C695E___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
