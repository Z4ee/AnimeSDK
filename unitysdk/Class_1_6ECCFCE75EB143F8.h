#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateTraitType.h"
#include "unitysdk/System/Object.h"

class Class_1_4F029BEB084628A6;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6ECCFCE75EB143F8_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA544A90)
#define CLASS_1_6ECCFCE75EB143F8__CTOR_OFFSET UNITYSDK_OFFSET(0xA544B30)

inline static constexpr unsigned int Class_1_6ECCFCE75EB143F8_TypeDefinitionIndex = 52361;

class Class_1_6ECCFCE75EB143F8 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_4F029BEB084628A6*>* Field_1_0; // 0x10
	::Class_1_4F029BEB084628A6* Field_1_1; // 0x18
	::RPG::GameCore::FateTraitType Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6ECCFCE75EB143F8__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6ECCFCE75EB143F8_DISPOSE_OFFSET))(this);
	}
};
