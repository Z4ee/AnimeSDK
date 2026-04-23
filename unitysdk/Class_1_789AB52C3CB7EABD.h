#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3E663F02593BDAF0;
class Class_2_3ABA989E5AECB261;
class Class_2_8C608625ABC8C4FA_2;
class Class_2_F3C45F1FC7349B6E;
class Class_2_FBC1E64DC5B2C441;
namespace RPG::GameCore { class AIConfig; }
namespace RPG::GameCore { class CakeRaceAoeConfig; }
namespace RPG::GameCore { class CakeRaceCatAIConfig; }
namespace RPG::GameCore { class CakeRaceCatRow; }
namespace RPG::GameCore { class CakeRacePickupItemConfig; }
namespace RPG::GameCore { class CakeRaceRegionCellConfig; }
namespace RPG::GameCore { class CakeRaceRegionConfig; }
namespace System { class String; }

#define CLASS_1_789AB52C3CB7EABD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17D8CBD0)
#define CLASS_1_789AB52C3CB7EABD_METHOD_1_064BC9871C6026C0_OFFSET UNITYSDK_OFFSET(0x17D91450)
#define CLASS_1_789AB52C3CB7EABD_METHOD_1_10EF39D435E748E3_OFFSET UNITYSDK_OFFSET(0x17D8CC20)
#define CLASS_1_789AB52C3CB7EABD_METHOD_1_438FFC8DA5059CF3_OFFSET UNITYSDK_OFFSET(0x17D92110)
#define CLASS_1_789AB52C3CB7EABD_METHOD_1_4CD2BDB36AC8F127_OFFSET UNITYSDK_OFFSET(0x17D8E3A0)
#define CLASS_1_789AB52C3CB7EABD_METHOD_1_65350E5368E0F060_OFFSET UNITYSDK_OFFSET(0x17D91DC0)
#define CLASS_1_789AB52C3CB7EABD_METHOD_1_66F6113400FCF1F4_OFFSET UNITYSDK_OFFSET(0x17D8CCA0)
#define CLASS_1_789AB52C3CB7EABD_METHOD_1_749D4B1DE36F3C32_OFFSET UNITYSDK_OFFSET(0x17D90F00)
#define CLASS_1_789AB52C3CB7EABD_METHOD_1_7CBBD4843E0175E9_OFFSET UNITYSDK_OFFSET(0x17D8FF50)
#define CLASS_1_789AB52C3CB7EABD_METHOD_1_91E12F3559DF024B_1_OFFSET UNITYSDK_OFFSET(0x17D91BE0)
#define CLASS_1_789AB52C3CB7EABD_METHOD_1_91E12F3559DF024B_OFFSET UNITYSDK_OFFSET(0x17D8FCC0)
#define CLASS_1_789AB52C3CB7EABD_METHOD_1_CD210EEA0CFC3079_OFFSET UNITYSDK_OFFSET(0x17D91350)
#define CLASS_1_789AB52C3CB7EABD_METHOD_1_D04C0E623C5FB3BE_OFFSET UNITYSDK_OFFSET(0x17D915D0)
#define CLASS_1_789AB52C3CB7EABD_METHOD_1_DD117A6748B623C3_1_OFFSET UNITYSDK_OFFSET(0x17D8EF00)
#define CLASS_1_789AB52C3CB7EABD_METHOD_1_DD117A6748B623C3_OFFSET UNITYSDK_OFFSET(0x17D8E540)
#define CLASS_1_789AB52C3CB7EABD_METHOD_1_DF82F5E0575C4F9E_OFFSET UNITYSDK_OFFSET(0x17D90CC0)
#define CLASS_1_789AB52C3CB7EABD__CTOR_OFFSET UNITYSDK_OFFSET(0x17D8CBC0)

inline static constexpr unsigned int Class_1_789AB52C3CB7EABD_TypeDefinitionIndex = 34680;

class Class_1_789AB52C3CB7EABD : public ::System::Object
{
public:
	::Class_2_8C608625ABC8C4FA_2* Field_1_0; // 0x10
	::Class_2_FBC1E64DC5B2C441* Field_1_2; // 0x18
	::Class_2_F3C45F1FC7349B6E* Field_1_1; // 0x20

