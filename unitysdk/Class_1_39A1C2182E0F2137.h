#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/SpikeTrapState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_9DD8A46984F1AFFD;
class Class_2_F47F7A3F5E97970D;
class Class_3_1A92845FAFA5EC77;
namespace UnityEngine { class GameObject; }

#define CLASS_1_39A1C2182E0F2137_DISPOSE_OFFSET UNITYSDK_OFFSET(0x119810F0)
#define CLASS_1_39A1C2182E0F2137_METHOD_1_DC4BBCAA813A5282_OFFSET UNITYSDK_OFFSET(0x119808C0)
#define CLASS_1_39A1C2182E0F2137_METHOD_1_ED5A073D698075C9_OFFSET UNITYSDK_OFFSET(0x11980F70)
#define CLASS_1_39A1C2182E0F2137_METHOD_1_F4A16F59E6DE486B_OFFSET UNITYSDK_OFFSET(0x11980B70)
#define CLASS_1_39A1C2182E0F2137__CTOR_OFFSET UNITYSDK_OFFSET(0x119808B0)

inline static constexpr unsigned int Class_1_39A1C2182E0F2137_TypeDefinitionIndex = 62590;

class Class_1_39A1C2182E0F2137 : public ::System::Object
{
public:
	::Class_2_F47F7A3F5E97970D* Field_1_0; // 0x10
	::Class_3_1A92845FAFA5EC77* Field_1_1; // 0x18

	::System::Void _ctor(::Class_2_F47F7A3F5E97970D* a1, ::Class_3_1A92845FAFA5EC77* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F47F7A3F5E97970D*, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_1_39A1C2182E0F2137__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_DC4BBCAA813A5282(::Class_2_9DD8A46984F1AFFD* a1, ::UnityEngine::GameObject* a2, ::RPG::Client::LittleGame::FiveDim::SpikeTrapState a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::GameObject*, ::RPG::Client::LittleGame::FiveDim::SpikeTrapState))((::PBYTE)hIl2Cpp + CLASS_1_39A1C2182E0F2137_METHOD_1_DC4BBCAA813A5282_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_F4A16F59E6DE486B(::Class_2_9DD8A46984F1AFFD* a1, ::System::Int32 a2, ::System::Int32 a3, ::RPG::Client::LittleGame::FiveDim::SpikeTrapState a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::System::Int32, ::System::Int32, ::RPG::Client::LittleGame::FiveDim::SpikeTrapState))((::PBYTE)hIl2Cpp + CLASS_1_39A1C2182E0F2137_METHOD_1_F4A16F59E6DE486B_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Vector3 Method_1_ED5A073D698075C9(::Class_2_9DD8A46984F1AFFD* a1, ::System::Int32 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_39A1C2182E0F2137_METHOD_1_ED5A073D698075C9_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_39A1C2182E0F2137_DISPOSE_OFFSET))(this);
	}
};
