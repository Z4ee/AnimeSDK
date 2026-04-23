#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

class Class_1_E8ECC4E6ADAEEA66;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_32D72A2D3F3B123D_CLEAR_OFFSET UNITYSDK_OFFSET(0x11B26BD0)
#define CLASS_1_32D72A2D3F3B123D_METHOD_1_481B41C6D4BDA18C_OFFSET UNITYSDK_OFFSET(0x11B26CC0)
#define CLASS_1_32D72A2D3F3B123D__CTOR_OFFSET UNITYSDK_OFFSET(0x11B26DB0)

inline static constexpr unsigned int Class_1_32D72A2D3F3B123D_TypeDefinitionIndex = 53210;

class Class_1_32D72A2D3F3B123D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_E8ECC4E6ADAEEA66*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32D72A2D3F3B123D__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32D72A2D3F3B123D_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_481B41C6D4BDA18C(::RPG::GameCore::GameEntity* a1, ::RPG::MVector3 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::MVector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_32D72A2D3F3B123D_METHOD_1_481B41C6D4BDA18C_OFFSET))(this, a1, a2, a3);
	}
};
