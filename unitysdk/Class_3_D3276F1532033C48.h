#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_D3276F1532033C48_METHOD_3_1F96CACAEB5EDB64_OFFSET UNITYSDK_OFFSET(0x1D2D5920)
#define CLASS_3_D3276F1532033C48_METHOD_3_7F22A781A9156478_OFFSET UNITYSDK_OFFSET(0x1D2D59E0)
#define CLASS_3_D3276F1532033C48__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2D59A0)

inline static constexpr unsigned int Class_3_D3276F1532033C48_TypeDefinitionIndex = 21080;

class Class_3_D3276F1532033C48 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* GFNAPNFFGPJ; // 0x18
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* ABAEIEAEEAI; // 0x28
	::System::Int32 NALMBOOCCIN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3276F1532033C48__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_1F96CACAEB5EDB64(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_D3276F1532033C48*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_D3276F1532033C48*&))((::PBYTE)hIl2Cpp + CLASS_3_D3276F1532033C48_METHOD_3_1F96CACAEB5EDB64_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7F22A781A9156478(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_D3276F1532033C48* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_D3276F1532033C48*))((::PBYTE)hIl2Cpp + CLASS_3_D3276F1532033C48_METHOD_3_7F22A781A9156478_OFFSET))(a1, a2);
	}
};
