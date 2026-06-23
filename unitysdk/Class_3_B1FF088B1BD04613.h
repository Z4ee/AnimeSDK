#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E87F1D15F1D4AC72.h"

class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_B1FF088B1BD04613_METHOD_3_0C88AB06D46E777A_OFFSET UNITYSDK_OFFSET(0x1277DD10)
#define CLASS_3_B1FF088B1BD04613_METHOD_3_209E85F2CEAC8DDA_OFFSET UNITYSDK_OFFSET(0x1277DF00)
#define CLASS_3_B1FF088B1BD04613_METHOD_3_41EE8711A9018A61_OFFSET UNITYSDK_OFFSET(0x1277DEE0)
#define CLASS_3_B1FF088B1BD04613_METHOD_3_4D10873DB5CC58E4_OFFSET UNITYSDK_OFFSET(0x1277DEF0)
#define CLASS_3_B1FF088B1BD04613_METHOD_3_9CA5A80F6B5B9E01_OFFSET UNITYSDK_OFFSET(0x1277DF10)
#define CLASS_3_B1FF088B1BD04613_METHOD_3_FA1CF250E644264D_OFFSET UNITYSDK_OFFSET(0x1277DC60)
#define CLASS_3_B1FF088B1BD04613__CTOR_OFFSET UNITYSDK_OFFSET(0x1277DE50)

inline static constexpr unsigned int Class_3_B1FF088B1BD04613_TypeDefinitionIndex = 47268;

class Class_3_B1FF088B1BD04613 : public ::Class_2_E87F1D15F1D4AC72
{
public:
	::MoleMole::NotificationBadgeEx* Field_3_1; // 0x28
	::UnityEngine::GameObject* Field_3_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B1FF088B1BD04613__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_FA1CF250E644264D(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_B1FF088B1BD04613_METHOD_3_FA1CF250E644264D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_0C88AB06D46E777A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B1FF088B1BD04613_METHOD_3_0C88AB06D46E777A_OFFSET))(this);
	}

	::MoleMole::NotificationBadgeEx* Method_3_41EE8711A9018A61()
	{
		return ((::MoleMole::NotificationBadgeEx*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B1FF088B1BD04613_METHOD_3_41EE8711A9018A61_OFFSET))(this);
	}

	::System::Void Method_3_4D10873DB5CC58E4(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_3_B1FF088B1BD04613_METHOD_3_4D10873DB5CC58E4_OFFSET))(this, a1);
	}

	::System::Void Method_3_209E85F2CEAC8DDA(::MoleMole::NotificationBadgeEx* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NotificationBadgeEx*))((::PBYTE)hIl2Cpp + CLASS_3_B1FF088B1BD04613_METHOD_3_209E85F2CEAC8DDA_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_3_9CA5A80F6B5B9E01()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B1FF088B1BD04613_METHOD_3_9CA5A80F6B5B9E01_OFFSET))(this);
	}
};
