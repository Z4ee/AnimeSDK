#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A167209E71412818.h"

namespace RPG::Client { class HPBar; }
namespace RPG::Client { class LongPressEvent; }
namespace RPG::Client { class MonoInControlButton; }
namespace RPG::Client { class MonoInControlTip; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_7CD2655E4D1F1FC6_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x18FB65F0)
#define CLASS_2_7CD2655E4D1F1FC6_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x18FB6680)
#define CLASS_2_7CD2655E4D1F1FC6__CCTOR_OFFSET UNITYSDK_OFFSET(0x18FB6AE0)
#define CLASS_2_7CD2655E4D1F1FC6__CTOR_OFFSET UNITYSDK_OFFSET(0x18FB6AD0)

inline static constexpr unsigned int Class_2_7CD2655E4D1F1FC6_TypeDefinitionIndex = 72283;

class Class_2_7CD2655E4D1F1FC6 : public ::Class_1_A167209E71412818
{
public:
	static ::System::String** StaticGet_DJCBDJMACFH()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7CD2655E4D1F1FC6_TypeDefinitionIndex)->GetStaticField(0x65A50);
	}
	::UnityEngine::UI::Button* BMJOOILCNJA; // 0x18
	::UnityEngine::Transform* MBOIEOJKFLD; // 0x20
	::UnityEngine::Transform* DOEKALMGPAO; // 0x28
	::UnityEngine::Animation* NEEAGGOCBGE; // 0x30
	::UnityEngine::UI::Image* FGOGHPDCIHG; // 0x38
	::RPG::Client::LongPressEvent* EGDELDMIPDH; // 0x40
	::UnityEngine::UI::Button* FBCDGDDKKHC; // 0x48
	::UnityEngine::Transform* CPOOIMGAPOC; // 0x50
	::UnityEngine::UI::Text* NOKLBNMJBDN; // 0x58
	::RPG::Client::HPBar* IFOCBEIHFCJ; // 0x60
	::UnityEngine::Transform* LDCEFCMPGGP; // 0x68
	::UnityEngine::Transform* DIFDJEGHOKP; // 0x70
	::UnityEngine::Animation* PMKEBONPGAB; // 0x78
	::UnityEngine::Transform* LMAHPPFLOBK; // 0x80
	::RPG::Client::HPBar* EJLNOEPHIML; // 0x88
	::UnityEngine::UI::Button* LAHOOFIEBKF; // 0x90
	::UnityEngine::UI::Image* PMIBINOLNCM; // 0x98
	::UnityEngine::Transform* GCODHDLEPFJ; // 0xA0
	::UnityEngine::Transform* LDAOBOPBHFA; // 0xA8
	::RPG::Client::LongPressEvent* MJBIBAFGKJG; // 0xB0
	::UnityEngine::Animation* NEPCECJCCDA; // 0xB8
	::UnityEngine::Animation* AGHOAIIFPDA; // 0xC0
	::UnityEngine::UI::Image* PCNKKCKPFAD; // 0xC8
	::UnityEngine::Transform* IMOFKIGMDIC; // 0xD0
	::UnityEngine::Transform* ELPJNCLJLEO; // 0xD8
	::UnityEngine::UI::Image* OOLEAPLDIEA; // 0xE0
	::UnityEngine::Animation* OBPCDNEJFMA; // 0xE8
	::UnityEngine::Transform* JEOGNDCPKNK; // 0xF0
	::UnityEngine::Transform* EDFGFOBDPDE; // 0xF8
	::UnityEngine::Transform* HIIHIIDALBO; // 0x100
	::RPG::Client::MonoInControlTip* DIHLKNEJKEI; // 0x108
	::RPG::Client::MonoInControlButton* OJJMBEGFKBN; // 0x110
	::UnityEngine::UI::Text* MJKDDBJEPGC; // 0x118

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CD2655E4D1F1FC6__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_7CD2655E4D1F1FC6__CCTOR_OFFSET))();
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CD2655E4D1F1FC6_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CD2655E4D1F1FC6_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}
};
