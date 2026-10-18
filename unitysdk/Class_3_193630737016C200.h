#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CruiseSpeedSignType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_193630737016C200_METHOD_3_292B86D9FDC9A4F5_OFFSET UNITYSDK_OFFSET(0x1D101600)
#define CLASS_3_193630737016C200_METHOD_3_E024E0080A08A9C9_OFFSET UNITYSDK_OFFSET(0x1D101650)
#define CLASS_3_193630737016C200__CTOR_OFFSET UNITYSDK_OFFSET(0x1D101640)

inline static constexpr unsigned int Class_3_193630737016C200_TypeDefinitionIndex = 22864;

class Class_3_193630737016C200 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* AEMCMEKJFAI; // 0x18
	::System::String* KDEFIJKLOFL; // 0x20
	::RPG::GameCore::TargetEvaluator* BPIBFOGDDHD; // 0x28
	::System::String* ECHFEMAFJNN; // 0x30
	::RPG::GameCore::DynamicFloat* JBBEGAPMLGH; // 0x38
	::RPG::GameCore::DynamicFloat* OKNPIGMFMHC; // 0x40
	::RPG::GameCore::CruiseSpeedSignType PDAKLJINMDD; // 0x48
	::System::Boolean EHPEBJEDEBH; // 0x4C
	::System::Boolean HFINICPGGNJ; // 0x4D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_193630737016C200__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_292B86D9FDC9A4F5(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_193630737016C200*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_193630737016C200*&))((::PBYTE)hIl2Cpp + CLASS_3_193630737016C200_METHOD_3_292B86D9FDC9A4F5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_E024E0080A08A9C9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_193630737016C200* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_193630737016C200*))((::PBYTE)hIl2Cpp + CLASS_3_193630737016C200_METHOD_3_E024E0080A08A9C9_OFFSET))(a1, a2);
	}
};
