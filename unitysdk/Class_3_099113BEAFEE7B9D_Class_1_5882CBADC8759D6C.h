#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NapRenderer;
namespace NPCCrowd::Avatar { class PartRendererOverrideInfo; }

#define CLASS_3_099113BEAFEE7B9D_CLASS_1_5882CBADC8759D6C_METHOD_1_1A035713330B5C19_OFFSET UNITYSDK_OFFSET(0x17510320)
#define CLASS_3_099113BEAFEE7B9D_CLASS_1_5882CBADC8759D6C__CTOR_OFFSET UNITYSDK_OFFSET(0x17510310)

inline static constexpr unsigned int Class_3_099113BEAFEE7B9D_Class_1_5882CBADC8759D6C_TypeDefinitionIndex = 75697;

class Class_3_099113BEAFEE7B9D_Class_1_5882CBADC8759D6C : public ::System::Object
{
public:
	::NPCCrowd::Avatar::PartRendererOverrideInfo* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_CLASS_1_5882CBADC8759D6C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1A035713330B5C19(::NapRenderer* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::NapRenderer*))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_CLASS_1_5882CBADC8759D6C_METHOD_1_1A035713330B5C19_OFFSET))(this, a1);
	}
};
