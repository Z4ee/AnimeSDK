#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_38A71F76592AF3BC.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class AnchorInfo; }

#define CLASS_2_75B6C5BCCF15B6D2_METHOD_2_B8845F2849FA9A7A_OFFSET UNITYSDK_OFFSET(0xC71B1F0)
#define CLASS_2_75B6C5BCCF15B6D2_METHOD_2_EB45FB3C158A0779_OFFSET UNITYSDK_OFFSET(0xC71B0A0)
#define CLASS_2_75B6C5BCCF15B6D2__CTOR_OFFSET UNITYSDK_OFFSET(0xC71B1E0)

inline static constexpr unsigned int Class_2_75B6C5BCCF15B6D2_TypeDefinitionIndex = 52830;

class Class_2_75B6C5BCCF15B6D2 : public ::Class_1_38A71F76592AF3BC
{
public:
	::RPG::GameCore::AnchorInfo* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_75B6C5BCCF15B6D2__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_EB45FB3C158A0779(::UnityEngine::Vector3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_75B6C5BCCF15B6D2_METHOD_2_EB45FB3C158A0779_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_B8845F2849FA9A7A(::UnityEngine::Vector3& P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_75B6C5BCCF15B6D2_METHOD_2_B8845F2849FA9A7A_OFFSET))(this, P0);
	}
};
