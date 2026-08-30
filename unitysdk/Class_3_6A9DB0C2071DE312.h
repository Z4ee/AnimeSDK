#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BattleBulletCommentItem; }

#define CLASS_3_6A9DB0C2071DE312_METHOD_3_2DFC332AF3EA3B47_OFFSET UNITYSDK_OFFSET(0x1C84E560)
#define CLASS_3_6A9DB0C2071DE312_METHOD_3_7AC9BC507737276A_OFFSET UNITYSDK_OFFSET(0x1C84E5A0)
#define CLASS_3_6A9DB0C2071DE312__CTOR_OFFSET UNITYSDK_OFFSET(0x1C84E590)

inline static constexpr unsigned int Class_3_6A9DB0C2071DE312_TypeDefinitionIndex = 22988;

class Class_3_6A9DB0C2071DE312 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::BattleBulletCommentItem*>* IMDFBNPIFIJ; // 0x18
	::System::Boolean IOBJFEJFLJP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6A9DB0C2071DE312__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2DFC332AF3EA3B47(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_6A9DB0C2071DE312*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_6A9DB0C2071DE312*&))((::PBYTE)hIl2Cpp + CLASS_3_6A9DB0C2071DE312_METHOD_3_2DFC332AF3EA3B47_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7AC9BC507737276A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_6A9DB0C2071DE312* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_6A9DB0C2071DE312*))((::PBYTE)hIl2Cpp + CLASS_3_6A9DB0C2071DE312_METHOD_3_7AC9BC507737276A_OFFSET))(a1, a2);
	}
};
