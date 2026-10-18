#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }

#define CLASS_3_543D6A58C82F7516_METHOD_3_ABC666C07EB27386_OFFSET UNITYSDK_OFFSET(0x1CCFC9D0)
#define CLASS_3_543D6A58C82F7516_METHOD_3_E29CAE0C7AB44E72_OFFSET UNITYSDK_OFFSET(0x1CCFC960)
#define CLASS_3_543D6A58C82F7516__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCFC9C0)

inline static constexpr unsigned int Class_3_543D6A58C82F7516_TypeDefinitionIndex = 22679;

class Class_3_543D6A58C82F7516 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicString* FHLJGDGMMHK; // 0x18
	::RPG::GameCore::DynamicFloat* KHBBNDBJAFK; // 0x20
	::RPG::GameCore::PropertyModifyFunction FKCKKFALPBK; // 0x28
	::System::Boolean EPDBNDGLPGH; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_543D6A58C82F7516__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_E29CAE0C7AB44E72(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_543D6A58C82F7516*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_543D6A58C82F7516*&))((::PBYTE)hIl2Cpp + CLASS_3_543D6A58C82F7516_METHOD_3_E29CAE0C7AB44E72_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_ABC666C07EB27386(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_543D6A58C82F7516* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_543D6A58C82F7516*))((::PBYTE)hIl2Cpp + CLASS_3_543D6A58C82F7516_METHOD_3_ABC666C07EB27386_OFFSET))(a1, a2);
	}
};
