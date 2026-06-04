#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_522E2B05E54D073B;
namespace System { class String; }

#define CLASS_4_A7A283ABC4CBBF1D_METHOD_4_539A8EE923394EA7_OFFSET UNITYSDK_OFFSET(0x199839E0)
#define CLASS_4_A7A283ABC4CBBF1D_METHOD_4_8C07D9C793444934_OFFSET UNITYSDK_OFFSET(0x199838C0)
#define CLASS_4_A7A283ABC4CBBF1D__CTOR_OFFSET UNITYSDK_OFFSET(0x19983960)

inline static constexpr unsigned int Class_4_A7A283ABC4CBBF1D_TypeDefinitionIndex = 18999;

class Class_4_A7A283ABC4CBBF1D : public ::RPG::GameCore::STTaskConfig
{
public:
	::Il2CppArray<::Class_2_522E2B05E54D073B*>* Field_4_0; // 0x18
	::System::String* Field_4_1; // 0x20
	::System::Single Field_4_2; // 0x28
	::System::Single Field_4_3; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A7A283ABC4CBBF1D__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_8C07D9C793444934(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_A7A283ABC4CBBF1D*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_A7A283ABC4CBBF1D*&))((::PBYTE)hIl2Cpp + CLASS_4_A7A283ABC4CBBF1D_METHOD_4_8C07D9C793444934_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_539A8EE923394EA7(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_A7A283ABC4CBBF1D* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_A7A283ABC4CBBF1D*))((::PBYTE)hIl2Cpp + CLASS_4_A7A283ABC4CBBF1D_METHOD_4_539A8EE923394EA7_OFFSET))(a1, a2);
	}
};
