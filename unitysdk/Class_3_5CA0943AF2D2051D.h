#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define CLASS_3_5CA0943AF2D2051D_METHOD_3_5DDA5735CCA4E60C_OFFSET UNITYSDK_OFFSET(0x190E7E90)
#define CLASS_3_5CA0943AF2D2051D_METHOD_3_A6D862070568AC73_OFFSET UNITYSDK_OFFSET(0x190E7F10)
#define CLASS_3_5CA0943AF2D2051D__CTOR_OFFSET UNITYSDK_OFFSET(0x190E7EE0)

inline static constexpr unsigned int Class_3_5CA0943AF2D2051D_TypeDefinitionIndex = 20242;

class Class_3_5CA0943AF2D2051D : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::System::String*>* Field_3_0; // 0x18
	::RPG::GameCore::DynamicString* Field_3_1; // 0x20
	::System::Boolean Field_3_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5CA0943AF2D2051D__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_5DDA5735CCA4E60C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_5CA0943AF2D2051D*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_5CA0943AF2D2051D*&))((::PBYTE)hIl2Cpp + CLASS_3_5CA0943AF2D2051D_METHOD_3_5DDA5735CCA4E60C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_A6D862070568AC73(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_5CA0943AF2D2051D* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_5CA0943AF2D2051D*))((::PBYTE)hIl2Cpp + CLASS_3_5CA0943AF2D2051D_METHOD_3_A6D862070568AC73_OFFSET))(a1, a2);
	}
};
