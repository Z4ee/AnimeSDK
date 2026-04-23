#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FACDDA8DA3FDFF6D;
namespace RPG::GameCore { class ItemConfig; }

#define CLASS_1_89594B6432B76BD8_METHOD_1_F64BF016B0489363_OFFSET UNITYSDK_OFFSET(0x124C2A10)
#define CLASS_1_89594B6432B76BD8__CTOR_OFFSET UNITYSDK_OFFSET(0x124C2AC0)

inline static constexpr unsigned int Class_1_89594B6432B76BD8_TypeDefinitionIndex = 60502;

class Class_1_89594B6432B76BD8 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89594B6432B76BD8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F64BF016B0489363(::Class_1_FACDDA8DA3FDFF6D* a1, ::RPG::GameCore::ItemConfig* a2, ::System::UInt32 a3, ::System::UInt32& a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FACDDA8DA3FDFF6D*, ::RPG::GameCore::ItemConfig*, ::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_89594B6432B76BD8_METHOD_1_F64BF016B0489363_OFFSET))(this, a1, a2, a3, a4);
	}
};
