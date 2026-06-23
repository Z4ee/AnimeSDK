#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5AA2BE468EDCE452.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_BAB420867AF96826;
namespace MoleMole::Battle { class Entity; }

#define CLASS_2_EF336857BF04AE56_METHOD_2_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1507CCB0)
#define CLASS_2_EF336857BF04AE56_METHOD_2_AAC75019828D2D67_OFFSET UNITYSDK_OFFSET(0x1507CD00)
#define CLASS_2_EF336857BF04AE56_METHOD_2_FAF2019E9E5ACB8F_OFFSET UNITYSDK_OFFSET(0x1507D6B0)
#define CLASS_2_EF336857BF04AE56__CTOR_OFFSET UNITYSDK_OFFSET(0x1507CC60)

inline static constexpr unsigned int Class_2_EF336857BF04AE56_TypeDefinitionIndex = 72198;

class Class_2_EF336857BF04AE56 : public ::Class_1_5AA2BE468EDCE452
{
public:
	::Il2CppArray<::UnityEngine::RaycastHit>* Field_2_3; // 0x40
	::System::Single Field_2_1; // 0x48
	::System::Single Field_2_0; // 0x4C
	::System::Single Field_2_2; // 0x50

	::System::Void _ctor(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_EF336857BF04AE56__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF336857BF04AE56_METHOD_2_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_AAC75019828D2D67(::Class_1_BAB420867AF96826* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_1_BAB420867AF96826*))((::PBYTE)hIl2Cpp + CLASS_2_EF336857BF04AE56_METHOD_2_AAC75019828D2D67_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_FAF2019E9E5ACB8F(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_EF336857BF04AE56_METHOD_2_FAF2019E9E5ACB8F_OFFSET))(this, a1, a2);
	}
};
