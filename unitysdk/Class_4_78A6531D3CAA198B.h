#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define CLASS_4_78A6531D3CAA198B_METHOD_4_7674442D20817E85_OFFSET UNITYSDK_OFFSET(0x19239320)
#define CLASS_4_78A6531D3CAA198B_METHOD_4_9968A253B5B328D1_OFFSET UNITYSDK_OFFSET(0x19239050)
#define CLASS_4_78A6531D3CAA198B_METHOD_4_BEF80FB83E1A1534_OFFSET UNITYSDK_OFFSET(0x192392A0)
#define CLASS_4_78A6531D3CAA198B_METHOD_4_F1593D4CC137136F_OFFSET UNITYSDK_OFFSET(0x19239120)
#define CLASS_4_78A6531D3CAA198B__CTOR_OFFSET UNITYSDK_OFFSET(0x192390D0)

inline static constexpr unsigned int Class_4_78A6531D3CAA198B_TypeDefinitionIndex = 22885;

class Class_4_78A6531D3CAA198B : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::EnumStatusType Field_4_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_78A6531D3CAA198B__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_9968A253B5B328D1(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_78A6531D3CAA198B*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_78A6531D3CAA198B*&))((::PBYTE)hIl2Cpp + CLASS_4_78A6531D3CAA198B_METHOD_4_9968A253B5B328D1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_F1593D4CC137136F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_78A6531D3CAA198B* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_78A6531D3CAA198B*))((::PBYTE)hIl2Cpp + CLASS_4_78A6531D3CAA198B_METHOD_4_F1593D4CC137136F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_BEF80FB83E1A1534(::SimpleJSON::JSONNode* a1, ::Class_4_78A6531D3CAA198B*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_78A6531D3CAA198B*&))((::PBYTE)hIl2Cpp + CLASS_4_78A6531D3CAA198B_METHOD_4_BEF80FB83E1A1534_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_7674442D20817E85(::SimpleJSON::JSONNode* a1, ::Class_4_78A6531D3CAA198B* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_78A6531D3CAA198B*))((::PBYTE)hIl2Cpp + CLASS_4_78A6531D3CAA198B_METHOD_4_7674442D20817E85_OFFSET))(a1, a2);
	}
};
