#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_553167590F8409E8_METHOD_3_55F575C0E5D8F0DB_OFFSET UNITYSDK_OFFSET(0x1B3F5260)
#define CLASS_3_553167590F8409E8_METHOD_3_FCE92D332F1E367F_OFFSET UNITYSDK_OFFSET(0x1B3F5220)
#define CLASS_3_553167590F8409E8__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3F5250)

inline static constexpr unsigned int Class_3_553167590F8409E8_TypeDefinitionIndex = 21513;

class Class_3_553167590F8409E8 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_0; // 0x18
	::RPG::GameCore::DynamicFloat* Field_3_1; // 0x20
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_2; // 0x28
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_3; // 0x30
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_553167590F8409E8__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_FCE92D332F1E367F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_553167590F8409E8*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_553167590F8409E8*&))((::PBYTE)hIl2Cpp + CLASS_3_553167590F8409E8_METHOD_3_FCE92D332F1E367F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_55F575C0E5D8F0DB(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_553167590F8409E8* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_553167590F8409E8*))((::PBYTE)hIl2Cpp + CLASS_3_553167590F8409E8_METHOD_3_55F575C0E5D8F0DB_OFFSET))(a1, a2);
	}
};
