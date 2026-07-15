#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_9.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9558C17B323AF335_GET_BASEADDSEQUENCE_OFFSET UNITYSDK_OFFSET(0x185F7220)
#define CLASS_1_9558C17B323AF335_GET_MULTSEQUENCE_OFFSET UNITYSDK_OFFSET(0x185F7240)
#define CLASS_1_9558C17B323AF335_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x185F7200)
#define CLASS_1_9558C17B323AF335_SET_BASEADDSEQUENCE_OFFSET UNITYSDK_OFFSET(0x185F7230)
#define CLASS_1_9558C17B323AF335_SET_MULTSEQUENCE_OFFSET UNITYSDK_OFFSET(0x185F7250)
#define CLASS_1_9558C17B323AF335_SET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x185F7210)
#define CLASS_1_9558C17B323AF335__CTOR_OFFSET UNITYSDK_OFFSET(0x185F71F0)

inline static constexpr unsigned int Class_1_9558C17B323AF335_TypeDefinitionIndex = 72469;

class Class_1_9558C17B323AF335 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* _MultSequence_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* _BaseAddSequence_k__BackingField; // 0x18
	::Enum_3_71AA90D596A09AC8_9 _PropertyType_k__BackingField; // 0x20

	::System::Void _ctor(::Enum_3_71AA90D596A09AC8_9 a1, ::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_9, ::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*, ::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_9558C17B323AF335__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::Enum_3_71AA90D596A09AC8_9 get_PropertyType()
	{
		return ((::Enum_3_71AA90D596A09AC8_9(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9558C17B323AF335_GET_PROPERTYTYPE_OFFSET))(this);
	}

	::System::Void set_PropertyType(::Enum_3_71AA90D596A09AC8_9 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_9))((::PBYTE)hIl2Cpp + CLASS_1_9558C17B323AF335_SET_PROPERTYTYPE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* get_BaseAddSequence()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9558C17B323AF335_GET_BASEADDSEQUENCE_OFFSET))(this);
	}

	::System::Void set_BaseAddSequence(::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_9558C17B323AF335_SET_BASEADDSEQUENCE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* get_MultSequence()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9558C17B323AF335_GET_MULTSEQUENCE_OFFSET))(this);
	}

	::System::Void set_MultSequence(::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_9558C17B323AF335_SET_MULTSEQUENCE_OFFSET))(this, a1);
	}
};
