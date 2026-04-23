#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LevelPedestrianFlowInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_EC8C41D270800CDD_CLASS_1_A145421A7F377A44_METHOD_1_A5CB260716A76CD2_OFFSET UNITYSDK_OFFSET(0xB00BD50)
#define CLASS_1_EC8C41D270800CDD_CLASS_1_A145421A7F377A44__CTOR_OFFSET UNITYSDK_OFFSET(0xB00BC30)

inline static constexpr unsigned int Class_1_EC8C41D270800CDD_Class_1_A145421A7F377A44_TypeDefinitionIndex = 63827;

class Class_1_EC8C41D270800CDD_Class_1_A145421A7F377A44 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::LevelPedestrianFlowInfo*>* Field_1_2; // 0x10
	::Il2CppArray<::System::Single>* Field_1_1; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor(::System::Int32 a1, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelPedestrianFlowInfo*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelPedestrianFlowInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_EC8C41D270800CDD_CLASS_1_A145421A7F377A44__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_A5CB260716A76CD2(::RPG::GameCore::LevelPedestrianFlowInfo*& a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::LevelPedestrianFlowInfo*&))((::PBYTE)hIl2Cpp + CLASS_1_EC8C41D270800CDD_CLASS_1_A145421A7F377A44_METHOD_1_A5CB260716A76CD2_OFFSET))(this, a1);
	}
};
