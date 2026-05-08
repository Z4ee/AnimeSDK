#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NapRenderer;
namespace NPCCrowd::Avatar { class PartRendererOverrideInfo; }

#define CLASS_3_41A27529628F742C_CLASS_1_5882CBADC8759D6C_METHOD_1_1A035713330B5C19_OFFSET UNITYSDK_OFFSET(0x12CF30A0)
#define CLASS_3_41A27529628F742C_CLASS_1_5882CBADC8759D6C__CTOR_OFFSET UNITYSDK_OFFSET(0x12CF3090)

inline static constexpr unsigned int Class_3_41A27529628F742C_Class_1_5882CBADC8759D6C_TypeDefinitionIndex = 68647;

class Class_3_41A27529628F742C_Class_1_5882CBADC8759D6C : public ::System::Object
{
public:
	::NPCCrowd::Avatar::PartRendererOverrideInfo* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_CLASS_1_5882CBADC8759D6C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1A035713330B5C19(::NapRenderer* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::NapRenderer*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_CLASS_1_5882CBADC8759D6C_METHOD_1_1A035713330B5C19_OFFSET))(this, a1);
	}
};
