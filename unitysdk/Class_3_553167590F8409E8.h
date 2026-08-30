#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_553167590F8409E8_METHOD_3_55F575C0E5D8F0DB_OFFSET UNITYSDK_OFFSET(0x1D343000)
#define CLASS_3_553167590F8409E8_METHOD_3_FCE92D332F1E367F_OFFSET UNITYSDK_OFFSET(0x1D342FC0)
#define CLASS_3_553167590F8409E8__CTOR_OFFSET UNITYSDK_OFFSET(0x1D342FF0)

inline static constexpr unsigned int Class_3_553167590F8409E8_TypeDefinitionIndex = 22075;

class Class_3_553167590F8409E8 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* HKABOILMHMK; // 0x18
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* IGMEGAHKMJK; // 0x20
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* EFNMJOCFKPN; // 0x28
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* FBLPGOPAGJI; // 0x30
	::RPG::GameCore::DynamicFloat* AMHGLPIJMBN; // 0x38

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
