#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_158;
namespace MoleMole::GalGame { class GalBubbleStorySequenceNode; }

#define CLASS_1_2D8D06A30CB1788D__CTOR_OFFSET UNITYSDK_OFFSET(0x122A4660)

inline static constexpr unsigned int Class_1_2D8D06A30CB1788D_TypeDefinitionIndex = 38806;

class Class_1_2D8D06A30CB1788D : public ::System::Object
{
public:
	::MoleMole::GalGame::GalBubbleStorySequenceNode* Field_1_3; // 0x10
	::Class_0_16E4307DCC419505_158* Field_1_0; // 0x18
	::System::Single Field_1_1; // 0x20
	::System::Int32 Field_1_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D8D06A30CB1788D__CTOR_OFFSET))(this);
	}
};
