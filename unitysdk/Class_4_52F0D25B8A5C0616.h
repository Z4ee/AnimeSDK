#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IdleLiveNodeType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define CLASS_4_52F0D25B8A5C0616_METHOD_4_006ABDD1DFAA24CE_OFFSET UNITYSDK_OFFSET(0x1ACCB210)
#define CLASS_4_52F0D25B8A5C0616_METHOD_4_657D584BE35E89A2_OFFSET UNITYSDK_OFFSET(0x1ACCB400)
#define CLASS_4_52F0D25B8A5C0616_METHOD_4_998FE0E79A92DBE5_OFFSET UNITYSDK_OFFSET(0x1ACCB3D0)
#define CLASS_4_52F0D25B8A5C0616_METHOD_4_F1593D4CC137136F_OFFSET UNITYSDK_OFFSET(0x1ACCB250)
#define CLASS_4_52F0D25B8A5C0616__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACCB240)

inline static constexpr unsigned int Class_4_52F0D25B8A5C0616_TypeDefinitionIndex = 23249;

class Class_4_52F0D25B8A5C0616 : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::IdleLiveNodeType Field_4_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_52F0D25B8A5C0616__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_006ABDD1DFAA24CE(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_52F0D25B8A5C0616*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_52F0D25B8A5C0616*&))((::PBYTE)hIl2Cpp + CLASS_4_52F0D25B8A5C0616_METHOD_4_006ABDD1DFAA24CE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_F1593D4CC137136F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_52F0D25B8A5C0616* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_52F0D25B8A5C0616*))((::PBYTE)hIl2Cpp + CLASS_4_52F0D25B8A5C0616_METHOD_4_F1593D4CC137136F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_998FE0E79A92DBE5(::SimpleJSON::JSONNode* a1, ::Class_4_52F0D25B8A5C0616*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_52F0D25B8A5C0616*&))((::PBYTE)hIl2Cpp + CLASS_4_52F0D25B8A5C0616_METHOD_4_998FE0E79A92DBE5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_657D584BE35E89A2(::SimpleJSON::JSONNode* a1, ::Class_4_52F0D25B8A5C0616* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_52F0D25B8A5C0616*))((::PBYTE)hIl2Cpp + CLASS_4_52F0D25B8A5C0616_METHOD_4_657D584BE35E89A2_OFFSET))(a1, a2);
	}
};
