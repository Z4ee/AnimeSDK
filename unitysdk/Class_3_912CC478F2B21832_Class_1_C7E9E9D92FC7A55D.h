#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/ComponentInvisibleReason.h"
#include "unitysdk/System/Object.h"

class Class_3_912CC478F2B21832_Class_1_C7E9E9D92FC7A55D_Class_1_D7782D5751A02331;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_912CC478F2B21832_CLASS_1_C7E9E9D92FC7A55D_GET_DITHERALPHAVALUE_OFFSET UNITYSDK_OFFSET(0xBB7AC50)
#define CLASS_3_912CC478F2B21832_CLASS_1_C7E9E9D92FC7A55D_METHOD_1_1704737317B0104F_OFFSET UNITYSDK_OFFSET(0xBB60E10)
#define CLASS_3_912CC478F2B21832_CLASS_1_C7E9E9D92FC7A55D_METHOD_1_3687D051FE70798C_OFFSET UNITYSDK_OFFSET(0xBB7AC70)
#define CLASS_3_912CC478F2B21832_CLASS_1_C7E9E9D92FC7A55D_METHOD_1_40CA0153415CA16D_1_OFFSET UNITYSDK_OFFSET(0xBB62000)
#define CLASS_3_912CC478F2B21832_CLASS_1_C7E9E9D92FC7A55D_METHOD_1_40CA0153415CA16D_OFFSET UNITYSDK_OFFSET(0xBB61F90)
#define CLASS_3_912CC478F2B21832_CLASS_1_C7E9E9D92FC7A55D_METHOD_1_50D6A7C67ED3EDC7_OFFSET UNITYSDK_OFFSET(0xBB61C80)
#define CLASS_3_912CC478F2B21832_CLASS_1_C7E9E9D92FC7A55D_METHOD_1_A4D3A57C337A0C72_OFFSET UNITYSDK_OFFSET(0xBB60CB0)
#define CLASS_3_912CC478F2B21832_CLASS_1_C7E9E9D92FC7A55D_METHOD_1_B49E8DD4FCC707D2_OFFSET UNITYSDK_OFFSET(0xBB60C50)
#define CLASS_3_912CC478F2B21832_CLASS_1_C7E9E9D92FC7A55D_METHOD_1_B7592B2BDF345A00_OFFSET UNITYSDK_OFFSET(0xBB61160)
#define CLASS_3_912CC478F2B21832_CLASS_1_C7E9E9D92FC7A55D_METHOD_1_DFC9B50DB6240D49_OFFSET UNITYSDK_OFFSET(0xBB7ADA0)
#define CLASS_3_912CC478F2B21832_CLASS_1_C7E9E9D92FC7A55D_SET_DITHERALPHAVALUE_OFFSET UNITYSDK_OFFSET(0xBB7AC60)
#define CLASS_3_912CC478F2B21832_CLASS_1_C7E9E9D92FC7A55D__CTOR_OFFSET UNITYSDK_OFFSET(0xBB62360)

inline static constexpr unsigned int Class_3_912CC478F2B21832_Class_1_C7E9E9D92FC7A55D_TypeDefinitionIndex = 76208;

class Class_3_912CC478F2B21832_Class_1_C7E9E9D92FC7A55D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_3_912CC478F2B21832_Class_1_C7E9E9D92FC7A55D_Class_1_D7782D5751A02331*>* IEDCPLLIBHO; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::LittleGame::FiveDim::ComponentInvisibleReason>* IIEMHLCPMOA; // 0x18
	::System::Single _DitherAlphaValue_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_912CC478F2B21832_CLASS_1_C7E9E9D92FC7A55D__CTOR_OFFSET))(this);
	}

	::System::Single get_DitherAlphaValue()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_912CC478F2B21832_CLASS_1_C7E9E9D92FC7A55D_GET_DITHERALPHAVALUE_OFFSET))(this);
	}

	::System::Void set_DitherAlphaValue(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_912CC478F2B21832_CLASS_1_C7E9E9D92FC7A55D_SET_DITHERALPHAVALUE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_B49E8DD4FCC707D2(::RPG::Client::LittleGame::FiveDim::ComponentInvisibleReason a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::ComponentInvisibleReason))((::PBYTE)hIl2Cpp + CLASS_3_912CC478F2B21832_CLASS_1_C7E9E9D92FC7A55D_METHOD_1_B49E8DD4FCC707D2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_B7592B2BDF345A00()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_912CC478F2B21832_CLASS_1_C7E9E9D92FC7A55D_METHOD_1_B7592B2BDF345A00_OFFSET))(this);
	}

	::System::Void Method_1_1704737317B0104F(::RPG::Client::LittleGame::FiveDim::ComponentInvisibleReason a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::ComponentInvisibleReason, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_912CC478F2B21832_CLASS_1_C7E9E9D92FC7A55D_METHOD_1_1704737317B0104F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_A4D3A57C337A0C72(::RPG::Client::LittleGame::FiveDim::ComponentInvisibleReason a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::ComponentInvisibleReason, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_912CC478F2B21832_CLASS_1_C7E9E9D92FC7A55D_METHOD_1_A4D3A57C337A0C72_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_40CA0153415CA16D(::RPG::Client::LittleGame::FiveDim::ComponentInvisibleReason a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::ComponentInvisibleReason))((::PBYTE)hIl2Cpp + CLASS_3_912CC478F2B21832_CLASS_1_C7E9E9D92FC7A55D_METHOD_1_40CA0153415CA16D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_40CA0153415CA16D_1(::RPG::Client::LittleGame::FiveDim::ComponentInvisibleReason a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::ComponentInvisibleReason))((::PBYTE)hIl2Cpp + CLASS_3_912CC478F2B21832_CLASS_1_C7E9E9D92FC7A55D_METHOD_1_40CA0153415CA16D_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_50D6A7C67ED3EDC7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_912CC478F2B21832_CLASS_1_C7E9E9D92FC7A55D_METHOD_1_50D6A7C67ED3EDC7_OFFSET))(this, a1);
	}

	::Class_3_912CC478F2B21832_Class_1_C7E9E9D92FC7A55D_Class_1_D7782D5751A02331* Method_1_DFC9B50DB6240D49(::RPG::Client::LittleGame::FiveDim::ComponentInvisibleReason a1)
	{
		return ((::Class_3_912CC478F2B21832_Class_1_C7E9E9D92FC7A55D_Class_1_D7782D5751A02331*(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::ComponentInvisibleReason))((::PBYTE)hIl2Cpp + CLASS_3_912CC478F2B21832_CLASS_1_C7E9E9D92FC7A55D_METHOD_1_DFC9B50DB6240D49_OFFSET))(this, a1);
	}

	::Class_3_912CC478F2B21832_Class_1_C7E9E9D92FC7A55D_Class_1_D7782D5751A02331* Method_1_3687D051FE70798C(::RPG::Client::LittleGame::FiveDim::ComponentInvisibleReason a1)
	{
		return ((::Class_3_912CC478F2B21832_Class_1_C7E9E9D92FC7A55D_Class_1_D7782D5751A02331*(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::ComponentInvisibleReason))((::PBYTE)hIl2Cpp + CLASS_3_912CC478F2B21832_CLASS_1_C7E9E9D92FC7A55D_METHOD_1_3687D051FE70798C_OFFSET))(this, a1);
	}
};
