#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NavMap/NavNodeConditionParamType.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/System/Object.h"

class Class_2_510E2A3B742BC0DC;
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace RPG::GameCore { class LevelNavNodeConditionInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_B79AD02E7AAF11FE_METHOD_1_0F15B39F0193FCFC_OFFSET UNITYSDK_OFFSET(0x1427B370)
#define CLASS_1_B79AD02E7AAF11FE_METHOD_1_2ADDC85169A509AB_OFFSET UNITYSDK_OFFSET(0x1427AE60)
#define CLASS_1_B79AD02E7AAF11FE_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1427AFA0)
#define CLASS_1_B79AD02E7AAF11FE_METHOD_1_665AD685E4B4AECF_OFFSET UNITYSDK_OFFSET(0x1427B270)
#define CLASS_1_B79AD02E7AAF11FE_METHOD_1_961EF0B796786E51_OFFSET UNITYSDK_OFFSET(0x1427AC60)
#define CLASS_1_B79AD02E7AAF11FE_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x1427B0F0)
#define CLASS_1_B79AD02E7AAF11FE_METHOD_1_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0x1427B000)
#define CLASS_1_B79AD02E7AAF11FE_METHOD_1_F0F8DE036FE283F6_OFFSET UNITYSDK_OFFSET(0x1427AEB0)
#define CLASS_1_B79AD02E7AAF11FE__CTOR_OFFSET UNITYSDK_OFFSET(0x1427AE50)

inline static constexpr unsigned int Class_1_B79AD02E7AAF11FE_TypeDefinitionIndex = 62060;

class Class_1_B79AD02E7AAF11FE : public ::System::Object
{
public:
	::RPG::Client::NavMap::IMapDataSource* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x20
	::System::Int32 Field_1_3; // 0x24
	::System::UInt32 Field_1_4; // 0x28
	::RPG::GameCore::CompareType Field_1_5; // 0x2C

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

	::Class_2_510E2A3B742BC0DC* Method_1_665AD685E4B4AECF()
	{
		return ((::Class_2_510E2A3B742BC0DC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B79AD02E7AAF11FE_METHOD_1_665AD685E4B4AECF_OFFSET))(this);
	}

	::System::Void Method_1_F0F8DE036FE283F6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B79AD02E7AAF11FE_METHOD_1_F0F8DE036FE283F6_OFFSET))(this);
	}

	::System::Void Method_1_B2C0ADBFEA309440()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B79AD02E7AAF11FE_METHOD_1_B2C0ADBFEA309440_OFFSET))(this);
	}

	::System::Void Method_1_0F15B39F0193FCFC(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B79AD02E7AAF11FE_METHOD_1_0F15B39F0193FCFC_OFFSET))(this, a1, a2);
	}
};
