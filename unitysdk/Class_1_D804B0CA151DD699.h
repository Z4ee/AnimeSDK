#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_83C56BD9A06FA6EA.h"
#include "unitysdk/Struct_2_EAC1BB0F093534A5.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class FiveDimConveyorConfig; }

#define CLASS_1_D804B0CA151DD699_METHOD_1_1D3572FF659F2838_OFFSET UNITYSDK_OFFSET(0x18D4CCA0)
#define CLASS_1_D804B0CA151DD699_METHOD_1_432FD8E998DA8C05_OFFSET UNITYSDK_OFFSET(0x18D4CB10)
#define CLASS_1_D804B0CA151DD699__CTOR_OFFSET UNITYSDK_OFFSET(0x18D4CEE0)

inline static constexpr unsigned int Class_1_D804B0CA151DD699_TypeDefinitionIndex = 40061;

class Class_1_D804B0CA151DD699 : public ::System::Object
{
public:
	::Struct_2_83C56BD9A06FA6EA Field_1_0; // 0x10
	::RPG::GameCore::FiveDimConveyorConfig* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D804B0CA151DD699__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_432FD8E998DA8C05(::Struct_2_EAC1BB0F093534A5 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Struct_2_EAC1BB0F093534A5, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D804B0CA151DD699_METHOD_1_432FD8E998DA8C05_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_1_1D3572FF659F2838(::Struct_2_EAC1BB0F093534A5 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Struct_2_EAC1BB0F093534A5, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D804B0CA151DD699_METHOD_1_1D3572FF659F2838_OFFSET))(this, a1, a2, a3);
	}
};
