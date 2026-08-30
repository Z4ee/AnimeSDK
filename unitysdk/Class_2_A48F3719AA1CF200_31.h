#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A167209E71412818.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class CustomButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class MonoInControlTip; }
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class HorizontalLayoutGroup; }

#define CLASS_2_A48F3719AA1CF200_31_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15AF9190)
#define CLASS_2_A48F3719AA1CF200_31_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x15AF9420)
#define CLASS_2_A48F3719AA1CF200_31__CTOR_OFFSET UNITYSDK_OFFSET(0x15AF9470)

inline static constexpr unsigned int Class_2_A48F3719AA1CF200_31_TypeDefinitionIndex = 72645;

class Class_2_A48F3719AA1CF200_31 : public ::Class_1_A167209E71412818
{
public:
	::UnityEngine::UI::HorizontalLayoutGroup* HGBFOFJKODN; // 0x18
	::RPG::Client::AnimatorButton* GLKHFCPKIJC; // 0x20
	::RPG::Client::LocalizedText* CADMEMOFOEM; // 0x28
	::RPG::Client::CustomButton* ODBHKKIJNEK; // 0x30
	::RPG::Client::LocalizedText* CEEAKEPIOKL; // 0x38
	::RPG::Client::MonoInControlTip* JFMAOKDHGDP; // 0x40
	::UnityEngine::Transform* PPKIBOIKHLK; // 0x48
	::RPG::Client::CustomButton* MIAMIOELBPE; // 0x50
	::RPG::Client::LocalizedText* GDGCKHKFGKB; // 0x58
	::UnityEngine::Transform* NABMKCEBNOL; // 0x60
	::UnityEngine::Transform* BEDANEIMMDL; // 0x68
	::RPG::Client::CustomButton* GJINCGEJDAG; // 0x70
	::RPG::Client::LocalizedText* LIEPKHCEILC; // 0x78
	::RPG::Client::CustomButton* FPNIIGOJKGG; // 0x80
	::UnityEngine::Transform* BCPCCBKJNMH; // 0x88
	::UnityEngine::Transform* CPJOAFMIGMD; // 0x90
	::RPG::Client::LocalizedText* HDDAJHCLMGF; // 0x98
	::RPG::Client::LocalizedText* LKMGLADGDHP; // 0xA0
	::UnityEngine::Transform* LLMJAEJMJMC; // 0xA8
	::RPG::Client::CustomButton* NJCHEPJPNHF; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A48F3719AA1CF200_31__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A48F3719AA1CF200_31_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::String* Method_2_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A48F3719AA1CF200_31_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
	}
};
