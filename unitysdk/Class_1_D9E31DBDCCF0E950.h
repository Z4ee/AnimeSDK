#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_FD0368737CBF6F9B_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RogueMagicAreaRow; }

#define CLASS_1_D9E31DBDCCF0E950_METHOD_1_1163C5C3169E45FC_OFFSET UNITYSDK_OFFSET(0x1454A0A0)
#define CLASS_1_D9E31DBDCCF0E950_METHOD_1_BF427EFFAD6F483A_OFFSET UNITYSDK_OFFSET(0x1454A010)
#define CLASS_1_D9E31DBDCCF0E950__CTOR_OFFSET UNITYSDK_OFFSET(0x1454A000)

inline static constexpr unsigned int Class_1_D9E31DBDCCF0E950_TypeDefinitionIndex = 64254;

class Class_1_D9E31DBDCCF0E950 : public ::System::Object
{
public:
	::Struct_2_FD0368737CBF6F9B_2 Field_1_0; // 0x10

	::System::Void _ctor(::Struct_2_FD0368737CBF6F9B_2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FD0368737CBF6F9B_2))((::PBYTE)hIl2Cpp + CLASS_1_D9E31DBDCCF0E950__CTOR_OFFSET))(this, a1);
	}

	::System::Object* Method_1_BF427EFFAD6F483A()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9E31DBDCCF0E950_METHOD_1_BF427EFFAD6F483A_OFFSET))(this);
	}

	::RPG::GameCore::RogueMagicAreaRow* Method_1_1163C5C3169E45FC()
	{
		return ((::RPG::GameCore::RogueMagicAreaRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9E31DBDCCF0E950_METHOD_1_1163C5C3169E45FC_OFFSET))(this);
	}
};
