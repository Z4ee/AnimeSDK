#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelStructGameView; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_912CC478F2B21832_CLASS_1_FF552EC3E51F1F4D__CTOR_OFFSET UNITYSDK_OFFSET(0xBB76CD0)

inline static constexpr unsigned int Class_3_912CC478F2B21832_Class_1_FF552EC3E51F1F4D_TypeDefinitionIndex = 76211;

class Class_3_912CC478F2B21832_Class_1_FF552EC3E51F1F4D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*>* EPGHKAJKMKO; // 0x10
	::System::Action* BEKGCBCIODA; // 0x18
	::System::Int32 FEFFLFPMGOH; // 0x20
	::System::Single IAEMAGAKOIC; // 0x24
	::System::Single KOIHMNKNKHM; // 0x28
	::System::Boolean EJILNHIAEFK; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_912CC478F2B21832_CLASS_1_FF552EC3E51F1F4D__CTOR_OFFSET))(this);
	}
};
