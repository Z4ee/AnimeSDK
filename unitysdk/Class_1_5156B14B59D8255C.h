#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MazeBuffType.h"
#include "unitysdk/System/Object.h"

class Class_1_0D66A03493B0F84A;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5156B14B59D8255C__CTOR_OFFSET UNITYSDK_OFFSET(0x17C98210)

inline static constexpr unsigned int Class_1_5156B14B59D8255C_TypeDefinitionIndex = 68386;

class Class_1_5156B14B59D8255C : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_0D66A03493B0F84A*>* Field_1_0; // 0x10
	::RPG::GameCore::MazeBuffType Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5156B14B59D8255C__CTOR_OFFSET))(this);
	}
};
