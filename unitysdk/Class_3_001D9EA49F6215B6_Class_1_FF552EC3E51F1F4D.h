#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelStructGameView; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_001D9EA49F6215B6_CLASS_1_FF552EC3E51F1F4D__CTOR_OFFSET UNITYSDK_OFFSET(0x17629360)

inline static constexpr unsigned int Class_3_001D9EA49F6215B6_Class_1_FF552EC3E51F1F4D_TypeDefinitionIndex = 72773;

class Class_3_001D9EA49F6215B6_Class_1_FF552EC3E51F1F4D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*>* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x20
	::System::Int32 Field_1_3; // 0x24
	::System::Boolean Field_1_4; // 0x28
	::System::Single Field_1_5; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_001D9EA49F6215B6_CLASS_1_FF552EC3E51F1F4D__CTOR_OFFSET))(this);
	}
};
