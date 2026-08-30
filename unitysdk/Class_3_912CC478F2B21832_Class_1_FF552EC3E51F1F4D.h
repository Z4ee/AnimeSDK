#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelStructGameView; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_912CC478F2B21832_CLASS_1_FF552EC3E51F1F4D__CTOR_OFFSET UNITYSDK_OFFSET(0x16B41A70)

inline static constexpr unsigned int Class_3_912CC478F2B21832_Class_1_FF552EC3E51F1F4D_TypeDefinitionIndex = 76210;

class Class_3_912CC478F2B21832_Class_1_FF552EC3E51F1F4D : public ::System::Object
{
public:
	::System::Action* BEKGCBCIODA; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*>* EPGHKAJKMKO; // 0x18
	::System::Single IAEMAGAKOIC; // 0x20
	::System::Boolean EJILNHIAEFK; // 0x24
	::System::Int32 FEFFLFPMGOH; // 0x28
	::System::Single KOIHMNKNKHM; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_912CC478F2B21832_CLASS_1_FF552EC3E51F1F4D__CTOR_OFFSET))(this);
	}
};
