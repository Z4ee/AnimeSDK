#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_5775A4FEC79026BC.h"
#include "unitysdk/RPG/GameCore/ChessModifierEvent.h"

class Class_1_5469D397DAE62876;
class Class_2_DE4AC8AE3B4F2B78;
namespace RPG::GameCore { class SequenceConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_2_DE4AC8AE3B4F2B78_CLASS_4_7667F072E5B7101F_METHOD_4_9F20DC281A8CB83C_OFFSET UNITYSDK_OFFSET(0x111C7110)
#define CLASS_2_DE4AC8AE3B4F2B78_CLASS_4_7667F072E5B7101F_METHOD_4_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x111C77C0)
#define CLASS_2_DE4AC8AE3B4F2B78_CLASS_4_7667F072E5B7101F__CTOR_1_OFFSET UNITYSDK_OFFSET(0x111C7740)
#define CLASS_2_DE4AC8AE3B4F2B78_CLASS_4_7667F072E5B7101F__CTOR_OFFSET UNITYSDK_OFFSET(0x111C76B0)

inline static constexpr unsigned int Class_2_DE4AC8AE3B4F2B78_Class_4_7667F072E5B7101F_TypeDefinitionIndex = 45185;

class Class_2_DE4AC8AE3B4F2B78_Class_4_7667F072E5B7101F : public ::Class_3_5775A4FEC79026BC
{
public:
	::Class_2_DE4AC8AE3B4F2B78* Field_4_0; // 0x30
	::RPG::GameCore::ChessModifierEvent Field_4_3; // 0x38
	::System::Boolean Field_4_2; // 0x3C
	::System::Boolean Field_4_1; // 0x3D

	::System::Void _ctor(::Class_2_DE4AC8AE3B4F2B78* a1, ::System::Boolean a2, ::RPG::GameCore::TaskContext* a3, ::RPG::GameCore::SequenceConfig* a4, ::RPG::GameCore::ChessModifierEvent a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_DE4AC8AE3B4F2B78*, ::System::Boolean, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SequenceConfig*, ::RPG::GameCore::ChessModifierEvent))((::PBYTE)hIl2Cpp + CLASS_2_DE4AC8AE3B4F2B78_CLASS_4_7667F072E5B7101F__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void _ctor_1(::Class_2_DE4AC8AE3B4F2B78* a1, ::System::Boolean a2, ::RPG::GameCore::TaskContext* a3, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>* a4, ::RPG::GameCore::ChessModifierEvent a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_DE4AC8AE3B4F2B78*, ::System::Boolean, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>*, ::RPG::GameCore::ChessModifierEvent))((::PBYTE)hIl2Cpp + CLASS_2_DE4AC8AE3B4F2B78_CLASS_4_7667F072E5B7101F__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_4_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DE4AC8AE3B4F2B78_CLASS_4_7667F072E5B7101F_METHOD_4_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_4_9F20DC281A8CB83C(::Class_1_5469D397DAE62876* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5469D397DAE62876*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DE4AC8AE3B4F2B78_CLASS_4_7667F072E5B7101F_METHOD_4_9F20DC281A8CB83C_OFFSET))(this, a1, a2);
	}
};
