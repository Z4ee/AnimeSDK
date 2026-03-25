#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_38A71F76592AF3BC.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class AnchorInfo; }

#define CLASS_2_BFB0E4C16B8AFC34_METHOD_2_BFB528607D98C75C_OFFSET UNITYSDK_OFFSET(0xD1A7100)
#define CLASS_2_BFB0E4C16B8AFC34_METHOD_2_EB45FB3C158A0779_OFFSET UNITYSDK_OFFSET(0xD1A6FB0)
#define CLASS_2_BFB0E4C16B8AFC34__CTOR_OFFSET UNITYSDK_OFFSET(0xD1A70F0)

inline static constexpr unsigned int Class_2_BFB0E4C16B8AFC34_TypeDefinitionIndex = 46166;

class Class_2_BFB0E4C16B8AFC34 : public ::Class_1_38A71F76592AF3BC
{
public:
	::RPG::GameCore::AnchorInfo* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFB0E4C16B8AFC34__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_EB45FB3C158A0779(::UnityEngine::Vector3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_BFB0E4C16B8AFC34_METHOD_2_EB45FB3C158A0779_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_BFB528607D98C75C(::UnityEngine::Vector3& P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_BFB0E4C16B8AFC34_METHOD_2_BFB528607D98C75C_OFFSET))(this, P0);
	}
};
