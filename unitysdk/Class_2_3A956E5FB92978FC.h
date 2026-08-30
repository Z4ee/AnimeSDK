#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_69C8DF7E6F4510F2.h"
#include "unitysdk/Struct_2_82A1455F3BBBFC10.h"

class Class_2_29E838C92FC61B7A;
namespace RPG::Client { class UIController; }

#define CLASS_2_3A956E5FB92978FC_METHOD_2_3027CD8F3A7CA72D_OFFSET UNITYSDK_OFFSET(0x17873B80)
#define CLASS_2_3A956E5FB92978FC__CTOR_OFFSET UNITYSDK_OFFSET(0x17873C60)

inline static constexpr unsigned int Class_2_3A956E5FB92978FC_TypeDefinitionIndex = 64678;

class Class_2_3A956E5FB92978FC : public ::Class_1_69C8DF7E6F4510F2
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A956E5FB92978FC__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_3027CD8F3A7CA72D(::Struct_2_82A1455F3BBBFC10 a1, ::Class_2_29E838C92FC61B7A* a2, ::RPG::Client::UIController* a3, ::RPG::Client::UIController* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_82A1455F3BBBFC10, ::Class_2_29E838C92FC61B7A*, ::RPG::Client::UIController*, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_2_3A956E5FB92978FC_METHOD_2_3027CD8F3A7CA72D_OFFSET))(this, a1, a2, a3, a4);
	}
};
