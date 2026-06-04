#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/SpikeTrapState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_B9E8C2EEAA5C96EC;
class Class_2_F47F7A3F5E97970D;
class Class_3_1E4F9B0ED3BF21DE;
namespace UnityEngine { class GameObject; }

#define CLASS_1_DDBEEA0300709E0D_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAD3ABF0)
#define CLASS_1_DDBEEA0300709E0D_METHOD_1_8A6EEABF5B847EBC_OFFSET UNITYSDK_OFFSET(0xAD3A610)
#define CLASS_1_DDBEEA0300709E0D_METHOD_1_8AF5889CE210A23E_OFFSET UNITYSDK_OFFSET(0xAD3AAE0)
#define CLASS_1_DDBEEA0300709E0D_METHOD_1_D4640C4CC71A17B4_OFFSET UNITYSDK_OFFSET(0xAD3A7F0)
#define CLASS_1_DDBEEA0300709E0D__CTOR_OFFSET UNITYSDK_OFFSET(0xAD3A600)

inline static constexpr unsigned int Class_1_DDBEEA0300709E0D_TypeDefinitionIndex = 71421;

class Class_1_DDBEEA0300709E0D : public ::System::Object
{
public:
	::Class_3_1E4F9B0ED3BF21DE* Field_1_0; // 0x10
	::Class_2_F47F7A3F5E97970D* Field_1_1; // 0x18

	::System::Void _ctor(::Class_2_F47F7A3F5E97970D* a1, ::Class_3_1E4F9B0ED3BF21DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F47F7A3F5E97970D*, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_1_DDBEEA0300709E0D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_8A6EEABF5B847EBC(::Class_2_B9E8C2EEAA5C96EC* a1, ::UnityEngine::GameObject* a2, ::RPG::Client::LittleGame::FiveDim::SpikeTrapState a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::GameObject*, ::RPG::Client::LittleGame::FiveDim::SpikeTrapState))((::PBYTE)hIl2Cpp + CLASS_1_DDBEEA0300709E0D_METHOD_1_8A6EEABF5B847EBC_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_D4640C4CC71A17B4(::Class_2_B9E8C2EEAA5C96EC* a1, ::System::Int32 a2, ::System::Int32 a3, ::RPG::Client::LittleGame::FiveDim::SpikeTrapState a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::System::Int32, ::System::Int32, ::RPG::Client::LittleGame::FiveDim::SpikeTrapState))((::PBYTE)hIl2Cpp + CLASS_1_DDBEEA0300709E0D_METHOD_1_D4640C4CC71A17B4_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Vector3 Method_1_8AF5889CE210A23E(::Class_2_B9E8C2EEAA5C96EC* a1, ::System::Int32 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DDBEEA0300709E0D_METHOD_1_8AF5889CE210A23E_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DDBEEA0300709E0D_DISPOSE_OFFSET))(this);
	}
};
