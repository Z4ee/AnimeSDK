#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_1_80793F5E162C6353_CLASS_1_B601576051DF7BD1_CLEAR_OFFSET UNITYSDK_OFFSET(0x17FEAEF0)
#define CLASS_1_80793F5E162C6353_CLASS_1_B601576051DF7BD1_METHOD_1_5915AF106ADC73EB_OFFSET UNITYSDK_OFFSET(0x17FEAAB0)
#define CLASS_1_80793F5E162C6353_CLASS_1_B601576051DF7BD1_METHOD_1_7B5E3B36CA129EB3_OFFSET UNITYSDK_OFFSET(0x17FE9B70)
#define CLASS_1_80793F5E162C6353_CLASS_1_B601576051DF7BD1__CTOR_OFFSET UNITYSDK_OFFSET(0x17FEAF40)

inline static constexpr unsigned int Class_1_80793F5E162C6353_Class_1_B601576051DF7BD1_TypeDefinitionIndex = 60834;

class Class_1_80793F5E162C6353_Class_1_B601576051DF7BD1 : public ::System::Object
{
public:
	::System::String* GFNAPNFFGPJ; // 0x10
	::UnityEngine::Transform* NNHJMGCALHP; // 0x18
	::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x20
	::System::Boolean DMHJINGNBIH; // 0x28
	::System::Boolean DDEINLDDKJJ; // 0x29
	::System::Boolean LCECMAIHOAE; // 0x2A
	::System::Boolean HDPBMLFMLNC; // 0x2B
	::System::Single MFAFKCOAPKO; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80793F5E162C6353_CLASS_1_B601576051DF7BD1__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_5915AF106ADC73EB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80793F5E162C6353_CLASS_1_B601576051DF7BD1_METHOD_1_5915AF106ADC73EB_OFFSET))(this);
	}

	::System::Void Method_1_7B5E3B36CA129EB3(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_80793F5E162C6353_CLASS_1_B601576051DF7BD1_METHOD_1_7B5E3B36CA129EB3_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80793F5E162C6353_CLASS_1_B601576051DF7BD1_CLEAR_OFFSET))(this);
	}
};
