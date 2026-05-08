#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_B8B3C2CDA60FB918.h"

class Class_3_DC4C9967889A0B11;
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }

#define CLASS_3_F20A40F814CF92BB_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x13259890)
#define CLASS_3_F20A40F814CF92BB_METHOD_3_5402F924A8CCFA8C_OFFSET UNITYSDK_OFFSET(0x1325A840)
#define CLASS_3_F20A40F814CF92BB_METHOD_3_66BE0715618667B3_OFFSET UNITYSDK_OFFSET(0x1325B730)
#define CLASS_3_F20A40F814CF92BB_METHOD_3_A12A0823DD6E30A7_OFFSET UNITYSDK_OFFSET(0x13259C50)
#define CLASS_3_F20A40F814CF92BB_METHOD_3_A869D08F7D1BA491_OFFSET UNITYSDK_OFFSET(0x1325A260)
#define CLASS_3_F20A40F814CF92BB_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x1325A620)
#define CLASS_3_F20A40F814CF92BB_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1325B6A0)
#define CLASS_3_F20A40F814CF92BB_METHOD_3_E707BC53E72902E1_OFFSET UNITYSDK_OFFSET(0x1325B0F0)
#define CLASS_3_F20A40F814CF92BB_METHOD_3_EE0CFF7F6F24BA6C_OFFSET UNITYSDK_OFFSET(0x1325AE60)
#define CLASS_3_F20A40F814CF92BB_METHOD_3_FCC6D7AC307B496F_OFFSET UNITYSDK_OFFSET(0x1325A6B0)
#define CLASS_3_F20A40F814CF92BB_METHOD_3_FF3FA3030AB21E73_OFFSET UNITYSDK_OFFSET(0x1325A020)
#define CLASS_3_F20A40F814CF92BB_UPDATE_OFFSET UNITYSDK_OFFSET(0x13259AA0)
#define CLASS_3_F20A40F814CF92BB__CTOR_OFFSET UNITYSDK_OFFSET(0x13259C00)

inline static constexpr unsigned int Class_3_F20A40F814CF92BB_TypeDefinitionIndex = 60461;

class Class_3_F20A40F814CF92BB : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F20A40F814CF92BB__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_F20A40F814CF92BB_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F20A40F814CF92BB_UPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_A12A0823DD6E30A7(::MoleMole::EntityHandle a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_F20A40F814CF92BB_METHOD_3_A12A0823DD6E30A7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_FF3FA3030AB21E73(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_3_F20A40F814CF92BB_METHOD_3_FF3FA3030AB21E73_OFFSET))(a1);
	}

	static ::Struct_2_B8B3C2CDA60FB918 Method_3_A869D08F7D1BA491(::MoleMole::EntityHandle a1, ::System::String* a2)
	{
		return ((::Struct_2_B8B3C2CDA60FB918(*)(::MoleMole::EntityHandle, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_F20A40F814CF92BB_METHOD_3_A869D08F7D1BA491_OFFSET))(a1, a2);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_F20A40F814CF92BB_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	::System::Void Method_3_FCC6D7AC307B496F(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_F20A40F814CF92BB_METHOD_3_FCC6D7AC307B496F_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_5402F924A8CCFA8C(::MoleMole::EntityHandle a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_F20A40F814CF92BB_METHOD_3_5402F924A8CCFA8C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_EE0CFF7F6F24BA6C(::Class_3_DC4C9967889A0B11* a1)
	{
		return ((::System::Void(*)(::Class_3_DC4C9967889A0B11*))((::PBYTE)hIl2Cpp + CLASS_3_F20A40F814CF92BB_METHOD_3_EE0CFF7F6F24BA6C_OFFSET))(a1);
	}

	::System::Void Method_3_E707BC53E72902E1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_F20A40F814CF92BB_METHOD_3_E707BC53E72902E1_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F20A40F814CF92BB_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_66BE0715618667B3(::MoleMole::EntityHandle a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_F20A40F814CF92BB_METHOD_3_66BE0715618667B3_OFFSET))(a1, a2);
	}
};
