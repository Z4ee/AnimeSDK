#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ParticleSystem_Particle.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_6A3353FBBA99407C_CLASS_1_FA4172D5B6616996__CTOR_OFFSET UNITYSDK_OFFSET(0x90E9940)

inline static constexpr unsigned int Class_2_6A3353FBBA99407C_Class_1_FA4172D5B6616996_TypeDefinitionIndex = 64422;

class Class_2_6A3353FBBA99407C_Class_1_FA4172D5B6616996 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Vector4>* Field_1_1; // 0x10
	::Il2CppArray<::UnityEngine::ParticleSystem_Particle>* Field_1_0; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Vector4>* Field_1_2; // 0x20

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6A3353FBBA99407C_CLASS_1_FA4172D5B6616996__CTOR_OFFSET))(this, a1);
	}
};
