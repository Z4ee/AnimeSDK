#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_83C56BD9A06FA6EA.h"
#include "unitysdk/Struct_2_EAC1BB0F093534A5.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class FiveDimConveyorConfig; }

#define CLASS_1_9324CB691D9B68D5_METHOD_1_432FD8E998DA8C05_OFFSET UNITYSDK_OFFSET(0x17DE6CE0)
#define CLASS_1_9324CB691D9B68D5_METHOD_1_C1EF38A6AF3FEDFF_OFFSET UNITYSDK_OFFSET(0x17DE6E70)
#define CLASS_1_9324CB691D9B68D5__CTOR_OFFSET UNITYSDK_OFFSET(0x17DE7080)

inline static constexpr unsigned int Class_1_9324CB691D9B68D5_TypeDefinitionIndex = 39292;

class Class_1_9324CB691D9B68D5 : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimConveyorConfig* Field_1_0; // 0x10
	::Struct_2_83C56BD9A06FA6EA Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9324CB691D9B68D5__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_432FD8E998DA8C05(::Struct_2_EAC1BB0F093534A5 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Struct_2_EAC1BB0F093534A5, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9324CB691D9B68D5_METHOD_1_432FD8E998DA8C05_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_1_C1EF38A6AF3FEDFF(::Struct_2_EAC1BB0F093534A5 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Struct_2_EAC1BB0F093534A5, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9324CB691D9B68D5_METHOD_1_C1EF38A6AF3FEDFF_OFFSET))(this, a1, a2, a3);
	}
};
