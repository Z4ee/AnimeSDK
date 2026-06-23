#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_484;
namespace MoleMole::GalGame { class GalBubbleStoryNode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BFAEABA9F4A2C22B_GETDURATIONINSECEXCEPTCOMMONDELAY_OFFSET UNITYSDK_OFFSET(0x1451BA80)
#define CLASS_1_BFAEABA9F4A2C22B_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x1451B9C0)
#define CLASS_1_BFAEABA9F4A2C22B_METHOD_1_7B13B6DC23C63F9C_OFFSET UNITYSDK_OFFSET(0x1451B9F0)
#define CLASS_1_BFAEABA9F4A2C22B_METHOD_1_861970C5F2C21AB2_OFFSET UNITYSDK_OFFSET(0x1451B920)
#define CLASS_1_BFAEABA9F4A2C22B_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x1451B9D0)
#define CLASS_1_BFAEABA9F4A2C22B__CTOR_OFFSET UNITYSDK_OFFSET(0x1451B890)

inline static constexpr unsigned int Class_1_BFAEABA9F4A2C22B_TypeDefinitionIndex = 87531;

class Class_1_BFAEABA9F4A2C22B : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::GalGame::GalBubbleStoryNode*>* Field_1_0; // 0x10

	::System::Void _ctor(::System::Collections::Generic::List_1<::MoleMole::GalGame::GalBubbleStoryNode*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::GalGame::GalBubbleStoryNode*>*))((::PBYTE)hIl2Cpp + CLASS_1_BFAEABA9F4A2C22B__CTOR_OFFSET))(this, a1);
	}

	::System::Single Method_1_861970C5F2C21AB2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFAEABA9F4A2C22B_METHOD_1_861970C5F2C21AB2_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFAEABA9F4A2C22B_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Int32 Method_1_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFAEABA9F4A2C22B_METHOD_1_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_484* Method_1_7B13B6DC23C63F9C(::System::Int32 a1)
	{
		return ((::Class_0_16E4307DCC419505_484*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BFAEABA9F4A2C22B_METHOD_1_7B13B6DC23C63F9C_OFFSET))(this, a1);
	}

	::System::Single GetDurationInSecExceptCommonDelay(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BFAEABA9F4A2C22B_GETDURATIONINSECEXCEPTCOMMONDELAY_OFFSET))(this, a1);
	}
};
