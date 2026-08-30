#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_4C501FFF2580446A;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }

#define STRUCT_2_FA7629C824961FD2_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x3B01860)
#define STRUCT_2_FA7629C824961FD2_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0x3B018C0)
#define STRUCT_2_FA7629C824961FD2_METHOD_2_88FDFD429374B36A_OFFSET UNITYSDK_OFFSET(0x3B01970)
#define STRUCT_2_FA7629C824961FD2_METHOD_2_E63F710C44A60FED_OFFSET UNITYSDK_OFFSET(0x3B01910)

inline static constexpr unsigned int Struct_2_FA7629C824961FD2_TypeDefinitionIndex = 57961;

struct alignas(8) Struct_2_FA7629C824961FD2
{
	::Class_1_4C501FFF2580446A* NDJEAPFGBOD; // 0x10
	::System::Collections::Generic::LinkedListNode_1<::RPG::GameCore::GameEntity*>* LKFELOKEOIG; // 0x18

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FA7629C824961FD2_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_2_2A6B87C525933554(::Class_1_4C501FFF2580446A* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4C501FFF2580446A*))((::PBYTE)hIl2Cpp + STRUCT_2_FA7629C824961FD2_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
	}

	::System::Void Method_2_E63F710C44A60FED(::Class_1_4C501FFF2580446A* a1, ::System::Collections::Generic::LinkedListNode_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4C501FFF2580446A*, ::System::Collections::Generic::LinkedListNode_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + STRUCT_2_FA7629C824961FD2_METHOD_2_E63F710C44A60FED_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::LinkedListNode_1<::RPG::GameCore::GameEntity*>* Method_2_88FDFD429374B36A()
	{
		return ((::System::Collections::Generic::LinkedListNode_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FA7629C824961FD2_METHOD_2_88FDFD429374B36A_OFFSET))(this);
	}
};