	::System::Void _ctor(::Class_2_FBC1E64DC5B2C441* a1, ::Class_2_F3C45F1FC7349B6E* a2, ::Class_2_8C608625ABC8C4FA_2* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FBC1E64DC5B2C441*, ::Class_2_F3C45F1FC7349B6E*, ::Class_2_8C608625ABC8C4FA_2*))((::PBYTE)hIl2Cpp + CLASS_1_789AB52C3CB7EABD__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_789AB52C3CB7EABD_DISPOSE_OFFSET))(this);
	}

	::Class_2_3ABA989E5AECB261* Method_1_10EF39D435E748E3()
	{
		return ((::Class_2_3ABA989E5AECB261*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_789AB52C3CB7EABD_METHOD_1_10EF39D435E748E3_OFFSET))(this);
	}

	::Class_2_3ABA989E5AECB261* Method_1_66F6113400FCF1F4(::RPG::GameCore::CakeRaceCatAIConfig* a1, ::RPG::GameCore::CakeRaceCatRow* a2, ::RPG::GameCore::AIConfig* a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::Int32 a6)
	{
		return ((::Class_2_3ABA989E5AECB261*(*)(::PVOID, ::RPG::GameCore::CakeRaceCatAIConfig*, ::RPG::GameCore::CakeRaceCatRow*, ::RPG::GameCore::AIConfig*, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_789AB52C3CB7EABD_METHOD_1_66F6113400FCF1F4_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_4CD2BDB36AC8F127(::RPG::GameCore::CakeRaceRegionConfig* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceRegionConfig*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_789AB52C3CB7EABD_METHOD_1_4CD2BDB36AC8F127_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_3ABA989E5AECB261* Method_1_DD117A6748B623C3(::RPG::GameCore::CakeRaceRegionCellConfig* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::Class_2_3ABA989E5AECB261*(*)(::PVOID, ::RPG::GameCore::CakeRaceRegionCellConfig*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_789AB52C3CB7EABD_METHOD_1_DD117A6748B623C3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_91E12F3559DF024B(::Class_2_3ABA989E5AECB261* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_3ABA989E5AECB261*))((::PBYTE)hIl2Cpp + CLASS_1_789AB52C3CB7EABD_METHOD_1_91E12F3559DF024B_OFFSET))(this, a1);
	}

	::Class_2_3ABA989E5AECB261* Method_1_7CBBD4843E0175E9(::RPG::GameCore::CakeRaceRegionCellConfig* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4)
	{
		return ((::Class_2_3ABA989E5AECB261*(*)(::PVOID, ::RPG::GameCore::CakeRaceRegionCellConfig*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_789AB52C3CB7EABD_METHOD_1_7CBBD4843E0175E9_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_2_3ABA989E5AECB261* Method_1_DD117A6748B623C3_1(::RPG::GameCore::CakeRaceRegionCellConfig* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::Class_2_3ABA989E5AECB261*(*)(::PVOID, ::RPG::GameCore::CakeRaceRegionCellConfig*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_789AB52C3CB7EABD_METHOD_1_DD117A6748B623C3_1_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_3ABA989E5AECB261* Method_1_DF82F5E0575C4F9E(::System::UInt32 a1, ::System::UInt32 a2, ::System::String*& a3, ::RPG::GameCore::AIConfig* a4)
	{
		return ((::Class_2_3ABA989E5AECB261*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::String*&, ::RPG::GameCore::AIConfig*))((::PBYTE)hIl2Cpp + CLASS_1_789AB52C3CB7EABD_METHOD_1_DF82F5E0575C4F9E_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_2_3ABA989E5AECB261* Method_1_749D4B1DE36F3C32(::RPG::GameCore::CakeRacePickupItemConfig* a1, ::System::UInt32 a2, ::System::Int32 a3, ::System::UInt32 a4)
	{
		return ((::Class_2_3ABA989E5AECB261*(*)(::PVOID, ::RPG::GameCore::CakeRacePickupItemConfig*, ::System::UInt32, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_789AB52C3CB7EABD_METHOD_1_749D4B1DE36F3C32_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_CD210EEA0CFC3079()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_789AB52C3CB7EABD_METHOD_1_CD210EEA0CFC3079_OFFSET))(this);
	}

	::System::Void Method_1_064BC9871C6026C0(::RPG::GameCore::CakeRaceRegionConfig* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceRegionConfig*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_789AB52C3CB7EABD_METHOD_1_064BC9871C6026C0_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_3ABA989E5AECB261* Method_1_D04C0E623C5FB3BE(::RPG::GameCore::CakeRaceRegionCellConfig* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::Class_2_3ABA989E5AECB261*(*)(::PVOID, ::RPG::GameCore::CakeRaceRegionCellConfig*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_789AB52C3CB7EABD_METHOD_1_D04C0E623C5FB3BE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_91E12F3559DF024B_1(::Class_2_3ABA989E5AECB261* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_3ABA989E5AECB261*))((::PBYTE)hIl2Cpp + CLASS_1_789AB52C3CB7EABD_METHOD_1_91E12F3559DF024B_1_OFFSET))(this, a1);
	}

	::Class_2_3ABA989E5AECB261* Method_1_65350E5368E0F060()
	{
		return ((::Class_2_3ABA989E5AECB261*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_789AB52C3CB7EABD_METHOD_1_65350E5368E0F060_OFFSET))(this);
	}

	::System::Boolean Method_1_438FFC8DA5059CF3(::Class_2_3ABA989E5AECB261* a1, ::RPG::GameCore::CakeRaceAoeConfig* a2, ::Class_1_3E663F02593BDAF0* a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_3ABA989E5AECB261*, ::RPG::GameCore::CakeRaceAoeConfig*, ::Class_1_3E663F02593BDAF0*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_789AB52C3CB7EABD_METHOD_1_438FFC8DA5059CF3_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}
};
