#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameEntityType.h"
#include "unitysdk/RPG/GameCore/LittleGameSmartObjectType.h"
#include "unitysdk/System/Object.h"

class Class_1_97AF24F8EB6B0441;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_938C223DA5C0C9C7_CLEAR_OFFSET UNITYSDK_OFFSET(0x18E29990)
#define CLASS_1_938C223DA5C0C9C7_METHOD_1_29986BDBF21EF100_OFFSET UNITYSDK_OFFSET(0x18E29A20)
#define CLASS_1_938C223DA5C0C9C7_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x18E29B80)
#define CLASS_1_938C223DA5C0C9C7__CTOR_OFFSET UNITYSDK_OFFSET(0x18E29C90)

inline static constexpr unsigned int Class_1_938C223DA5C0C9C7_TypeDefinitionIndex = 38804;

class Class_1_938C223DA5C0C9C7 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_97AF24F8EB6B0441*>* Field_1_0; // 0x10
	::RPG::GameCore::LittleGameSmartObjectType Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x1C
	::System::Int32 Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_938C223DA5C0C9C7__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_938C223DA5C0C9C7_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_29986BDBF21EF100(::RPG::GameCore::LittleGameEntityType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameEntityType))((::PBYTE)hIl2Cpp + CLASS_1_938C223DA5C0C9C7_METHOD_1_29986BDBF21EF100_OFFSET))(this, a1);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_938C223DA5C0C9C7_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}
};
