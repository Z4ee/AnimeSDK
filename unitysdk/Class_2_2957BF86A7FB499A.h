#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A167209E71412818.h"

namespace RPG::Client { class CustomButton; }
namespace RPG::Client { class LocalizedText; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_2_2957BF86A7FB499A_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x16315410)
#define CLASS_2_2957BF86A7FB499A_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x16315600)
#define CLASS_2_2957BF86A7FB499A__CTOR_OFFSET UNITYSDK_OFFSET(0x16315670)

inline static constexpr unsigned int Class_2_2957BF86A7FB499A_TypeDefinitionIndex = 72650;

class Class_2_2957BF86A7FB499A : public ::Class_1_A167209E71412818
{
public:
	::UnityEngine::Transform* EDJNKKDHJBO; // 0x18
	::UnityEngine::Transform* NABMKCEBNOL; // 0x20
	::RPG::Client::LocalizedText* LIEPKHCEILC; // 0x28
	::RPG::Client::CustomButton* NNLKPJKDJBP; // 0x30
	::RPG::Client::CustomButton* LFEAAPCBADA; // 0x38
	::RPG::Client::CustomButton* OKJEFKPNIKB; // 0x40
	::RPG::Client::CustomButton* FPNIIGOJKGG; // 0x48
	::RPG::Client::LocalizedText* HDDAJHCLMGF; // 0x50
	::RPG::Client::LocalizedText* CADMEMOFOEM; // 0x58
	::RPG::Client::LocalizedText* NDDEKDDEGAP; // 0x60
	::UnityEngine::Transform* PGFAFAHOBEF; // 0x68
	::RPG::Client::CustomButton* AEJFLBOIKNK; // 0x70
	::RPG::Client::CustomButton* LAHOOFIEBKF; // 0x78
	::UnityEngine::Transform* HJNFHLOBOCM; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2957BF86A7FB499A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2957BF86A7FB499A_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::String* Method_2_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2957BF86A7FB499A_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
	}
};
