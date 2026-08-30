#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class SkillData; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define CLASS_1_B7E1DFC56842FF79_METHOD_1_7DD8640FA2C8189C_OFFSET UNITYSDK_OFFSET(0xBC9FBD0)
#define CLASS_1_B7E1DFC56842FF79_METHOD_1_9D1F8B204099DEE6_OFFSET UNITYSDK_OFFSET(0xBC9FB40)
#define CLASS_1_B7E1DFC56842FF79_METHOD_1_FEA449C8A4F88665_OFFSET UNITYSDK_OFFSET(0xBC9FC50)
#define CLASS_1_B7E1DFC56842FF79__CTOR_OFFSET UNITYSDK_OFFSET(0xBC9FCE0)

inline static constexpr unsigned int Class_1_B7E1DFC56842FF79_TypeDefinitionIndex = 57822;

class Class_1_B7E1DFC56842FF79 : public ::System::Object
{
public:
	::System::Collections::Generic::Stack_1<::RPG::GameCore::SkillData*>* DMFCMIMHLGD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7E1DFC56842FF79__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9D1F8B204099DEE6(::RPG::GameCore::SkillData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_1_B7E1DFC56842FF79_METHOD_1_9D1F8B204099DEE6_OFFSET))(this, a1);
	}

	::RPG::GameCore::SkillData* Method_1_7DD8640FA2C8189C()
	{
		return ((::RPG::GameCore::SkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7E1DFC56842FF79_METHOD_1_7DD8640FA2C8189C_OFFSET))(this);
	}

	::RPG::GameCore::SkillData* Method_1_FEA449C8A4F88665()
	{
		return ((::RPG::GameCore::SkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7E1DFC56842FF79_METHOD_1_FEA449C8A4F88665_OFFSET))(this);
	}
};
