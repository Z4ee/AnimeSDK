#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_2_78405B03A0233CB3;
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class MonoUIColorSwitcher; }
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_D029B21B05075340_METHOD_2_1B9BAFE25893B138_OFFSET UNITYSDK_OFFSET(0x1177A8B0)
#define CLASS_2_D029B21B05075340_METHOD_2_61113270C4B9E4F4_OFFSET UNITYSDK_OFFSET(0x1177AAA0)
#define CLASS_2_D029B21B05075340_METHOD_2_EC2B405D0723571D_OFFSET UNITYSDK_OFFSET(0x1177AA10)
#define CLASS_2_D029B21B05075340_METHOD_2_ED18CA986A6ECA14_OFFSET UNITYSDK_OFFSET(0x1177A850)
#define CLASS_2_D029B21B05075340__CTOR_OFFSET UNITYSDK_OFFSET(0x1177AB50)
#define CLASS_2_D029B21B05075340__ONBIND_OFFSET UNITYSDK_OFFSET(0x1177A710)
#define CLASS_2_D029B21B05075340___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x1177AB80)

inline static constexpr unsigned int Class_2_D029B21B05075340_TypeDefinitionIndex = 66571;

class Class_2_D029B21B05075340 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::UnityEngine::UI::Image* Field_2_3; // 0x60
	::UnityEngine::UI::Image* Field_2_2; // 0x68
	::RPG::Client::GridFightRole* Field_2_6; // 0x70
	::Class_2_78405B03A0233CB3* Field_2_5; // 0x78
	::UnityEngine::Transform* Field_2_4; // 0x80
	::RPG::Client::MonoUIColorSwitcher* Field_2_1; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D029B21B05075340__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D029B21B05075340__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_ED18CA986A6ECA14(::RPG::Client::GridFightRole* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_D029B21B05075340_METHOD_2_ED18CA986A6ECA14_OFFSET))(this, a1);
	}

	::System::Void Method_2_1B9BAFE25893B138()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D029B21B05075340_METHOD_2_1B9BAFE25893B138_OFFSET))(this);
	}

	::System::Void Method_2_EC2B405D0723571D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D029B21B05075340_METHOD_2_EC2B405D0723571D_OFFSET))(this);
	}

	::System::Void Method_2_61113270C4B9E4F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D029B21B05075340_METHOD_2_61113270C4B9E4F4_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D029B21B05075340___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
