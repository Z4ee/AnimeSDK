#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B110E8EDA73E9541_CLASS_1_CD29281E05E9EA13_CLEAR_OFFSET UNITYSDK_OFFSET(0xD3B5450)
#define CLASS_2_B110E8EDA73E9541_CLASS_1_CD29281E05E9EA13_COMPARETO_OFFSET UNITYSDK_OFFSET(0xD3B54F0)
#define CLASS_2_B110E8EDA73E9541_CLASS_1_CD29281E05E9EA13__CTOR_OFFSET UNITYSDK_OFFSET(0xD3B55A0)

inline static constexpr unsigned int Class_2_B110E8EDA73E9541_Class_1_CD29281E05E9EA13_TypeDefinitionIndex = 67537;

class Class_2_B110E8EDA73E9541_Class_1_CD29281E05E9EA13 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_3; // 0x10
	::System::String* Field_1_0; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_4; // 0x20
	::System::Single Field_1_2; // 0x28
	::System::Int32 Field_1_1; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B110E8EDA73E9541_CLASS_1_CD29281E05E9EA13__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B110E8EDA73E9541_CLASS_1_CD29281E05E9EA13_CLEAR_OFFSET))(this);
	}

	::System::Int32 CompareTo(::Class_2_B110E8EDA73E9541_Class_1_CD29281E05E9EA13* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_B110E8EDA73E9541_Class_1_CD29281E05E9EA13*))((::PBYTE)hIl2Cpp + CLASS_2_B110E8EDA73E9541_CLASS_1_CD29281E05E9EA13_COMPARETO_OFFSET))(this, a1);
	}
};
