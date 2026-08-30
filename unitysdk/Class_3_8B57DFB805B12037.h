#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CruiseSpeedSignType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_8B57DFB805B12037_METHOD_3_E024E0080A08A9C9_OFFSET UNITYSDK_OFFSET(0x1CA9D4E0)
#define CLASS_3_8B57DFB805B12037_METHOD_3_F32CA7BD1D486055_OFFSET UNITYSDK_OFFSET(0x1CA9D490)
#define CLASS_3_8B57DFB805B12037__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA9D4D0)

inline static constexpr unsigned int Class_3_8B57DFB805B12037_TypeDefinitionIndex = 22608;

class Class_3_8B57DFB805B12037 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* AEMCMEKJFAI; // 0x18
	::System::String* KDEFIJKLOFL; // 0x20
	::System::String* ECHFEMAFJNN; // 0x28
	::RPG::GameCore::DynamicFloat* OKNPIGMFMHC; // 0x30
	::RPG::GameCore::TargetEvaluator* BPIBFOGDDHD; // 0x38
	::RPG::GameCore::DynamicFloat* JBBEGAPMLGH; // 0x40
	::RPG::GameCore::CruiseSpeedSignType PDAKLJINMDD; // 0x48
	::System::Boolean HFINICPGGNJ; // 0x4C
	::System::Boolean EHPEBJEDEBH; // 0x4D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8B57DFB805B12037__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_F32CA7BD1D486055(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_8B57DFB805B12037*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_8B57DFB805B12037*&))((::PBYTE)hIl2Cpp + CLASS_3_8B57DFB805B12037_METHOD_3_F32CA7BD1D486055_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_E024E0080A08A9C9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_8B57DFB805B12037* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_8B57DFB805B12037*))((::PBYTE)hIl2Cpp + CLASS_3_8B57DFB805B12037_METHOD_3_E024E0080A08A9C9_OFFSET))(a1, a2);
	}
};
