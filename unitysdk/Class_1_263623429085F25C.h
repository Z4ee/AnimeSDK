#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CakeRaceBattleItemUIHandler_MouseCornerPositionType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_3ED45B5689DB5816;
class Class_1_43BD383C98B4C0C5_195;
class Class_1_8A561ECB6A41879A;
class Class_3_FA020C2C23A72B3F;
namespace RPG::Client { class CakeRaceBattleItemUIHandler; }
namespace RPG::Client { class UIPrefabLoader; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_263623429085F25C_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB7543A0)
#define CLASS_1_263623429085F25C_METHOD_1_232E79648899E21B_OFFSET UNITYSDK_OFFSET(0xB755560)
#define CLASS_1_263623429085F25C_METHOD_1_23C76801D6EC8358_OFFSET UNITYSDK_OFFSET(0xB753C40)
#define CLASS_1_263623429085F25C_METHOD_1_6B99DCF405B3C028_OFFSET UNITYSDK_OFFSET(0xB754C30)
#define CLASS_1_263623429085F25C_METHOD_1_70484F0C4668EBF2_1_OFFSET UNITYSDK_OFFSET(0xB754710)
#define CLASS_1_263623429085F25C_METHOD_1_70484F0C4668EBF2_OFFSET UNITYSDK_OFFSET(0xB7555B0)
#define CLASS_1_263623429085F25C_METHOD_1_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0xB753B80)
#define CLASS_1_263623429085F25C_METHOD_1_9C520BEA622B97F8_OFFSET UNITYSDK_OFFSET(0xB753BE0)
#define CLASS_1_263623429085F25C_METHOD_1_BBBDE5B41AB4D1E9_1_OFFSET UNITYSDK_OFFSET(0xB755D20)
#define CLASS_1_263623429085F25C_METHOD_1_BBBDE5B41AB4D1E9_OFFSET UNITYSDK_OFFSET(0xB755C10)
#define CLASS_1_263623429085F25C_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB755520)
#define CLASS_1_263623429085F25C_METHOD_1_CF48D47ABED5EA16_OFFSET UNITYSDK_OFFSET(0xB753E00)
#define CLASS_1_263623429085F25C_METHOD_1_D382162F56A48252_OFFSET UNITYSDK_OFFSET(0xB754F50)
#define CLASS_1_263623429085F25C_METHOD_1_D4892CBD86935B0E_OFFSET UNITYSDK_OFFSET(0xB754E40)
#define CLASS_1_263623429085F25C_METHOD_1_E556AC7727930E90_OFFSET UNITYSDK_OFFSET(0xB755AE0)
#define CLASS_1_263623429085F25C_METHOD_1_FF6E92C2C1927369_OFFSET UNITYSDK_OFFSET(0xB755E30)
#define CLASS_1_263623429085F25C__CTOR_OFFSET UNITYSDK_OFFSET(0xB753D60)

inline static constexpr unsigned int Class_1_263623429085F25C_TypeDefinitionIndex = 72602;

class Class_1_263623429085F25C : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_3ED45B5689DB5816*>* Field_1_0; // 0x10
	::RPG::Client::UIPrefabLoader* Field_1_1; // 0x18
	::Class_3_FA020C2C23A72B3F* Field_1_2; // 0x20

	::System::Void _ctor(::Class_3_FA020C2C23A72B3F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_FA020C2C23A72B3F*))((::PBYTE)hIl2Cpp + CLASS_1_263623429085F25C__CTOR_OFFSET))(this, a1);
	}

	::Class_1_8A561ECB6A41879A* Method_1_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_8A561ECB6A41879A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_263623429085F25C_METHOD_1_9B39F7D7C1FF70D6_OFFSET))(this);
	}

	::RPG::Client::CakeRaceBattleItemUIHandler* Method_1_9C520BEA622B97F8()
	{
		return ((::RPG::Client::CakeRaceBattleItemUIHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_263623429085F25C_METHOD_1_9C520BEA622B97F8_OFFSET))(this);
	}

	static ::Class_1_263623429085F25C* Method_1_23C76801D6EC8358(::Class_3_FA020C2C23A72B3F* a1)
	{
		return ((::Class_1_263623429085F25C*(*)(::Class_3_FA020C2C23A72B3F*))((::PBYTE)hIl2Cpp + CLASS_1_263623429085F25C_METHOD_1_23C76801D6EC8358_OFFSET))(a1);
	}

	::System::Void Method_1_CF48D47ABED5EA16()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_263623429085F25C_METHOD_1_CF48D47ABED5EA16_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_263623429085F25C_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_6B99DCF405B3C028(::System::UInt32 a1, ::System::UInt32 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_263623429085F25C_METHOD_1_6B99DCF405B3C028_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_D4892CBD86935B0E(::System::UInt32 a1, ::System::UInt32 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_263623429085F25C_METHOD_1_D4892CBD86935B0E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_D382162F56A48252(::Class_1_43BD383C98B4C0C5_195* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_195*))((::PBYTE)hIl2Cpp + CLASS_1_263623429085F25C_METHOD_1_D382162F56A48252_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_263623429085F25C_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_232E79648899E21B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_263623429085F25C_METHOD_1_232E79648899E21B_OFFSET))(this);
	}

	::System::Void Method_1_70484F0C4668EBF2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_263623429085F25C_METHOD_1_70484F0C4668EBF2_OFFSET))(this);
	}

	::System::Void Method_1_70484F0C4668EBF2_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_263623429085F25C_METHOD_1_70484F0C4668EBF2_1_OFFSET))(this);
	}

	::System::Void Method_1_E556AC7727930E90(::System::UInt32 a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_263623429085F25C_METHOD_1_E556AC7727930E90_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_BBBDE5B41AB4D1E9(::System::UInt32 a1, ::UnityEngine::Vector2 a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_263623429085F25C_METHOD_1_BBBDE5B41AB4D1E9_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_BBBDE5B41AB4D1E9_1(::System::UInt32 a1, ::UnityEngine::Vector2 a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_263623429085F25C_METHOD_1_BBBDE5B41AB4D1E9_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_FF6E92C2C1927369(::RPG::Client::CakeRaceBattleItemUIHandler_MouseCornerPositionType a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceBattleItemUIHandler_MouseCornerPositionType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_263623429085F25C_METHOD_1_FF6E92C2C1927369_OFFSET))(this, a1, a2);
	}
};
