#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Class_2_1889DE49D24AA9B9_Struct_2_F4FD9E85E8CC031F.h"
#include "unitysdk/RPG/GameCore/SpecialBPDisplayStyle.h"

class Class_1_8D1F4CBFE61774F3;
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client { class RPGAnimationEvent; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_1889DE49D24AA9B9_GET_BPSTYLE_OFFSET UNITYSDK_OFFSET(0x11B45FB0)
#define CLASS_2_1889DE49D24AA9B9_METHOD_2_078D85152011B919_1_OFFSET UNITYSDK_OFFSET(0x11B45990)
#define CLASS_2_1889DE49D24AA9B9_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x11B45930)
#define CLASS_2_1889DE49D24AA9B9_METHOD_2_0B1EB5C9B94BAB66_OFFSET UNITYSDK_OFFSET(0x11B460D0)
#define CLASS_2_1889DE49D24AA9B9_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x11B45FD0)
#define CLASS_2_1889DE49D24AA9B9_METHOD_2_757572C680FEB11C_OFFSET UNITYSDK_OFFSET(0x11B45A00)
#define CLASS_2_1889DE49D24AA9B9_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x11B45F60)
#define CLASS_2_1889DE49D24AA9B9_METHOD_2_ED5DD07AA070C817_OFFSET UNITYSDK_OFFSET(0x11B45D30)
#define CLASS_2_1889DE49D24AA9B9_METHOD_2_F320DB25A31771EE_OFFSET UNITYSDK_OFFSET(0x11B45BE0)
#define CLASS_2_1889DE49D24AA9B9_SET_BPSTYLE_OFFSET UNITYSDK_OFFSET(0x11B45FC0)
#define CLASS_2_1889DE49D24AA9B9__CTOR_OFFSET UNITYSDK_OFFSET(0x11B46180)
#define CLASS_2_1889DE49D24AA9B9___ONEFFECTFINISH_B__19_0_OFFSET UNITYSDK_OFFSET(0x11B461B0)

inline static constexpr unsigned int Class_2_1889DE49D24AA9B9_TypeDefinitionIndex = 65893;

class Class_2_1889DE49D24AA9B9 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::Transform* Field_2_5; // 0x60
	::UnityEngine::UI::Image* Field_2_6; // 0x68
	::UnityEngine::Animation* Field_2_8; // 0x70
	::UnityEngine::Transform* Field_2_2; // 0x78
	::UnityEngine::Transform* Field_2_3; // 0x80
	::Class_2_1889DE49D24AA9B9_Struct_2_F4FD9E85E8CC031F Field_2_10; // 0x88
	::UnityEngine::Transform* Field_2_1; // 0xB0
	::UnityEngine::Transform* Field_2_0; // 0xB8
	::RPG::Client::RPGAnimationEvent* Field_2_11; // 0xC0
	::RPG::Client::PrefabLoadMeta* Field_2_7; // 0xC8
	::UnityEngine::Transform* Field_2_4; // 0xD0
	::RPG::GameCore::SpecialBPDisplayStyle _BPStyle_k__BackingField; // 0xD8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1889DE49D24AA9B9__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1889DE49D24AA9B9_METHOD_2_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_2_078D85152011B919_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1889DE49D24AA9B9_METHOD_2_078D85152011B919_1_OFFSET))(this);
	}

	::System::Void Method_2_757572C680FEB11C(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1889DE49D24AA9B9_METHOD_2_757572C680FEB11C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F320DB25A31771EE(::Class_1_8D1F4CBFE61774F3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8D1F4CBFE61774F3*))((::PBYTE)hIl2Cpp + CLASS_2_1889DE49D24AA9B9_METHOD_2_F320DB25A31771EE_OFFSET))(this, a1);
	}

	::System::Void Method_2_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1889DE49D24AA9B9_METHOD_2_E11AC65AA0DC2249_OFFSET))(this);
	}

	::RPG::GameCore::SpecialBPDisplayStyle get_BPStyle()
	{
		return ((::RPG::GameCore::SpecialBPDisplayStyle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1889DE49D24AA9B9_GET_BPSTYLE_OFFSET))(this);
	}

	::System::Void set_BPStyle(::RPG::GameCore::SpecialBPDisplayStyle value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SpecialBPDisplayStyle))((::PBYTE)hIl2Cpp + CLASS_2_1889DE49D24AA9B9_SET_BPSTYLE_OFFSET))(this, value);
	}

	::System::Void Method_2_ED5DD07AA070C817(::Class_1_8D1F4CBFE61774F3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8D1F4CBFE61774F3*))((::PBYTE)hIl2Cpp + CLASS_2_1889DE49D24AA9B9_METHOD_2_ED5DD07AA070C817_OFFSET))(this, a1);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1889DE49D24AA9B9_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Boolean Method_2_0B1EB5C9B94BAB66()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1889DE49D24AA9B9_METHOD_2_0B1EB5C9B94BAB66_OFFSET))(this);
	}

	::System::Void __OnEffectFinish_b__19_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1889DE49D24AA9B9___ONEFFECTFINISH_B__19_0_OFFSET))(this);
	}
};
