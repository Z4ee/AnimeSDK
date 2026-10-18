#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_2E30C7F086AF0C81_METHOD_3_9B7C85FBDDFDAE6D_OFFSET UNITYSDK_OFFSET(0x1CE6AFB0)
#define CLASS_3_2E30C7F086AF0C81_METHOD_3_F32CA7BD1D486055_OFFSET UNITYSDK_OFFSET(0x1CE6AF70)
#define CLASS_3_2E30C7F086AF0C81__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE6AFA0)

inline static constexpr unsigned int Class_3_2E30C7F086AF0C81_TypeDefinitionIndex = 22591;

class Class_3_2E30C7F086AF0C81 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
	::System::String* GDGJDFJKGIH; // 0x20
	::System::String* IKPJNBBOILP; // 0x28
	::System::Single LJPDKMHJFMM; // 0x30
	::System::Single DANNPGBGOJA; // 0x34
	::RPG::MVector2 FOGKIKPKHAE; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2E30C7F086AF0C81__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_F32CA7BD1D486055(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_2E30C7F086AF0C81*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_2E30C7F086AF0C81*&))((::PBYTE)hIl2Cpp + CLASS_3_2E30C7F086AF0C81_METHOD_3_F32CA7BD1D486055_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9B7C85FBDDFDAE6D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_2E30C7F086AF0C81* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_2E30C7F086AF0C81*))((::PBYTE)hIl2Cpp + CLASS_3_2E30C7F086AF0C81_METHOD_3_9B7C85FBDDFDAE6D_OFFSET))(a1, a2);
	}
};
