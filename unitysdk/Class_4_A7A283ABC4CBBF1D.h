#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_C73AB3362B307540;
namespace System { class String; }

#define CLASS_4_A7A283ABC4CBBF1D_METHOD_4_539A8EE923394EA7_OFFSET UNITYSDK_OFFSET(0x1CD42C70)
#define CLASS_4_A7A283ABC4CBBF1D_METHOD_4_C0421DF35F714DA6_OFFSET UNITYSDK_OFFSET(0x1CD42BC0)
#define CLASS_4_A7A283ABC4CBBF1D__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD42C30)

inline static constexpr unsigned int Class_4_A7A283ABC4CBBF1D_TypeDefinitionIndex = 20128;

class Class_4_A7A283ABC4CBBF1D : public ::RPG::GameCore::STTaskConfig
{
public:
	::Il2CppArray<::Class_2_C73AB3362B307540*>* HEBOJJJAHEE; // 0x18
	::System::String* INMECGOAEEO; // 0x20
	::System::Single MBPCNEOIKIC; // 0x28
	::System::Single NJIGKOHDINP; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A7A283ABC4CBBF1D__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_C0421DF35F714DA6(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_A7A283ABC4CBBF1D*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_A7A283ABC4CBBF1D*&))((::PBYTE)hIl2Cpp + CLASS_4_A7A283ABC4CBBF1D_METHOD_4_C0421DF35F714DA6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_539A8EE923394EA7(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_A7A283ABC4CBBF1D* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_A7A283ABC4CBBF1D*))((::PBYTE)hIl2Cpp + CLASS_4_A7A283ABC4CBBF1D_METHOD_4_539A8EE923394EA7_OFFSET))(a1, a2);
	}
};
