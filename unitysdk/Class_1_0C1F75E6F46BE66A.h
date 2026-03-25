#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FACDDA8DA3FDFF6D;
namespace RPG::GameCore { class ItemConfig; }

#define CLASS_1_0C1F75E6F46BE66A_METHOD_1_9F84B83B14547C1E_OFFSET UNITYSDK_OFFSET(0x8DE9610)
#define CLASS_1_0C1F75E6F46BE66A_METHOD_1_BAA18923E8E1A68B_OFFSET UNITYSDK_OFFSET(0x8DE99D0)
#define CLASS_1_0C1F75E6F46BE66A__CTOR_OFFSET UNITYSDK_OFFSET(0x8DE9A50)

inline static constexpr unsigned int Class_1_0C1F75E6F46BE66A_TypeDefinitionIndex = 53369;

class Class_1_0C1F75E6F46BE66A : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C1F75E6F46BE66A__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_9F84B83B14547C1E(::Class_1_FACDDA8DA3FDFF6D* a1, ::RPG::GameCore::ItemConfig* a2, ::System::UInt32 a3, ::System::UInt32& a4, ::System::UInt32& a5, ::System::UInt32& a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FACDDA8DA3FDFF6D*, ::RPG::GameCore::ItemConfig*, ::System::UInt32, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_0C1F75E6F46BE66A_METHOD_1_9F84B83B14547C1E_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_BAA18923E8E1A68B(::Class_1_FACDDA8DA3FDFF6D* a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FACDDA8DA3FDFF6D*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0C1F75E6F46BE66A_METHOD_1_BAA18923E8E1A68B_OFFSET))(this, a1, a2, a3);
	}
};
