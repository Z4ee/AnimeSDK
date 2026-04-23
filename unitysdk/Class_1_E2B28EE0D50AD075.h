#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/MsgRetcode.h"
#include "unitysdk/System/Object.h"

class Class_1_355A2207C3B7A99D_29;
class Class_1_5B567C8A01BAEDFE_120;
class Class_1_9C23C0FD87AA6107;
class Class_2_8C608625ABC8C4FA_2;
class Class_2_F3C45F1FC7349B6E;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_E2B28EE0D50AD075_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17C3FD70)
#define CLASS_1_E2B28EE0D50AD075_METHOD_1_6D1B80050F63D353_OFFSET UNITYSDK_OFFSET(0x17C1E5F0)
#define CLASS_1_E2B28EE0D50AD075_METHOD_1_D58ABA264253B81E_OFFSET UNITYSDK_OFFSET(0x17C3FDC0)
#define CLASS_1_E2B28EE0D50AD075__CTOR_OFFSET UNITYSDK_OFFSET(0x17C3FCE0)

inline static constexpr unsigned int Class_1_E2B28EE0D50AD075_TypeDefinitionIndex = 34678;

class Class_1_E2B28EE0D50AD075 : public ::System::Object
{
public:
	::Class_2_8C608625ABC8C4FA_2* Field_1_1; // 0x10
	::Class_2_F3C45F1FC7349B6E* Field_1_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt64>* Field_1_0; // 0x20

	::System::Void _ctor(::Class_2_F3C45F1FC7349B6E* a1, ::Class_2_8C608625ABC8C4FA_2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F3C45F1FC7349B6E*, ::Class_2_8C608625ABC8C4FA_2*))((::PBYTE)hIl2Cpp + CLASS_1_E2B28EE0D50AD075__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2B28EE0D50AD075_DISPOSE_OFFSET))(this);
	}

	::RPG::Client::LittleGameShare::MsgRetcode Method_1_6D1B80050F63D353(::System::UInt32 a1, ::Class_1_355A2207C3B7A99D_29*& a2, ::Class_1_5B567C8A01BAEDFE_120*& a3)
	{
		return ((::RPG::Client::LittleGameShare::MsgRetcode(*)(::PVOID, ::System::UInt32, ::Class_1_355A2207C3B7A99D_29*&, ::Class_1_5B567C8A01BAEDFE_120*&))((::PBYTE)hIl2Cpp + CLASS_1_E2B28EE0D50AD075_METHOD_1_6D1B80050F63D353_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_D58ABA264253B81E(::Class_1_9C23C0FD87AA6107* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9C23C0FD87AA6107*))((::PBYTE)hIl2Cpp + CLASS_1_E2B28EE0D50AD075_METHOD_1_D58ABA264253B81E_OFFSET))(this, a1);
	}
};
