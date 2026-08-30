#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_0F10241E4CAD4F59_METHOD_3_00A92F7113D927DF_OFFSET UNITYSDK_OFFSET(0x1D300420)
#define CLASS_3_0F10241E4CAD4F59_METHOD_3_17D0AAA61173D944_OFFSET UNITYSDK_OFFSET(0x1D300460)
#define CLASS_3_0F10241E4CAD4F59__CTOR_OFFSET UNITYSDK_OFFSET(0x1D300450)

inline static constexpr unsigned int Class_3_0F10241E4CAD4F59_TypeDefinitionIndex = 10213;

class Class_3_0F10241E4CAD4F59 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* GACJDECHDMM; // 0x18
	::System::UInt32 IHALCLABNOJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0F10241E4CAD4F59__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_00A92F7113D927DF(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_0F10241E4CAD4F59*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_0F10241E4CAD4F59*&))((::PBYTE)hIl2Cpp + CLASS_3_0F10241E4CAD4F59_METHOD_3_00A92F7113D927DF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_17D0AAA61173D944(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_0F10241E4CAD4F59* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_0F10241E4CAD4F59*))((::PBYTE)hIl2Cpp + CLASS_3_0F10241E4CAD4F59_METHOD_3_17D0AAA61173D944_OFFSET))(a1, a2);
	}
};
