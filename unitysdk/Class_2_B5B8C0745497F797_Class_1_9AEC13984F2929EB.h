#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B5B8C0745497F797_Class_1_FA4172D5B6616996;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ParticleSystem; }

#define CLASS_2_B5B8C0745497F797_CLASS_1_9AEC13984F2929EB__CTOR_OFFSET UNITYSDK_OFFSET(0x17079350)

inline static constexpr unsigned int Class_2_B5B8C0745497F797_Class_1_9AEC13984F2929EB_TypeDefinitionIndex = 66752;

class Class_2_B5B8C0745497F797_Class_1_9AEC13984F2929EB : public ::System::Object
{
public:
	::UnityEngine::ParticleSystem* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_2_B5B8C0745497F797_Class_1_FA4172D5B6616996*>* Field_1_1; // 0x18

	::System::Void _ctor(::UnityEngine::ParticleSystem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + CLASS_2_B5B8C0745497F797_CLASS_1_9AEC13984F2929EB__CTOR_OFFSET))(this, a1);
	}
};
