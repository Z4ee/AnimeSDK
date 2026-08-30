#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_3EEE8C6B8E0CF4AB;

#define CLASS_2_67134C03B98DD3AF_METHOD_2_F59691C46D515239_OFFSET UNITYSDK_OFFSET(0x1DA2C870)
#define CLASS_2_67134C03B98DD3AF__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA2C960)

inline static constexpr unsigned int Class_2_67134C03B98DD3AF_TypeDefinitionIndex = 17944;

class Class_2_67134C03B98DD3AF : public ::RPG::GameCore::JsonConfig
{
public:
	::Il2CppArray<::Class_2_3EEE8C6B8E0CF4AB*>* PGAKCBEJAFF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67134C03B98DD3AF__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_F59691C46D515239(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_67134C03B98DD3AF*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_67134C03B98DD3AF*&))((::PBYTE)hIl2Cpp + CLASS_2_67134C03B98DD3AF_METHOD_2_F59691C46D515239_OFFSET))(a1, a2);
	}
};
