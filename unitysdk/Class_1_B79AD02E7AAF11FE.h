#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NavMap/NavNodeConditionParamType.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/System/Object.h"

class Class_2_0748E0E1B406181B;
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace RPG::GameCore { class LevelNavNodeConditionInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_B79AD02E7AAF11FE_METHOD_1_2ADDC85169A509AB_OFFSET UNITYSDK_OFFSET(0x161FFE30)
#define CLASS_1_B79AD02E7AAF11FE_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x161FFF70)
#define CLASS_1_B79AD02E7AAF11FE_METHOD_1_57E9EA809B95083F_OFFSET UNITYSDK_OFFSET(0x16200240)
#define CLASS_1_B79AD02E7AAF11FE_METHOD_1_8FD7FFF0B5311F45_OFFSET UNITYSDK_OFFSET(0x162002F0)
#define CLASS_1_B79AD02E7AAF11FE_METHOD_1_961EF0B796786E51_OFFSET UNITYSDK_OFFSET(0x161FFC30)
#define CLASS_1_B79AD02E7AAF11FE_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x162000C0)
#define CLASS_1_B79AD02E7AAF11FE_METHOD_1_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0x161FFFD0)
#define CLASS_1_B79AD02E7AAF11FE_METHOD_1_F0F8DE036FE283F6_OFFSET UNITYSDK_OFFSET(0x161FFE80)
#define CLASS_1_B79AD02E7AAF11FE__CTOR_OFFSET UNITYSDK_OFFSET(0x161FFE20)

inline static constexpr unsigned int Class_1_B79AD02E7AAF11FE_TypeDefinitionIndex = 66410;

class Class_1_B79AD02E7AAF11FE : public ::System::Object
{
public:
	::System::String* GIDAEFPOGHI; // 0x10
	::RPG::Client::NavMap::IMapDataSource* PBDGDLLLHMA; // 0x18
	::System::Boolean JLJGEJHCLMP; // 0x20
	::RPG::GameCore::CompareType HALJJEPLFAE; // 0x24
	::System::Int32 AIKAPJELHNK; // 0x28
	::System::UInt32 PEEFHNHDBMF; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B79AD02E7AAF11FE__CTOR_OFFSET))(this);
	}

	static ::Class_1_B79AD02E7AAF11FE* Method_1_961EF0B796786E51(::RPG::Client::NavMap::IMapDataSource* a1, ::RPG::GameCore::LevelNavNodeConditionInfo* a2, ::System::Collections::Generic::Dictionary_2<::RPG::Client::NavMap::NavNodeConditionParamType, ::System::Object*>* a3)
	{
		return ((::Class_1_B79AD02E7AAF11FE*(*)(::RPG::Client::NavMap::IMapDataSource*, ::RPG::GameCore::LevelNavNodeConditionInfo*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::NavMap::NavNodeConditionParamType, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_B79AD02E7AAF11FE_METHOD_1_961EF0B796786E51_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_2ADDC85169A509AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B79AD02E7AAF11FE_METHOD_1_2ADDC85169A509AB_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B79AD02E7AAF11FE_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B79AD02E7AAF11FE_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::Class_2_0748E0E1B406181B* Method_1_57E9EA809B95083F()
	{
		return ((::Class_2_0748E0E1B406181B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B79AD02E7AAF11FE_METHOD_1_57E9EA809B95083F_OFFSET))(this);
	}

	::System::Void Method_1_F0F8DE036FE283F6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B79AD02E7AAF11FE_METHOD_1_F0F8DE036FE283F6_OFFSET))(this);
	}

	::System::Void Method_1_B2C0ADBFEA309440()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B79AD02E7AAF11FE_METHOD_1_B2C0ADBFEA309440_OFFSET))(this);
	}

	::System::Void Method_1_8FD7FFF0B5311F45(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B79AD02E7AAF11FE_METHOD_1_8FD7FFF0B5311F45_OFFSET))(this, a1, a2);
	}
};
