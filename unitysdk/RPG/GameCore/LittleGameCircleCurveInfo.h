#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameLevelCurveInfo.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelBaseCurvePointInfo; }
namespace RPG::GameCore { class LevelCirclePointInfo; }
namespace RPG::GameCore { class LevelCurvePointInfo; }
namespace RPG::GameCore { class LittleGameBezierCurveInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_LITTLEGAMECIRCLECURVEINFO_METHOD_3_23EAA5B6C78B0858_OFFSET UNITYSDK_OFFSET(0x1BCBF460)
#define RPG_GAMECORE_LITTLEGAMECIRCLECURVEINFO_METHOD_3_5BA71826636BA9C3_OFFSET UNITYSDK_OFFSET(0x1BCBEEB0)
#define RPG_GAMECORE_LITTLEGAMECIRCLECURVEINFO_METHOD_3_823B0920A1E5575C_OFFSET UNITYSDK_OFFSET(0x1BCBEE60)
#define RPG_GAMECORE_LITTLEGAMECIRCLECURVEINFO_METHOD_3_8B071BD4E0283A69_OFFSET UNITYSDK_OFFSET(0x1BCBF030)
#define RPG_GAMECORE_LITTLEGAMECIRCLECURVEINFO_METHOD_3_8E2CE51AB9C33B3D_OFFSET UNITYSDK_OFFSET(0x1BCBF100)
#define RPG_GAMECORE_LITTLEGAMECIRCLECURVEINFO_METHOD_3_978C9496D0413FBC_OFFSET UNITYSDK_OFFSET(0x1BCBF060)
#define RPG_GAMECORE_LITTLEGAMECIRCLECURVEINFO_METHOD_3_D978819B0A4871A0_OFFSET UNITYSDK_OFFSET(0x1BCBF020)
#define RPG_GAMECORE_LITTLEGAMECIRCLECURVEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCBEEA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameCircleCurveInfo_TypeDefinitionIndex = 18118;

	class LittleGameCircleCurveInfo : public ::RPG::GameCore::LittleGameLevelCurveInfo
	{
	public:
		// static const ::System::Int32 CONTROL_TYPE_BEZIER_INDEPENDANT = 0x2; // 0x0
		::System::Single Radius; // 0x18
		::Il2CppArray<::RPG::GameCore::LevelCirclePointInfo*>* PointList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECIRCLECURVEINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_823B0920A1E5575C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameCircleCurveInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameCircleCurveInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECIRCLECURVEINFO_METHOD_3_823B0920A1E5575C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5BA71826636BA9C3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameCircleCurveInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameCircleCurveInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECIRCLECURVEINFO_METHOD_3_5BA71826636BA9C3_OFFSET))(a1, a2);
		}

		::System::UInt32 Method_3_D978819B0A4871A0()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECIRCLECURVEINFO_METHOD_3_D978819B0A4871A0_OFFSET))(this);
		}

		::RPG::GameCore::LevelBaseCurvePointInfo* Method_3_8B071BD4E0283A69(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::LevelBaseCurvePointInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECIRCLECURVEINFO_METHOD_3_8B071BD4E0283A69_OFFSET))(this, a1);
		}

		::RPG::GameCore::LittleGameBezierCurveInfo* Method_3_978C9496D0413FBC()
		{
			return ((::RPG::GameCore::LittleGameBezierCurveInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECIRCLECURVEINFO_METHOD_3_978C9496D0413FBC_OFFSET))(this);
		}

		::System::Void Method_3_8E2CE51AB9C33B3D(::System::Collections::Generic::List_1<::RPG::GameCore::LevelCurvePointInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelCurvePointInfo*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECIRCLECURVEINFO_METHOD_3_8E2CE51AB9C33B3D_OFFSET))(this, a1);
		}

		::System::Void Method_3_23EAA5B6C78B0858(::System::Single& a1, ::System::Single a2, ::System::Single a3, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelCurvePointInfo*>* a4, ::RPG::GameCore::LevelCurvePointInfo*& a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single, ::System::Single, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelCurvePointInfo*>*, ::RPG::GameCore::LevelCurvePointInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECIRCLECURVEINFO_METHOD_3_23EAA5B6C78B0858_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}
