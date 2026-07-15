#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/FateRinCardContentType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_3_EA399F9F90E8B690_METHOD_3_B4C09A5853E73B8A_OFFSET UNITYSDK_OFFSET(0x1AF16820)
#define CLASS_3_EA399F9F90E8B690_METHOD_3_C6C799B3DFBE236B_OFFSET UNITYSDK_OFFSET(0x1AF167E0)
#define CLASS_3_EA399F9F90E8B690__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF16810)

inline static constexpr unsigned int Class_3_EA399F9F90E8B690_TypeDefinitionIndex = 19139;

class Class_3_EA399F9F90E8B690 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* Field_3_0; // 0x18
	::RPG::GameCore::DynamicValueContextScope Field_3_1; // 0x20
	::RPG::GameCore::FateRinCardContentType Field_3_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA399F9F90E8B690__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_C6C799B3DFBE236B(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_EA399F9F90E8B690*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_EA399F9F90E8B690*&))((::PBYTE)hIl2Cpp + CLASS_3_EA399F9F90E8B690_METHOD_3_C6C799B3DFBE236B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B4C09A5853E73B8A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_EA399F9F90E8B690* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_EA399F9F90E8B690*))((::PBYTE)hIl2Cpp + CLASS_3_EA399F9F90E8B690_METHOD_3_B4C09A5853E73B8A_OFFSET))(a1, a2);
	}
};
