#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/IronTombProgressMode.h"

class Class_1_105FC3176DAB4CDC;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define CLASS_2_944300AE575F4E90_METHOD_2_0136226C6C09D487_OFFSET UNITYSDK_OFFSET(0x18F848C0)
#define CLASS_2_944300AE575F4E90_METHOD_2_AC088C028EF9B921_OFFSET UNITYSDK_OFFSET(0x18F84A00)
#define CLASS_2_944300AE575F4E90_METHOD_2_AD1EEF8F6B87D2FC_OFFSET UNITYSDK_OFFSET(0x18F84CE0)
#define CLASS_2_944300AE575F4E90_METHOD_2_C5F2E178DAEB1793_OFFSET UNITYSDK_OFFSET(0x18F847B0)
#define CLASS_2_944300AE575F4E90_METHOD_2_C764E5A33B3C4F12_OFFSET UNITYSDK_OFFSET(0x18F84950)
#define CLASS_2_944300AE575F4E90_METHOD_2_C7E039FB0453A06F_OFFSET UNITYSDK_OFFSET(0x18F84B90)
#define CLASS_2_944300AE575F4E90_METHOD_2_CFB00179EC6A3756_OFFSET UNITYSDK_OFFSET(0x18F849A0)
#define CLASS_2_944300AE575F4E90__CTOR_OFFSET UNITYSDK_OFFSET(0x18F84D50)
#define CLASS_2_944300AE575F4E90__ONBIND_OFFSET UNITYSDK_OFFSET(0x18F845D0)

inline static constexpr unsigned int Class_2_944300AE575F4E90_TypeDefinitionIndex = 68456;

class Class_2_944300AE575F4E90 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::RPG::Client::AnimatorButton* Field_2_0; // 0x60
	::UnityEngine::Transform* Field_2_1; // 0x68
	::UnityEngine::Transform* Field_2_2; // 0x70
	::Class_1_105FC3176DAB4CDC* Field_2_3; // 0x78
	::UnityEngine::Transform* Field_2_4; // 0x80
	::RPG::Client::LocalizedText* Field_2_5; // 0x88
	::RPG::Client::LocalizedText* Field_2_6; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_944300AE575F4E90__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_944300AE575F4E90__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_C5F2E178DAEB1793()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_944300AE575F4E90_METHOD_2_C5F2E178DAEB1793_OFFSET))(this);
	}

	::System::Void Method_2_0136226C6C09D487(::Class_1_105FC3176DAB4CDC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_105FC3176DAB4CDC*))((::PBYTE)hIl2Cpp + CLASS_2_944300AE575F4E90_METHOD_2_0136226C6C09D487_OFFSET))(this, a1);
	}

	::System::Void Method_2_CFB00179EC6A3756(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_944300AE575F4E90_METHOD_2_CFB00179EC6A3756_OFFSET))(this, a1);
	}

	::System::Void Method_2_C7E039FB0453A06F(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_944300AE575F4E90_METHOD_2_C7E039FB0453A06F_OFFSET))(this, a1);
	}

	::System::Void Method_2_AC088C028EF9B921(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_944300AE575F4E90_METHOD_2_AC088C028EF9B921_OFFSET))(this, a1);
	}

	::System::Void Method_2_AD1EEF8F6B87D2FC(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_944300AE575F4E90_METHOD_2_AD1EEF8F6B87D2FC_OFFSET))(this, a1);
	}

	::RPG::GameCore::IronTombProgressMode Method_2_C764E5A33B3C4F12()
	{
		return ((::RPG::GameCore::IronTombProgressMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_944300AE575F4E90_METHOD_2_C764E5A33B3C4F12_OFFSET))(this);
	}
};
