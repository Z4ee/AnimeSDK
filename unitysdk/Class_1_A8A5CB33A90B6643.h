#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_6B7B7D1891DD2535.h"
#include "unitysdk/MoleMole/GalGame/GalArgueGoalMode.h"
#include "unitysdk/MoleMole/GalGame/GalArgueStageLocation.h"
#include "unitysdk/MoleMole/GalGame/GalNPCLocation.h"
#include "unitysdk/System/Object.h"

class Class_1_C20A73D898541F34;

#define CLASS_1_A8A5CB33A90B6643_METHOD_1_1D3F808EFAFC5E8C_OFFSET UNITYSDK_OFFSET(0x122D0DE0)
#define CLASS_1_A8A5CB33A90B6643_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x122D1190)
#define CLASS_1_A8A5CB33A90B6643_METHOD_1_1FCC85A147E9D2FD_OFFSET UNITYSDK_OFFSET(0x122D10B0)
#define CLASS_1_A8A5CB33A90B6643_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x122D0E40)
#define CLASS_1_A8A5CB33A90B6643_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x122D1260)
#define CLASS_1_A8A5CB33A90B6643_METHOD_1_5ABD54AE807E5644_OFFSET UNITYSDK_OFFSET(0x122D1110)
#define CLASS_1_A8A5CB33A90B6643_METHOD_1_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0x122D12B0)
#define CLASS_1_A8A5CB33A90B6643_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x122D11F0)
#define CLASS_1_A8A5CB33A90B6643_METHOD_1_AA2C809BCBAD6593_OFFSET UNITYSDK_OFFSET(0x122D0F20)
#define CLASS_1_A8A5CB33A90B6643_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x122D0DD0)
#define CLASS_1_A8A5CB33A90B6643__CTOR_OFFSET UNITYSDK_OFFSET(0x122D0D80)

inline static constexpr unsigned int Class_1_A8A5CB33A90B6643_TypeDefinitionIndex = 55237;

class Class_1_A8A5CB33A90B6643 : public ::System::Object
{
public:
	::Class_1_C20A73D898541F34* Field_1_10; // 0x10
	::Class_1_C20A73D898541F34* Field_1_11; // 0x18
	::MoleMole::GalGame::GalArgueStageLocation Field_1_7; // 0x20
	::System::Boolean Field_1_1; // 0x24
	::System::Boolean Field_1_4; // 0x25
	::System::Boolean Field_1_5; // 0x26
	::Enum_3_6B7B7D1891DD2535 Field_1_0; // 0x28
	::MoleMole::GalGame::GalArgueGoalMode Field_1_6; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8A5CB33A90B6643__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8A5CB33A90B6643_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::Class_1_C20A73D898541F34* Method_1_1D3F808EFAFC5E8C(::MoleMole::GalGame::GalArgueStageLocation a1)
	{
		return ((::Class_1_C20A73D898541F34*(*)(::PVOID, ::MoleMole::GalGame::GalArgueStageLocation))((::PBYTE)hIl2Cpp + CLASS_1_A8A5CB33A90B6643_METHOD_1_1D3F808EFAFC5E8C_OFFSET))(this, a1);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8A5CB33A90B6643_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_1_AA2C809BCBAD6593(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::MoleMole::GalGame::GalArgueStageLocation a7, ::MoleMole::GalGame::GalArgueGoalMode a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::MoleMole::GalGame::GalArgueStageLocation, ::MoleMole::GalGame::GalArgueGoalMode))((::PBYTE)hIl2Cpp + CLASS_1_A8A5CB33A90B6643_METHOD_1_AA2C809BCBAD6593_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::Class_1_C20A73D898541F34* Method_1_1FCC85A147E9D2FD()
	{
		return ((::Class_1_C20A73D898541F34*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8A5CB33A90B6643_METHOD_1_1FCC85A147E9D2FD_OFFSET))(this);
	}

	::System::Void Method_1_5ABD54AE807E5644(::MoleMole::GalGame::GalNPCLocation a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalNPCLocation, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A8A5CB33A90B6643_METHOD_1_5ABD54AE807E5644_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8A5CB33A90B6643_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8A5CB33A90B6643_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A8A5CB33A90B6643_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8A5CB33A90B6643_METHOD_1_83DA3EC57FF907F4_OFFSET))(this);
	}
};
