#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TalkDialogDecorationType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_F5DF6DE08299E9ED_METHOD_3_481800E2ED22AD35_OFFSET UNITYSDK_OFFSET(0x1823E910)
#define CLASS_3_F5DF6DE08299E9ED_METHOD_3_4EB4DD7CBD5AE076_OFFSET UNITYSDK_OFFSET(0x1823E990)
#define CLASS_3_F5DF6DE08299E9ED__CTOR_OFFSET UNITYSDK_OFFSET(0x1823E960)

inline static constexpr unsigned int Class_3_F5DF6DE08299E9ED_TypeDefinitionIndex = 20062;

class Class_3_F5DF6DE08299E9ED : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TalkDialogDecorationType Field_3_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F5DF6DE08299E9ED__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_481800E2ED22AD35(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_F5DF6DE08299E9ED*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_F5DF6DE08299E9ED*&))((::PBYTE)hIl2Cpp + CLASS_3_F5DF6DE08299E9ED_METHOD_3_481800E2ED22AD35_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_4EB4DD7CBD5AE076(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_F5DF6DE08299E9ED* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_F5DF6DE08299E9ED*))((::PBYTE)hIl2Cpp + CLASS_3_F5DF6DE08299E9ED_METHOD_3_4EB4DD7CBD5AE076_OFFSET))(a1, a2);
	}
};
