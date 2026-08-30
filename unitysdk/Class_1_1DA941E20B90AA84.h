#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MultithreadConfig; }
namespace RPG::GameCore { class ThreadTaskConfig; }

#define CLASS_1_1DA941E20B90AA84_METHOD_1_680F1D3D1CC13596_OFFSET UNITYSDK_OFFSET(0x15414E30)

inline static constexpr unsigned int Class_1_1DA941E20B90AA84_TypeDefinitionIndex = 53816;

class Class_1_1DA941E20B90AA84 : public ::System::Object
{
public:
	static ::RPG::GameCore::MultithreadConfig** StaticGet_KHEDFLAEHLP()
	{
		return (::RPG::GameCore::MultithreadConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1DA941E20B90AA84_TypeDefinitionIndex)->GetStaticField(0x54430);
	}

	static ::RPG::GameCore::ThreadTaskConfig* Method_1_680F1D3D1CC13596(::RPG::GameCore::ThreadTaskType a1)
	{
		return ((::RPG::GameCore::ThreadTaskConfig*(*)(::RPG::GameCore::ThreadTaskType))((::PBYTE)hIl2Cpp + CLASS_1_1DA941E20B90AA84_METHOD_1_680F1D3D1CC13596_OFFSET))(a1);
	}
};
