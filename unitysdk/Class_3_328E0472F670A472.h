#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RtCusomtEventConfig; }

#define CLASS_3_328E0472F670A472_METHOD_3_79D2339C9987D6C4_OFFSET UNITYSDK_OFFSET(0x1C8017E0)
#define CLASS_3_328E0472F670A472_METHOD_3_9EA7A67A8BC52A5F_OFFSET UNITYSDK_OFFSET(0x1C801820)
#define CLASS_3_328E0472F670A472__CTOR_OFFSET UNITYSDK_OFFSET(0x1C801810)

inline static constexpr unsigned int Class_3_328E0472F670A472_TypeDefinitionIndex = 23921;

class Class_3_328E0472F670A472 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::RtCusomtEventConfig*>* PMIFFBHOOOO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_328E0472F670A472__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_79D2339C9987D6C4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_328E0472F670A472*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_328E0472F670A472*&))((::PBYTE)hIl2Cpp + CLASS_3_328E0472F670A472_METHOD_3_79D2339C9987D6C4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9EA7A67A8BC52A5F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_328E0472F670A472* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_328E0472F670A472*))((::PBYTE)hIl2Cpp + CLASS_3_328E0472F670A472_METHOD_3_9EA7A67A8BC52A5F_OFFSET))(a1, a2);
	}
};
