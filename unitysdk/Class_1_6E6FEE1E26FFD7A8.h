#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_43BD383C98B4C0C5_108;
namespace System { class String; }

#define CLASS_1_6E6FEE1E26FFD7A8__CTOR_OFFSET UNITYSDK_OFFSET(0x1D39DBA0)

inline static constexpr unsigned int Class_1_6E6FEE1E26FFD7A8_TypeDefinitionIndex = 42043;

class Class_1_6E6FEE1E26FFD7A8 : public ::System::Object
{
public:
	::System::String* PFAHDCPHKIH; // 0x10
	::Il2CppArray<::Class_1_43BD383C98B4C0C5_108*>* JLFFNDBKBOA; // 0x18
	::RPG::GameCore::FixPoint EMFGEFNHOIB; // 0x20
	::RPG::GameCore::FixPoint MCCIKOBOIEM; // 0x28
	::System::Boolean MBNJBEPIIGJ; // 0x30
	::System::Int32 NJIOMOHBILM; // 0x34
	::UnityEngine::Quaternion NMELCPIOKNO; // 0x38
	::UnityEngine::Vector3 BBFOLEOPPPL; // 0x48
	::RPG::GameCore::FixPoint PJCLCODCBKN; // 0x58
	::System::UInt32 OLGJGECHDOF; // 0x60
	::UnityEngine::Vector3 NEMDKBKDFDN; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E6FEE1E26FFD7A8__CTOR_OFFSET))(this);
	}
};
