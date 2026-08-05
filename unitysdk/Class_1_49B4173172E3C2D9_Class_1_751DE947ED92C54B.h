#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::Framework { class Node; }
namespace ParadoxNotion { class HierarchyTree_Element; }

#define CLASS_1_49B4173172E3C2D9_CLASS_1_751DE947ED92C54B_METHOD_1_53A5ADE5DBF5FFC5_OFFSET UNITYSDK_OFFSET(0x15F08690)
#define CLASS_1_49B4173172E3C2D9_CLASS_1_751DE947ED92C54B__CTOR_OFFSET UNITYSDK_OFFSET(0x15F08680)

inline static constexpr unsigned int Class_1_49B4173172E3C2D9_Class_1_751DE947ED92C54B_TypeDefinitionIndex = 60380;

class Class_1_49B4173172E3C2D9_Class_1_751DE947ED92C54B : public ::System::Object
{
public:
	::NodeCanvas::Framework::Node* Field_1_0; // 0x10
	::ParadoxNotion::HierarchyTree_Element* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49B4173172E3C2D9_CLASS_1_751DE947ED92C54B__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_53A5ADE5DBF5FFC5()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49B4173172E3C2D9_CLASS_1_751DE947ED92C54B_METHOD_1_53A5ADE5DBF5FFC5_OFFSET))(this);
	}
};
