#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChenLingSkillRow; }
namespace System { class String; }

#define CLASS_1_97E659ED8D5D259C_5_GET_ID_OFFSET UNITYSDK_OFFSET(0x170D5BF0)
#define CLASS_1_97E659ED8D5D259C_5_METHOD_1_6929C20FCC70C1A3_OFFSET UNITYSDK_OFFSET(0x170D5D10)
#define CLASS_1_97E659ED8D5D259C_5_METHOD_1_AA15CB7E2C24A88A_OFFSET UNITYSDK_OFFSET(0x170D5C70)
#define CLASS_1_97E659ED8D5D259C_5_METHOD_1_D5A560361C3C400D_OFFSET UNITYSDK_OFFSET(0x170D5C10)
#define CLASS_1_97E659ED8D5D259C_5_SET_ID_OFFSET UNITYSDK_OFFSET(0x170D5C00)
#define CLASS_1_97E659ED8D5D259C_5__CTOR_OFFSET UNITYSDK_OFFSET(0x170D5BD0)

inline static constexpr unsigned int Class_1_97E659ED8D5D259C_5_TypeDefinitionIndex = 58712;

class Class_1_97E659ED8D5D259C_5 : public ::System::Object
{
public:
	::System::UInt32 _ID_k__BackingField; // 0x10

	::System::Void _ctor(::RPG::GameCore::ChenLingSkillRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingSkillRow*))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_5__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_5_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_5_SET_ID_OFFSET))(this, a1);
	}

	::RPG::GameCore::ChenLingSkillRow* Method_1_D5A560361C3C400D()
	{
		return ((::RPG::GameCore::ChenLingSkillRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_5_METHOD_1_D5A560361C3C400D_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* Method_1_AA15CB7E2C24A88A()
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_5_METHOD_1_AA15CB7E2C24A88A_OFFSET))(this);
	}

	::System::String* Method_1_6929C20FCC70C1A3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_5_METHOD_1_6929C20FCC70C1A3_OFFSET))(this);
	}
};
