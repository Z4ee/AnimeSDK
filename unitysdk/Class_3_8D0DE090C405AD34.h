#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_8D0DE090C405AD34_METHOD_3_292FA0EEF6659E6F_OFFSET UNITYSDK_OFFSET(0x1CB198D0)
#define CLASS_3_8D0DE090C405AD34_METHOD_3_E29CAE0C7AB44E72_OFFSET UNITYSDK_OFFSET(0x1CB19890)
#define CLASS_3_8D0DE090C405AD34__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB198C0)

inline static constexpr unsigned int Class_3_8D0DE090C405AD34_TypeDefinitionIndex = 22903;

class Class_3_8D0DE090C405AD34 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* CCAOGMEFNLB; // 0x18
	::RPG::GameCore::DynamicFloat* FIJLEDEKBJP; // 0x20
	::RPG::GameCore::DynamicFloat* GMDBHJKEAEI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8D0DE090C405AD34__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_E29CAE0C7AB44E72(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_8D0DE090C405AD34*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_8D0DE090C405AD34*&))((::PBYTE)hIl2Cpp + CLASS_3_8D0DE090C405AD34_METHOD_3_E29CAE0C7AB44E72_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_292FA0EEF6659E6F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_8D0DE090C405AD34* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_8D0DE090C405AD34*))((::PBYTE)hIl2Cpp + CLASS_3_8D0DE090C405AD34_METHOD_3_292FA0EEF6659E6F_OFFSET))(a1, a2);
	}
};
